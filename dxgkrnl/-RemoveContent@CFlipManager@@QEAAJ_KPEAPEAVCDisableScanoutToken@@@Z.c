/*
 * XREFs of ?RemoveContent@CFlipManager@@QEAAJ_KPEAPEAVCDisableScanoutToken@@@Z @ 0x1C008453C
 * Callers:
 *     ?RemoveContent@FlipManagerObject@@QEAAJ_KPEAPEAVCDisableScanoutToken@@@Z @ 0x1C007F704 (-RemoveContent@FlipManagerObject@@QEAAJ_KPEAPEAVCDisableScanoutToken@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?FindResourceState@CEndpointResourceStateManager@@AEAAPEAVCFlipResourceState@@_KPEAU_LIST_ENTRY@@@Z @ 0x1C0085680 (-FindResourceState@CEndpointResourceStateManager@@AEAAPEAVCFlipResourceState@@_KPEAU_LIST_ENTRY@.c)
 *     ?ClearCompositionSurfaceBinding@CContentResource@@QEAAJPEAPEAVCDisableScanoutToken@@@Z @ 0x1C0087554 (-ClearCompositionSurfaceBinding@CContentResource@@QEAAJPEAPEAVCDisableScanoutToken@@@Z.c)
 */

__int64 __fastcall CFlipManager::RemoveContent(
        CFlipManager *this,
        unsigned __int64 a2,
        struct CDisableScanoutToken **a3)
{
  CContentResource **ResourceState; // rdi
  unsigned int v6; // ebx
  struct DXGGLOBAL *Global; // rax

  ResourceState = (CContentResource **)CEndpointResourceStateManager::FindResourceState(
                                         this,
                                         a2,
                                         (struct _LIST_ENTRY *)((char *)this + 72));
  if ( ResourceState )
  {
    Global = DXGGLOBAL::GetGlobal();
    (*(void (__fastcall **)(_QWORD, _QWORD, CContentResource *))(*((_QWORD *)Global + 38069) + 280LL))(
      0LL,
      *((unsigned int *)this + 83),
      ResourceState[3]);
    v6 = CContentResource::ClearCompositionSurfaceBinding(ResourceState[3], a3);
    (*((void (__fastcall **)(CContentResource **))*ResourceState + 3))(ResourceState);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v6;
}
