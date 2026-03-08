/*
 * XREFs of ?SetProjectedShadowReceivers@CVisual@@QEAAXPEAV?$vector@PEAVCProjectedShadowReceiver@@V?$allocator@PEAVCProjectedShadowReceiver@@@std@@@std@@@Z @ 0x1800040C4
 * Callers:
 *     ?AddProjectedShadowReceiver@CVisual@@QEAAXPEAVCProjectedShadowReceiver@@@Z @ 0x180003FF0 (-AddProjectedShadowReceiver@CVisual@@QEAAXPEAVCProjectedShadowReceiver@@@Z.c)
 * Callees:
 *     ?ReserveSlot@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@SAAEAT?$_Align_type@N$07@std@@PEAPEAV12@I@Z @ 0x180099C48 (-ReserveSlot@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@SAAEAT-$_Align_type@N$07@std@@PEAP.c)
 *     ?FindSlot@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@AEBAII@Z @ 0x1800E1BE0 (-FindSlot@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@AEBAII@Z.c)
 */

__int64 __fastcall CVisual::SetProjectedShadowReceivers(__int64 a1, __int64 a2)
{
  unsigned int **v2; // rcx
  _QWORD *v3; // r11
  unsigned int *v5; // r10
  __int64 result; // rax
  unsigned int *v7; // rcx
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
    if ( (result & 0x20000) != 0 )
    {
      v10 = v5[1];
      v11 = v5 + 2;
      for ( result = 0LL; (unsigned int)result < (unsigned int)v10; ++v11 )
      {
        if ( *v11 == 15 )
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
      result = CSparseAlignedStorage<8,8>::AllocatedStorage::ReserveSlot(v2, 15LL);
      *(_QWORD *)result = a2;
    }
  }
  else if ( (result & 0x20000) != 0 )
  {
    v7 = *v2;
    *v5 = result & 0xFFFDFFFF;
    result = CSparseAlignedStorage<8,8>::AllocatedStorage::FindSlot(v7, 15LL);
    if ( (unsigned int)result < *(_DWORD *)(v8 + 4) )
    {
      result = (unsigned int)result;
      *(_BYTE *)((unsigned int)result + v8 + 8) = v9;
    }
  }
  return result;
}
