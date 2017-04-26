// position fixed in order to escape the 1440px wrapper
contact
  position: fixed
  top: 0
  left: 0
  width: 100%
  height: 100%
  background:
  $background-image: url('../img/REEE.');
  position: center
  size: cover
  repeat: no-repeat

  &--lockup
    position: relative
    display: flex
    width: 900px
    max-width: 75%
    height: 100%
    align-items: center
    justify-content: flex-end
    margin: 0 auto

    @media (max-width: 1180px)
      max-width: 90%

    @media (max-width: 767px)
      justify-content: center

    modal
      padding: 45px 45px
      text-align: center
      background-color: $black
      box-shadow: 0 0 30px 0 rgba(0,0,0,.75)

      &--information

        p,
        a
          display: block
          margin: 14px 0
          text-decoration: none
          color: $white
          font-weight: 700

        p
          margin-top: 0

      &--options
        margin: 0
        padding: 0
        list-style: none

        & > li
          width: 130px
          margin: 0 auto 25px auto

        li:nth-child(1)
          background-color: #1769ff

        li:nth-child(2)
          background-color: #ea4c89

        li:nth-child(3)
          margin-bottom: 0
          background-color: $highlight
          text-transform: uppercase

        a
          display: block
          width: 100%
          padding: 8px 0
          text-decoration: none
          color: $white
          font-weight: 700
