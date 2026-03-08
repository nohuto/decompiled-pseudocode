/*
 * XREFs of ?SetDropShadow@CSpriteVisual@@IEAAXPEAVCDropShadow@@@Z @ 0x18024EF70
 * Callers:
 *     ??1CSpriteVisual@@UEAA@XZ @ 0x1800EA204 (--1CSpriteVisual@@UEAA@XZ.c)
 *     ?ProcessSetShadow@CSpriteVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SPRITEVISUAL_SETSHADOW@@@Z @ 0x18024EDC4 (-ProcessSetShadow@CSpriteVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SPRITEVISUAL_SETSHADOW@@.c)
 * Callees:
 *     ?ReserveSlot@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@SAAEAT?$_Align_type@N$07@std@@PEAPEAV12@I@Z @ 0x180099C48 (-ReserveSlot@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@SAAEAT-$_Align_type@N$07@std@@PEAP.c)
 *     ?FindSlot@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@AEBAII@Z @ 0x1800E1BE0 (-FindSlot@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@AEBAII@Z.c)
 */

void __fastcall CSpriteVisual::SetDropShadow(CSpriteVisual *this, struct CDropShadow *a2)
{
  unsigned int **v2; // rcx
  _QWORD *v3; // r11
  unsigned int *v5; // r10
  unsigned int v6; // eax
  unsigned int *v7; // rcx
  unsigned int Slot; // eax
  __int64 v9; // r10
  char v10; // r11
  __int64 v11; // rcx
  _BYTE *v12; // rdx
  unsigned int i; // eax

  v2 = (unsigned int **)((char *)this + 232);
  v3 = 0LL;
  v5 = *v2;
  v6 = **v2;
  if ( a2 )
  {
    if ( (v6 & 0x10000) != 0 )
    {
      v11 = v5[1];
      v12 = v5 + 2;
      for ( i = 0; i < (unsigned int)v11; ++v12 )
      {
        if ( *v12 == 16 )
          break;
        ++i;
      }
      if ( i < (unsigned int)v11 )
        v3 = (_QWORD *)((char *)v5 + 8LL * i - (((_BYTE)v11 + 15) & 7) + v11 + 15);
      *v3 = a2;
    }
    else
    {
      *(_QWORD *)CSparseAlignedStorage<8,8>::AllocatedStorage::ReserveSlot(v2, 16) = a2;
    }
  }
  else if ( (v6 & 0x10000) != 0 )
  {
    v7 = *v2;
    *v5 = v6 & 0xFFFEFFFF;
    Slot = CSparseAlignedStorage<8,8>::AllocatedStorage::FindSlot((__int64)v7, 16);
    if ( Slot < *(_DWORD *)(v9 + 4) )
      *(_BYTE *)(Slot + v9 + 8) = v10;
  }
}
