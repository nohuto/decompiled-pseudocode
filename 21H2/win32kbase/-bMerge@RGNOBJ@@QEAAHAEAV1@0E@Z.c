/*
 * XREFs of ?bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z @ 0x1C0026860
 * Callers:
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1C0024B20 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     ?InternalCombine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z @ 0x1C008EC08 (-InternalCombine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z.c)
 *     ?AddRect@CRegion@@UEAAJAEBUtagRECT@@@Z @ 0x1C008EE00 (-AddRect@CRegion@@UEAAJAEBUtagRECT@@@Z.c)
 *     ?iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z @ 0x1C00CC88C (-iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z.c)
 *     EngUpdateDeviceSurface @ 0x1C016EED0 (EngUpdateDeviceSurface.c)
 * Callees:
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0023C00 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C0023E50 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ?Allocate@?$CSectionBitmapAllocator@$0HAAA@$0HA@@NSInstrumentation@@QEAAPEAXXZ @ 0x1C00260C0 (-Allocate@-$CSectionBitmapAllocator@$0HAAA@$0HA@@NSInstrumentation@@QEAAPEAXXZ.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?AllocateFromPagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAXPEAX@Z @ 0x1C008B020 (-AllocateFromPagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAXPEAX@Z.c)
 *     EngSetLastError @ 0x1C008B610 (EngSetLastError.c)
 *     ?Create@?$CSectionEntry@$0HAAA@$0HA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1C008D414 (-Create@-$CSectionEntry@$0HAAA@$0HA@@NSInstrumentation@@SAPEAV12@XZ.c)
 *     ??1?$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA@XZ @ 0x1C00BB54C (--1-$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA@XZ.c)
 *     memcmp @ 0x1C00DD6E0 (memcmp.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     memmove @ 0x1C00DE8C0 (memmove.c)
 *     ?PlatformAbort@NSInstrumentation@@YAXW4PLATFORMABORTREASON@1@PEAX11@Z @ 0x1C0179900 (-PlatformAbort@NSInstrumentation@@YAXW4PLATFORMABORTREASON@1@PEAX11@Z.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 *     ?Remove@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z @ 0x1C017B0D8 (-Remove@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z.c)
 *     ?Remove@?$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@QEAA_NQEBVCBackTraceStorageUnit@2@@Z @ 0x1C017BA3C (-Remove@-$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBa.c)
 */

