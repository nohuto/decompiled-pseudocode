/*
 * XREFs of ?SetContent@CFlipManager@@QEAAJ_K0PEAVCFlipPropertySet@@@Z @ 0x1C0084648
 * Callers:
 *     ?SetContent@FlipManagerObject@@QEAAJ_K0PEAVCFlipPropertySet@@@Z @ 0x1C007F7D4 (-SetContent@FlipManagerObject@@QEAAJ_K0PEAVCFlipPropertySet@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?FindPoolBufferIndex@CEndpointResourceStateManager@@QEAAI_K@Z @ 0x1C008562C (-FindPoolBufferIndex@CEndpointResourceStateManager@@QEAAI_K@Z.c)
 *     ?FindResourceState@CEndpointResourceStateManager@@AEAAPEAVCFlipResourceState@@_KPEAU_LIST_ENTRY@@@Z @ 0x1C0085680 (-FindResourceState@CEndpointResourceStateManager@@AEAAPEAVCFlipResourceState@@_KPEAU_LIST_ENTRY@.c)
 *     ?SetBoundBuffer@CContentResourceState@@QEAAXPEAVCPoolBufferResource@@@Z @ 0x1C0087B98 (-SetBoundBuffer@CContentResourceState@@QEAAXPEAVCPoolBufferResource@@@Z.c)
 *     ?SetBoundPropertySet@CContentResourceState@@QEAAXPEAVCFlipPropertySet@@@Z @ 0x1C0087BF0 (-SetBoundPropertySet@CContentResourceState@@QEAAXPEAVCFlipPropertySet@@@Z.c)
 */

__int64 __fastcall CFlipManager::SetContent(
        CFlipManager *this,
        __int64 a2,
        unsigned __int64 a3,
        struct CFlipPropertySet *a4)
{
  unsigned int v7; // ebx
  struct CFlipResourceState *ResourceState; // rdi
  CEndpointResourceStateManager *v9; // rcx
  unsigned __int64 v10; // r11
  struct CFlipResourceState *v11; // rsi
  struct CPoolBufferResource *v12; // rdi
  struct DXGGLOBAL *Global; // rax
  unsigned int PoolBufferIndex; // edi
  struct DXGGLOBAL *v15; // rax

  v7 = 0;
  ResourceState = CEndpointResourceStateManager::FindResourceState(this, a3, (struct _LIST_ENTRY *)((char *)this + 56));
  v11 = CEndpointResourceStateManager::FindResourceState(v9, v10, (struct _LIST_ENTRY *)((char *)this + 72));
  if ( v11 && (*((_QWORD *)this + 6) == 1LL || ResourceState && !*(_DWORD *)(*((_QWORD *)ResourceState + 3) + 88LL)) )
  {
    if ( ResourceState )
      v12 = (struct CPoolBufferResource *)*((_QWORD *)ResourceState + 3);
    else
      v12 = 0LL;
    CContentResourceState::SetBoundBuffer(v11, v12);
    CContentResourceState::SetBoundPropertySet(v11, a4);
    Global = DXGGLOBAL::GetGlobal();
    if ( (*(unsigned int (**)(void))(*((_QWORD *)Global + 38069) + 224LL))() )
    {
      if ( v12 )
        PoolBufferIndex = CEndpointResourceStateManager::FindPoolBufferIndex((CFlipManager *)((char *)this + 56), a3);
      else
        PoolBufferIndex = -1;
      v15 = DXGGLOBAL::GetGlobal();
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*((_QWORD *)v15 + 38069) + 216LL))(
        *((unsigned int *)this + 83),
        *((_QWORD *)v11 + 3),
        *((_QWORD *)v11 + 6),
        PoolBufferIndex);
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v7;
}
