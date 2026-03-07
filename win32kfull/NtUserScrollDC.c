__int64 __fastcall NtUserScrollDC(
        HDC a1,
        __int64 a2,
        __int64 a3,
        struct tagRECT *a4,
        struct tagRECT *a5,
        HRGN a6,
        ULONG64 a7)
{
  int v8; // r12d
  int v9; // r15d
  struct tagRECT *v11; // rdi
  _OWORD *v12; // rsi
  ULONG64 v13; // rcx
  int v14; // ebx
  struct tagRECT v16; // [rsp+78h] [rbp-80h] BYREF
  struct tagRECT v17; // [rsp+88h] [rbp-70h] BYREF
  __int128 v18; // [rsp+A0h] [rbp-58h] BYREF

  v8 = a3;
  v9 = a2;
  v11 = a5;
  v12 = (_OWORD *)a7;
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  EnterSharedCrit(a1, a2, a3);
  if ( a4 )
  {
    if ( (unsigned __int64)a4 >= MmUserProbeAddress )
      a4 = (struct tagRECT *)MmUserProbeAddress;
    v16 = *a4;
    a4 = &v16;
  }
  if ( a5 )
  {
    if ( (unsigned __int64)a5 >= MmUserProbeAddress )
      v11 = (struct tagRECT *)MmUserProbeAddress;
    v17 = *v11;
    v11 = &v17;
  }
  v14 = ScrollDC(a1, v9, v8, a4, v11, a6, (struct tagRECT *)((unsigned __int64)&v18 & -(__int64)(a7 != 0)));
  if ( a7 )
  {
    v13 = MmUserProbeAddress;
    if ( a7 >= MmUserProbeAddress )
      v12 = (_OWORD *)MmUserProbeAddress;
    *v12 = v18;
  }
  UserSessionSwitchLeaveCrit(v13);
  return v14;
}
