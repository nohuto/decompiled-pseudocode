/*
 * XREFs of ExpNodeInitialize @ 0x140848544
 * Callers:
 *     ExpWorkerInitialization @ 0x140B6383C (ExpWorkerInitialization.c)
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 (__fastcall *__fastcall ExpNodeInitialize(__int64 a1))()
{
  _QWORD *v1; // rbx
  __int64 (__fastcall *result)(); // rax

  v1 = (_QWORD *)(a1 + 304);
  memset((void *)(a1 + 304), 0, 0x50uLL);
  v1[3] = 0LL;
  result = ExpNodeHotAddProcessorWorker;
  *v1 = 0LL;
  v1[2] = ExpNodeHotAddProcessorWorker;
  return result;
}
