/*
 * XREFs of CcGetFileObjectFromBcb @ 0x140533390
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PFILE_OBJECT __stdcall CcGetFileObjectFromBcb(PVOID Bcb)
{
  return (PFILE_OBJECT)(*(_QWORD *)(*((_QWORD *)Bcb + 22) + 96LL) & 0xFFFFFFFFFFFFFFF0uLL);
}
