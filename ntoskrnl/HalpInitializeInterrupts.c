/*
 * XREFs of HalpInitializeInterrupts @ 0x140B3D448
 * Callers:
 *     HalpInterruptInitDiscard @ 0x140B7107C (HalpInterruptInitDiscard.c)
 * Callees:
 *     HalpPicDiscover @ 0x140374634 (HalpPicDiscover.c)
 *     HalQueryMaximumProcessorCount @ 0x140375910 (HalQueryMaximumProcessorCount.c)
 *     HalpApicDiscover @ 0x140375E78 (HalpApicDiscover.c)
 *     HalpInterruptParseAcpiTables @ 0x140376A1C (HalpInterruptParseAcpiTables.c)
 *     HalpInterruptSetIdtEntry @ 0x140379F10 (HalpInterruptSetIdtEntry.c)
 *     HalpMmAllocateMemoryInternal @ 0x14037A7A8 (HalpMmAllocateMemoryInternal.c)
 *     HalpInterruptInitializeController @ 0x14037B24C (HalpInterruptInitializeController.c)
 *     HalpInterruptInitializeIpis @ 0x14037B310 (HalpInterruptInitializeIpis.c)
 *     HalpInterruptSelectController @ 0x1403AF008 (HalpInterruptSelectController.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     HalpInterruptSetProblemEx @ 0x140518598 (HalpInterruptSetProblemEx.c)
 */

