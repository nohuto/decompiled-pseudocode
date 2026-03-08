/*
 * XREFs of ?ShiftTreeMembershipOnDebouncedStateChange@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0099390
 * Callers:
 *     ?DebouncedDecommit@VIDMM_RECYCLE_RANGE@@QEAAXAEAW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@@Z @ 0x1C0096A78 (-DebouncedDecommit@VIDMM_RECYCLE_RANGE@@QEAAXAEAW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@@Z.c)
 *     ?DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJAEA_N@Z @ 0x1C0098D20 (-DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJAEA_N@Z.c)
 *     ?FinalizedUnlock@VIDMM_RECYCLE_RANGE@@QEAAXAEA_N@Z @ 0x1C00B3284 (-FinalizedUnlock@VIDMM_RECYCLE_RANGE@@QEAAXAEA_N@Z.c)
 * Callees:
 *     ?NotifyMultirangeEvent@VIDMM_RECYCLE_BLOCK@@QEAAXW4RangeOp@1@PEAX@Z @ 0x1C00020CC (-NotifyMultirangeEvent@VIDMM_RECYCLE_BLOCK@@QEAAXW4RangeOp@1@PEAX@Z.c)
 *     Feature_Servicing_GpuAcceleratedVideoDecodingLeak__private_IsEnabledDeviceUsage @ 0x1C001A5BC (Feature_Servicing_GpuAcceleratedVideoDecodingLeak__private_IsEnabledDeviceUsage.c)
 *     ?ReleaseMultirangeReference@VIDMM_RECYCLE_BLOCK@@QEAAXXZ @ 0x1C0032220 (-ReleaseMultirangeReference@VIDMM_RECYCLE_BLOCK@@QEAAXXZ.c)
 *     ?AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C0097470 (-AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTI.c)
 *     ?CreateMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@W4VIDMM_RECYCLE_MULTIRANGE_STATE@@PEAVVIDMM_RECYCLE_BLOCK@@_K2@Z @ 0x1C0099DF0 (-CreateMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@W4VIDMM_RECYCLE_MULT.c)
 *     ?GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C009AF28 (-GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?ShrinkTo@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K0@Z @ 0x1C00B3370 (-ShrinkTo@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K0@Z.c)
 *     ?AddRangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00F5734 (-AddRangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?RemoveRangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00F6618 (-RemoveRangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_RECYCLE_HEAP::ShiftTreeMembershipOnDebouncedStateChange(
        VIDMM_RECYCLE_HEAP *this,
        struct VIDMM_RECYCLE_RANGE *a2)
{
  unsigned int v4; // r14d
  unsigned int v5; // r15d
  __int64 v6; // rsi
  int v7; // edx
  char *v8; // rcx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r10
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // r9
  struct VIDMM_RECYCLE_RANGE *NextRange; // r13
  __int64 v14; // rbx
  __int64 v15; // r9
  __int64 v16; // r10
  __int64 Multirange; // r15
  int v18; // eax
  int v19; // eax
  __int64 v20; // r8
  void *v21; // rcx
  __int64 v22; // rbp
  int IsEnabledDeviceUsage; // eax
  VIDMM_RECYCLE_BLOCK *v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rax

  v4 = 0;
  v5 = 0;
  if ( *((_DWORD *)a2 + 16) != 4 )
  {
    if ( *((_DWORD *)a2 + 16) != 5 )
    {
LABEL_8:
      VIDMM_RECYCLE_HEAP::RemoveRangeFromTree(this, v4, a2);
      VIDMM_RECYCLE_HEAP::AddRangeToTree(this, v5, a2);
      return;
    }
    v6 = *((_QWORD *)a2 + 18);
    v4 = 1;
    goto LABEL_6;
  }
  v6 = *((_QWORD *)a2 + 19);
  v7 = **(_DWORD **)(*((_QWORD *)a2 + 9) + 32LL);
  if ( (unsigned int)(v7 - 3) <= 3 || (v5 = 1, (unsigned int)(v7 - 9) <= 1) )
LABEL_6:
    v5 = 2;
  if ( !v6 )
    goto LABEL_8;
  WdLogSingleEntry2(4LL, v6, v4);
  if ( v4 )
    v8 = (char *)this + 56;
  else
    v8 = (char *)this + 48;
  RtlAvlRemoveNode(v8, v6);
  v9 = *(_QWORD *)(v6 + 32);
  v10 = *(_QWORD *)(v6 + 40);
  *(_DWORD *)(v6 + 88) = 3;
  v11 = *((_QWORD *)a2 + 4);
  v12 = *((_QWORD *)a2 + 5);
  if ( v9 < v11 )
  {
    if ( v10 > v12 )
    {
      NextRange = VIDMM_RECYCLE_RANGE::GetNextRange(a2);
      v14 = *(_QWORD *)(v6 + 72);
      Multirange = VIDMM_RECYCLE_HEAP_MGR::CreateMultirange(
                     *((_QWORD *)this + 1),
                     *(unsigned int *)(v6 + 216),
                     *((_QWORD *)a2 + 9),
                     v15,
                     v16);
      *(_QWORD *)(Multirange + 64) = NextRange;
      *(_QWORD *)(Multirange + 72) = v14;
      VIDMM_RECYCLE_MULTIRANGE::ShrinkTo((VIDMM_RECYCLE_MULTIRANGE *)v6, *(_QWORD *)(v6 + 32), *((_QWORD *)a2 + 4));
      while ( 1 )
      {
        v18 = *(_DWORD *)(Multirange + 216);
        if ( v18 )
        {
          v19 = v18 - 1;
          if ( v19 )
          {
            if ( v19 == 1 )
              *((_QWORD *)NextRange + 19) = Multirange;
          }
          else
          {
            *((_QWORD *)NextRange + 18) = Multirange;
          }
        }
        else
        {
          *((_QWORD *)NextRange + 17) = Multirange;
        }
        if ( NextRange == *(struct VIDMM_RECYCLE_RANGE **)(Multirange + 72) )
          break;
        NextRange = VIDMM_RECYCLE_RANGE::GetNextRange(NextRange);
      }
      if ( *((_DWORD *)a2 + 16) == 4 )
      {
        *((_QWORD *)a2 + 19) = 0LL;
      }
      else if ( *((_DWORD *)a2 + 16) == 5 )
      {
        *((_QWORD *)a2 + 18) = 0LL;
      }
      VIDMM_RECYCLE_HEAP::AddMultirangeToTree(this, v4, v6);
      v20 = Multirange;
LABEL_35:
      VIDMM_RECYCLE_HEAP::AddMultirangeToTree(this, v4, v20);
      return;
    }
LABEL_30:
    VIDMM_RECYCLE_MULTIRANGE::ShrinkTo((VIDMM_RECYCLE_MULTIRANGE *)v6, v9, v11);
    if ( *((_DWORD *)a2 + 16) == 4 )
    {
      *((_QWORD *)a2 + 19) = 0LL;
    }
    else if ( *((_DWORD *)a2 + 16) == 5 )
    {
      *((_QWORD *)a2 + 18) = 0LL;
    }
    v20 = v6;
    goto LABEL_35;
  }
  if ( v10 > v12 )
  {
    v11 = v10;
    v9 = *((_QWORD *)a2 + 5);
    goto LABEL_30;
  }
  v21 = *(void **)(v6 + 96);
  v22 = *((_QWORD *)this + 1);
  if ( v21 )
  {
    ExFreePoolWithTag(v21, 0);
    *(_QWORD *)(v6 + 96) = 0LL;
  }
  IsEnabledDeviceUsage = Feature_Servicing_GpuAcceleratedVideoDecodingLeak__private_IsEnabledDeviceUsage();
  v24 = *(VIDMM_RECYCLE_BLOCK **)(v6 + 80);
  if ( IsEnabledDeviceUsage )
  {
    VIDMM_RECYCLE_BLOCK::NotifyMultirangeEvent((__int64)v24, 1, v6);
    VIDMM_RECYCLE_BLOCK::ReleaseMultirangeReference(*(VIDMM_RECYCLE_BLOCK **)(v6 + 80));
    *(_BYTE *)(v6 + 232) = 1;
    *(_QWORD *)(v6 + 224) = 0LL;
  }
  else
  {
    VIDMM_RECYCLE_BLOCK::ReleaseMultirangeReference(v24);
    v25 = *(_QWORD *)(v6 + 80);
    *(_BYTE *)(v6 + 232) = 1;
    *(_QWORD *)(v6 + 224) = 0LL;
    VIDMM_RECYCLE_BLOCK::NotifyMultirangeEvent(v25, 1, v6);
  }
  v26 = *(unsigned int *)(v22 + 1620);
  if ( (unsigned int)v26 >= 4 )
  {
    ExFreeToLookasideListEx(*(PLOOKASIDE_LIST_EX *)(v22 + 1320), (PVOID)v6);
  }
  else
  {
    *(_QWORD *)(v22 + 8 * v26 + 1656) = v6;
    ++*(_DWORD *)(v22 + 1620);
  }
  if ( (unsigned int)Feature_Servicing_GpuAcceleratedVideoDecodingLeak__private_IsEnabledDeviceUsage() )
    --*(_DWORD *)(v22 + 1688);
  if ( *((_DWORD *)a2 + 16) == 4 )
  {
    *((_QWORD *)a2 + 19) = 0LL;
  }
  else if ( *((_DWORD *)a2 + 16) == 5 )
  {
    *((_QWORD *)a2 + 18) = 0LL;
  }
}
