/*
 * XREFs of HalpDmaAllocateDomain @ 0x14038C660
 * Callers:
 *     HalJoinDmaDomain @ 0x14038C5D0 (HalJoinDmaDomain.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     HalpDmaReferenceDomainObject @ 0x14038D02C (HalpDmaReferenceDomainObject.c)
 *     HalpMmAllocCtxAlloc @ 0x140396F30 (HalpMmAllocCtxAlloc.c)
 *     HalpMmAllocCtxFree @ 0x14039F980 (HalpMmAllocCtxFree.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     HalpDmaDereferenceDomainObject @ 0x140510338 (HalpDmaDereferenceDomainObject.c)
 *     HalpDmaGetReservedRegionsForHybridPassthroughDomain @ 0x140510488 (HalpDmaGetReservedRegionsForHybridPassthroughDomain.c)
 *     HalpDmaGetReservedRegionsForTranslateDomain @ 0x140510718 (HalpDmaGetReservedRegionsForTranslateDomain.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

ULONG_PTR __fastcall HalpDmaAllocateDomain(__int64 a1)
{
  __int64 ReservedRegionsForTranslateDomain; // r12
  int v2; // r14d
  void *v4; // rax
  ULONG_PTR v5; // rdi
  KIRQL v6; // al
  ULONG_PTR *v7; // rcx
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // r15
  unsigned __int8 v10; // r8
  bool v11; // zf
  __int64 v12; // rdx
  unsigned __int8 v13; // dl
  unsigned __int8 v14; // cl
  __int64 v15; // rax
  char v16; // dl
  int v17; // r8d
  __int64 v18; // rcx
  int v19; // r8d
  unsigned int v20; // esi
  __int64 v21; // r9
  __int64 *v22; // r8
  unsigned __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v31; // eax
  unsigned __int8 v32; // cl
  unsigned __int64 v33; // [rsp+30h] [rbp-10h]
  __int64 v34; // [rsp+38h] [rbp-8h]
  __int16 v35; // [rsp+80h] [rbp+40h] BYREF
  char v36; // [rsp+82h] [rbp+42h]
  int v37; // [rsp+88h] [rbp+48h] BYREF
  int v38; // [rsp+90h] [rbp+50h]
  __int64 v39; // [rsp+98h] [rbp+58h] BYREF

  v37 = 0;
  v39 = 0LL;
  ReservedRegionsForTranslateDomain = 0LL;
  v2 = *(_DWORD *)(a1 + 520);
  v35 = 0;
  v36 = 0;
  v33 = *(_QWORD *)(a1 + 144);
  v4 = (void *)HalpMmAllocCtxAlloc(a1, 120LL);
  v5 = (ULONG_PTR)v4;
  if ( !v4 )
    return v5;
  memset(v4, 0, 0x78uLL);
  v6 = KeAcquireSpinLockRaiseToDpc(&HalpDmaDomainListLock);
  v7 = (ULONG_PTR *)qword_140C61A98;
  v8 = v6;
  if ( *(__int64 **)qword_140C61A98 != &HalpDmaDomainList )
    __fastfail(3u);
  *(_QWORD *)(v5 + 8) = qword_140C61A98;
  *(_QWORD *)v5 = &HalpDmaDomainList;
  *v7 = v5;
  qword_140C61A98 = v5;
  KxReleaseSpinLock((volatile signed __int64 *)&HalpDmaDomainListLock);
  v9 = -1LL;
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v8 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v31 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
      v11 = (v31 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v31;
      if ( v11 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v8);
  HalpDmaReferenceDomainObject(v5);
  v10 = HalpIommuDomainMaxInputBitWidth;
  *(_BYTE *)(v5 + 32) = *(_BYTE *)(a1 + 445);
  v34 = (-(__int64)(*(_BYTE *)(a1 + 153) != 0) & 0xFFFF0000LL) + 0x10000;
  if ( v2 == 2 )
  {
    v13 = v10;
    goto LABEL_10;
  }
  v38 = 0;
  v11 = !_BitScanReverse64((unsigned __int64 *)&v12, HalpMaximumPhysicalMemoryAddress);
  if ( !v11 )
  {
    if ( (unsigned __int8)v12 < 0x1Eu )
    {
      v13 = 32;
      goto LABEL_9;
    }
    if ( (unsigned __int8)v12 < 0x3Fu )
    {
      v13 = v12 + 2;
      goto LABEL_9;
    }
  }
  v13 = 64;
LABEL_9:
  if ( v2 )
  {
    v32 = v13;
    if ( v13 > v10 )
      v32 = v10;
    v13 = v32;
  }
LABEL_10:
  if ( v13 < 0x40u )
    v9 = (1LL << v13) - 1;
  v14 = -1;
  if ( v9 > v33 )
    v9 = v33;
  v38 = 0;
  v11 = !_BitScanReverse64((unsigned __int64 *)&v15, v9);
  if ( !v11 )
    v14 = v15;
  v16 = 0;
  v17 = v14;
  v18 = *(_QWORD *)(a1 + 544);
  v19 = v17 + 1;
  v38 = v19;
  if ( v18 )
  {
    if ( (*(int (__fastcall **)(__int64, __int64, int *, __int16 *))(HalpDmaIommuInterfaceFcnTable + 208))(
           v18,
           3LL,
           &v37,
           &v35) < 0 )
      goto LABEL_52;
    v16 = v35;
    v19 = v38;
  }
  if ( !v2 )
  {
    v20 = 1;
    v21 = 0LL;
    v22 = 0LL;
    v23 = 0LL;
    goto LABEL_19;
  }
  if ( v2 == 1 || v2 == 2 )
  {
    v20 = 0;
LABEL_45:
    if ( v2 == 1 )
      goto LABEL_48;
    goto LABEL_46;
  }
  if ( v2 != 3 )
  {
    v20 = 4;
    goto LABEL_45;
  }
  v20 = v16 != 0 ? 3 : 0;
LABEL_46:
  LODWORD(v39) = 1;
  HIDWORD(v39) = v19;
  if ( v2 == 3 )
  {
    ReservedRegionsForTranslateDomain = HalpDmaGetReservedRegionsForTranslateDomain(*(_QWORD *)(a1 + 536), v5 + 33);
  }
  else if ( v2 == 2 )
  {
    ReservedRegionsForTranslateDomain = HalpDmaGetReservedRegionsForHybridPassthroughDomain(*(_QWORD *)(a1 + 528));
    v23 = 0xC000000000000000uLL;
    goto LABEL_49;
  }
LABEL_48:
  v23 = 0x8000000000000000uLL;
LABEL_49:
  v21 = ReservedRegionsForTranslateDomain;
  v22 = &v39;
LABEL_19:
  if ( (*(int (__fastcall **)(_QWORD, unsigned __int64, __int64 *, __int64, ULONG_PTR))HalpDmaIommuInterfaceFcnTable)(
         v20,
         v23,
         v22,
         v21,
         v5 + 40) >= 0 )
  {
    **(_QWORD **)(v5 + 40) = v5;
    *(_QWORD *)(v5 + 80) = 0LL;
    *(_QWORD *)(v5 + 24) = v34;
    *(_DWORD *)(v5 + 48) = v2;
    *(_QWORD *)(v5 + 16) = v9;
    *(_QWORD *)(v5 + 64) = 0LL;
    *(_QWORD *)(v5 + 72) = 0LL;
    *(_QWORD *)(v5 + 104) = 0LL;
    *(_QWORD *)(v5 + 96) = v5 + 88;
    *(_QWORD *)(v5 + 88) = v5 + 88;
    goto LABEL_21;
  }
LABEL_52:
  HalpDmaDereferenceDomainObject(v5);
  v5 = 0LL;
LABEL_21:
  if ( ReservedRegionsForTranslateDomain )
    HalpMmAllocCtxFree(v24, ReservedRegionsForTranslateDomain, v25, v26);
  return v5;
}
