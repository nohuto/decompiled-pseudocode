/*
 * XREFs of ?RmpActivatorRegister@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAT_RM_SID@@KPEAPEAU_RM_ACTIVATOR@@@Z @ 0x180042774
 * Callers:
 *     ?RmpCoreApiConnectToRmServer@@YAJPEAT_RM_SID@@KPEAPEAU_RM_ACTIVATOR@@PEAU_WNF_STATE_NAME@@@Z @ 0x1800425D4 (-RmpCoreApiConnectToRmServer@@YAJPEAT_RM_SID@@KPEAPEAU_RM_ACTIVATOR@@PEAU_WNF_STATE_NAME@@@Z.c)
 *     ?Handle_RM_ConnectToServer@ResourceManagerServerProxy@@QEAAJPEAXPEAPEAXPEAU_WNF_STATE_NAME@@@Z @ 0x180042674 (-Handle_RM_ConnectToServer@ResourceManagerServerProxy@@QEAAJPEAXPEAPEAXPEAU_WNF_STATE_NAME@@@Z.c)
 * Callees:
 *     RmpWnfAllocateAndInitializePendingCallbackList @ 0x1800092E4 (RmpWnfAllocateAndInitializePendingCallbackList.c)
 *     RmpWnfCreateStateNameForClient @ 0x18002E958 (RmpWnfCreateStateNameForClient.c)
 *     memset_0 @ 0x180047B3A (memset_0.c)
 *     ?RmpActivatorCleanup@@YAXPEAU_RM_ACTIVATOR@@@Z @ 0x18006ABE4 (-RmpActivatorCleanup@@YAXPEAU_RM_ACTIVATOR@@@Z.c)
 */

__int64 __fastcall RmpActivatorRegister(
        struct _RM_SERVICE_GLOBALS *a1,
        union _RM_SID *a2,
        ULONG a3,
        struct _WNF_STATE_NAME **a4)
{
  struct _RM_SERVICE_GLOBALS *v5; // r14
  struct _WNF_STATE_NAME *Heap; // rax
  struct _WNF_STATE_NAME *v9; // rdi
  int StateNameForClient; // ebx

  v5 = RmSvcGlobals;
  Heap = (struct _WNF_STATE_NAME *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x40uLL);
  v9 = Heap;
  if ( Heap )
  {
    memset_0(Heap, 0, 0x40uLL);
    *v9 = (struct _WNF_STATE_NAME)v5;
    v9[7].Data[0] = a3;
    v9[6] = 0LL;
    StateNameForClient = RmpWnfCreateStateNameForClient(a2, 0x400u, 0, v9 + 3);
    if ( StateNameForClient >= 0 )
    {
      StateNameForClient = RmpWnfAllocateAndInitializePendingCallbackList(&v9[4]);
      if ( StateNameForClient >= 0 )
        StateNameForClient = 0;
    }
    if ( StateNameForClient >= 0 )
    {
      *a4 = v9;
      StateNameForClient = 0;
      v9 = 0LL;
    }
    if ( v9 )
    {
      RmpActivatorCleanup((struct _RM_ACTIVATOR *)v9);
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v9);
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)StateNameForClient;
}
