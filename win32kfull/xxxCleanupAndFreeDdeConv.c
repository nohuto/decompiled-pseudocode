__int64 __fastcall xxxCleanupAndFreeDdeConv(struct tagDDECONV *a1)
{
  char v2; // dl
  struct tagFREELIST *v3; // rcx

  v2 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_q(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v2,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      56LL,
      4u,
      0xEu,
      0x38u,
      (__int64)&WPP_de7bff8f30dd3ef9771327ef19992fd5_Traceguids,
      a1);
  v3 = (struct tagFREELIST *)*((_QWORD *)a1 + 9);
  if ( v3 )
  {
    FreeListFree(v3);
    *((_QWORD *)a1 + 9) = 0LL;
  }
  return xxxFreeDdeConv(a1);
}
