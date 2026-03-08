/*
 * XREFs of PdcRwLockInitialize2 @ 0x1408576A8
 * Callers:
 *     Pdcv2ActivationClientRegister @ 0x140857554 (Pdcv2ActivationClientRegister.c)
 * Callees:
 *     KeInitializeMutex @ 0x1402D97E0 (KeInitializeMutex.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall PdcRwLockInitialize2(__int64 a1)
{
  unsigned int v2; // ebx
  struct _KMUTANT *Pool2; // rdi

  v2 = 0;
  Pool2 = (struct _KMUTANT *)ExAllocatePool2(64LL, 56LL, 1281582160LL);
  if ( Pool2 )
  {
    *(_OWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
    KeInitializeMutex(Pool2, 0);
    *(_QWORD *)a1 = Pool2;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v2;
}
