/*
 * XREFs of HamRpcSrvTerminateHostOnProcessExit @ 0x180028D90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall HamRpcSrvTerminateHostOnProcessExit(
        struct _HOST_ACTIVITY_MANAGER **a1,
        __int64 a2,
        __int64 a3,
        void *a4,
        int a5,
        unsigned __int8 a6)
{
  return HamSrvTerminateHostOnProcessExit(a1, a2, a3, a4, a5, a6);
}
