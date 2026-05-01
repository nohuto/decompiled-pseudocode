/*
 * XREFs of ?RmpCoreApiConnectToRmServer@@YAJPEAT_RM_SID@@KPEAPEAU_RM_ACTIVATOR@@PEAU_WNF_STATE_NAME@@@Z @ 0x1800425D4
 * Callers:
 *     RmCoreRpcSrvConnectToRmServer @ 0x1800424F0 (RmCoreRpcSrvConnectToRmServer.c)
 * Callees:
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18000F2A0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001E250 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpActivatorRegister@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAT_RM_SID@@KPEAPEAU_RM_ACTIVATOR@@@Z @ 0x180042774 (-RmpActivatorRegister@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAT_RM_SID@@KPEAPEAU_RM_ACTIVATOR@@@Z.c)
 *     ?RmpActivatorCleanup@@YAXPEAU_RM_ACTIVATOR@@@Z @ 0x18006ABE4 (-RmpActivatorCleanup@@YAXPEAU_RM_ACTIVATOR@@@Z.c)
 */

__int64 __fastcall RmpCoreApiConnectToRmServer(
        union _RM_SID *a1,
        unsigned int a2,
        PVOID *a3,
        struct _WNF_STATE_NAME *a4)
{
  struct _RM_SERVICE_GLOBALS *v8; // rcx
  int v9; // eax
  struct _RM_ACTIVATOR *v10; // rcx
  unsigned int v11; // ebx
  struct _WNF_STATE_NAME v12; // rax
  PVOID P; // [rsp+20h] [rbp-18h] BYREF

  P = 0LL;
  RmpAcquireGlobalLock();
  v9 = RmpActivatorRegister(v8, a1, a2, (struct _RM_ACTIVATOR **)&P);
  v10 = (struct _RM_ACTIVATOR *)P;
  v11 = v9;
  if ( v9 >= 0 )
  {
    v12 = (struct _WNF_STATE_NAME)*((_QWORD *)P + 3);
    *a3 = P;
    v10 = 0LL;
    P = 0LL;
    v11 = 0;
    *a4 = v12;
  }
  if ( v10 )
  {
    RmpActivatorCleanup(v10);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
  }
  RmpReleaseGlobalLock();
  return v11;
}
