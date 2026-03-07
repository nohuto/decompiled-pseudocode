unsigned int __fastcall xxxAdviseAck(unsigned int *a1, __int64 *a2, struct tagDDECONV *a3)
{
  struct tagDDECONV *v3; // rdi
  __int64 *v4; // rbp
  char v7; // bl
  unsigned int v8; // esi
  int v9; // r8d
  int v10; // r9d
  __int64 v11; // rsi
  void *v12; // rdx
  PETHREAD **v13; // rcx
  void *v14; // rdx
  void *v15; // rdx
  struct tagINTDDEINFO *v16; // [rsp+60h] [rbp+8h] BYREF

  v16 = 0LL;
  v3 = a3;
  v4 = a2;
  if ( *a1 != 996 )
    return xxxUnexpectedServerPost(a1, a2, a3);
  v7 = 1;
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)a2,
      (_DWORD)a3,
      (unsigned int)&WPP_de7bff8f30dd3ef9771327ef19992fd5_Traceguids,
      4,
      14,
      26,
      (__int64)&WPP_de7bff8f30dd3ef9771327ef19992fd5_Traceguids);
  }
  v8 = xxxCopyAckIn(a1, v4, v3, &v16);
  if ( (*(_BYTE *)(_HMPheFromObject(v3) + 25) & 1) != 0 )
    return 0;
  if ( v8 != 2 )
    return v8;
  if ( (*((_DWORD *)v3 + 20) & 6) != 0 )
    return 1;
  v11 = *((_QWORD *)v3 + 7);
  if ( (*(_DWORD *)v16 & 0x8000LL) != 0 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
    {
      v7 = 0;
    }
    if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v12 = &WPP_de7bff8f30dd3ef9771327ef19992fd5_Traceguids;
      LOBYTE(v12) = v7;
      LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)v12,
        v9,
        v10,
        4,
        14,
        27,
        (__int64)&WPP_de7bff8f30dd3ef9771327ef19992fd5_Traceguids);
    }
    v13 = (PETHREAD **)*((_QWORD *)v3 + 4);
    v14 = *(void **)(v11 + 40);
  }
  else
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
    {
      v7 = 0;
    }
    if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v15 = &WPP_de7bff8f30dd3ef9771327ef19992fd5_Traceguids;
      LOBYTE(v15) = v7;
      LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)v15,
        v9,
        v10,
        4,
        14,
        28,
        (__int64)&WPP_de7bff8f30dd3ef9771327ef19992fd5_Traceguids);
    }
    v14 = *(void **)(v11 + 48);
    v13 = (PETHREAD **)v3;
  }
  FreeListAdd(v13, v14, *(_DWORD *)(v11 + 64) & 0xFFFFFFFE);
  PopState(v3);
  return 2;
}
