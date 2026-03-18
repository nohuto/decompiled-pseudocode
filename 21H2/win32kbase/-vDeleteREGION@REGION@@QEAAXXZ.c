/*
 * XREFs of ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C0023E50
 * Callers:
 *     GreDeleteObject @ 0x1C0023690 (GreDeleteObject.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0023C00 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??1RGNMEMOBJ@@QEAA@XZ @ 0x1C0023D3C (--1RGNMEMOBJ@@QEAA@XZ.c)
 *     NtGdiDeleteObjectApp @ 0x1C0024430 (NtGdiDeleteObjectApp.c)
 *     ??0RGNMEMOBJ@@QEAA@HH@Z @ 0x1C0025980 (--0RGNMEMOBJ@@QEAA@HH@Z.c)
 *     ?AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z @ 0x1C0025B30 (-AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z.c)
 *     ??0RGNMEMOBJ@@QEAA@XZ @ 0x1C0025E10 (--0RGNMEMOBJ@@QEAA@XZ.c)
 *     ?bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z @ 0x1C0026860 (-bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z.c)
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x1C0027E60 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     GreCreateRectRgnIndirect @ 0x1C0028800 (GreCreateRectRgnIndirect.c)
 *     ?vDeleteDCInternalWorker@@YAXPEAVXDCOBJ@@H@Z @ 0x1C002F514 (-vDeleteDCInternalWorker@@YAXPEAVXDCOBJ@@H@Z.c)
 *     GreExtCreateRegion @ 0x1C00311B0 (GreExtCreateRegion.c)
 *     ?vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x1C0032680 (-vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 *     ?vUpdateScaledRegions@DC@@QEAAXXZ @ 0x1C0062E20 (-vUpdateScaledRegions@DC@@QEAAXXZ.c)
 *     ?bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ @ 0x1C008E200 (-bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ.c)
 *     GreCreateRectRgn @ 0x1C008E350 (GreCreateRectRgn.c)
 *     NtGdiCreateRectRgn @ 0x1C008E4C0 (NtGdiCreateRectRgn.c)
 *     ?InitializeFromRect@CRegion@@IEAAJAEBUtagRECT@@@Z @ 0x1C008EF30 (-InitializeFromRect@CRegion@@IEAAJAEBUtagRECT@@@Z.c)
 *     vRestoreRegion @ 0x1C00944C0 (vRestoreRegion.c)
 *     ?SetEmpty@CRegion@@UEAAXXZ @ 0x1C009AE20 (-SetEmpty@CRegion@@UEAAXXZ.c)
 *     ?SetFullRegion@CRegion@@UEAAXXZ @ 0x1C00B1AF0 (-SetFullRegion@CRegion@@UEAAXXZ.c)
 *     ?vCleanUp@W32PIDLOCK@@QEAAXXZ @ 0x1C00B2270 (-vCleanUp@W32PIDLOCK@@QEAAXXZ.c)
 *     GreCreatePolyPolygonRgnInternal @ 0x1C00CDB30 (GreCreatePolyPolygonRgnInternal.c)
 *     ?CleanUpRegion@@YAXPEAVREGION@@@Z @ 0x1C016B240 (-CleanUpRegion@@YAXPEAVREGION@@@Z.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C016D4E0 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
 *     ?vDuplicateAndScaleRegion@@YAXPEAVREGION@@PEAPEAV1@VPOINTFL@@@Z @ 0x1C016D8A0 (-vDuplicateAndScaleRegion@@YAXPEAVREGION@@PEAPEAV1@VPOINTFL@@@Z.c)
 *     ?vReleaseVis@DC@@QEAAXXZ @ 0x1C016D964 (-vReleaseVis@DC@@QEAAXXZ.c)
 *     EngCreateClip @ 0x1C0177EF0 (EngCreateClip.c)
 *     EngDeleteClip @ 0x1C0177FB0 (EngDeleteClip.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ?PlatformAbort@NSInstrumentation@@YAXW4PLATFORMABORTREASON@1@PEAX11@Z @ 0x1C0179900 (-PlatformAbort@NSInstrumentation@@YAXW4PLATFORMABORTREASON@1@PEAX11@Z.c)
 *     ?Remove@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z @ 0x1C017B0D8 (-Remove@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z.c)
 *     ?Remove@?$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@QEAA_NQEBVCBackTraceStorageUnit@2@@Z @ 0x1C017BA3C (-Remove@-$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBa.c)
 */

