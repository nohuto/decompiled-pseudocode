void __fastcall CVisual::SetEffectInternal(CVisual *this, struct CEffect *a2)
{
  unsigned int **v2; // rcx
  _QWORD *v3; // r11
  unsigned int *v5; // r10
  unsigned int v6; // eax
  __int64 v7; // rcx
  _BYTE *v8; // rdx
  unsigned int i; // eax
  unsigned int *v10; // rcx
  unsigned int Slot; // eax
  __int64 v12; // r10
  char v13; // r11

  v2 = (unsigned int **)((char *)this + 232);
  v3 = 0LL;
  v5 = *v2;
  v6 = **v2;
  if ( a2 )
  {
    if ( (v6 & 0x400000) != 0 )
    {
      v7 = v5[1];
      v8 = v5 + 2;
      for ( i = 0; i < (unsigned int)v7; ++v8 )
      {
        if ( *v8 == 10 )
          break;
        ++i;
      }
      if ( i < (unsigned int)v7 )
        v3 = (_QWORD *)((char *)v5 + 8LL * i - (((_BYTE)v7 + 15) & 7) + v7 + 15);
      *v3 = a2;
    }
    else
    {
      *(_QWORD *)CSparseAlignedStorage<8,8>::AllocatedStorage::ReserveSlot(v2, 10) = a2;
    }
  }
  else if ( (v6 & 0x400000) != 0 )
  {
    v10 = *v2;
    *v5 = v6 & 0xFFBFFFFF;
    Slot = CSparseAlignedStorage<8,8>::AllocatedStorage::FindSlot(v10, 10LL);
    if ( Slot < *(_DWORD *)(v12 + 4) )
      *(_BYTE *)(Slot + v12 + 8) = v13;
  }
}
