/*
 * XREFs of IoInitializeMiniCompletionPacket @ 0x140944CA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall IoInitializeMiniCompletionPacket(__int64 a1, __int64 a2, __int64 a3)
{
  *(_DWORD *)(a1 + 16) = 4;
  *(_QWORD *)(a1 + 56) = a2;
  *(_QWORD *)(a1 + 64) = a3;
  *(_BYTE *)(a1 + 72) = 0;
}
