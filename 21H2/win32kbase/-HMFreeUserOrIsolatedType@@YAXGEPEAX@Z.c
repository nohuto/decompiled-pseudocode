/*
 * XREFs of ?HMFreeUserOrIsolatedType@@YAXGEPEAX@Z @ 0x1C002AD84
 * Callers:
 *     HMFreeObject @ 0x1C0007F10 (HMFreeObject.c)
 *     HMAllocObject @ 0x1C0032C10 (HMAllocObject.c)
 * Callees:
 *     ?HMFreeIsolatedType@@YAXEPEAX@Z @ 0x1C0028308 (-HMFreeIsolatedType@@YAXEPEAX@Z.c)
 *     Win32FreePool @ 0x1C002ADC0 (Win32FreePool.c)
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
