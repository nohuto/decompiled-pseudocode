/*
 * XREFs of XmLahfOp @ 0x140531700
 * Callers:
 *     XmEmulateStream @ 0x1403B8550 (XmEmulateStream.c)
 * Callees:
 *     XmStoreResult @ 0x1403B42E8 (XmStoreResult.c)
 */

_WORD *__fastcall XmLahfOp(__int64 a1)
{
  int v1; // edx

  *(_DWORD *)(a1 + 120) = 0;
  v1 = *(unsigned __int8 *)(a1 + 16);
  *(_QWORD *)(a1 + 88) = a1 + 25;
  return XmStoreResult(a1, v1);
}
