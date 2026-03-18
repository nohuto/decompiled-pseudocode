/*
 * XREFs of SepRmSetSharedUserSessionWrkr @ 0x1409D0540
 * Callers:
 *     SepRmCommandServerThread @ 0x14082D2D0 (SepRmCommandServerThread.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14022D390 (PsGetCurrentServerSiloGlobals.c)
 */

_QWORD *SepRmSetSharedUserSessionWrkr()
{
  _QWORD *result; // rax
  int v1; // r8d
  __int64 v2; // rdx

  result = PsGetCurrentServerSiloGlobals();
  *(_DWORD *)(result[165] + 24LL) = v1;
  *(_DWORD *)(v2 + 40) = 0;
  return result;
}
