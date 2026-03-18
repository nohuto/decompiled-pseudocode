/*
 * XREFs of ?AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z @ 0x1C0025B30
 * Callers:
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C0025A8C (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ??0RGNMEMOBJ@@QEAA@K@Z @ 0x1C0027720 (--0RGNMEMOBJ@@QEAA@K@Z.c)
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x1C0027E60 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     GreExtCreateRegion @ 0x1C00311B0 (GreExtCreateRegion.c)
 *     ?vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x1C0032680 (-vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 *     ?bFastFill@RGNMEMOBJ@@AEAAHAEAVEPATHOBJ@@JPEAU_POINTFIX@@@Z @ 0x1C0032F48 (-bFastFill@RGNMEMOBJ@@AEAAHAEAVEPATHOBJ@@JPEAU_POINTFIX@@@Z.c)
 *     ?bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z @ 0x1C003353C (-bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z.c)
 *     ?InternalCombine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z @ 0x1C008EC08 (-InternalCombine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z.c)
 *     ??0RGNMEMOBJ@@QEAA@W4DestructorDisposition@0@@Z @ 0x1C009C430 (--0RGNMEMOBJ@@QEAA@W4DestructorDisposition@0@@Z.c)
 * Callees:
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C0023E50 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ?Allocate@?$CSectionBitmapAllocator@$0HAAA@$0HA@@NSInstrumentation@@QEAAPEAXXZ @ 0x1C00260C0 (-Allocate@-$CSectionBitmapAllocator@$0HAAA@$0HA@@NSInstrumentation@@QEAAPEAXXZ.c)
 *     ?Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C002FC74 (-Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     ?Create@?$CSectionEntry@$0HAAA@$0HA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1C008D414 (-Create@-$CSectionEntry@$0HAAA@$0HA@@NSInstrumentation@@SAPEAV12@XZ.c)
 *     ??1?$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA@XZ @ 0x1C00BB54C (--1-$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 */

struct REGION *__fastcall RGNMEMOBJ::AllocateRegion(unsigned int a1)
{
  unsigned __int64 v1; // rbp
  __int64 v2; // r14
  __int64 v3; // rbx
  __int64 v4; // rsi
  _QWORD *v5; // r15
  __int64 *v6; // rsi
  __int64 v7; // rdi
  ULONG v8; // r8d
  ULONG ClearBits; // r12d
  unsigned int v10; // eax
  unsigned int v11; // r13d
  __int64 v12; // rsi
  PSLIST_ENTRY v13; // rdi
  union _SLIST_HEADER *v14; // rbp
  PVOID v15; // r14
  struct _SLIST_ENTRY *v16; // rbx
  __int64 (__fastcall *Alignment)(__int64, __int64, __int64); // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rcx
  __int64 v22; // rax
  _QWORD *v23; // rdi
  __int64 v24; // rbx
  _QWORD *v25; // rcx
  __int64 v26; // rbx
  PVOID BackTrace[20]; // [rsp+20h] [rbp-C8h] BYREF
  void *v28; // [rsp+F8h] [rbp+10h]

  v1 = a1;
  v2 = *((_QWORD *)gpTypeIsolation + 7);
  if ( !v2 )
    return 0LL;
  if ( *(_BYTE *)(v2 + 36) )
  {
    v26 = *(_QWORD *)(v2 + 24);
    ++*(_DWORD *)(v26 + 20);
    v13 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v26);
    if ( !v13 )
    {
      ++*(_DWORD *)(v26 + 24);
      v13 = (PSLIST_ENTRY)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(v26 + 48))(
                            *(unsigned int *)(v26 + 36),
                            *(unsigned int *)(v26 + 44),
                            *(unsigned int *)(v26 + 40));
    }
    goto LABEL_12;
  }
  v3 = *(_QWORD *)(v2 + 16);
  v4 = 0LL;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v3, 0LL);
  v5 = *(_QWORD **)v2;
  if ( *(_QWORD *)v2 == v2 )
    goto LABEL_29;
  do
  {
    v6 = (__int64 *)v5[4];
    v7 = *v6;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v7, 0LL);
    v8 = 0;
    if ( *((_DWORD *)v6 + 8) < 0xFCu )
      v8 = *((_DWORD *)v6 + 8);
    ClearBits = RtlFindClearBits((PRTL_BITMAP)(v6[2] ^ v6[3]), 1u, v8);
    if ( ClearBits == -1 )
    {
LABEL_21:
      ExReleasePushLockExclusiveEx(v7, 0LL);
      KeLeaveCriticalRegion();
      goto LABEL_22;
    }
    v10 = *((_DWORD *)v6 + 9);
    v11 = ClearBits / 0x24;
    if ( v10 < 7 && v11 >= v10 )
    {
      v28 = (void *)((v11 << 12) + (v6[2] ^ v6[1]));
      if ( (int)MmCommitSessionMappedView(v28, 4096LL) < 0 )
        goto LABEL_21;
      memset(v28, 0, 0x1000uLL);
      ++*((_DWORD *)v6 + 9);
    }
    RtlTestBit((PRTL_BITMAP)(v6[2] ^ v6[3]), ClearBits);
    RtlSetBit((PRTL_BITMAP)(v6[2] ^ v6[3]), ClearBits);
    if ( ++*((_DWORD *)v6 + 8) >= 0xFCu )
      *((_DWORD *)v6 + 8) = 0;
    v12 = (v11 << 12) + (v6[2] ^ v6[1]);
    ExReleasePushLockExclusiveEx(v7, 0LL);
    KeLeaveCriticalRegion();
    v13 = (PSLIST_ENTRY)(v12 + 112 * (ClearBits % 0x24));
    if ( v13 )
    {
      ExReleasePushLockSharedEx(v3, 0LL);
      KeLeaveCriticalRegion();
      goto LABEL_12;
    }