__int64 __fastcall RGNOBJ::bMerge(RGNOBJ *this, struct RGNOBJ *a2, struct RGNOBJ *a3, unsigned __int8 a4)
{
  unsigned int *v4; // r12
  RGNOBJ *v5; // rbp
  int *v6; // r15
  int *v7; // r14
  __int64 v8; // rdx
  unsigned int *v9; // rbx
  unsigned int v10; // r8d
  signed int v11; // edi
  _DWORD *v12; // rsi
  int *v13; // r8
  signed int v14; // ecx
  int *v15; // r13
  signed int v16; // edx
  unsigned __int8 v17; // r11
  unsigned __int8 v18; // al
  int v19; // ecx
  int v20; // r10d
  int v21; // edx
  __int64 v22; // r9
  unsigned int v23; // eax
  _DWORD *v24; // rcx
  signed int v25; // eax
  signed int v26; // eax
  signed int v27; // edx
  signed int v28; // eax
  int v29; // eax
  _BYTE *v30; // rax
  unsigned int v32; // eax
  unsigned int v33; // ecx
  unsigned int v34; // edi
  _QWORD *v35; // rsi
  __int64 v36; // rdi
  struct _SLIST_ENTRY *v37; // rbx
  __int64 v38; // rax
  __int64 *v39; // rsi
  __int64 v40; // rbx
  ULONG v41; // r8d
  ULONG ClearBits; // r13d
  unsigned int v43; // eax
  unsigned int v44; // ecx
  __int64 v45; // rsi
  PSLIST_ENTRY v46; // r13
  NSInstrumentation::CLeakTrackingAllocator *v47; // rcx
  PVOID v48; // rsi
  __int64 v49; // rdx
  __int64 Pool2; // rbx
  __int64 v51; // rax
  struct _KTHREAD *CurrentThread; // rdi
  _QWORD *ThreadWin32Thread; // rax
  struct _SLIST_ENTRY *v54; // rbx
  __int64 v55; // rdi
  __int64 *v56; // rax
  __int64 v57; // rcx
  struct _SLIST_ENTRY **v58; // rax
  PSLIST_ENTRY v59; // rbx
  int v60; // ecx
  int v61; // ecx
  _QWORD *v62; // rdi
  bool v63; // zf
  _QWORD *v64; // rcx
  _QWORD *v65; // rax
  struct _SLIST_ENTRY *Next; // rcx
  PSLIST_ENTRY *v67; // rax
  unsigned __int64 v68; // rsi
  _QWORD *v69; // rax
  unsigned __int64 v70; // r13
  _QWORD *v71; // rbx
  __int64 v72; // rdi
  __int64 *v73; // rax
  __int64 v74; // rcx
  _QWORD *v75; // rax
  unsigned __int64 v76; // rax
  _QWORD *v77; // rbx
  __int64 v78; // rdi
  __int64 *v79; // rax
  __int64 v80; // rcx
  _QWORD *v81; // rax
  _QWORD *v82; // rbx
  __int64 v83; // rcx
  _QWORD *v84; // rax
  struct _SLIST_ENTRY *v85; // rdi
  void *v86; // rbx
  NSInstrumentation::CPrioritizedWriterLock **v87; // r13
  __int64 v88; // r13
  __int64 v89; // rdi
  _QWORD *v90; // rbx
  __int64 *v91; // r13
  unsigned __int64 v92; // r8
  __int64 v93; // r9
  __int64 v94; // rdx
  unsigned __int64 v95; // r10
  __int64 v96; // rbx
  ULONG v97; // esi
  unsigned __int64 v98; // rbx
  __int64 v99; // rax
  _QWORD *v100; // rdi
  __int64 v101; // rbx
  _QWORD *v102; // rcx
  __int64 v103; // rbx
  __int64 v104; // rax
  int v105; // ebx
  __int64 CurrentThreadProcess; // rax
  NSInstrumentation::CPointerHashTable *v107; // rcx
  __int64 v108; // rcx
  __int64 v109; // rbx
  char v110; // [rsp+20h] [rbp-128h]
  BOOL v111; // [rsp+24h] [rbp-124h]
  int v112; // [rsp+28h] [rbp-120h]
  struct NSInstrumentation::CBackTraceStorageUnit *v113; // [rsp+30h] [rbp-118h] BYREF
  unsigned __int64 v114; // [rsp+38h] [rbp-110h] BYREF
  int v115; // [rsp+40h] [rbp-108h]
  void *v116; // [rsp+48h] [rbp-100h]
  _QWORD *v117; // [rsp+50h] [rbp-F8h]
  void *v118; // [rsp+58h] [rbp-F0h]
  PVOID BackTrace[29]; // [rsp+60h] [rbp-E8h] BYREF

  v4 = 0LL;
  v5 = this;
  v6 = *(int **)(*(_QWORD *)a2 + 88LL);
  v7 = *(int **)(*(_QWORD *)a3 + 88LL);
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 40LL)
                 - 4LL
                 - (unsigned int)(4 * *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 40LL) - 4LL) + 16)
                 + 12) == 0x7FFFFFFF
    && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a3 + 40LL)
                 - 4LL
                 - (unsigned int)(4 * *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a3 + 40LL) - 4LL) + 16)
                 + 12) == 0x7FFFFFFF )
  {
    *(_QWORD *)(*(_QWORD *)this + 40LL) = *(_QWORD *)(*(_QWORD *)this + 88LL);
    *(_DWORD *)(*(_QWORD *)this + 80LL) = 0;
    *(_DWORD *)(*(_QWORD *)this + 84LL) = 0;
    *(_DWORD *)(*(_QWORD *)this + 96LL) = 0x7FFFFFFF;
    *(_DWORD *)(*(_QWORD *)this + 100LL) = 0x7FFFFFFF;
    *(_DWORD *)(*(_QWORD *)this + 104LL) = 0x80000000;
    *(_DWORD *)(*(_QWORD *)this + 108LL) = 0x80000000;
    while ( 1 )
    {
      v8 = *(unsigned int *)(*(_QWORD *)v5 + 24LL);
      v9 = *(unsigned int **)(*(_QWORD *)v5 + 40LL);
      v10 = 4 * (*v6 + *v7) + 16;
      if ( v10 <= *(_DWORD *)(*(_QWORD *)v5 + 24LL) - *(_DWORD *)(*(_QWORD *)v5 + 80LL) )
        goto LABEL_5;
      v32 = 2 * v8;
      if ( (unsigned __int64)(2 * v8) > 0xFFFFFFFF )
        return 0LL;
      v33 = v32 + v10;
      if ( v32 + v10 < v32 )
        return 0LL;
      v34 = v33 + 1120;
      v112 = v33 + 1120;
      if ( v33 + 1120 < v33 )
        return 0LL;
      v115 = 0;
      if ( v34 < 0x70 )
      {
        v34 = 112;
        v112 = 112;
      }
      v35 = (_QWORD *)*((_QWORD *)gpTypeIsolation + 7);
      v117 = v35;
      if ( !v35 )
      {
        v46 = 0LL;
        goto LABEL_173;
      }
      if ( *((_BYTE *)v35 + 36) )
      {
        v103 = v35[3];
        ++*(_DWORD *)(v103 + 20);
        v46 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v103);
        if ( !v46 )
        {
          ++*(_DWORD *)(v103 + 24);
          v46 = (PSLIST_ENTRY)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(v103 + 48))(
                                *(unsigned int *)(v103 + 36),
                                *(unsigned int *)(v103 + 44),
                                *(unsigned int *)(v103 + 40));
        }
        goto LABEL_67;
      }
      v36 = v35[2];
      v37 = 0LL;
      v116 = 0LL;
      KeEnterCriticalRegion();
      ExAcquirePushLockSharedEx(v36, 0LL);
      v38 = *v35;
      v113 = (struct NSInstrumentation::CBackTraceStorageUnit *)v38;
      if ( (_QWORD *)v38 == v35 )
        goto LABEL_148;
      do
      {
        v39 = *(__int64 **)(v38 + 32);
        v40 = *v39;
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx(v40, 0LL);
        v41 = 0;
        if ( *((_DWORD *)v39 + 8) < 0xFCu )
          v41 = *((_DWORD *)v39 + 8);
        ClearBits = RtlFindClearBits((PRTL_BITMAP)(v39[3] ^ v39[2]), 1u, v41);
        if ( ClearBits == -1 )
        {
LABEL_59:
          ExReleasePushLockExclusiveEx(v40, 0LL);
          KeLeaveCriticalRegion();
          goto LABEL_60;
        }
        v43 = *((_DWORD *)v39 + 9);
        v44 = ClearBits / 0x24;
        if ( v43 < 7 && v44 >= v43 )
        {
          v118 = (void *)((v44 << 12) + (v39[2] ^ v39[1]));
          if ( (int)MmCommitSessionMappedView(v118, 4096LL) < 0 )
            goto LABEL_59;
          memset(v118, 0, 0x1000uLL);
          ++*((_DWORD *)v39 + 9);
        }
        RtlTestBit((PRTL_BITMAP)(v39[3] ^ v39[2]), ClearBits);
        RtlSetBit((PRTL_BITMAP)(v39[3] ^ v39[2]), ClearBits);
        if ( ++*((_DWORD *)v39 + 8) >= 0xFCu )
          *((_DWORD *)v39 + 8) = 0;
        v45 = ((ClearBits / 0x24) << 12) + (v39[2] ^ v39[1]);
        ExReleasePushLockExclusiveEx(v40, 0LL);
        KeLeaveCriticalRegion();
        v46 = (PSLIST_ENTRY)(v45 + 112 * (ClearBits % 0x24));
        if ( v46 )
        {
          ExReleasePushLockSharedEx(v36, 0LL);
          KeLeaveCriticalRegion();
          v34 = v112;
          goto LABEL_67;
        }
LABEL_60:
        v35 = v117;
        v38 = *(_QWORD *)v113;
        v113 = (struct NSInstrumentation::CBackTraceStorageUnit *)v38;
      }
      while ( (_QWORD *)v38 != v117 );
      v37 = (struct _SLIST_ENTRY *)v116;
