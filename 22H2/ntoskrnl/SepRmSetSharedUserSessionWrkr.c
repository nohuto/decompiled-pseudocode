/*
 * XREFs of SepRmSetSharedUserSessionWrkr @ 0x140923D80
 * Callers:
 *     SepRmCommandServerThread @ 0x1407AD670 (SepRmCommandServerThread.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140361820 (PsGetCurrentServerSiloGlobals.c)
 */

_QWORD *__fastcall SepRmSetSharedUserSessionWrkr(__int64 a1, __int64 a2)
{
  int v2; // ebx
  _QWORD *result; // rax

  v2 = *(_DWORD *)(a1 + 44);
  result = PsGetCurrentServerSiloGlobals(a1, a2);
  *(_DWORD *)(result[141] + 24LL) = v2;
  *(_DWORD *)(a2 + 40) = 0;
  return result;
}
