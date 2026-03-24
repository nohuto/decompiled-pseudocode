/*
 * XREFs of NtUserfnINLPCOMPAREITEMSTRUCT @ 0x1C0204EC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C016DB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserfnINLPCOMPAREITEMSTRUCT(__int64 a1, __int64 a2, __int64 a3, ULONG64 a4, __int64 a5, char a6)
{
  __int128 v7; // [rsp+38h] [rbp-40h] BYREF
  __int128 v8; // [rsp+48h] [rbp-30h]
  __int128 v9; // [rsp+58h] [rbp-20h]
  __int64 v10; // [rsp+68h] [rbp-10h]

  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  if ( a4 >= MmUserProbeAddress )
    a4 = MmUserProbeAddress;
  v7 = *(_OWORD *)a4;
  v8 = *(_OWORD *)(a4 + 16);
  v9 = *(_OWORD *)(a4 + 32);
  v10 = *(_QWORD *)(a4 + 48);
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, __int128 *, __int64))mpFnidPfn[(a6 + 6) & 0x1F])(
           a1,
           a2,
           a3,
           &v7,
           a5);
}