LABEL_148:
      ExReleasePushLockSharedEx(v36, 0LL);
      KeLeaveCriticalRegion();
      v99 = NSInstrumentation::CSectionEntry<28672,112>::Create();
      v100 = (_QWORD *)v99;
      if ( v99 )
      {
        v116 = (void *)NSInstrumentation::CSectionBitmapAllocator<28672,112>::Allocate(*(__int64 **)(v99 + 32));
        v37 = (struct _SLIST_ENTRY *)v116;
        if ( v116 )
        {
          v101 = v35[2];
          KeEnterCriticalRegion();
          ExAcquirePushLockExclusiveEx(v101, 0LL);
          v102 = (_QWORD *)v35[1];
          if ( (_QWORD *)*v102 == v35 )
          {
            v100[1] = v102;
            *v100 = v35;
            *v102 = v100;
            *((_DWORD *)v35 + 8) += 252;
            v35[1] = v100;
            ExReleasePushLockExclusiveEx(v101, 0LL);
            KeLeaveCriticalRegion();
            v37 = (struct _SLIST_ENTRY *)v116;
            goto LABEL_153;
          }
LABEL_188:
          __fastfail(3u);
        }
        NSInstrumentation::CSectionEntry<24576,96>::~CSectionEntry<24576,96>(v100);
        ExFreePoolWithTag(v100, 0);
      }
