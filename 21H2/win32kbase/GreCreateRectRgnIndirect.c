/*
 * XREFs of GreCreateRectRgnIndirect @ 0x1C0028800
 * Callers:
 *     GetMonitorDC @ 0x1C00183FC (GetMonitorDC.c)
 *     SetOrCreateRectRgnIndirectPublic @ 0x1C0027800 (SetOrCreateRectRgnIndirectPublic.c)
 *     NtUserGetDC @ 0x1C00295D0 (NtUserGetDC.c)
 *     _GetDCEx @ 0x1C002B0A0 (_GetDCEx.c)
 *     ?zzzUpdateUserScreen@@YAJXZ @ 0x1C0063D18 (-zzzUpdateUserScreen@@YAJXZ.c)
 *     CreateMonitorRegionForDpi @ 0x1C006DB60 (CreateMonitorRegionForDpi.c)
 *     UserValidateCopyRgn @ 0x1C006EE60 (UserValidateCopyRgn.c)
 *     CreateEmptyRgnPublic @ 0x1C006EF60 (CreateEmptyRgnPublic.c)
 *     CreateEmptyRgn @ 0x1C006EFB0 (CreateEmptyRgn.c)
 * Callees:
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C0023E50 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ?Allocate@?$CSectionBitmapAllocator@$0HAAA@$0HA@@NSInstrumentation@@QEAAPEAXXZ @ 0x1C00260C0 (-Allocate@-$CSectionBitmapAllocator@$0HAAA@$0HA@@NSInstrumentation@@QEAAPEAXXZ.c)
 *     ?HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z @ 0x1C0028DD0 (-HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z.c)
 *     ??1HmgInsertObjectHelper@@QEAA@XZ @ 0x1C0028F60 (--1HmgInsertObjectHelper@@QEAA@XZ.c)
 *     EngSetLastError @ 0x1C008B610 (EngSetLastError.c)
 *     ?Create@?$CSectionEntry@$0HAAA@$0HA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1C008D414 (-Create@-$CSectionEntry@$0HAAA@$0HA@@NSInstrumentation@@SAPEAV12@XZ.c)
 *     ??1?$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA@XZ @ 0x1C00BB54C (--1-$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??0HmgInsertObjectHelper@@QEAA@XZ @ 0x1C0168DA4 (--0HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 */

struct HOBJ__ *__fastcall GreCreateRectRgnIndirect(struct _SLIST_ENTRY *a1)
{
  struct HOBJ__ *inserted; // rbp
  __int64 v4; // r15
  __int64 v5; // rbx
  __int64 v6; // rsi
  _QWORD *v7; // r12
  __int64 *v8; // rsi
  __int64 v9; // rdi
  ULONG v10; // r8d
  ULONG ClearBits; // r13d
  unsigned int v12; // eax
  unsigned int v13; // ecx
  __int64 v14; // rsi
  PSLIST_ENTRY v15; // rdi
  union _SLIST_HEADER *v16; // r15
  PVOID v17; // r12
  struct _SLIST_ENTRY *v18; // rbx
  int Next; // edx
  int v20; // ecx
  int Next_high; // r9d
  int v22; // r8d
  __int64 v23; // rax
  char *v24; // rax
  __int64 v25; // rax
  _QWORD *v26; // rdi
  __int64 v27; // rbx
  _QWORD *v28; // rcx
  bool v29; // zf
  _DWORD *v30; // rdx
  _DWORD *v31; // rdx
  char *v32; // rdx
  __int64 (__fastcall *Alignment)(__int64, __int64, __int64); // rax
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // rcx
  __int64 v37; // rbx
  int v38; // eax
  int v39; // eax
  _DWORD *v40; // rdx
  _DWORD *v41; // rdx
  _BYTE v42[32]; // [rsp+20h] [rbp-108h] BYREF
  PSLIST_ENTRY v43; // [rsp+40h] [rbp-E8h]
  PVOID BackTrace[20]; // [rsp+50h] [rbp-D8h] BYREF
  void *v45; // [rsp+138h] [rbp+10h]

