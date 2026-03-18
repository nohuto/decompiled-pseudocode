/*
 * XREFs of ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x1C0027E60
 * Callers:
 *     GreIntersectClipRect @ 0x1C00CA500 (GreIntersectClipRect.c)
 * Callees:
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C001E924 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C001EB64 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C0022610 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0023C00 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C0023E50 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ?vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ @ 0x1C0024160 (-vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ.c)
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1C0024B20 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C0025A8C (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ?AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z @ 0x1C0025B30 (-AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z.c)
 *     ?Allocate@?$CSectionBitmapAllocator@$0HAAA@$0HA@@NSInstrumentation@@QEAAPEAXXZ @ 0x1C00260C0 (-Allocate@-$CSectionBitmapAllocator@$0HAAA@$0HA@@NSInstrumentation@@QEAAPEAXXZ.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C0027BB0 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C002E8B8 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?vGet_sizlWindow@DC@@QEBAXPEAUtagSIZE@@@Z @ 0x1C0062E78 (-vGet_sizlWindow@DC@@QEBAXPEAUtagSIZE@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C00826F0 (EtwTraceGreLockReleaseSemaphore.c)
 *     EngSetLastError @ 0x1C008B610 (EngSetLastError.c)
 *     ?Create@?$CSectionEntry@$0HAAA@$0HA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1C008D414 (-Create@-$CSectionEntry@$0HAAA@$0HA@@NSInstrumentation@@SAPEAV12@XZ.c)
 *     ??1?$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA@XZ @ 0x1C00BB54C (--1-$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 */

