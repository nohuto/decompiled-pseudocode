/*
 * XREFs of HMUnlockDestroyObject @ 0x1C0009310
 * Callers:
 *     <none>
 * Callees:
 *     ?HMMarkObjectDestroyWorker@@YAHPEAX@Z @ 0x1C00097C8 (-HMMarkObjectDestroyWorker@@YAHPEAX@Z.c)
 *     ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C0033100 (--0-$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 *     HMUnlockObjectWorker @ 0x1C0046BE0 (HMUnlockObjectWorker.c)
 */

void *__fastcall HMUnlockDestroyObject(void *a1)
{
  _BYTE v3[24]; // [rsp+20h] [rbp-18h] BYREF

  CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>(v3);
  if ( *((_DWORD *)a1 + 2) == 1 )
  {
    HMMarkObjectDestroyWorker(a1);
    return (void *)HMUnlockObjectWorker();
  }
  return a1;
}
