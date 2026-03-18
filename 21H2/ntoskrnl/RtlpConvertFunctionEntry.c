/*
 * XREFs of RtlpConvertFunctionEntry @ 0x1402983F0
 * Callers:
 *     KiLockServiceTable @ 0x14024B4DC (KiLockServiceTable.c)
 *     RtlLookupFunctionEntry @ 0x140298010 (RtlLookupFunctionEntry.c)
 *     KiLockExtendedServiceTable @ 0x1403EB1A8 (KiLockExtendedServiceTable.c)
 *     RtlMarkExceptionHandlingPages @ 0x14079C0D4 (RtlMarkExceptionHandlingPages.c)
 *     CcInitializeBcbProfiler @ 0x140AD6354 (CcInitializeBcbProfiler.c)
 *     sub_140AD7DE4 @ 0x140AD7DE4 (sub_140AD7DE4.c)
 * Callees:
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
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
