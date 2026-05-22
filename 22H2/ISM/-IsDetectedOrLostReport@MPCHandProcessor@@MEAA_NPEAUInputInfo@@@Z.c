/*
 * XREFs of ?IsDetectedOrLostReport@MPCHandProcessor@@MEAA_NPEAUInputInfo@@@Z @ 0x18007E220
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall MPCHandProcessor::IsDetectedOrLostReport(MPCHandProcessor *this, struct InputInfo *a2)
{
  return (unsigned int)(*((_DWORD *)a2 + 16) - 4) <= 1;
}