  if ( ((__int64)a1->Next & 0xF8000000) != 0 && ((__int64)a1->Next & 0xF8000000) != -134217728
    || (*((_DWORD *)&a1->Next + 3) & 0xF8000000) != 0 && (*((_DWORD *)&a1->Next + 3) & 0xF8000000) != -134217728
    || (*(_DWORD *)(&a1->Next + 1) & 0xF8000000) != 0 && (*(_DWORD *)(&a1->Next + 1) & 0xF8000000) != -134217728
    || (HIDWORD(a1->Next) & 0xF8000000) != 0 && (HIDWORD(a1->Next) & 0xF8000000) != -134217728 )
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
  inserted = 0LL;
  v4 = *((_QWORD *)gpTypeIsolation + 7);
  if ( !v4 )
  {
LABEL_57:
    EngSetLastError(8u);
    return inserted;
  }
  if ( *(_BYTE *)(v4 + 36) )
  {
    v37 = *(_QWORD *)(v4 + 24);
    ++*(_DWORD *)(v37 + 20);
    v15 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v37);
    if ( !v15 )
    {
      ++*(_DWORD *)(v37 + 24);
      v15 = (PSLIST_ENTRY)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(v37 + 48))(
                            *(unsigned int *)(v37 + 36),
                            *(unsigned int *)(v37 + 44),
                            *(unsigned int *)(v37 + 40));
    }
    goto LABEL_17;
  }
  v5 = *(_QWORD *)(v4 + 16);
  v6 = 0LL;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v5, 0LL);
  v7 = *(_QWORD **)v4;
  if ( *(_QWORD *)v4 == v4 )
    goto LABEL_34;
  do
  {
    v8 = (__int64 *)v7[4];
    v9 = *v8;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v9, 0LL);
    v10 = 0;
    if ( *((_DWORD *)v8 + 8) < 0xFCu )
      v10 = *((_DWORD *)v8 + 8);
    ClearBits = RtlFindClearBits((PRTL_BITMAP)(v8[3] ^ v8[2]), 1u, v10);
    if ( ClearBits == -1 )
    {
LABEL_31:
      ExReleasePushLockExclusiveEx(v9, 0LL);
      KeLeaveCriticalRegion();
      goto LABEL_32;
    }
    v12 = *((_DWORD *)v8 + 9);
    v13 = ClearBits / 0x24;
    if ( v12 < 7 && v13 >= v12 )
    {
      v45 = (void *)((v13 << 12) + (v8[2] ^ v8[1]));
      if ( (int)MmCommitSessionMappedView(v45, 4096LL) < 0 )
        goto LABEL_31;
      memset(v45, 0, 0x1000uLL);
      ++*((_DWORD *)v8 + 9);
    }
    RtlTestBit((PRTL_BITMAP)(v8[3] ^ v8[2]), ClearBits);
    RtlSetBit((PRTL_BITMAP)(v8[3] ^ v8[2]), ClearBits);
    if ( ++*((_DWORD *)v8 + 8) >= 0xFCu )
      *((_DWORD *)v8 + 8) = 0;
    v14 = ((ClearBits / 0x24) << 12) + (v8[2] ^ v8[1]);
    ExReleasePushLockExclusiveEx(v9, 0LL);
    KeLeaveCriticalRegion();
    v15 = (PSLIST_ENTRY)(v14 + 112 * (ClearBits % 0x24));
    if ( v15 )
    {
      ExReleasePushLockSharedEx(v5, 0LL);
      KeLeaveCriticalRegion();
      goto LABEL_17;
    }
LABEL_32:
    v7 = (_QWORD *)*v7;
  }
  while ( v7 != (_QWORD *)v4 );
  v6 = 0LL;
LABEL_34:
  ExReleasePushLockSharedEx(v5, 0LL);
  KeLeaveCriticalRegion();
  v25 = NSInstrumentation::CSectionEntry<28672,112>::Create();
  v26 = (_QWORD *)v25;
  if ( v25 )
  {
    v6 = NSInstrumentation::CSectionBitmapAllocator<28672,112>::Allocate(*(__int64 **)(v25 + 32));
    if ( v6 )
    {
      v27 = *(_QWORD *)(v4 + 16);
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v27, 0LL);
      v28 = *(_QWORD **)(v4 + 8);
      if ( *v28 != v4 )
        __fastfail(3u);
      v26[1] = v28;
      *v26 = v4;
      *v28 = v26;
      *(_DWORD *)(v4 + 32) += 252;
      *(_QWORD *)(v4 + 8) = v26;
      ExReleasePushLockExclusiveEx(v27, 0LL);
      KeLeaveCriticalRegion();
    }
    else
    {
      NSInstrumentation::CSectionEntry<24576,96>::~CSectionEntry<24576,96>(v26);
      ExFreePoolWithTag(v26, 0);
    }
  }
  v15 = (PSLIST_ENTRY)v6;
