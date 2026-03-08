/*
 * XREFs of ViDeadlockObjectAcquired @ 0x140AD6750
 * Callers:
 *     ViDeadlockKeWaitForMultipleObjects_Exit @ 0x140AD6500 (ViDeadlockKeWaitForMultipleObjects_Exit.c)
 *     ViDeadlockKeWaitForSingleObject_Exit @ 0x140AD6560 (ViDeadlockKeWaitForSingleObject_Exit.c)
 * Callees:
 *     VfDeadlockAcquireResource @ 0x140AD3DAC (VfDeadlockAcquireResource.c)
 */

unsigned __int8 __fastcall ViDeadlockObjectAcquired(unsigned int a1, LONG **a2, __int64 a3, void *a4)
{
  __int64 v5; // rdi
  unsigned __int8 result; // al

  if ( a1 )
  {
    v5 = a1;
    do
    {
      result = *(_BYTE *)*a2 & 0x7F;
      if ( result == 2 )
        result = (unsigned __int8)VfDeadlockAcquireResource(*a2, 1, (__int64)KeGetCurrentThread(), a3 != 0, a4);
      ++a2;
      --v5;
    }
    while ( v5 );
  }
  return result;
}
