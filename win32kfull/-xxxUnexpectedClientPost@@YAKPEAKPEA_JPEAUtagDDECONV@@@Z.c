__int64 __fastcall xxxUnexpectedClientPost(unsigned int *a1, void **a2, struct tagDDECONV *a3)
{
  int v4; // edx

  v4 = *a1;
  switch ( *a1 )
  {
    case 0x3E1u:
      return SpontaneousTerminate(a1, a3);
    case 0x3E2u:
      return xxxAdvise(a1, a2, a3);
    case 0x3E3u:
      return Unadvise((struct tagDDECONV **)a3);
    case 0x3E4u:
      LOBYTE(v4) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000) != 0
                && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v4,
          (_DWORD)a3,
          24,
          4,
          14,
          24,
          (__int64)&WPP_de7bff8f30dd3ef9771327ef19992fd5_Traceguids);
      xxxFreeDDEHandle(*a2, 1u, (__int64)a3);
      return 3LL;
    case 0x3E5u:
      return AbnormalDDEPost(a3, v4);
    case 0x3E6u:
      return Request((struct tagDDECONV **)a3);
    case 0x3E7u:
      return xxxPoke(a1, a2, a3);
    case 0x3E8u:
      return xxxExecute(a1, a2, a3);
    default:
      return 0LL;
  }
}