__int64 __fastcall HalpInitializeInterrupts(__int64 a1)
{
  int v2; // ebx
  unsigned int v3; // ebx
  void *MemoryInternal; // rax
  unsigned int v5; // ebx
  void *v6; // rax
  void *v7; // rax
  unsigned int v8; // ebx
  void *v9; // rax
  unsigned int v10; // ebx
  void *v11; // rax
  __int64 v12; // r9
  __int64 v13; // r9
  __int64 v14; // r9
  __int64 v15; // r9
  __int64 v16; // r9
  __int64 v17; // r9
  __int64 v18; // r9
  __int64 v19; // r9
  ULONG_PTR *i; // rdi
  ULONG_PTR v21; // rcx
  int v22; // eax
  unsigned int v23; // ecx
  int v24; // eax
  _DWORD *v26; // rax
  ULONG_PTR v27; // [rsp+60h] [rbp+18h] BYREF

  v27 = 0LL;
  HalpInterruptOverridesLock = 0LL;
  HalpInterruptLocalUnitErrorLock = 0LL;
  qword_140C60998 = (__int64)&HalpInterruptOverrides;
  HalpInterruptOverrides = (__int64)&HalpInterruptOverrides;
  HalpInterruptPhysicalTargets = 2097153;
  memset(&unk_140C63A64, 0, 0x104uLL);
  v2 = HalpInterruptParseAcpiTables(a1, 0);
  if ( v2 < 0 )
    goto LABEL_31;
  HalpInterruptMaxProcessors = HalQueryMaximumProcessorCount();
  v3 = 24 * HalpInterruptMaxProcessors;
  MemoryInternal = (void *)HalpMmAllocateMemoryInternal(24 * HalpInterruptMaxProcessors, 1u);
  HalpInterruptTargets = (__int64)MemoryInternal;
  if ( !MemoryInternal )
    goto LABEL_30;
  memset(MemoryInternal, 0, v3);
  v5 = HalpInterruptMaxProcessors << 6;
  v6 = (void *)HalpMmAllocateMemoryInternal(HalpInterruptMaxProcessors << 6, 1u);
  HalpInterruptProcessorState = (ULONG_PTR)v6;
  if ( !v6 )
    goto LABEL_30;
  memset(v6, 0, v5);
  v7 = (void *)HalpMmAllocateMemoryInternal(v5, 1u);
  HalpInterruptDynamicProcessorState = (__int64)v7;
  if ( !v7 )
    goto LABEL_30;
  memset(v7, 0, v5);
  v8 = 8 * HalpInterruptMaxProcessors;
  v9 = (void *)HalpMmAllocateMemoryInternal(8 * HalpInterruptMaxProcessors, 1u);
  HalpInterruptProcessorStateByNtIndex = (__int64)v9;
  if ( !v9
    || (memset(v9, 0, v8),
        v10 = 8 * HalpInterruptMaxProcessors,
        v11 = (void *)HalpMmAllocateMemoryInternal(8 * HalpInterruptMaxProcessors, 1u),
        (HalpInterruptProcessorPcr = (__int64)v11) == 0) )
  {
LABEL_30:
    v2 = -1073741801;
    goto LABEL_31;
  }
  memset(v11, 0, v10);
  *(_QWORD *)HalpInterruptProcessorPcr = KeGetPcr();
  v2 = HalpApicDiscover();
  if ( v2 >= 0 )
    v2 = HalpPicDiscover();
  if ( v2 < 0 )
  {
    HalpInterruptSetProblemEx(0LL, 3, v2, (__int64)"minkernel\\hals\\lib\\interrupts\\common\\intrupt.c", 0x256u);
    goto LABEL_31;
  }
  HalpInterruptSetIdtEntry(0x35u, (int)HalpInterruptDeferredErrorService, 5, v12, -1LL);
  HalpInterruptSetIdtEntry(0xE3u, (int)HalpInterruptDeferredRecoveryService, 14, v13, -1LL);
  HalpInterruptSetIdtEntry(0x36u, (int)HalpInterruptDeferredErrorService, 5, v14, -1LL);
  HalpInterruptSetIdtEntry(0xDFu, (int)HalpInterruptSpuriousService, 15, v15, -2LL);
  HalpInterruptSetIdtEntry(0xD8u, (int)HalpInterruptStubService, 15, v16, -1LL);
  HalpInterruptSetIdtEntry(0xE2u, (int)HalpInterruptLocalErrorService, 15, v17, -1LL);
  HalpInterruptSetIdtEntry(0xD7u, (int)HalpInterruptRebootService, 15, v18, -1LL);
  HalpInterruptSetIdtEntry(0xFEu, (int)HalpPerfInterrupt, 15, v19, -3LL);
  byte_140D818E2 = 17;
  byte_140D81AEA = 15;
  dword_140D81AEB = 2;
  byte_140D819BF = 17;
  byte_140D81F3B = 15;
  dword_140D81F3C = 223;
  v2 = HalpInterruptSelectController(&v27);
  if ( v2 < 0 )
    goto LABEL_31;
  for ( i = (ULONG_PTR *)HalpRegisteredInterruptControllers; i != &HalpRegisteredInterruptControllers; i = (ULONG_PTR *)*i )
  {
    v2 = HalpInterruptInitializeController((ULONG_PTR)i);
    if ( v2 < 0 )
      goto LABEL_31;
  }
  v2 = HalpInterruptParseAcpiTables(a1, 1);
  if ( v2 < 0 )
    goto LABEL_31;
  v21 = v27;
  HalpHwToSwIrqlMap = (__int128)_mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
  LOWORD(HalpHwToSwIrqlMap) = 256;
  v22 = *(_DWORD *)(v27 + 244);
  *(_WORD *)((char *)&HalpHwToSwIrqlMap + 13) = 3597;
  BYTE12(HalpHwToSwIrqlMap) = 12;
  HIBYTE(HalpHwToSwIrqlMap) = 15;
  BYTE2(HalpHwToSwIrqlMap) = 2;
  if ( (v22 & 1) == 0 )
  {
    v26 = (_DWORD *)HalpInterruptTargets;
    LODWORD(HalpInterruptProcessorCount) = 1;
    *(_DWORD *)(HalpInterruptTargets + 8) = 0;
    *v26 = 4;
    v22 = *(_DWORD *)(v21 + 244);
  }
  if ( !(_DWORD)HalpInterruptProcessorCount )
    LODWORD(HalpInterruptProcessorCount) = 1;
  if ( (v22 & 4) == 0 )
    HalpInterruptLogicalFlatLimit = 0;
  HalpInterruptController = v21;
  v2 = HalpInterruptInitializeIpis();
  if ( v2 < 0 )
LABEL_31:
    KeBugCheckEx(0x5Cu, 0x200uLL, 0x5250631uLL, HalpInterruptLastProblem, v2);
  if ( (*(_DWORD *)(HalpInterruptController + 244) & 0x100) != 0 )
  {
    if ( KeGetCurrentPrcb()->CpuVendor == 1 )
    {
      v24 = 0x200000;
    }
    else
    {
      v23 = 240 * HalQueryMaximumProcessorCount();
      v24 = 0x10000;
      if ( v23 <= 0x10000 )
      {
        _BitScanReverse(&v23, 2 * v23 - 1);
        v24 = 1 << v23;
      }
    }
    HalpIrtTotalEntries = v24;
  }
  return (unsigned int)v2;
}
