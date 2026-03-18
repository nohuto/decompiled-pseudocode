/*
 * XREFs of PspIoMiniPacketCallbackRoutine @ 0x1407C9860
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 */

LONG_PTR __fastcall PspIoMiniPacketCallbackRoutine(__int64 a1, _DWORD *a2)
{
  *a2 = 0;
  return ObfDereferenceObject(a2);
}
