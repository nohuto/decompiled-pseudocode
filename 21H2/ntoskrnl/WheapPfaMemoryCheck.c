/*
 * XREFs of WheapPfaMemoryCheck @ 0x14095E5F4
 * Callers:
 *     WheapPredictiveFailureAnalysis @ 0x14095E920 (WheapPredictiveFailureAnalysis.c)
 * Callees:
 *     MmGetPageBadStatus @ 0x14052FA50 (MmGetPageBadStatus.c)
 *     WheaAttemptPhysicalPageOffline @ 0x14095D530 (WheaAttemptPhysicalPageOffline.c)
 *     WheapPfaLogPageMonitorRemoval @ 0x14095E55C (WheapPfaLogPageMonitorRemoval.c)
 *     WheapPfaRetireExpiredMemoryEntries @ 0x14095E870 (WheapPfaRetireExpiredMemoryEntries.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

void __fastcall WheapPfaMemoryCheck(unsigned __int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  unsigned __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // rsi
  char *PoolWithTag; // rbx
  unsigned int v8; // ecx
  PVOID *v9; // rax
  PVOID *v10; // rcx
  __int64 v11; // rax
  _QWORD *v12; // rcx
  bool v13; // cf
  _QWORD *v14; // rax
  unsigned __int64 v15; // [rsp+40h] [rbp+8h] BYREF

  v15 = a1;
  if ( !WheapPolicyMemPfaDisable && (*(_BYTE *)a2 & 2) != 0 )
  {
    v4 = *(_QWORD *)(a2 + 16);
    v15 = v4;
    if ( !(unsigned int)MmGetPageBadStatus(&v15, a2, a3, a4) )
    {
      v5 = v4 >> 12;
      v6 = MEMORY[0xFFFFF78000000008];
      WheapPfaRetireExpiredMemoryEntries(MEMORY[0xFFFFF78000000008]);
      PoolWithTag = (char *)WheapPfaList;
      v8 = 0;
      if ( WheapPfaList == &WheapPfaList )
      {
LABEL_7:
        if ( v8 >= WheapPolicyMemPfaPageCount )
        {
          PoolWithTag = (char *)qword_140CF4BD0;
          v11 = *(_QWORD *)qword_140CF4BD0;
          if ( *(_QWORD *)(*(_QWORD *)qword_140CF4BD0 + 8LL) != qword_140CF4BD0 )
            goto LABEL_21;
          v12 = *(_QWORD **)(qword_140CF4BD0 + 8);
          if ( *v12 != qword_140CF4BD0 )
            goto LABEL_21;
          *v12 = v11;
          *(_QWORD *)(v11 + 8) = v12;
          WheapPfaLogPageMonitorRemoval((__int64)PoolWithTag, 3, v6);
        }
        else
        {
          PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x61656857u);
          if ( !PoolWithTag )
            return;
        }
        *(_QWORD *)PoolWithTag = 0LL;
        *((_QWORD *)PoolWithTag + 1) = 0LL;
        *(_DWORD *)(PoolWithTag + 18) = 0;
        *((_WORD *)PoolWithTag + 11) = 0;
        *((_WORD *)PoolWithTag + 8) = 0;
        *((_QWORD *)PoolWithTag + 3) = v6;
        *((_QWORD *)PoolWithTag + 5) = v5;
      }
      else
      {
        while ( 1 )
        {
          v9 = *(PVOID **)PoolWithTag;
          if ( *((_QWORD *)PoolWithTag + 5) == v5 )
            break;
          ++v8;
          PoolWithTag = *(char **)PoolWithTag;
          if ( v9 == &WheapPfaList )
            goto LABEL_7;
        }
        if ( v9[1] != PoolWithTag )
          goto LABEL_21;
        v10 = (PVOID *)*((_QWORD *)PoolWithTag + 1);
        if ( *v10 != PoolWithTag )
          goto LABEL_21;
        *v10 = v9;
        v9[1] = v10;
      }
      v13 = (unsigned __int16)++*((_WORD *)PoolWithTag + 8) < (unsigned int)WheapPolicyMemPfaThreshold;
      *((_QWORD *)PoolWithTag + 4) = v6;
      if ( v13 )
      {
        v14 = WheapPfaList;
        if ( *((PVOID **)WheapPfaList + 1) == &WheapPfaList )
        {
          *(_QWORD *)PoolWithTag = WheapPfaList;
          *((_QWORD *)PoolWithTag + 1) = &WheapPfaList;
          v14[1] = PoolWithTag;
          WheapPfaList = PoolWithTag;
          return;
        }
LABEL_21:
        __fastfail(3u);
      }
      WheapPfaLogPageMonitorRemoval((__int64)PoolWithTag, 1, v6);
      WheaAttemptPhysicalPageOffline(v5, 0, 0);
      ExFreePoolWithTag(PoolWithTag, 0x61656857u);
    }
  }
}