__int64 __fastcall DC::iCombine(DC *this, struct _RECTL *a2, int a3)
{
  DC *v4; // r12
  __int64 v6; // r14
  __int64 v7; // rbx
  struct _RECTL *v8; // rsi
  _QWORD *v9; // r12
  __int64 *v10; // rsi
  __int64 v11; // rdi
  ULONG v12; // r8d
  ULONG ClearBits; // r13d
  unsigned int v14; // eax
  unsigned int v15; // ecx
  __int64 v16; // rsi
  PSLIST_ENTRY v17; // rdi
  union _SLIST_HEADER *v18; // r14
  PVOID v19; // r13
  struct _SLIST_ENTRY *v20; // rbx
  __int64 v21; // rax
  unsigned int v22; // eax
  unsigned int v23; // ebx
  unsigned int v24; // ebx
  __int64 v25; // rsi
  unsigned int v26; // edx
  __int64 v27; // r8
  unsigned int v28; // eax
  __int64 v29; // r14
  unsigned int v30; // edx
  __int64 v31; // r8
  DC *v32; // rax
  struct tagSIZE v33; // rsi
  unsigned int v34; // edi
  struct REGION *Region; // rax
  PSLIST_ENTRY v36; // rbx
  int v37; // r9d
  __int64 v38; // rax
  struct tagSIZE v39; // rcx
  struct _SLIST_ENTRY *v41; // rsi
  LONG cx; // ebx
  int v43; // r14d
  int v44; // r15d
  LONG cy; // r13d
  _DWORD *v46; // rdi
  __int64 v47; // rax
  char *v48; // rcx
  int v49; // eax
  LONG v50; // ebx
  int v51; // eax
  __int64 (__fastcall *Alignment)(__int64, __int64, __int64); // rax
  __int64 v53; // rdx
  __int64 v54; // r8
  __int64 v55; // rcx
  __int64 v56; // rax
  _QWORD *v57; // rdi
  __int64 v58; // rbx
  _QWORD *v59; // rcx
  __int64 v60; // rbx
  struct _SLIST_ENTRY *v61; // rcx
  PSLIST_ENTRY v62; // [rsp+20h] [rbp-E0h] BYREF
  int v63; // [rsp+28h] [rbp-D8h]
  struct _RECTL *v64; // [rsp+30h] [rbp-D0h] BYREF
  int v65; // [rsp+38h] [rbp-C8h]
  struct tagRECT v66; // [rsp+40h] [rbp-C0h] BYREF
  PSLIST_ENTRY ListEntry; // [rsp+50h] [rbp-B0h] BYREF
  int v68; // [rsp+58h] [rbp-A8h]
  PVOID BackTrace[21]; // [rsp+60h] [rbp-A0h] BYREF
  struct tagSIZE v70; // [rsp+150h] [rbp+50h] BYREF
  unsigned int v71; // [rsp+158h] [rbp+58h]
  int v72; // [rsp+160h] [rbp+60h]
  void *v73; // [rsp+168h] [rbp+68h]

  v72 = a3;
  v70 = (struct tagSIZE)this;
  *(_QWORD *)&v66.left = *((_QWORD *)this + 20);
  v4 = this;
  if ( (a2->left & 0xF8000000) != 0 && (a2->left & 0xF8000000) != -134217728
    || (a2->bottom & 0xF8000000) != 0 && (a2->bottom & 0xF8000000) != -134217728
    || (a2->right & 0xF8000000) != 0 && (a2->right & 0xF8000000) != -134217728
    || (a2->top & 0xF8000000) != 0 && (a2->top & 0xF8000000) != -134217728 )
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
  v6 = *((_QWORD *)gpTypeIsolation + 7);
  v68 = 0;
  if ( !v6 )
    return 0;
  if ( *(_BYTE *)(v6 + 36) )
  {
    v60 = *(_QWORD *)(v6 + 24);
    ++*(_DWORD *)(v60 + 20);
    v17 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v60);
    if ( !v17 )
    {
      ++*(_DWORD *)(v60 + 24);
      v17 = (PSLIST_ENTRY)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(v60 + 48))(
                            *(unsigned int *)(v60 + 36),
                            *(unsigned int *)(v60 + 44),
                            *(unsigned int *)(v60 + 40));
    }
    goto LABEL_17;
  }
  v7 = *(_QWORD *)(v6 + 16);
  v8 = 0LL;
  v64 = 0LL;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v7, 0LL);
  v9 = *(_QWORD **)v6;
  if ( *(_QWORD *)v6 == v6 )
    goto LABEL_73;
  do
  {
    v10 = (__int64 *)v9[4];
    v11 = *v10;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v11, 0LL);
    v12 = 0;
    if ( *((_DWORD *)v10 + 8) < 0xFCu )
      v12 = *((_DWORD *)v10 + 8);
    ClearBits = RtlFindClearBits((PRTL_BITMAP)(v10[3] ^ v10[2]), 1u, v12);
    if ( ClearBits == -1 )
    {
LABEL_43:
      ExReleasePushLockExclusiveEx(v11, 0LL);
      KeLeaveCriticalRegion();
      goto LABEL_44;
    }
    v14 = *((_DWORD *)v10 + 9);
    v15 = ClearBits / 0x24;
    v71 = ClearBits / 0x24;
    if ( v14 < 7 && v15 >= v14 )
    {
      v73 = (void *)((v15 << 12) + (v10[2] ^ v10[1]));
      if ( (int)MmCommitSessionMappedView(v73, 4096LL) < 0 )
        goto LABEL_43;
      memset(v73, 0, 0x1000uLL);
      ++*((_DWORD *)v10 + 9);
    }
    RtlTestBit((PRTL_BITMAP)(v10[3] ^ v10[2]), ClearBits);
    RtlSetBit((PRTL_BITMAP)(v10[3] ^ v10[2]), ClearBits);
    if ( ++*((_DWORD *)v10 + 8) >= 0xFCu )
      *((_DWORD *)v10 + 8) = 0;
    v16 = (v71 << 12) + (v10[2] ^ v10[1]);
    ExReleasePushLockExclusiveEx(v11, 0LL);
    KeLeaveCriticalRegion();
    v17 = (PSLIST_ENTRY)(v16 + 112 * (ClearBits - 36 * v71));
    if ( v17 )
    {
      ExReleasePushLockSharedEx(v7, 0LL);
      KeLeaveCriticalRegion();
      v4 = (DC *)v70;
      goto LABEL_17;
    }
