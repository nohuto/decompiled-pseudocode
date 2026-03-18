/*
 * XREFs of RtlpConvertFunctionEntry @ 0x1402A6530
 * Callers:
 *     RtlLookupFunctionEntry @ 0x1402A5370 (RtlLookupFunctionEntry.c)
 *     KiLockServiceTable @ 0x14034B8D0 (KiLockServiceTable.c)
 *     KiLockExtendedServiceTable @ 0x1403E3218 (KiLockExtendedServiceTable.c)
 *     RtlIsSpecialUnwind @ 0x1405B19DC (RtlIsSpecialUnwind.c)
 *     RtlMarkExceptionHandlingPages @ 0x140745AB0 (RtlMarkExceptionHandlingPages.c)
 *     CcInitializeBcbProfiler @ 0x140B18354 (CcInitializeBcbProfiler.c)
 *     sub_140B1A730 @ 0x140B1A730 (sub_140B1A730.c)
 * Callees:
 *     ExRaiseDatatypeMisalignment @ 0x140A00C10 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall RtlpConvertFunctionEntry(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rax

  if ( a1 )
  {
    v2 = *(unsigned int *)(a1 + 8);
    if ( (v2 & 1) != 0 )
    {
      a1 = v2 + a2 - 1;
      if ( a2 <= 0x7FFFFFFEFFFFLL && (a1 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
    }
  }
  return a1;
}
