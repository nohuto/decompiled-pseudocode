/*
 * XREFs of NtUserfnINLPWINDOWPOS @ 0x1C0205BB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C016E4B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserfnINLPWINDOWPOS(__int64 a1, unsigned int a2, __int64 a3, ULONG64 a4, __int64 a5, char a6)
{
  __int128 v7; // [rsp+38h] [rbp-30h] BYREF
  __int128 v8; // [rsp+48h] [rbp-20h]
  __int64 v9; // [rsp+58h] [rbp-10h]

  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  if ( a4 >= MmUserProbeAddress )
    a4 = MmUserProbeAddress;
  v7 = *(_OWORD *)a4;
  v8 = *(_OWORD *)(a4 + 16);
  v9 = *(_QWORD *)(a4 + 32);
  return ((__int64 (__fastcall *)(__int64, _QWORD, __int64, __int128 *, __int64))mpFnidPfn[(a6 + 6) & 0x1F])(
           a1,
           a2,
           a3,
           &v7,
           a5);
}
