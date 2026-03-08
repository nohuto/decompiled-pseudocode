/*
 * XREFs of HalpFreeDrsPool @ 0x140517200
 * Callers:
 *     HalpErrorDeferredHandler @ 0x1405171B0 (HalpErrorDeferredHandler.c)
 *     HalpMemoryErrorDeferredRecovery @ 0x1405174A4 (HalpMemoryErrorDeferredRecovery.c)
 *     HalpPmemErrorDeferredRecovery @ 0x1405176AC (HalpPmemErrorDeferredRecovery.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall HalpFreeDrsPool(_DWORD *a1)
{
  if ( a1 )
  {
    if ( *a1 == -1 )
    {
      ExFreePoolWithTag(a1, 0x61656857u);
    }
    else if ( *a1 == 1 )
    {
      *a1 = 0;
    }
  }
}
