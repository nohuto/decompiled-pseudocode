/*
 * XREFs of ?RemovePoolBuffer@CFlipManager@@QEAAJ_K@Z @ 0x1C00845C8
 * Callers:
 *     ?RemovePoolBuffer@FlipManagerObject@@QEAAJ_K@Z @ 0x1C007F774 (-RemovePoolBuffer@FlipManagerObject@@QEAAJ_K@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?FindResourceState@CEndpointResourceStateManager@@AEAAPEAVCFlipResourceState@@_KPEAU_LIST_ENTRY@@@Z @ 0x1C0085680 (-FindResourceState@CEndpointResourceStateManager@@AEAAPEAVCFlipResourceState@@_KPEAU_LIST_ENTRY@.c)
 *     ?RemovePoolBufferState@CEndpointResourceStateManager@@QEAAXPEAVCPoolBufferResourceState@@@Z @ 0x1C0087028 (-RemovePoolBufferState@CEndpointResourceStateManager@@QEAAXPEAVCPoolBufferResourceState@@@Z.c)
 */

__int64 __fastcall CFlipManager::RemovePoolBuffer(CFlipManager *this, unsigned __int64 a2)
{
  unsigned int v3; // ebx
  struct CFlipResourceState *ResourceState; // rdi
  struct DXGGLOBAL *Global; // rax

  v3 = 0;
  ResourceState = CEndpointResourceStateManager::FindResourceState(this, a2, (struct _LIST_ENTRY *)((char *)this + 56));
  if ( ResourceState )
  {
    Global = DXGGLOBAL::GetGlobal();
    (*(void (__fastcall **)(_QWORD, _QWORD))(*((_QWORD *)Global + 38069) + 248LL))(
      *((unsigned int *)this + 83),
      *((_QWORD *)ResourceState + 3));
    CEndpointResourceStateManager::RemovePoolBufferState((CFlipManager *)((char *)this + 56), ResourceState);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v3;
}
