/*
 * XREFs of ?SetDepthSortedList@CVisual@@QEAAXPEAV?$vector@PEAVCVisual@@V?$allocator@PEAVCVisual@@@std@@@std@@@Z @ 0x18020E8B8
 * Callers:
 *     ??1CVisual@@MEAA@XZ @ 0x18009A61C (--1CVisual@@MEAA@XZ.c)
 *     ?CreateDepthSortedList@CVisual@@AEAAPEAV?$vector@PEAVCVisual@@V?$allocator@PEAVCVisual@@@std@@@std@@XZ @ 0x18020D774 (-CreateDepthSortedList@CVisual@@AEAAPEAV-$vector@PEAVCVisual@@V-$allocator@PEAVCVisual@@@std@@@s.c)
 *     ?DeleteDepthSortedList@CVisual@@AEAAXXZ @ 0x18020D7DC (-DeleteDepthSortedList@CVisual@@AEAAXXZ.c)
 * Callees:
 *     ?ReserveSlot@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@SAAEAT?$_Align_type@N$07@std@@PEAPEAV12@I@Z @ 0x180099C48 (-ReserveSlot@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@SAAEAT-$_Align_type@N$07@std@@PEAP.c)
 *     ?FindSlot@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@AEBAII@Z @ 0x1800E1BE0 (-FindSlot@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@AEBAII@Z.c)
 */

__int64 __fastcall CVisual::SetDepthSortedList(__int64 a1, __int64 a2)
{
  unsigned int **v2; // rcx
  _QWORD *v3; // r11
  _DWORD *v5; // r10
  __int64 result; // rax
  _DWORD *v7; // rcx
  __int64 v8; // r10
  char v9; // r11
  __int64 v10; // rcx
  _BYTE *v11; // rdx
  __int64 v12; // r11

  v2 = (unsigned int **)(a1 + 232);
  v3 = 0LL;
  v5 = *v2;
  result = **v2;
  if ( a2 )
  {
    if ( (result & 0x10000000) != 0 )
    {
      v10 = (unsigned int)v5[1];
      v11 = v5 + 2;
      for ( result = 0LL; (unsigned int)result < (unsigned int)v10; ++v11 )
      {
        if ( *v11 == 4 )
          break;
        result = (unsigned int)(result + 1);
      }
      if ( (unsigned int)result < (unsigned int)v10 )
      {
        v12 = 8LL * (unsigned int)result;
        result = ((_BYTE)v10 + 15) & 7;
        v3 = (_QWORD *)((char *)v5 + v12 - result + v10 + 15);
      }
      *v3 = a2;
    }
    else
    {
      result = (__int64)CSparseAlignedStorage<8,8>::AllocatedStorage::ReserveSlot(v2, 4);
      *(_QWORD *)result = a2;
    }
  }
  else if ( (result & 0x10000000) != 0 )
  {
    v7 = *v2;
    *v5 = result & 0xEFFFFFFF;
    result = CSparseAlignedStorage<8,8>::AllocatedStorage::FindSlot((__int64)v7, 4);
    if ( (unsigned int)result < *(_DWORD *)(v8 + 4) )
    {
      result = (unsigned int)result;
      *(_BYTE *)((unsigned int)result + v8 + 8) = v9;
    }
  }
  return result;
}