LABEL_153:
      v34 = v112;
      v46 = v37;
LABEL_67:
      if ( v46 )
      {
        if ( v34 == 112 )
        {
          *((_QWORD *)&v46[5].Next + 1) = NSInstrumentation::CLeakTrackingAllocator::AllocateFromPagedLookasideList(
                                            v47,
                                            RGNMEMOBJ::s_pSCANLookAsideList);
        }
        else if ( v34 > 0x70 )
        {
          v48 = gpLeakTrackingAllocator;
          v49 = v34;
          if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x6E637347) != 0x6E637347
            || (v104 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
          {
LABEL_71:
            Pool2 = ExAllocatePool2(262LL, v34);
            goto LABEL_72;
          }
          while ( *((_DWORD *)gpLeakTrackingAllocator + v104) != 1852011335 )
          {
            if ( ++v104 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
              goto LABEL_71;
          }
          v110 = 0;
          if ( v34 < 0x1000uLL || (v34 & 0xFFF) != 0 )
          {
            v110 = 1;
            v49 = v34 + 16LL;
          }
          Pool2 = ExAllocatePool2(262LL, v49);
          if ( Pool2 )
          {
            memset(BackTrace, 0, 0xA0uLL);
            RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
            if ( v110 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
            {
              if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                      v48,
                                      Pool2,
                                      BackTrace) )
              {
                Pool2 += 16LL;
                goto LABEL_72;
              }
LABEL_170:
              ExFreePoolWithTag((PVOID)Pool2, 0);
              Pool2 = 0LL;
            }
            else if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                          v48,
                                          Pool2,
                                          BackTrace) )
            {
              goto LABEL_170;
            }
          }
LABEL_72:
          *((_QWORD *)&v46[5].Next + 1) = Pool2;
        }
        if ( !*((_QWORD *)&v46[5].Next + 1) )
        {
          REGION::vDeleteREGION(v46);
          v46 = 0LL;
LABEL_173:
          v114 = 0LL;
          goto LABEL_76;
        }
      }
      v114 = (unsigned __int64)v46;
      if ( v46 )
      {
        LODWORD(v46[5].Next) = 16;
        HIDWORD(v46[5].Next) = 1;
        v51 = *((_QWORD *)&v46[5].Next + 1);
        v46[6].Next = 0LL;
        *((_QWORD *)&v46[6].Next + 1) = 0LL;
        *(_DWORD *)v51 = 0;
        *(_DWORD *)(v51 + 4) = 0x80000000;
        *(_QWORD *)(v51 + 8) = 0x7FFFFFFFLL;
        *((_QWORD *)&v46[2].Next + 1) = v51 + 16;
        *((_DWORD *)&v46[1].Next + 2) = v34;
        *(struct _SLIST_ENTRY **)((char *)&v46[1].Next + 12) = 0LL;
        HIDWORD(v46[2].Next) = 0;
        *((_QWORD *)&v46[3].Next + 1) = v46 + 3;
        v46[3].Next = v46 + 3;
      }
