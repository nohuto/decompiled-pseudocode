/*
 * XREFs of WheaInitializeDeferredRecoveryObject @ 0x1406108F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall WheaInitializeDeferredRecoveryObject(__int64 a1, __int64 a2, char a3)
{
  __int64 result; // rax

  result = 0LL;
  *(_OWORD *)a1 = 0LL;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 16) = a2;
  *(_BYTE *)(a1 + 24) = a3;
  return result;
}
