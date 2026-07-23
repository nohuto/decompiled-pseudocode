/*
 * XREFs of RtlpConvertFunctionEntry @ 0x1402643E0
 * Callers:
 *     RtlLookupFunctionEntry @ 0x1402640A0 (RtlLookupFunctionEntry.c)
 *     KiLockServiceTable @ 0x14039F2E4 (KiLockServiceTable.c)
 *     KiLockExtendedServiceTable @ 0x1403DC038 (KiLockExtendedServiceTable.c)
 *     RtlMarkExceptionHandlingPages @ 0x14075E8B0 (RtlMarkExceptionHandlingPages.c)
 *     CcInitializeBcbProfiler @ 0x140A1C354 (CcInitializeBcbProfiler.c)
 *     sub_140A1DEE4 @ 0x140A1DEE4 (sub_140A1DEE4.c)
 * Callees:
 *     ExRaiseDatatypeMisalignment @ 0x14077BFB0 (ExRaiseDatatypeMisalignment.c)
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