LABEL_76:
      CurrentThread = KeGetCurrentThread();
      if ( (unsigned __int8)KeIsAttachedProcess()
        && (v105 = gSessionId,
            CurrentThreadProcess = PsGetCurrentThreadProcess(),
            v105 != (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess))
        || (ThreadWin32Thread = (_QWORD *)PsGetThreadWin32Thread(CurrentThread)) == 0LL
        || !*ThreadWin32Thread )
      {
        if ( v46 )
          goto LABEL_91;
LABEL_189:
        EngSetLastError(8u);
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v114);
        return 0LL;
      }
      if ( !v46 )
        goto LABEL_189;
      v54 = v46 + 3;
      if ( v46 != (PSLIST_ENTRY)-48LL )
      {
        KeEnterCriticalRegion();
        v55 = 0LL;
        v56 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
        if ( v56 )
          v55 = *v56;
        v46[4].Next = v46;
        *((_QWORD *)&v46[4].Next + 1) = CleanUpRegion;
        if ( v55 )
        {
          v57 = *(_QWORD *)(v55 + 88);
          v58 = (struct _SLIST_ENTRY **)(v55 + 88);
          if ( *(_QWORD *)(v57 + 8) != v55 + 88 )
            goto LABEL_188;
          v54->Next = (struct _SLIST_ENTRY *)v57;
          *((_QWORD *)&v46[3].Next + 1) = v58;
          *(_QWORD *)(v57 + 8) = v54;
          *v58 = v54;
        }
        else
        {
          *((_QWORD *)&v46[3].Next + 1) = v46 + 3;
          v54->Next = v54;
        }
        KeLeaveCriticalRegion();
      }