LABEL_44:
    v9 = (_QWORD *)*v9;
  }
  while ( v9 != (_QWORD *)v6 );
  v8 = v64;
LABEL_73:
  ExReleasePushLockSharedEx(v7, 0LL);
  KeLeaveCriticalRegion();
  v56 = NSInstrumentation::CSectionEntry<28672,112>::Create();
  v57 = (_QWORD *)v56;
  if ( v56 )
  {
    v8 = (struct _RECTL *)NSInstrumentation::CSectionBitmapAllocator<28672,112>::Allocate(*(__int64 **)(v56 + 32));
    if ( v8 )
    {
      v58 = *(_QWORD *)(v6 + 16);
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v58, 0LL);
      v59 = *(_QWORD **)(v6 + 8);
      if ( *v59 != v6 )
        __fastfail(3u);
      v57[1] = v59;
      *v57 = v6;
      *v59 = v57;
      *(_DWORD *)(v6 + 32) += 252;
      *(_QWORD *)(v6 + 8) = v57;
      ExReleasePushLockExclusiveEx(v58, 0LL);
      KeLeaveCriticalRegion();
    }
    else
    {
      NSInstrumentation::CSectionEntry<24576,96>::~CSectionEntry<24576,96>(v57);
      ExFreePoolWithTag(v57, 0);
    }
  }
  v4 = (DC *)v70;
  v17 = (PSLIST_ENTRY)v8;
