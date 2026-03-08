/*
 * XREFs of HalpRequestGenericErrorRecovery @ 0x140517780
 * Callers:
 *     <none>
 * Callees:
 *     HalpGenericErrorSourceRecovery @ 0x140517230 (HalpGenericErrorSourceRecovery.c)
 */

__int64 __fastcall HalpRequestGenericErrorRecovery(__int64 a1, _DWORD *a2)
{
  return HalpGenericErrorSourceRecovery(a1, a2);
}
