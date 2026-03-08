/*
 * XREFs of HUBMISC_PsmEventTimer @ 0x1C002E830
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBMISC_PsmEventTimer(__int64 a1, __int64 a2)
{
  __int64 (__fastcall *v3)(__int64, __int64); // rax
  __int64 result; // rax

  v3 = *(__int64 (__fastcall **)(__int64, __int64))(a2 + 1240);
  if ( !*(_BYTE *)(a2 + 1458) )
    return v3(a2, 1002LL);
  result = v3(a2, 3016LL);
  *(_BYTE *)(a2 + 1458) = 0;
  return result;
}
