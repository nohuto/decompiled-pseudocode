unsigned int __fastcall xxxExecuteAck(unsigned int *a1, void **a2, struct tagDDECONV *a3)
{
  struct tagDDECONV *v3; // rdi
  bool v4; // zf
  void **v5; // rsi
  __int64 v8; // r14
  int v9; // ebx
  struct tagINTDDEINFO *v10; // r9
  struct tagXSTATE *v11; // rax
  void *v12; // rax
  unsigned int v13; // [rsp+60h] [rbp+8h] BYREF
  struct tagINTDDEINFO *v14; // [rsp+78h] [rbp+20h] BYREF

  v14 = 0LL;
  v3 = a3;
  v4 = *a1 == 996;
  v5 = a2;
  v13 = 6145;
  if ( !v4 )
    return xxxUnexpectedServerPost(a1, (__int64 *)a2, a3);
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
      49,
      4,
      14,
      49,
      (__int64)&WPP_de7bff8f30dd3ef9771327ef19992fd5_Traceguids);
  }
  v8 = *((_QWORD *)v3 + 7);
  v9 = xxxCopyDdeIn(*v5, &v13, 0LL, &v14);
  if ( (*(_BYTE *)(_HMPheFromObject(v3) + 25) & 1) != 0 || *((_QWORD *)v3 + 7) != v8 )
  {
    v9 = 3;
    if ( v14 )
      Win32FreePool(v14);
    return v9;
  }
  if ( v9 == 2 )
  {
    v10 = v14;
    *((_QWORD *)v14 + 1) = *(_QWORD *)(*((_QWORD *)v3 + 7) + 40LL);
    *((_QWORD *)v10 + 3) = 0LL;
    *((_DWORD *)v10 + 10) = 0;
    *a1 |= 0x80000000;
    v11 = Createpxs(0LL, 0LL, 0LL, v10, 0x201u);
    if ( v11 )
    {
      *((_QWORD *)v11 + 2) = *(_QWORD *)(*((_QWORD *)v3 + 6) + 16LL);
      v12 = *(void **)v11;
      *v5 = v12;
      if ( v12 )
      {
        PopState(v3);
        return v9;
      }
    }
    else
    {
      *v5 = 0LL;
    }
    return 3;
  }
  return v9;
}
