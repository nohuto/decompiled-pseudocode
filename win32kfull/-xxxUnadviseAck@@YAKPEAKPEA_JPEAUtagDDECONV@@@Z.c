unsigned int __fastcall xxxUnadviseAck(unsigned int *a1, void **a2, struct tagDDECONV *a3)
{
  int v3; // ebx
  struct tagDDECONV *v4; // rdi
  bool v5; // zf
  void **v6; // rbp
  int v9; // esi
  struct tagINTDDEINFO *v10; // [rsp+50h] [rbp+8h] BYREF

  v3 = 0;
  v4 = a3;
  v5 = *a1 == 996;
  v6 = a2;
  v10 = 0LL;
  if ( !v5 )
    return xxxUnexpectedServerPost(a1, (__int64 *)a2, a3);
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)a2,
      (_DWORD)a3,
      38,
      4,
      14,
      38,
      (__int64)&WPP_de7bff8f30dd3ef9771327ef19992fd5_Traceguids);
  }
  v9 = xxxCopyAckIn(a1, v6, v4, &v10);
  if ( (*(_BYTE *)(_HMPheFromObject(v4) + 25) & 1) != 0 )
    return v3;
  v3 = v9;
  if ( v9 != 2 )
    return v3;
  PopState(v4);
  return 2;
}
