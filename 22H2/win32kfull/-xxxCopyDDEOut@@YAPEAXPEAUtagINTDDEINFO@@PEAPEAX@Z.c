/*
 * XREFs of ?xxxCopyDDEOut@@YAPEAXPEAUtagINTDDEINFO@@PEAPEAX@Z @ 0x1C01FA454
 * Callers:
 *     xxxDDETrackGetMessageHook @ 0x1C01FB134 (xxxDDETrackGetMessageHook.c)
 * Callees:
 *     xxxClientCopyDDEOut1 @ 0x1C0211D00 (xxxClientCopyDDEOut1.c)
 */

void *__fastcall xxxCopyDDEOut(struct tagINTDDEINFO *a1, void **a2)
{
  void *result; // rax

  result = (void *)xxxClientCopyDDEOut1();
  if ( result )
  {
    if ( a2 )
      *a2 = (void *)*((_QWORD *)a1 + 3);
  }
  return result;
}
