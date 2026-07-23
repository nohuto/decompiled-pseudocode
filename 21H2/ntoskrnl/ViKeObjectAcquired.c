/*
 * XREFs of ViKeObjectAcquired @ 0x1409DD204
 * Callers:
 *     VerifierKeWaitForMultipleObjects @ 0x1409DC8E0 (VerifierKeWaitForMultipleObjects.c)
 *     VerifierKeWaitForSingleObject @ 0x1409DCA10 (VerifierKeWaitForSingleObject.c)
 * Callees:
 *     VfDeadlockAcquireResource @ 0x1409DE5C8 (VfDeadlockAcquireResource.c)
 */

char __fastcall ViKeObjectAcquired(unsigned int a1, _BYTE **a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdi
  char result; // al

  if ( a1 )
  {
    v5 = a1;
    do
    {
      result = **a2 & 0x7F;
      if ( result == 2 )
        result = VfDeadlockAcquireResource((int)*a2, a4);
      ++a2;
      --v5;
    }
    while ( v5 );
  }
  return result;
}
