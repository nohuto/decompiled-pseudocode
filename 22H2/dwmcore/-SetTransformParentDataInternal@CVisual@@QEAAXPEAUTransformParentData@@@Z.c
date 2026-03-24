/*
 * XREFs of ?SetTransformParentDataInternal@CVisual@@QEAAXPEAUTransformParentData@@@Z @ 0x1800D5A94
 * Callers:
 *     ?ProcessSetTransformParent@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_SETTRANSFORMPARENT@@@Z @ 0x1800D5940 (-ProcessSetTransformParent@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_SETTRANSFORMPA.c)
 * Callees:
 *     ?ReserveSlot@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@SAAEAT?$_Align_type@N$07@std@@PEAPEAV12@I@Z @ 0x1800C63F4 (-ReserveSlot@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@SAAEAT-$_Align_type@N$07@std@@PEAP.c)
 *     ?FindSlot@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@AEBAII@Z @ 0x1800C64BC (-FindSlot@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@AEBAII@Z.c)
 */

void __fastcall CVisual::SetTransformParentDataInternal(CVisual *this, struct TransformParentData *a2)
{
  _QWORD *v2; // r10
  _DWORD *v3; // r11
  int v5; // eax
  unsigned int Slot; // eax
  char v7; // r10
  __int64 v8; // r11
  __int64 v9; // rcx
  _BYTE *v10; // rdx
  unsigned int i; // eax

  v2 = 0LL;
  v3 = (_DWORD *)*((_QWORD *)this + 28);
  v5 = *v3 & 0x1000000;
  if ( a2 )
  {
    if ( v5 )
    {
      v9 = (unsigned int)v3[1];
      v10 = v3 + 2;
      for ( i = 0; i < (unsigned int)v9; ++v10 )
      {
        if ( *v10 == 8 )
          break;
        ++i;
      }
      if ( i < (unsigned int)v9 )
        v2 = (_QWORD *)((char *)v3 + 8LL * i - (((_BYTE)v9 + 15) & 7) + v9 + 15);
      *v2 = a2;
    }
    else
    {
      *(_QWORD *)CSparseAlignedStorage<8,8>::AllocatedStorage::ReserveSlot((_QWORD *)this + 28, 8) = a2;
    }
  }
  else if ( v5 )
  {
    *v3 &= ~0x1000000u;
    Slot = CSparseAlignedStorage<8,8>::AllocatedStorage::FindSlot((__int64)v3, 8);
    if ( Slot < *(_DWORD *)(v8 + 4) )
      *(_BYTE *)(Slot + v8 + 8) = v7;
  }
}
