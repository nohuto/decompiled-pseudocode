/*
 * XREFs of ?ClearInteraction@CVisual@@QEAAXXZ @ 0x1800E8150
 * Callers:
 *     ?FinalRelease@CVisual@@MEAAXXZ @ 0x18009A2D0 (-FinalRelease@CVisual@@MEAAXXZ.c)
 *     ?SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z @ 0x1800E7D34 (-SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z.c)
 * Callees:
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x18009A504 (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 *     ?FindSlot@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@AEBAII@Z @ 0x1800E1BE0 (-FindSlot@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@AEBAII@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CVisual::ClearInteraction(CVisual *this)
{
  struct CInteraction *InteractionInternal; // rax
  _DWORD *v3; // r10
  __int64 v4; // rcx
  unsigned int Slot; // eax
  __int64 v6; // r10

  InteractionInternal = CVisual::GetInteractionInternal(this);
  if ( InteractionInternal )
    (*(void (__fastcall **)(struct CInteraction *))(*(_QWORD *)InteractionInternal + 16LL))(InteractionInternal);
  v3 = (_DWORD *)*((_QWORD *)this + 29);
  if ( (*v3 & 0x800000) != 0 )
  {
    v4 = *((_QWORD *)this + 29);
    *v3 &= ~0x800000u;
    Slot = CSparseAlignedStorage<8,8>::AllocatedStorage::FindSlot(v4, 9);
    if ( Slot < *(_DWORD *)(v6 + 4) )
      *(_BYTE *)(Slot + v6 + 8) = 0;
  }
}
