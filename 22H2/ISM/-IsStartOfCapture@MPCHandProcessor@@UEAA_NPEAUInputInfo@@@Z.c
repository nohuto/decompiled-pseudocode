/*
 * XREFs of ?IsStartOfCapture@MPCHandProcessor@@UEAA_NPEAUInputInfo@@@Z @ 0x18007E310
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall MPCHandProcessor::IsStartOfCapture(MPCHandProcessor *this, struct InputInfo *a2)
{
  return (*(_DWORD *)a2 & 0x662600) != 0 && *((_DWORD *)a2 + 16) == 2;
}
