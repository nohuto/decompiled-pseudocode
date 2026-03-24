/*
 * XREFs of ?HMFreeUserOrIsolatedType@@YAXGEPEAX@Z @ 0x1C002C1F4
 * Callers:
 *     HMFreeObject @ 0x1C0009390 (HMFreeObject.c)
 *     HMAllocObject @ 0x1C0034080 (HMAllocObject.c)
 * Callees:
 *     ?HMFreeIsolatedType@@YAXEPEAX@Z @ 0x1C0029778 (-HMFreeIsolatedType@@YAXEPEAX@Z.c)
 *     Win32FreePool @ 0x1C002C230 (Win32FreePool.c)
 */

void __fastcall HMFreeUserOrIsolatedType(__int64 a1, char a2, void *a3)
{
  if ( (a1 & 0x200) != 0 )
  {
    LOBYTE(a1) = a2;
    HMFreeIsolatedType(a1, a3);
  }
  else
  {
    Win32FreePool(a3);
  }
}
