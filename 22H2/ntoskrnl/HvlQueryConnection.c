/*
 * XREFs of HvlQueryConnection @ 0x1403AA280
 * Callers:
 *     RtlpLookupFunctionEntryForStackWalks @ 0x14021DF20 (RtlpLookupFunctionEntryForStackWalks.c)
 *     HvlPhase0Initialize @ 0x140791B8C (HvlPhase0Initialize.c)
 *     EtwpSysModuleRunDown @ 0x140792B28 (EtwpSysModuleRunDown.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvlQueryConnection(_QWORD *a1)
{
  if ( !HvlpHypercallCodeVa )
    return 3221225473LL;
  if ( a1 )
    *a1 = HvlpHypercallCodeVa;
  return 0LL;
}