LABEL_91:
      LODWORD(v46[5].Next) = *(_DWORD *)(*(_QWORD *)v5 + 80LL);
      HIDWORD(v46[5].Next) = *(_DWORD *)(*(_QWORD *)v5 + 84LL);
      v46[6] = *(PSLIST_ENTRY)(*(_QWORD *)v5 + 96LL);
      memmove(
        *((void **)&v46[5].Next + 1),
        *(const void **)(*(_QWORD *)v5 + 88LL),
        *(unsigned int *)(*(_QWORD *)v5 + 80LL));
      v59 = v46 + 3;
      *((_QWORD *)&v46[2].Next + 1) = *((_QWORD *)&v46[5].Next + 1)
                                    + *(_DWORD *)(*(_QWORD *)v5 + 40LL)
                                    - *(_DWORD *)(*(_QWORD *)v5 + 88LL);
      v60 = *(_DWORD *)(*(_QWORD *)v5 + 32LL);
      *(_DWORD *)(*(_QWORD *)v5 + 32LL) = v46[2].Next;
      LODWORD(v46[2].Next) = v60;
      v61 = *(_DWORD *)(*(_QWORD *)v5 + 36LL);
      *(_DWORD *)(*(_QWORD *)v5 + 36LL) = HIDWORD(v46[2].Next);
      HIDWORD(v46[2].Next) = v61;
      v62 = (_QWORD *)(*(_QWORD *)v5 + 48LL);
      v63 = v59->Next == v59;
      v117 = (_QWORD *)*v62;
      v111 = v63;
      if ( v62 )
      {
        KeEnterCriticalRegion();
        v64 = (_QWORD *)*v62;
        if ( *(_QWORD **)(*v62 + 8LL) != v62 )
          goto LABEL_188;
        v65 = (_QWORD *)v62[1];
        if ( (_QWORD *)*v65 != v62 )
          goto LABEL_188;
        *v65 = v64;
        v64[1] = v65;
        v62[1] = v62;
        *v62 = v62;
        KeLeaveCriticalRegion();
      }
      if ( v46 != (PSLIST_ENTRY)-48LL )
      {
        KeEnterCriticalRegion();
        Next = v59->Next;
        if ( *(&v59->Next->Next + 1) != v59 )
          goto LABEL_188;
        v67 = (PSLIST_ENTRY *)*((_QWORD *)&v46[3].Next + 1);
        if ( *v67 != v59 )
          goto LABEL_188;
        *v67 = Next;
        *((_QWORD *)&Next->Next + 1) = v67;
        *((_QWORD *)&v46[3].Next + 1) = v46 + 3;
        v59->Next = v59;
        KeLeaveCriticalRegion();
      }
      v68 = *(_QWORD *)v5;
      *(_QWORD *)v5 = v46;
      v116 = (void *)v68;
      v114 = v68;
      v69 = (_QWORD *)PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( !v69 || !*v69 )
        goto LABEL_117;
      if ( v117 != v62 )
      {
        v70 = *(_QWORD *)v5;
        v71 = (_QWORD *)(*(_QWORD *)v5 + 48LL);
        if ( *(_QWORD *)v5 != -48LL )
        {
          KeEnterCriticalRegion();
          v72 = 0LL;
          v73 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
          if ( v73 )
            v72 = *v73;
          v71[2] = v70;
          v71[3] = CleanUpRegion;
          if ( v72 )
          {
            v74 = *(_QWORD *)(v72 + 88);
            v75 = (_QWORD *)(v72 + 88);
            if ( *(_QWORD *)(v74 + 8) != v72 + 88 )
              goto LABEL_188;
            *v71 = v74;
            v71[1] = v75;
            *(_QWORD *)(v74 + 8) = v71;
            *v75 = v71;
          }
          else
          {
            v71[1] = v71;
            *v71 = v71;
          }
          KeLeaveCriticalRegion();
        }
      }
      if ( !v111 )
      {
        v76 = v114;
        v77 = (_QWORD *)(v114 + 48);
        if ( v114 != -48LL )
        {
          KeEnterCriticalRegion();
          v78 = 0LL;
          v79 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
          if ( v79 )
            v78 = *v79;
          v77[2] = v68;
          v77[3] = CleanUpRegion;
          if ( v78 )
          {
            v80 = *(_QWORD *)(v78 + 88);
            v81 = (_QWORD *)(v78 + 88);
            if ( *(_QWORD *)(v80 + 8) != v78 + 88 )
              goto LABEL_188;
            *v77 = v80;
            v77[1] = v81;
            *(_QWORD *)(v80 + 8) = v77;
            *v81 = v77;
          }
          else
          {
            v77[1] = v77;
            *v77 = v77;
          }
          KeLeaveCriticalRegion();
          goto LABEL_117;
        }
      }
      else
      {
LABEL_117:
        v76 = v114;
      }
      if ( v76 )
      {
        v82 = (_QWORD *)(v76 + 48);
        if ( v76 != -48LL )
        {
          KeEnterCriticalRegion();
          v83 = *v82;
          if ( *(_QWORD **)(*v82 + 8LL) != v82 )
            goto LABEL_188;
          v84 = (_QWORD *)v82[1];
          if ( (_QWORD *)*v84 != v82 )
            goto LABEL_188;
          *v84 = v83;
          *(_QWORD *)(v83 + 8) = v84;
          v82[1] = v82;
          *v82 = v82;
          KeLeaveCriticalRegion();
        }
      }
      if ( !v68 || (struct REGION *)v68 == prgnDefault )
        goto LABEL_139;
      v85 = *(struct _SLIST_ENTRY **)(v68 + 88);
      if ( v85 )
      {
        if ( *(_DWORD *)(v68 + 24) == 112 )
        {
          v86 = RGNMEMOBJ::s_pSCANLookAsideList;
          v87 = (NSInstrumentation::CPrioritizedWriterLock **)gpLeakTrackingAllocator;
          if ( *(_BYTE *)RGNMEMOBJ::s_pSCANLookAsideList )
          {
            v107 = (NSInstrumentation::CPointerHashTable *)*((_QWORD *)gpLeakTrackingAllocator + 6);
            --v85;
            v113 = 0LL;
            if ( NSInstrumentation::CPointerHashTable::Remove(v107, v85, (void **)&v113) )
            {
              NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucket,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::Remove(
                v87[8],
                v113);
              goto LABEL_128;
            }
          }
          else
          {
LABEL_128:
            ++*((_DWORD *)v86 + 11);
            if ( ExQueryDepthSList((PSLIST_HEADER)v86 + 1) >= *((_WORD *)v86 + 16) )
            {
              ++*((_DWORD *)v86 + 12);
              (*((void (__fastcall **)(struct _SLIST_ENTRY *))v86 + 9))(v85);
            }
            else
            {
              ExpInterlockedPushEntrySList((PSLIST_HEADER)v86 + 1, v85);
            }
          }
        }
        else if ( *(_DWORD *)(v68 + 24) > 0x70u )
        {
          NSInstrumentation::CLeakTrackingAllocator::Free(
            (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
            *(void **)(v68 + 88));
        }
        *(_QWORD *)(v68 + 88) = 0LL;
      }
      v88 = *((_QWORD *)gpTypeIsolation + 7);
      v117 = (_QWORD *)v88;
      if ( v88 )
      {
        if ( *(_BYTE *)(v88 + 36) )
        {
          memset((void *)v68, 0, 0x70uLL);
          v109 = *(_QWORD *)(v88 + 24);
          ++*(_DWORD *)(v109 + 28);
          if ( ExQueryDepthSList((PSLIST_HEADER)v109) < *(_WORD *)(v109 + 16) )
          {
            ExpInterlockedPushEntrySList((PSLIST_HEADER)v109, (PSLIST_ENTRY)v68);
          }
          else
          {
            ++*(_DWORD *)(v109 + 32);
            (*(void (__fastcall **)(unsigned __int64))(v109 + 56))(v68);
          }
          goto LABEL_139;
        }
        v89 = *(_QWORD *)(v88 + 16);
        KeEnterCriticalRegion();
        ExAcquirePushLockSharedEx(v89, 0LL);
        v90 = *(_QWORD **)v88;
        if ( *(_QWORD *)v88 == v88 )
        {
LABEL_184:
          ExReleasePushLockSharedEx(v89, 0LL);
          KeLeaveCriticalRegion();
          NSInstrumentation::PlatformAbort(3LL, v68, 0LL);
          goto LABEL_139;
        }
        while ( 1 )
        {
          v91 = (__int64 *)v90[4];
          v92 = v91[1];
          v93 = v91[2];
          if ( v68 >= (v93 ^ v92) && v68 < (v93 ^ v92) + 28672 )
          {
            v94 = ((v68 & 0xFFF) * (unsigned __int128)0x2492492492492493uLL) >> 64;
            v95 = (v94 + (((v68 & 0xFFF) - v94) >> 1)) >> 6;
            v118 = (void *)v95;
            if ( (v68 & 0xFFF) == 112 * v95 )
            {
              if ( RtlTestBit(
                     (PRTL_BITMAP)(v93 ^ v91[3]),
                     v95 + 36 * (((unsigned int)v68 - ((unsigned int)v93 ^ (unsigned int)v92)) >> 12)) )
              {
                v96 = *v91;
                KeEnterCriticalRegion();
                ExAcquirePushLockExclusiveEx(v96, 0LL);
                v97 = (_DWORD)v118 + 36 * ((unsigned int)(v68 - (*((_DWORD *)v91 + 4) ^ *((_DWORD *)v91 + 2))) >> 12);
                RtlClearBit((PRTL_BITMAP)(v91[2] ^ v91[3]), v97);
                memset(v116, 0, 0x70uLL);
                *((_DWORD *)v91 + 8) = v97;
                ExReleasePushLockExclusiveEx(v96, 0LL);
                KeLeaveCriticalRegion();
                ExReleasePushLockSharedEx(v89, 0LL);
                KeLeaveCriticalRegion();
                break;
              }
              v108 = 1LL;
            }
            else
            {
              v108 = 2LL;
            }
            NSInstrumentation::PlatformAbort(v108, v68, 0LL);
          }
          v90 = (_QWORD *)*v90;
          if ( v90 == v117 )
            goto LABEL_184;
        }
      }
LABEL_139:
      v98 = *(_QWORD *)v5;
      v114 = 0LL;
      v9 = *(unsigned int **)(v98 + 40);
      if ( v4 )
        v4 = &v9[-*(v9 - 1) - 4];
LABEL_5:
      v11 = v6[2];
      v12 = v9 + 3;
      v13 = v6 + 3;
      v14 = v7[1];
      v15 = v7 + 3;
      v16 = v6[1];
      v17 = a4;
      if ( v11 >= v7[2] )
        v11 = v7[2];
      v9[2] = v11;
      v18 = 1;
      if ( v16 <= v14 )
        v16 = v14;
      v9[1] = v16;
      v19 = *v6;
      v20 = *v7;
      *v9 = 0;
      while ( 2 )
      {
        if ( v19 )
        {
          v21 = *v13;
          v22 = v18;
          if ( !v20 )
          {
            v18 = byte_1C0259C40[v18];
            ++v13;
            --v19;
            goto LABEL_13;
          }
          v29 = *v15;
          if ( v21 < *v15 )
          {
            v30 = byte_1C0259C40;
          }
          else
          {
            ++v15;
            --v20;
            if ( v21 > v29 )
            {
              v21 = v29;
              v30 = byte_1C0259C30;
              goto LABEL_42;
            }
            v30 = &unk_1C0259C20;
          }
          ++v13;
          --v19;
LABEL_42:
          v18 = v30[v22];
LABEL_13:
          if ( (v17 & v18) != 0 )
          {
            ++*v9;
            *v12++ = v21;
            v17 ^= 0xFu;
          }
          continue;
        }
        break;
      }
      if ( v20 )
      {
        v21 = *v15++;
        --v20;
        v18 = byte_1C0259C30[v18];
        goto LABEL_13;
      }
      v5 = this;
      v9[*v9 + 3] = *v9;
      if ( v4 && *v4 == *v9 && !memcmp(v4 + 3, v9 + 3, 4LL * *v4) )
      {
        v23 = v9[2];
        v9 = v4;
        v4[2] = v23;
      }
      else if ( v4 != v9 )
      {
        *(_QWORD *)(*(_QWORD *)this + 40LL) = &v9[*v9 + 4];
        *(_DWORD *)(*(_QWORD *)this + 80LL) += 4 * *v9 + 16;
        ++*(_DWORD *)(*(_QWORD *)this + 84LL);
      }
      if ( v9[2] == 0x7FFFFFFF )
        return 1LL;
      if ( *v9 )
      {
        v24 = *(_DWORD **)this;
        v25 = v9[3];
        if ( v25 < *(_DWORD *)(*(_QWORD *)this + 96LL) )
        {
          v24[24] = v25;
          v24 = *(_DWORD **)this;
        }
        v26 = v9[1];
        if ( v26 < v24[25] )
        {
          v24[25] = v26;
          v24 = *(_DWORD **)this;
        }
        v27 = v9[*v9 + 2];
        if ( v27 > v24[26] )
        {
          v24[26] = v27;
          v24 = *(_DWORD **)this;
        }
        v28 = v9[2];
        if ( v28 > v24[27] )
          v24[27] = v28;
      }
      if ( v11 == v6[2] )
        v6 = (int *)((char *)v6 + (unsigned int)(4 * *v6 + 16));
      if ( v11 == v7[2] )
        v7 = (int *)((char *)v7 + (unsigned int)(4 * *v7 + 16));
      if ( (unsigned __int64)v6 >= *(_QWORD *)(*(_QWORD *)a2 + 40LL)
        || (unsigned __int64)v7 >= *(_QWORD *)(*(_QWORD *)a3 + 40LL) )
      {
        return 0LL;
      }
      v4 = v9;
    }
  }
  return 0LL;
}
