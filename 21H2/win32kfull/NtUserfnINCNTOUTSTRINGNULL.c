/*
 * XREFs of NtUserfnINCNTOUTSTRINGNULL @ 0x1C02016D0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserfnINCNTOUTSTRINGNULL(
        __int64 a1,
        unsigned int a2,
        SIZE_T a3,
        _WORD *a4,
        __int64 a5,
        char a6,
        int a7)
{
  SIZE_T v11; // rdx
  int v12; // ecx
  __int64 v13; // rbx
  int v15; // [rsp+40h] [rbp-18h] BYREF
  int v16; // [rsp+44h] [rbp-14h]
  _WORD *v17; // [rsp+48h] [rbp-10h]

  W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v12 = (a7 << 31) ^ (a3 ^ (a7 << 31)) & 0x7FFFFFFF;
  v16 = v12;
  v13 = 0LL;
  if ( !a7 )
  {
    v12 ^= (v12 ^ (2 * v12)) & 0x7FFFFFFF;
    v16 = v12;
  }
  if ( (v12 & 0x7FFFFFFFu) < 2 || (v11 = v12 & 0x7FFFFFFF, v11 < a3) )
  {
    UserSetLastError(87LL, v11);
  }
  else
  {
    v15 = 0;
    v17 = a4;
    ProbeForWrite(a4, v11, (v12 >> 31) + 2);
    *a4 = 0;
    return ((__int64 (__fastcall *)(__int64, _QWORD, SIZE_T, int *, __int64))mpFnidPfn[(a6 + 6) & 0x1F])(
             a1,
             a2,
             a3,
             &v15,
             a5);
  }
  return v13;
}
