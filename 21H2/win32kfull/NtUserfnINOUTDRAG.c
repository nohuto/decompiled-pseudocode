/*
 * XREFs of NtUserfnINOUTDRAG @ 0x1C02020D0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserfnINOUTDRAG(__int64 a1, unsigned int a2, __int64 a3, _OWORD *a4, __int64 a5, char a6)
{
  _BYTE *v10; // rdx
  __int64 result; // rax
  __int128 v12; // [rsp+48h] [rbp-40h] BYREF
  __int128 v13; // [rsp+58h] [rbp-30h]
  __int128 v14; // [rsp+68h] [rbp-20h]

  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v10 = a4;
  if ( (unsigned __int64)a4 >= MmUserProbeAddress )
    v10 = (_BYTE *)MmUserProbeAddress;
  *v10 = *v10;
  v10[47] = v10[47];
  v12 = *a4;
  v13 = a4[1];
  v14 = a4[2];
  result = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, __int128 *, __int64))mpFnidPfn[(a6 + 6) & 0x1F])(
             a1,
             a2,
             a3,
             &v12,
             a5);
  *a4 = v12;
  a4[1] = v13;
  a4[2] = v14;
  return result;
}
