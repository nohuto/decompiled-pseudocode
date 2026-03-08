/*
 * XREFs of SepRmSetSharedUserSessionWrkr @ 0x1409CD6A0
 * Callers:
 *     SepRmCommandServerThread @ 0x140825260 (SepRmCommandServerThread.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140267B30 (PsGetCurrentServerSiloGlobals.c)
 */

struct _LIST_ENTRY *SepRmSetSharedUserSessionWrkr()
{
  struct _LIST_ENTRY *result; // rax
  int v1; // r8d
  __int64 v2; // rdx

  result = PsGetCurrentServerSiloGlobals();
  LODWORD(result[82].Blink[1].Blink) = v1;
  *(_DWORD *)(v2 + 40) = 0;
  return result;
}
