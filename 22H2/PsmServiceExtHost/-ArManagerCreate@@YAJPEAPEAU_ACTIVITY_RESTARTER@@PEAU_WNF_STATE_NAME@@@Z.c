/*
 * XREFs of ?ArManagerCreate@@YAJPEAPEAU_ACTIVITY_RESTARTER@@PEAU_WNF_STATE_NAME@@@Z @ 0x18003F078
 * Callers:
 *     PsmInitializeServiceExtension4 @ 0x18003EDF0 (PsmInitializeServiceExtension4.c)
 * Callees:
 *     ?ArManagerInitialize@@YAXPEAU_ACTIVITY_RESTARTER@@@Z @ 0x18003F168 (-ArManagerInitialize@@YAXPEAU_ACTIVITY_RESTARTER@@@Z.c)
 */

__int64 __fastcall ArManagerCreate(struct _ACTIVITY_RESTARTER **a1, struct _WNF_STATE_NAME *a2)
{
  struct _ACTIVITY_RESTARTER *Heap; // rax
  struct _ACTIVITY_RESTARTER *v4; // rbx
  __int64 result; // rax

  Heap = (struct _ACTIVITY_RESTARTER *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x58uLL);
  v4 = Heap;
  if ( !Heap )
    return 3221225495LL;
  ArManagerInitialize(Heap);
  result = HamConnectToServer(ArHamCallback, (char *)v4 + 72);
  if ( (int)result >= 0 )
    result = 0LL;
  if ( (int)result >= 0 )
  {
    RtlSubscribeWnfStateChangeNotification((char *)v4 + 80, *a2, 0LL, ArCsStateChangeCallback, v4, 0LL, 0, 0);
    RtlAcquireSRWLockExclusive(&ArGlobalLock);
    GetCurrentThreadId();
    ArGlobals = v4;
    dword_1800B4EC8 = 0;
    RtlReleaseSRWLockExclusive(&ArGlobalLock);
    return 0LL;
  }
  return result;
}