void __fastcall REGION::vDeleteREGION(PSLIST_ENTRY ListEntry)
{
  struct _SLIST_ENTRY *v2; // rdi
  void *v3; // rbx
  NSInstrumentation::CPrioritizedWriterLock **v4; // rbp
  __int64 v5; // rbx
  __int64 v6; // rdi
  _QWORD *i; // r14
  __int64 *v8; // r15
  unsigned __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // rdx
  unsigned __int64 v12; // rbp
  __int64 v13; // rbx
  ULONG v14; // ebp
  NSInstrumentation::CPointerHashTable *v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rbx
  struct NSInstrumentation::CBackTraceStorageUnit *v18; // [rsp+50h] [rbp+8h] BYREF

  if ( !ListEntry || ListEntry == (PSLIST_ENTRY)prgnDefault )
    return;
  v2 = (struct _SLIST_ENTRY *)*((_QWORD *)&ListEntry[5].Next + 1);
  if ( v2 )
  {
    if ( *((_DWORD *)&ListEntry[1].Next + 2) != 112 )
    {
      if ( *((_DWORD *)&ListEntry[1].Next + 2) > 0x70u )
        NSInstrumentation::CLeakTrackingAllocator::Free(
          (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
          v2);
      goto LABEL_8;
    }
    v3 = RGNMEMOBJ::s_pSCANLookAsideList;
    v4 = (NSInstrumentation::CPrioritizedWriterLock **)gpLeakTrackingAllocator;
    if ( *(_BYTE *)RGNMEMOBJ::s_pSCANLookAsideList )
    {
      v15 = (NSInstrumentation::CPointerHashTable *)*((_QWORD *)gpLeakTrackingAllocator + 6);
      --v2;
      v18 = 0LL;
      if ( !NSInstrumentation::CPointerHashTable::Remove(v15, v2, (void **)&v18) )
      {
LABEL_8:
        *((_QWORD *)&ListEntry[5].Next + 1) = 0LL;
        goto LABEL_9;
      }
      NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucket,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::Remove(
        v4[8],
        v18);
    }
    ++*((_DWORD *)v3 + 11);
    if ( ExQueryDepthSList((PSLIST_HEADER)v3 + 1) >= *((_WORD *)v3 + 16) )
    {
      ++*((_DWORD *)v3 + 12);
      (*((void (__fastcall **)(struct _SLIST_ENTRY *))v3 + 9))(v2);
    }
    else
    {
      ExpInterlockedPushEntrySList((PSLIST_HEADER)v3 + 1, v2);
    }
    goto LABEL_8;
  }
LABEL_9:
  v5 = *((_QWORD *)gpTypeIsolation + 7);
  if ( v5 )
  {
    if ( *(_BYTE *)(v5 + 36) )
    {
      memset(ListEntry, 0, 0x70uLL);
      v17 = *(_QWORD *)(v5 + 24);
      ++*(_DWORD *)(v17 + 28);
      if ( ExQueryDepthSList((PSLIST_HEADER)v17) < *(_WORD *)(v17 + 16) )
      {
        ExpInterlockedPushEntrySList((PSLIST_HEADER)v17, ListEntry);
      }
      else
      {
        ++*(_DWORD *)(v17 + 32);
        (*(void (__fastcall **)(PSLIST_ENTRY))(v17 + 56))(ListEntry);
      }
    }
    else
    {
      v6 = *(_QWORD *)(v5 + 16);
      KeEnterCriticalRegion();
      ExAcquirePushLockSharedEx(v6, 0LL);
      for ( i = *(_QWORD **)v5; i != (_QWORD *)v5; i = (_QWORD *)*i )
      {
        v8 = (__int64 *)i[4];
        v9 = v8[1];
        v10 = v8[2];
        if ( (unsigned __int64)ListEntry >= (v10 ^ v9) && (unsigned __int64)ListEntry < (v10 ^ v9) + 28672 )
        {
          v11 = (((unsigned __int16)ListEntry & 0xFFF) * (unsigned __int128)0x2492492492492493uLL) >> 64;
          v12 = (v11 + (((unsigned __int64)((unsigned __int16)ListEntry & 0xFFF) - v11) >> 1)) >> 6;
          if ( ((unsigned __int16)ListEntry & 0xFFF) == 112 * v12 )
          {
            if ( RtlTestBit(
                   (PRTL_BITMAP)(v10 ^ v8[3]),
                   v12 + 36 * (((unsigned int)ListEntry - ((unsigned int)v9 ^ (unsigned int)v10)) >> 12)) )
            {
              v13 = *v8;
              KeEnterCriticalRegion();
              ExAcquirePushLockExclusiveEx(v13, 0LL);
              v14 = v12 + 36 * ((unsigned int)((_DWORD)ListEntry - (*((_DWORD *)v8 + 4) ^ *((_DWORD *)v8 + 2))) >> 12);
              RtlClearBit((PRTL_BITMAP)(v8[2] ^ v8[3]), v14);
              *ListEntry = 0LL;
              ListEntry[1] = 0LL;
              ListEntry[2] = 0LL;
              ListEntry[3] = 0LL;
              ListEntry[4] = 0LL;
              ListEntry[5] = 0LL;
              ListEntry[6] = 0LL;
              *((_DWORD *)v8 + 8) = v14;
              ExReleasePushLockExclusiveEx(v13, 0LL);
              KeLeaveCriticalRegion();
              ExReleasePushLockSharedEx(v6, 0LL);
              KeLeaveCriticalRegion();
              return;
            }
            v16 = 1LL;
          }
          else
          {
            v16 = 2LL;
          }
          NSInstrumentation::PlatformAbort(v16, ListEntry, 0LL);
        }
      }
      ExReleasePushLockSharedEx(v6, 0LL);
      KeLeaveCriticalRegion();
      NSInstrumentation::PlatformAbort(3LL, ListEntry, 0LL);
    }
  }
}
