/*
 * XREFs of ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0023C00
 * Callers:
 *     ?bCompute@DC@@QEAAHXZ @ 0x1C001C600 (-bCompute@DC@@QEAAHXZ.c)
 *     ?bCopy@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1C00266E0 (-bCopy@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     ?bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z @ 0x1C0026860 (-bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z.c)
 *     ?bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z @ 0x1C0027DA0 (-bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z.c)
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x1C0027E60 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     GreExtCreateRegion @ 0x1C00311B0 (GreExtCreateRegion.c)
 *     ?bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z @ 0x1C003353C (-bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z.c)
 *     GreCombineRgn @ 0x1C006EFF0 (GreCombineRgn.c)
 *     ?InternalCombine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z @ 0x1C008EC08 (-InternalCombine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z.c)
 *     ?AddRect@CRegion@@UEAAJAEBUtagRECT@@@Z @ 0x1C008EE00 (-AddRect@CRegion@@UEAAJAEBUtagRECT@@@Z.c)
 *     ?iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z @ 0x1C00968C0 (-iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z.c)
 *     ?bExpand@RGNOBJ@@QEAAHK@Z @ 0x1C00A8FE0 (-bExpand@RGNOBJ@@QEAAHK@Z.c)
 *     ?bCreate@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z @ 0x1C00CC200 (-bCreate@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z.c)
 *     ?iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z @ 0x1C00CC88C (-iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C016D4E0 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
 *     EngUpdateDeviceSurface @ 0x1C016EED0 (EngUpdateDeviceSurface.c)
 *     GreIntersectVisRect @ 0x1C0177FE0 (GreIntersectVisRect.c)
 * Callees:
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C0023E50 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ?Free@?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C0024250 (-Free@-$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     ?Remove@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z @ 0x1C017B0D8 (-Remove@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z.c)
 *     ?Remove@?$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@QEAA_NQEBVCBackTraceStorageUnit@2@@Z @ 0x1C017BA3C (-Remove@-$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBa.c)
 */

void __fastcall RGNMEMOBJTMP::~RGNMEMOBJTMP(RGNMEMOBJTMP *this)
{
  __int64 v1; // rbx
  __int64 *v3; // rdi
  __int64 *v4; // rax
  __int64 **v5; // rcx
  struct _SLIST_ENTRY *v6; // rdi
  void *v7; // rsi
  NSInstrumentation::CPrioritizedWriterLock **v8; // rbp
  __int64 v9; // rcx
  NSInstrumentation::CPointerHashTable *v10; // rcx
  struct NSInstrumentation::CBackTraceStorageUnit *v11; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(_QWORD *)this;
  if ( *(_QWORD *)this )
  {
    v3 = (__int64 *)(v1 + 48);
    if ( v1 == -48 )
      goto LABEL_6;
    KeEnterCriticalRegion();
    v4 = (__int64 *)*v3;
    if ( *(__int64 **)(*v3 + 8) != v3 || (v5 = *(__int64 ***)(v1 + 56), *v5 != v3) )
      __fastfail(3u);
    *v5 = v4;
    v4[1] = (__int64)v5;
    *(_QWORD *)(v1 + 56) = v1 + 48;
    *v3 = (__int64)v3;
    KeLeaveCriticalRegion();
    v1 = *(_QWORD *)this;
    if ( *(_QWORD *)this )
    {
LABEL_6:
      if ( (struct REGION *)v1 != prgnDefault )
      {
        v6 = *(struct _SLIST_ENTRY **)(v1 + 88);
        if ( !v6 )
          goto LABEL_13;
        if ( *(_DWORD *)(v1 + 24) != 112 )
        {
          if ( *(_DWORD *)(v1 + 24) > 0x70u )
            NSInstrumentation::CLeakTrackingAllocator::Free(
              (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
              *(void **)(v1 + 88));
          goto LABEL_12;
        }
        v7 = RGNMEMOBJ::s_pSCANLookAsideList;
        v8 = (NSInstrumentation::CPrioritizedWriterLock **)gpLeakTrackingAllocator;
        if ( *(_BYTE *)RGNMEMOBJ::s_pSCANLookAsideList )
        {
          v10 = (NSInstrumentation::CPointerHashTable *)*((_QWORD *)gpLeakTrackingAllocator + 6);
          v11 = 0LL;
          if ( !NSInstrumentation::CPointerHashTable::Remove(v10, --v6, (void **)&v11) )
          {
LABEL_12:
            *(_QWORD *)(v1 + 88) = 0LL;
LABEL_13:
            v9 = *((_QWORD *)gpTypeIsolation + 7);
            if ( v9 )
              NSInstrumentation::CTypeIsolation<28672,112>::Free(v9, v1);
            goto LABEL_15;
          }
          NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucket,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::Remove(
            v8[8],
            v11);
        }
        ++*((_DWORD *)v7 + 11);
        if ( ExQueryDepthSList((PSLIST_HEADER)v7 + 1) >= *((_WORD *)v7 + 16) )
        {
          ++*((_DWORD *)v7 + 12);
          (*((void (__fastcall **)(struct _SLIST_ENTRY *))v7 + 9))(v6);
        }
        else
        {
          ExpInterlockedPushEntrySList((PSLIST_HEADER)v7 + 1, v6);
        }
        goto LABEL_12;
      }
    }
  }
LABEL_15:
  *(_QWORD *)this = 0LL;
  if ( *((_DWORD *)this + 2) == 1 )
  {
    REGION::vDeleteREGION(0LL);
    *(_QWORD *)this = 0LL;
  }
}
