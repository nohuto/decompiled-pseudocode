/*
 * XREFs of NtUserScrollDC @ 0x1C01DA180
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     _ScrollDC @ 0x1C022EC60 (_ScrollDC.c)
 */

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
  ULONG64 v13; // rdx
  ULONG64 v14; // rcx
  int v15; // ebx
  __int64 v16; // r8
  __int64 v17; // r9
  struct tagRECT v19; // [rsp+78h] [rbp-80h] BYREF
  struct tagRECT v20; // [rsp+88h] [rbp-70h] BYREF
  __int128 v21; // [rsp+A0h] [rbp-58h] BYREF

  v8 = a3;
  v9 = a2;
  v11 = a5;
  v12 = (_OWORD *)a7;
  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  EnterSharedCrit(a1, a2, a3);
  if ( a4 )
  {
    if ( (unsigned __int64)a4 >= MmUserProbeAddress )
      a4 = (struct tagRECT *)MmUserProbeAddress;
    v19 = *a4;
    a4 = &v19;
  }
  if ( a5 )
  {
    if ( (unsigned __int64)a5 >= MmUserProbeAddress )
      v11 = (struct tagRECT *)MmUserProbeAddress;
    v20 = *v11;
    v11 = &v20;
  }
  v15 = ScrollDC(a1, v9, v8, a4, v11, a6, (struct tagRECT *)((unsigned __int64)&v21 & -(__int64)(a7 != 0)));
  if ( a7 )
  {
    v14 = MmUserProbeAddress;
    v13 = MmUserProbeAddress;
    if ( a7 >= MmUserProbeAddress )
      v12 = (_OWORD *)MmUserProbeAddress;
    *v12 = v21;
  }
  UserSessionSwitchLeaveCrit(v14, v13, v16, v17);
  return v15;
}
