/*
 * XREFs of ?ResolveInteractionHandle@CInteraction@@SAXIPEA_KPEAPEAV1@@Z @ 0x180209824
 * Callers:
 *     ?ProcessFrameInputPreTargeting@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z @ 0x18019C094 (-ProcessFrameInputPreTargeting@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z.c)
 * Callees:
 *     ??4?$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z @ 0x180031944 (--4-$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z.c)
 *     ?GetEntry@CInteraction@@CAPEAUHANDLE_ENTRY@1@I@Z @ 0x1800E5118 (-GetEntry@CInteraction@@CAPEAUHANDLE_ENTRY@1@I@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?BlockInteractionResolution@GestureTargeting@InputTraceLogging@@SAXPEBVCInteraction@@_K@Z @ 0x1802088A0 (-BlockInteractionResolution@GestureTargeting@InputTraceLogging@@SAXPEBVCInteraction@@_K@Z.c)
 */

void __fastcall CInteraction::ResolveInteractionHandle(unsigned int a1, unsigned __int64 *a2, struct CInteraction **a3)
{
  struct CInteraction *v6; // rbx
  struct CInteraction::HANDLE_ENTRY *Entry; // rax
  unsigned __int64 v8; // rdx
  struct CInteraction *v9; // rcx
  struct CInteraction *v10; // [rsp+40h] [rbp+18h] BYREF

  *a3 = 0LL;
  if ( a1 )
  {
    v6 = 0LL;
    v10 = 0LL;
    AcquireSRWLockShared(&CInteraction::s_InteractionHandleTableLock);
    Entry = CInteraction::GetEntry(a1);
    if ( Entry )
    {
      Microsoft::WRL::ComPtr<CInteraction>::operator=((__int64 *)&v10, *((_QWORD *)Entry + 1));
      v6 = v10;
      if ( v10 )
      {
        if ( a2 )
        {
          v8 = *a2;
          if ( *a2 )
          {
            if ( v8 < *((_QWORD *)v10 + 214) )
            {
              InputTraceLogging::GestureTargeting::BlockInteractionResolution((__int64)v10, v8);
              v9 = v6;
              v6 = 0LL;
              (*(void (__fastcall **)(struct CInteraction *))(*(_QWORD *)v9 + 16LL))(v9);
            }
          }
        }
      }
    }
    *a3 = v6;
    ReleaseSRWLockShared(&CInteraction::s_InteractionHandleTableLock);
  }
}
