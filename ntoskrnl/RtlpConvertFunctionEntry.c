/*
 * XREFs of RtlpConvertFunctionEntry @ 0x1402822F0
 * Callers:
 *     RtlLookupFunctionEntry @ 0x140281130 (RtlLookupFunctionEntry.c)
 *     KiLockServiceTable @ 0x1402E3C60 (KiLockServiceTable.c)
 *     KiLockExtendedServiceTable @ 0x1403DDCF8 (KiLockExtendedServiceTable.c)
 *     RtlIsSpecialUnwind @ 0x1405AF52C (RtlIsSpecialUnwind.c)
 *     RtlMarkExceptionHandlingPages @ 0x1406ECFC0 (RtlMarkExceptionHandlingPages.c)
 *     CcInitializeBcbProfiler @ 0x140B14354 (CcInitializeBcbProfiler.c)
 *     sub_140B16730 @ 0x140B16730 (sub_140B16730.c)
 * Callees:
 *     ExRaiseDatatypeMisalignment @ 0x1409FDD10 (ExRaiseDatatypeMisalignment.c)
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
