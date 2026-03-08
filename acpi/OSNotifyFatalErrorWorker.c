/*
 * XREFs of OSNotifyFatalErrorWorker @ 0x1C00337C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall OSNotifyFatalErrorWorker(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rax
  __int64 v3; // r9
  __int64 v4; // r8

  v1 = *(unsigned int *)(a1 + 40);
  v2 = *(_QWORD *)(a1 + 48);
  v3 = *(unsigned int *)(a1 + 36);
  v4 = *(unsigned int *)(a1 + 32);
  LOBYTE(a1) = 1;
  return PoShutdownBugCheck(a1, 224LL, v4, v3, v1, v2);
}