LABEL_17:
  if ( !v15 )
    goto LABEL_57;
  v16 = (union _SLIST_HEADER *)RGNMEMOBJ::s_pSCANLookAsideList;
  v17 = gpLeakTrackingAllocator;
  ++*((_DWORD *)RGNMEMOBJ::s_pSCANLookAsideList + 9);
  v18 = ExpInterlockedPopEntrySList(v16 + 1);
  if ( !v18 )
  {
    Alignment = (__int64 (__fastcall *)(__int64, __int64, __int64))v16[4].Alignment;
    v34 = *((unsigned int *)&v16[3].HeaderX64 + 3);
    v35 = *((unsigned int *)&v16[3].HeaderX64 + 2);
    v36 = *((unsigned int *)&v16[3].HeaderX64 + 1);
    ++*((_DWORD *)&v16[2].HeaderX64 + 2);
    v18 = (struct _SLIST_ENTRY *)Alignment(v36, v34, v35);
    if ( !v18 )
    {
LABEL_46:
      *((_QWORD *)&v15[5].Next + 1) = 0LL;
      goto LABEL_56;
    }
  }
  if ( LOBYTE(v16->Alignment) )
  {
    memset(BackTrace, 0, sizeof(BackTrace));
    RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
    if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                             v17,
                             v18,
                             BackTrace) )
    {
      ++*((_DWORD *)&v16[2].HeaderX64 + 3);
      if ( ExQueryDepthSList(v16 + 1) < LOWORD(v16[2].Alignment) )
      {
        ExpInterlockedPushEntrySList(v16 + 1, v18);
      }
      else
      {
        ++LODWORD(v16[3].Alignment);
        ((void (__fastcall *)(struct _SLIST_ENTRY *))v16[4].Region)(v18);
      }
      goto LABEL_46;
    }
    ++v18;
  }
  *((_QWORD *)&v15[5].Next + 1) = v18;
  if ( !v18 )
  {
LABEL_56:
    REGION::vDeleteREGION(v15);
    goto LABEL_57;
  }
  *((_QWORD *)&v15[1].Next + 1) = 112LL;
  *((_QWORD *)&v15[3].Next + 1) = v15 + 3;
  v15[3].Next = v15 + 3;
  LODWORD(v15[5].Next) = 0;
  v15[2].Next = 0LL;
  Next = (int)a1->Next;
  v20 = *((_DWORD *)&a1->Next + 2);
  if ( SLODWORD(a1->Next) > v20 )
  {
    v38 = (int)a1->Next;
    *((_DWORD *)&a1->Next + 2) = Next;
    Next = v20;
    LODWORD(a1->Next) = v20;
    v20 = v38;
  }
  Next_high = HIDWORD(a1->Next);
  v22 = *((_DWORD *)&a1->Next + 3);
  if ( Next_high > v22 )
  {
    v39 = HIDWORD(a1->Next);
    HIDWORD(a1->Next) = v22;
    Next_high = v22;
    *((_DWORD *)&a1->Next + 3) = v39;
    v22 = v39;
  }
  if ( Next == v20 || Next_high == v22 )
  {
    v23 = *((_QWORD *)&v15[5].Next + 1);
    LODWORD(v15[5].Next) = 16;
    HIDWORD(v15[5].Next) = 1;
    v15[6].Next = 0LL;
    *((_QWORD *)&v15[6].Next + 1) = 0LL;
    *(_DWORD *)v23 = 0;
    *(_DWORD *)(v23 + 4) = 0x80000000;
    *(_QWORD *)(v23 + 8) = 0x7FFFFFFFLL;
    v24 = (char *)(v23 + 16);
  }
  else
  {
    v29 = LODWORD(v15[5].Next) == 56;
    v30 = (_DWORD *)*((_QWORD *)&v15[5].Next + 1);
    v15[6] = *a1;
    if ( v29 )
    {
      v30[2] = HIDWORD(a1->Next);
      v40 = (_DWORD *)((char *)v30 + (unsigned int)(4 * *v30 + 16));
      v40[1] = HIDWORD(a1->Next);
      v40[2] = *((_DWORD *)&a1->Next + 3);
      v40[3] = a1->Next;
      v40[4] = *((_DWORD *)&a1->Next + 2);
      v41 = (_DWORD *)((char *)v40 + (unsigned int)(4 * *v40 + 16));
      v41[1] = *((_DWORD *)&a1->Next + 3);
      v24 = (char *)v41 + (unsigned int)(4 * *v41 + 16);
    }
    else
    {
      LODWORD(v15[5].Next) = 56;
      HIDWORD(v15[5].Next) = 3;
      *v30 = 0;
      v30[1] = 0x80000000;
      v30[2] = HIDWORD(a1->Next);
      v30[3] = 0;
      v31 = v30 + 4;
      *v31 = 2;
      v31[1] = HIDWORD(a1->Next);
      v31[2] = *((_DWORD *)&a1->Next + 3);
      v31[3] = a1->Next;
      v31[4] = *((_DWORD *)&a1->Next + 2);
      v31[5] = 2;
      v32 = (char *)v31 + (unsigned int)(4 * *v31 + 16);
      *(_DWORD *)v32 = 0;
      *((_DWORD *)v32 + 1) = *((_DWORD *)&a1->Next + 3);
      v24 = v32 + 16;
      *((_QWORD *)v32 + 1) = 0x7FFFFFFFLL;
    }
  }
  *((_QWORD *)&v15[2].Next + 1) = v24;
  HmgInsertObjectHelper::HmgInsertObjectHelper((HmgInsertObjectHelper *)v42);
  if ( v43 || (inserted = HmgInsertObjectInternal((struct OBJECT *)v15, 1u, 4u)) == 0LL )
  {
    HmgInsertObjectHelper::~HmgInsertObjectHelper((HmgInsertObjectHelper *)v42);
    REGION::vDeleteREGION(v15);
  }
  else
  {
    v43 = v15;
    HmgInsertObjectHelper::~HmgInsertObjectHelper((HmgInsertObjectHelper *)v42);
  }
  return inserted;
}
