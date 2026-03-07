unsigned int __fastcall xxxAdviseDataAck(unsigned int *a1, __int64 *a2, struct tagDDECONV *a3)
{
  struct tagDDECONV *v3; // rdi
  __int64 *v4; // rsi
  unsigned int v7; // ebx
  int v8; // edx
  int v9; // r8d
  __int64 v10; // rbx
  char v11; // dl
  struct tagINTDDEINFO *v12; // rsi
  PDEVICE_OBJECT v13; // rcx
  char v14; // dl
  char v15; // r8
  __int64 v16; // r9
  struct tagINTDDEINFO *v17; // [rsp+90h] [rbp+8h] BYREF

  v17 = 0LL;
  v3 = a3;
  v4 = a2;
  if ( *a1 != 996 )
    return xxxUnexpectedClientPost(a1, a2, a3);
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xDu)
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
      32,
      (__int64)&WPP_de7bff8f30dd3ef9771327ef19992fd5_Traceguids);
  }
  v7 = xxxCopyAckIn(a1, v4, v3, &v17);
  if ( (*(_BYTE *)(_HMPheFromObject(v3) + 25) & 1) != 0 )
    return 0;
  if ( v7 != 2 )
    return v7;
  v10 = *((_QWORD *)v3 + 7);
  v11 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
     && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xDu)
     && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  v12 = v17;
  if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_qqq(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v11,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (__int64)gFullLog,
      4u,
      0xEu,
      0x21u,
      (__int64)&WPP_de7bff8f30dd3ef9771327ef19992fd5_Traceguids,
      *(_QWORD *)(v10 + 40),
      *(_QWORD *)(v10 + 48),
      *(_QWORD *)v17);
  if ( (*(_DWORD *)v12 & 0x8000LL) == 0 )
  {
    v13 = WPP_GLOBAL_Control;
    v14 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xDu)
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    v15 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v14 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_51;
    v16 = 36LL;
    goto LABEL_50;
  }
  if ( (*(_DWORD *)(v10 + 64) & 0x400) != 0 )
  {
    LOBYTE(v8) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xDu)
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v8,
        v9,
        (unsigned int)&WPP_de7bff8f30dd3ef9771327ef19992fd5_Traceguids,
        4,
        14,
        34,
        (__int64)&WPP_de7bff8f30dd3ef9771327ef19992fd5_Traceguids);
    }
    FreeListAdd(*((PETHREAD ***)v3 + 4), *(void **)(v10 + 48), *(_DWORD *)(v10 + 64) & 0xFFFFFFFE);
    goto LABEL_52;
  }
  v13 = WPP_GLOBAL_Control;
  v14 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
     && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xDu)
     && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  v15 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v16 = 35LL;
LABEL_50:
    WPP_RECORDER_AND_TRACE_SF_q(
      (__int64)v13->AttachedDevice,
      v14,
      v15,
      v16,
      4u,
      0xEu,
      v16,
      (__int64)&WPP_de7bff8f30dd3ef9771327ef19992fd5_Traceguids,
      *(_QWORD *)(v10 + 40));
  }
LABEL_51:
  xxxFreeDDEHandle(*(void **)(v10 + 40), *(_DWORD *)(v10 + 64) & 0xFFFFFFFE);
LABEL_52:
  if ( (*(_BYTE *)(_HMPheFromObject(v3) + 25) & 1) != 0 )
    return 0;
  PopState(v3);
  return 2;
}
