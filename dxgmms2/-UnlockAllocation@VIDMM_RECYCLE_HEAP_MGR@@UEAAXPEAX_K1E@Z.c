/*
 * XREFs of ?UnlockAllocation@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAX_K1E@Z @ 0x1C009AB60
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyRangeEvent@VIDMM_RECYCLE_BLOCK@@QEAAXW4RangeOp@1@PEAX@Z @ 0x1C00020F8 (-NotifyRangeEvent@VIDMM_RECYCLE_BLOCK@@QEAAXW4RangeOp@1@PEAX@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002124 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002B90 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C00199EC (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1C002EF9C (McTemplateK0pqq_EtwWriteTransfer.c)
 *     ?AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C009AD48 (-AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z @ 0x1C009ADF0 (-MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z.c)
 *     ?GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C009AF28 (-GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?ProcessDebounceListsGlobally@VIDMM_RECYCLE_HEAP_MGR@@SAX_N@Z @ 0x1C00B4E90 (-ProcessDebounceListsGlobally@VIDMM_RECYCLE_HEAP_MGR@@SAX_N@Z.c)
 *     ?Unlock@VIDMM_RECYCLE_RANGE@@QEAAXXZ @ 0x1C00F72D8 (-Unlock@VIDMM_RECYCLE_RANGE@@QEAAXXZ.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_RECYCLE_HEAP_MGR::UnlockAllocation(
        VIDMM_RECYCLE_HEAP_MGR *this,
        void *a2,
        __int64 a3,
        __int64 a4,
        char a5)
{
  unsigned __int8 v8; // dl
  struct _MDL *v9; // rcx
  struct VIDMM_RECYCLE_RANGE *NextRange; // rdi
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // rbp
  __int64 v13; // rcx
  __int64 v15; // rcx
  __int64 v16; // r8
  unsigned __int64 *v17; // rsi
  void *v18; // rcx
  __int64 v19; // rcx
  void *v20; // rcx
  __int64 v21; // [rsp+20h] [rbp-58h]
  __int64 v22; // [rsp+28h] [rbp-50h]
  DXGFASTMUTEX *v23; // [rsp+50h] [rbp-28h]
  char v24; // [rsp+58h] [rbp-20h]

  v23 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1328);
  v24 = 0;
  if ( this == (VIDMM_RECYCLE_HEAP_MGR *)-1328LL )
  {
    WdLogSingleEntry1(1LL, 592LL);
    HIDWORD(v22) = 0;
    HIDWORD(v21) = 0;
    DxgkLogInternalTriageEvent(v19, 262146LL);
  }
  DXGFASTMUTEX::Acquire(v23);
  v24 = 1;
  WdLogSingleEntry3(4LL, a2, a3, a4);
  v9 = (struct _MDL *)*((_QWORD *)a2 + 23);
  NextRange = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)a2 + 8);
  if ( v9 )
  {
    MmUnlockPages(v9);
    IoFreeMdl(*((PMDL *)a2 + 23));
    *((_QWORD *)a2 + 23) = 0LL;
    *((_QWORD *)a2 + 22) = 0LL;
  }
  v11 = *((_QWORD *)a2 + 6) + a3;
  v12 = v11 + a4;
  while ( 1 )
  {
    if ( *((_QWORD *)NextRange + 4) < v11 )
    {
      v17 = (unsigned __int64 *)((char *)NextRange + 40);
      if ( *((_QWORD *)NextRange + 5) > v11 )
        VIDMM_RECYCLE_RANGE::Unlock(NextRange);
    }
    else
    {
      v13 = *((int *)NextRange + 16);
      if ( (_DWORD)v13 == 2 )
      {
        if ( (*((_DWORD *)NextRange + 23))-- == 1 )
        {
          VIDMM_RECYCLE_HEAP_MGR::AddToUnlockDebounce(
            *(VIDMM_RECYCLE_HEAP_MGR **)(*(_QWORD *)(*((_QWORD *)NextRange + 9) + 32LL) + 8LL),
            NextRange);
          WdLogSingleEntry3(4LL, NextRange, *((int *)NextRange + 16), 3LL);
          if ( (byte_1C00769C2 & 2) != 0 )
          {
            LODWORD(v22) = 3;
            LODWORD(v21) = *((_DWORD *)NextRange + 16);
            McTemplateK0pqq_EtwWriteTransfer(v15, &EventRecycleRangeTransition, v16, NextRange, v21, v22);
          }
          VIDMM_RECYCLE_BLOCK::NotifyRangeEvent(*((_QWORD *)NextRange + 9), 2, (__int64)NextRange);
          *((_DWORD *)NextRange + 16) = 3;
        }
      }
      else
      {
        g_DxgMmsBugcheckExportIndex = 1;
        WdLogSingleEntry5(0LL, 270LL, 52LL, 3LL, v13, 0LL);
      }
      v17 = (unsigned __int64 *)((char *)NextRange + 40);
    }
    if ( *v17 >= v12 )
      break;
    NextRange = VIDMM_RECYCLE_RANGE::GetNextRange(NextRange);
  }
  --*((_DWORD *)a2 + 23);
  if ( a5 )
  {
    v20 = (void *)*((_QWORD *)a2 + 13);
    *((_BYTE *)a2 + 129) = 0;
    if ( v20 )
    {
      ExFreePoolWithTag(v20, 0);
      *((_QWORD *)a2 + 13) = 0LL;
    }
  }
  else
  {
    v18 = (void *)*((_QWORD *)a2 + 12);
    *((_BYTE *)a2 + 128) = 0;
    if ( v18 )
    {
      ExFreePoolWithTag(v18, 0);
      *((_QWORD *)a2 + 12) = 0LL;
    }
  }
  if ( !*((_DWORD *)a2 + 23) )
    *((_DWORD *)a2 + 54) = 3;
  VIDMM_RECYCLE_MULTIRANGE::MergeSubrangesWherePossible((VIDMM_RECYCLE_MULTIRANGE *)a2, v8);
  if ( v24 )
  {
    v24 = 0;
    DXGFASTMUTEX::Release((struct _KTHREAD **)v23);
  }
  if ( (__int64)VIDMM_RECYCLE_HEAP_MGR::_GlobalOutstandingDebouncedDecommit >= (__int64)((unsigned __int64)(unsigned int)dword_1C00764A0 << 20)
    || VIDMM_RECYCLE_HEAP_MGR::_GlobalOutstandingDebouncedUnlock >= (__int64)((unsigned __int64)(unsigned int)dword_1C00764A4 << 20) )
  {
    VIDMM_RECYCLE_HEAP_MGR::ProcessDebounceListsGlobally(1);
  }
}
