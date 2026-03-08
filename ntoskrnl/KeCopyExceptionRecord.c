/*
 * XREFs of KeCopyExceptionRecord @ 0x140576430
 * Callers:
 *     KiDispatchException @ 0x140362740 (KiDispatchException.c)
 *     KiInitializeUserApc @ 0x1403664E8 (KiInitializeUserApc.c)
 *     DbgkForwardException @ 0x1409365F4 (DbgkForwardException.c)
 *     DbgkpSendErrorMessage @ 0x14093730C (DbgkpSendErrorMessage.c)
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

void *__fastcall KeCopyExceptionRecord(_OWORD *a1, __int64 a2)
{
  memset(a1, 0, 0x98uLL);
  *a1 = *(_OWORD *)a2;
  *((_QWORD *)a1 + 2) = *(_QWORD *)(a2 + 16);
  *((_DWORD *)a1 + 6) = *(_DWORD *)(a2 + 24);
  return memmove(a1 + 2, (const void *)(a2 + 32), 8LL * *(unsigned int *)(a2 + 24));
}
