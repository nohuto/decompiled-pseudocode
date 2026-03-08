/*
 * XREFs of ?s_RenderThreadEndpointProc@CManipulationManager@@KAJPEAXPEBXH@Z @ 0x180101DC0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18001C8D4 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?s_EndpointProc@CManipulationManager@@KAJAEBUMessageCallThreadInfo@1@PEBUMsgCallTypeDefinition@@PEAXPEBXH@Z @ 0x180101E34 (-s_EndpointProc@CManipulationManager@@KAJAEBUMessageCallThreadInfo@1@PEBUMsgCallTypeDefinition@@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CManipulationManager::s_RenderThreadEndpointProc(
        char *a1,
        const struct MsgCallTypeDefinition *a2,
        int a3)
{
  unsigned int v6; // ebx
  char *v8; // [rsp+40h] [rbp+8h] BYREF

  v8 = a1;
  if ( a1 )
    (*(void (__fastcall **)(char *))(*(_QWORD *)a1 + 8LL))(a1);
  v6 = CManipulationManager::s_EndpointProc(
         (const struct CManipulationManager::MessageCallThreadInfo *)(a1 + 56),
         a2,
         a1,
         a2,
         a3);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v8);
  return v6;
}
