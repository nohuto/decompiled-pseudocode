__int64 __fastcall xxxAdvise(unsigned int *a1, void **a2, struct tagDDECONV *a3)
{
  struct tagDDECONV *v3; // rdi
  void **v4; // rsi
  void *v6; // rcx
  unsigned int v7; // ebx
  unsigned int v8; // eax
  void *v9; // rax
  unsigned int v10; // ecx
  struct tagINTDDEINFO *v12; // [rsp+40h] [rbp-18h] BYREF
  void *v13; // [rsp+48h] [rbp-10h] BYREF
  unsigned int v14; // [rsp+78h] [rbp+20h] BYREF

  v12 = 0LL;
  v3 = a3;
  v13 = 0LL;
  v4 = a2;
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
      25,
      4,
      14,
      25,
      (__int64)&WPP_de7bff8f30dd3ef9771327ef19992fd5_Traceguids);
  }
  v6 = *v4;
  v14 = 129;
  v7 = xxxCopyDdeIn(v6, &v14, &v13, &v12);
  if ( (*(_BYTE *)(_HMPheFromObject(v3) + 25) & 1) != 0 )
  {
    v7 = 3;
    if ( v12 )
      Win32FreePool(v12);
  }
  else if ( v7 == 2 )
  {
    v8 = v14;
    *a1 |= 0x80000000;
    v9 = AnticipatePost(
           *((struct tagDDECONV **)v3 + 4),
           (unsigned int (*)(unsigned int *, __int64 *, struct tagDDECONV *))xxxAdviseAck,
           v13,
           0LL,
           v12,
           v8);
    v10 = 2;
    *v4 = v9;
    if ( !v9 )
      return 3;
    return v10;
  }
  return v7;
}