LABEL_22:
    v5 = (_QWORD *)*v5;
  }
  while ( v5 != (_QWORD *)v2 );
  v4 = 0LL;
LABEL_29:
  ExReleasePushLockSharedEx(v3, 0LL);
  KeLeaveCriticalRegion();
  v22 = NSInstrumentation::CSectionEntry<28672,112>::Create();
  v23 = (_QWORD *)v22;
  if ( v22 )
  {
    v4 = NSInstrumentation::CSectionBitmapAllocator<28672,112>::Allocate(*(_QWORD *)(v22 + 32));
    if ( v4 )
    {
      v24 = *(_QWORD *)(v2 + 16);
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v24, 0LL);
      v25 = *(_QWORD **)(v2 + 8);
      if ( *v25 != v2 )
        __fastfail(3u);
      v23[1] = v25;
      *v23 = v2;
      *v25 = v23;
      *(_DWORD *)(v2 + 32) += 252;
      *(_QWORD *)(v2 + 8) = v23;
      ExReleasePushLockExclusiveEx(v24, 0LL);
      KeLeaveCriticalRegion();
    }
    else
    {
      NSInstrumentation::CSectionEntry<24576,96>::~CSectionEntry<24576,96>(v23);
      ExFreePoolWithTag(v23, 0);
    }
  }
  v13 = (PSLIST_ENTRY)v4;
LABEL_12:
  if ( v13 )
  {
    if ( (_DWORD)v1 == 112 )
    {
      v14 = (union _SLIST_HEADER *)RGNMEMOBJ::s_pSCANLookAsideList;
      v15 = gpLeakTrackingAllocator;
      ++*((_DWORD *)RGNMEMOBJ::s_pSCANLookAsideList + 9);
      v16 = ExpInterlockedPopEntrySList(v14 + 1);
      if ( v16
        || (Alignment = (__int64 (__fastcall *)(__int64, __int64, __int64))v14[4].Alignment,
            v19 = *((unsigned int *)&v14[3].HeaderX64 + 3),
            v20 = *((unsigned int *)&v14[3].HeaderX64 + 2),
            v21 = *((unsigned int *)&v14[3].HeaderX64 + 1),
            ++*((_DWORD *)&v14[2].HeaderX64 + 2),
            (v16 = (struct _SLIST_ENTRY *)Alignment(v21, v19, v20)) != 0LL) )
      {
        if ( LOBYTE(v14->Alignment) )
        {
          memset(BackTrace, 0, sizeof(BackTrace));
          RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
          if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                  v15,
                                  v16,
                                  BackTrace) )
          {
            ++v16;
          }
          else
          {
            ++*((_DWORD *)&v14[2].HeaderX64 + 3);
            if ( ExQueryDepthSList(v14 + 1) < LOWORD(v14[2].Alignment) )
            {
              ExpInterlockedPushEntrySList(v14 + 1, v16);
            }
            else
            {
              ++LODWORD(v14[3].Alignment);
              ((void (__fastcall *)(struct _SLIST_ENTRY *))v14[4].Region)(v16);
            }
            v16 = 0LL;
          }
        }
      }
      *((_QWORD *)&v13[5].Next + 1) = v16;
    }
    else if ( (unsigned int)v1 > 0x70 )
    {
      *((_QWORD *)&v13[5].Next + 1) = NSInstrumentation::CLeakTrackingAllocator::Allocate(
                                        (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
                                        0x104uLL,
                                        v1,
                                        0x6E637347u);
    }
    if ( !*((_QWORD *)&v13[5].Next + 1) )
    {
      REGION::vDeleteREGION(v13);
      return 0LL;
    }
  }
  return (struct REGION *)v13;
}
