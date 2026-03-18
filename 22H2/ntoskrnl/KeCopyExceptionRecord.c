/*
 * XREFs of KeCopyExceptionRecord @ 0x140578940
 * Callers:
 *     KiDispatchException @ 0x14030CAC0 (KiDispatchException.c)
 *     KiInitializeUserApc @ 0x14030EFF8 (KiInitializeUserApc.c)
 *     DbgkForwardException @ 0x140939614 (DbgkForwardException.c)
 *     DbgkpSendErrorMessage @ 0x14093A32C (DbgkpSendErrorMessage.c)
 * Callees:
 *     memmove @ 0x140435100 (memmove.c)
 *     memset @ 0x140435400 (memset.c)
 */

void *__fastcall KeCopyExceptionRecord(_OWORD *a1, __int64 a2)
{
  memset(a1, 0, 0x98uLL);
  *a1 = *(_OWORD *)a2;
  *((_QWORD *)a1 + 2) = *(_QWORD *)(a2 + 16);
  *((_DWORD *)a1 + 6) = *(_DWORD *)(a2 + 24);
  return memmove(a1 + 2, (const void *)(a2 + 32), 8LL * *(unsigned int *)(a2 + 24));
}
