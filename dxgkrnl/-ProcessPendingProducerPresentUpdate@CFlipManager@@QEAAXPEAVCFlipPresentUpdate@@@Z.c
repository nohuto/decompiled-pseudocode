/*
 * XREFs of ?ProcessPendingProducerPresentUpdate@CFlipManager@@QEAAXPEAVCFlipPresentUpdate@@@Z @ 0x1C0083FD4
 * Callers:
 *     ?Pending@CFlipPresentUpdate@@UEAAXXZ @ 0x1C0087DC0 (-Pending@CFlipPresentUpdate@@UEAAXXZ.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?GetNextEntry@PresentHistory@CFlipManager@@QEAAAEAUEntry@12@XZ @ 0x1C008332C (-GetNextEntry@PresentHistory@CFlipManager@@QEAAAEAUEntry@12@XZ.c)
 *     ?ClearAllContentBindings@CEndpointResourceStateManager@@QEAAXXZ @ 0x1C00854B4 (-ClearAllContentBindings@CEndpointResourceStateManager@@QEAAXXZ.c)
 *     ?CommitPendingUpdates@CEndpointResourceStateManager@@QEAAXXZ @ 0x1C0085534 (-CommitPendingUpdates@CEndpointResourceStateManager@@QEAAXXZ.c)
 */

void __fastcall CFlipManager::ProcessPendingProducerPresentUpdate(CFlipManager *this, struct CFlipPresentUpdate *a2)
{
  struct DXGGLOBAL *Global; // rax
  CFlipManager::PresentHistory *v5; // rcx
  struct CFlipManager::PresentHistory::Entry *NextEntry; // rax

  Global = DXGGLOBAL::GetGlobal();
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*((_QWORD *)Global + 38069) + 152LL))(
    *((unsigned int *)this + 83),
    *((_QWORD *)this + 29),
    *((_QWORD *)a2 + 10));
  CEndpointResourceStateManager::CommitPendingUpdates((CFlipManager *)((char *)this + 56));
  ++*((_QWORD *)this + 29);
  if ( !*((_BYTE *)a2 + 72) )
    CEndpointResourceStateManager::ClearAllContentBindings((CFlipManager *)((char *)this + 56));
  v5 = (CFlipManager::PresentHistory *)*((_QWORD *)this + 3);
  if ( v5 )
  {
    NextEntry = CFlipManager::PresentHistory::GetNextEntry(v5);
    *((_DWORD *)NextEntry + 10) = 1;
    *((_QWORD *)NextEntry + 2) = *((_QWORD *)a2 + 8);
  }
}