LABEL_17:
  if ( v17 )
  {
    v18 = (union _SLIST_HEADER *)RGNMEMOBJ::s_pSCANLookAsideList;
    v19 = gpLeakTrackingAllocator;
    ++*((_DWORD *)RGNMEMOBJ::s_pSCANLookAsideList + 9);
    v20 = ExpInterlockedPopEntrySList(v18 + 1);
    if ( !v20 )
    {
      Alignment = (__int64 (__fastcall *)(__int64, __int64, __int64))v18[4].Alignment;
      v53 = *((unsigned int *)&v18[3].HeaderX64 + 3);
      v54 = *((unsigned int *)&v18[3].HeaderX64 + 2);
      v55 = *((unsigned int *)&v18[3].HeaderX64 + 1);
      ++*((_DWORD *)&v18[2].HeaderX64 + 2);
      v20 = (struct _SLIST_ENTRY *)Alignment(v55, v53, v54);
      if ( !v20 )
      {
LABEL_86:
        *((_QWORD *)&v17[5].Next + 1) = 0LL;
        goto LABEL_88;
      }
    }
    if ( LOBYTE(v18->Alignment) )
    {
      memset(BackTrace, 0, 0xA0uLL);
      RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
      if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                               v19,
                               v20,
                               BackTrace) )
      {
        ++*((_DWORD *)&v18[2].HeaderX64 + 3);
        if ( ExQueryDepthSList(v18 + 1) < LOWORD(v18[2].Alignment) )
        {
          ExpInterlockedPushEntrySList(v18 + 1, v20);
        }
        else
        {
          ++LODWORD(v18[3].Alignment);
          ((void (__fastcall *)(struct _SLIST_ENTRY *))v18[4].Region)(v20);
        }
        goto LABEL_86;
      }
      ++v20;
    }
    *((_QWORD *)&v17[5].Next + 1) = v20;
    if ( !v20 )
    {
LABEL_88:
      REGION::vDeleteREGION(v17);
      return 0;
    }
  }
  ListEntry = v17;
  if ( !v17 )
    return 0;
  v21 = *((_QWORD *)&v17[5].Next + 1);
  LODWORD(v17[5].Next) = 16;
  HIDWORD(v17[5].Next) = 1;
  v17[6].Next = 0LL;
  *((_QWORD *)&v17[6].Next + 1) = 0LL;
  *(_DWORD *)v21 = 0;
  *(_DWORD *)(v21 + 4) = 0x80000000;
  *(_QWORD *)(v21 + 8) = 0x7FFFFFFFLL;
  *((_QWORD *)&v17[2].Next + 1) = v21 + 16;
  *((_QWORD *)&v17[1].Next + 1) = 112LL;
  v17[2].Next = 0LL;
  *((_QWORD *)&v17[3].Next + 1) = v17 + 3;
  v17[3].Next = v17 + 3;
  RGNOBJ::vSet((struct _RECTL **)&ListEntry, a2);
  v22 = *(_DWORD *)v4;
  v23 = *(_DWORD *)v4;
  *((_DWORD *)v4 + 9) |= 0x10u;
  v24 = (unsigned __int16)v22 | (v23 >> 8) & 0xFF0000;
  if ( v24 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  (unsigned __int16)v24,
                                  1)
           + 13) == HIWORD(v24) )
        v24 = (unsigned __int16)v24;
    }
    else
    {
      v24 = (unsigned __int16)v24;
    }
  }
  v25 = *((_QWORD *)gpHandleManager + 2);
  v26 = *(_DWORD *)(v25 + 2056);
  if ( v24 >= v26 + ((*(unsigned __int16 *)(v25 + 2) + 0xFFFF) << 16) )
  {
    v29 = 0LL;
  }
  else
  {
    if ( v24 >= v26 )
    {
      v27 = *(_QWORD *)(v25 + 8LL * (((v24 - v26) >> 16) + 1) + 8);
      v28 = v24 + -65536 * ((v24 - v26) >> 16) - v26;
    }
    else
    {
      v27 = *(_QWORD *)(v25 + 8);
      v28 = v24;
    }
    v29 = 0LL;
    if ( v28 < *(_DWORD *)(v27 + 20)
      && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v27 + 24) + 8 * ((unsigned __int64)v28 >> 8))
                   + 16LL * (unsigned __int8)v28
                   + 8) )
    {
      v29 = *(_QWORD *)v27 + 24LL * v28;
    }
  }
  if ( v24 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  (unsigned __int16)v24,
                                  1)
           + 13) == HIWORD(v24) )
        v24 = (unsigned __int16)v24;
    }
    else
    {
      v24 = (unsigned __int16)v24;
    }
  }
  v30 = *(_DWORD *)(v25 + 2056);
  if ( v24 >= v30 + ((*(unsigned __int16 *)(v25 + 2) + 0xFFFF) << 16)
    || (v24 >= v30
      ? (v31 = *(_QWORD *)(v25 + 8LL * (((v24 - v30) >> 16) + 1) + 8), v24 += -65536 * ((v24 - v30) >> 16) - v30)
      : (v31 = *(_QWORD *)(v25 + 8)),
        v24 >= *(_DWORD *)(v31 + 20)) )
  {
    v32 = 0LL;
  }
  else
  {
    v32 = *(DC **)(*(_QWORD *)(**(_QWORD **)(v31 + 24) + 8 * ((unsigned __int64)v24 >> 8))
                 + 16LL * (unsigned __int8)v24
                 + 8);
  }
  v33 = *(struct tagSIZE *)&v66.left;
  if ( v32 != v4 )
    v29 = 0LL;
  *(_BYTE *)(v29 + 15) |= 4u;
  if ( !*(_QWORD *)&v33 )
  {
    if ( v72 == 1 )
    {
      ++LODWORD(v17[2].Next);
      *((_QWORD *)v4 + 20) = v17;
      return 2;
    }
    v63 = 0;
    RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v62, 0x70u);
    v65 = 0;
    RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v64, 0x70u);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v64);
    v41 = v62;
    v70 = 0LL;
    if ( v62 )
    {
      if ( v64 )
      {
        DC::vGet_sizlWindow(v4, &v70);
        cx = v70.cx;
        v43 = 0;
        v44 = 0;
        cy = v70.cy;
        v46 = (_DWORD *)*((_QWORD *)v4 + 6);
        if ( *((_QWORD *)v4 + 62) )
        {
          DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v70);
          if ( (v46[10] & 0x20000) != 0 && *(int *)(*((_QWORD *)v4 + 62) + 112LL) < 0 )
          {
            v43 = v46[640];
            cx += v43;
            v44 = v46[641];
            cy += v44;
          }
          EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
          if ( ghsemDynamicModeChange )
          {
            ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
            PsLeavePriorityRegion();
          }
        }
        v47 = 1016LL;
        if ( (*((_DWORD *)v4 + 10) & 1) != 0 )
          v47 = 1024LL;
        v48 = (char *)v4 + v47;
        v49 = *(_DWORD *)((char *)v4 + v47);
        v50 = cx - v49;
        v66.left = v43 - v49;
        v51 = *((_DWORD *)v48 + 1);
        v66.top = v44 - v51;
        v66.bottom = cy - v51;
        v66.right = v50;
        if ( !ERECTL::bEmpty((ERECTL *)&v66) && IsRectEmptyInl(&v66) )
        {
          v34 = 0;
          REGION::vDeleteREGION(v41);
          v41 = 0LL;
        }
        else
        {
          RGNOBJ::vSet(&v64, (struct _RECTL *)&v66);
          v34 = RGNOBJ::iCombine((RGNOBJ *)&v62, (struct RGNOBJ *)&v64, (struct RGNOBJ *)&ListEntry, v72);
          if ( v34 )
          {
            v41 = v62;
            ++LODWORD(v62[2].Next);
            *((_QWORD *)v4 + 20) = v41;
          }
          else
          {
            REGION::vDeleteREGION(v62);
            v41 = 0LL;
          }
        }
LABEL_68:
        REGION::vDeleteREGION(ListEntry);
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v64);
        if ( v63 == 1 )
        {
          v61 = v41;
          goto LABEL_111;
        }
        goto LABEL_51;
      }
      REGION::vDeleteREGION(v62);
      v41 = 0LL;
    }
    v34 = 0;
    goto LABEL_68;
  }
  v63 = 0;
  Region = RGNMEMOBJ::AllocateRegion(0x70u);
  v62 = (PSLIST_ENTRY)Region;
  v36 = (PSLIST_ENTRY)Region;
  if ( Region )
  {
    v37 = v72;
    *((_DWORD *)Region + 20) = 16;
    *((_DWORD *)Region + 21) = 1;
    *((_QWORD *)Region + 12) = 0LL;
    *((_QWORD *)Region + 13) = 0LL;
    v38 = *((_QWORD *)Region + 11);
    v70 = v33;
    *(_DWORD *)v38 = 0;
    *(_DWORD *)(v38 + 4) = 0x80000000;
    *(_QWORD *)(v38 + 8) = 0x7FFFFFFFLL;
    *((_QWORD *)&v36[2].Next + 1) = v38 + 16;
    *((_QWORD *)&v36[1].Next + 1) = 112LL;
    v36[2].Next = 0LL;
    *((_QWORD *)&v36[3].Next + 1) = v36 + 3;
    v36[3].Next = v36 + 3;
    v34 = RGNOBJ::iCombine((RGNOBJ *)&v62, (struct RGNOBJ *)&v70, (struct RGNOBJ *)&ListEntry, v37);
    if ( v34 )
    {
      v36 = v62;
      v39 = v70;
      ++LODWORD(v62[2].Next);
      *((_QWORD *)v4 + 20) = v36;
      if ( (*(_DWORD *)(*(_QWORD *)&v39 + 32LL))-- == 1 )
        REGION::vDeleteREGION(*(PSLIST_ENTRY *)&v39);
    }
    else
    {
      REGION::vDeleteREGION(v62);
      v36 = 0LL;
    }
  }
  else
  {
    v34 = 0;
  }
  REGION::vDeleteREGION(ListEntry);
  if ( v63 == 1 )
  {
    v61 = v36;
LABEL_111:
    REGION::vDeleteREGION(v61);
  }
LABEL_51:
  if ( v68 == 1 )
    REGION::vDeleteREGION(0LL);
  return v34;
}
