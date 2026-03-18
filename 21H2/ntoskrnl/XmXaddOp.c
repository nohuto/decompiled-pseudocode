/*
 * XREFs of XmXaddOp @ 0x1405357B0
 * Callers:
 *     XmEmulateStream @ 0x1403A32AC (XmEmulateStream.c)
 * Callees:
 *     XmAddOperands @ 0x1403A2AC0 (XmAddOperands.c)
 *     XmStoreResult @ 0x1403A2E60 (XmStoreResult.c)
 */

_WORD *__fastcall XmXaddOp(__int64 a1)
{
  int v1; // ebx

  v1 = *(_DWORD *)(a1 + 104);
  XmAddOperands(a1, 0);
  *(_QWORD *)(a1 + 88) = *(_QWORD *)(a1 + 96);
  return XmStoreResult(a1, v1);
}
