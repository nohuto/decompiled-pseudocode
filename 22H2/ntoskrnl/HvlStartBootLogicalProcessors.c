/*
 * XREFs of HvlStartBootLogicalProcessors @ 0x1403B62E8
 * Callers:
 *     KeStartAllProcessors @ 0x140A4D568 (KeStartAllProcessors.c)
 * Callees:
 *     HalQueryMaximumProcessorCount @ 0x14037AD70 (HalQueryMaximumProcessorCount.c)
 *     HvcallInitiateHypercall @ 0x14038FDC0 (HvcallInitiateHypercall.c)
 *     qsort @ 0x1403D23C0 (qsort.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     memset @ 0x140413800 (memset.c)
 *     HvlpAcquireHypercallPage @ 0x1404F24C0 (HvlpAcquireHypercallPage.c)
 *     HvlpEnableNextLogicalProcessor @ 0x1404F2A84 (HvlpEnableNextLogicalProcessor.c)
 *     HvlpGetLpcbByApicId @ 0x1404F2C5C (HvlpGetLpcbByApicId.c)
 *     HvlpQueryApicIdAndNumaNode @ 0x1404F2FE4 (HvlpQueryApicIdAndNumaNode.c)
 *     HvlpReleaseHypercallPage @ 0x1404F30B0 (HvlpReleaseHypercallPage.c)
 *     HvlpSelectLpSet @ 0x1404F3194 (HvlpSelectLpSet.c)
 *     HvlpSelectVpSet @ 0x1404F35FC (HvlpSelectVpSet.c)
 *     HvlpSetLogicalProcessorProperty @ 0x1404F3B98 (HvlpSetLogicalProcessorProperty.c)
 *     HvlNotifyAllProcessorsStarted @ 0x1404F593C (HvlNotifyAllProcessorsStarted.c)
 *     MmAllocateIndependentPages @ 0x140762010 (MmAllocateIndependentPages.c)
 *     MmFreeIndependentPages @ 0x140763BF0 (MmFreeIndependentPages.c)
 *     HvlpDiscoverTopologyLocal @ 0x14088E8A0 (HvlpDiscoverTopologyLocal.c)
 */

__int64 __fastcall HvlStartBootLogicalProcessors(int a1)
{
  unsigned int v1; // r12d
  __int64 v3; // rcx
  unsigned int MaximumProcessorCount; // eax
  __int64 v5; // rbx
  size_t v6; // r15
  char *IndependentPages; // rax
  char *v8; // rsi
  signed int ApicIdAndNumaNode; // edi
  struct _KPRCB *CurrentPrcb; // r14
  unsigned int v11; // r14d
  unsigned __int16 *v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  char *v16; // r9
  int v17; // r10d
  __int64 LpcbByApicId; // rax
  char v19; // r11
  int v20; // ebx
  int *v21; // r14
  __int64 v22; // rcx
  _DWORD *v23; // rax
  unsigned __int16 v24; // bx
  _BYTE v25[40]; // [rsp+30h] [rbp-D8h] BYREF
  _QWORD v26[8]; // [rsp+58h] [rbp-B0h] BYREF
  _DWORD v27[816]; // [rsp+98h] [rbp-70h] BYREF
  int v28; // [rsp+D88h] [rbp+C80h] BYREF

  v28 = a1;
  v1 = KiMaximumGroupSize;
  memset(v26, 0, sizeof(v26));
  if ( (HvlpFlags & 2) == 0 )
    return 0LL;
  v28 = 0;
  if ( ((int (__fastcall *)(__int64, __int64, _QWORD *, int *))off_140C00A68[0])(11LL, 64LL, v26, &v28) >= 0
    && v28 == 64 )
  {
    HvlpQueryProcessorNode = v26[1];
    HvlpQueryProximityId = v26[5];
    HvlpQueryProximityNode = v26[3];
    HvlpQueryNodeDistance = v26[7];
  }
  else
  {
    HvlpQueryProcessorNode = 0LL;
    HvlpQueryProximityId = 0LL;
    HvlpQueryProximityNode = 0LL;
    HvlpQueryNodeDistance = 0LL;
  }
  MaximumProcessorCount = HalQueryMaximumProcessorCount(v3);
  v5 = MaximumProcessorCount;
  v6 = 40 * MaximumProcessorCount;
  IndependentPages = (char *)MmAllocateIndependentPages(v6, 0xFFFFFFFFLL);
  v8 = IndependentPages;
  if ( IndependentPages )
  {
    memset(IndependentPages, 0, v6);
    CurrentPrcb = KeGetCurrentPrcb();
    dword_140D042E4[0] = 0;
    ApicIdAndNumaNode = HvlpQueryApicIdAndNumaNode(0LL, &dword_140D042E8, &word_140D042EC);
    if ( ApicIdAndNumaNode < 0 )
      goto LABEL_39;
    word_140D042EE = *(_WORD *)(KeNodeBlock[(unsigned __int16)word_140D042EC] + 148);
    qword_140D04300 = (__int64)CurrentPrcb->StatisticsPage;
    dword_140D042F8 = CurrentPrcb->Number;
    HvlpCpuVendor = CurrentPrcb->CpuVendor;
    HvlpDiscoverTopologyLocal(
      (unsigned __int16)word_140D042EE,
      (unsigned int)dword_140D042E8,
      &unk_140D042F0,
      &unk_140D042F4);
    LODWORD(HvlpLogicalProcessorCount) = 1;
    HvlpLogicalProcessorRegions[0] = 1;
    ApicIdAndNumaNode = HvlpSelectLpSet((unsigned int)v5, v8);
    if ( ApicIdAndNumaNode < 0 )
      goto LABEL_39;
    v11 = 1;
    if ( (unsigned int)v5 > 1 )
    {
      v12 = (unsigned __int16 *)(v8 + 48);
      do
      {
        if ( *((_BYTE *)v12 - 7) )
        {
          if ( (int)HvlpEnableNextLogicalProcessor(*((unsigned int *)v12 - 1), *v12) < 0 )
            break;
          LODWORD(HvlpLogicalProcessorCount) = HvlpLogicalProcessorCount + 1;
          *((_BYTE *)v12 - 6) = 1;
        }
        ++v11;
        v12 += 20;
      }
      while ( v11 < (unsigned int)v5 );
    }
    ApicIdAndNumaNode = HvlpSelectVpSet((unsigned int)v5, v8, v1);
    if ( ApicIdAndNumaNode < 0 )
      goto LABEL_39;
    v17 = 0;
    if ( (_DWORD)v5 )
    {
      v16 = v8 + 1;
      do
      {
        if ( *v16 || v16[2] )
        {
          LpcbByApicId = HvlpGetLpcbByApicId(*(unsigned int *)(v16 + 3));
          if ( v19 )
          {
            *(_DWORD *)(LpcbByApicId + 48) = 1;
            ++v17;
          }
          if ( v16[2] )
          {
            ++*(_DWORD *)((char *)&Mm64BitPhysicalAddress + 7);
            *(_BYTE *)(LpcbByApicId + 112) = 1;
          }
        }
        v16 += 40;
        --v5;
      }
      while ( v5 );
    }
    if ( v17 == (_DWORD)HvlpLogicalProcessorCount )
    {
      if ( (HvlpRootFlags & 0x800) == 0 )
        goto LABEL_37;
    }
    else
    {
      qsort(HvlpLogicalProcessorRegions, (unsigned int)HvlpLogicalProcessorCount, 0x78uLL, HvlpCompareActiveLpcbs);
      v20 = 0;
      if ( (_DWORD)HvlpLogicalProcessorCount )
      {
        do
        {
          memset(v27, 0, 0xCB8uLL);
          ApicIdAndNumaNode = 0;
          v21 = &dword_140D042E4[30 * v20];
          v22 = (unsigned int)*v21;
          if ( (_DWORD)v22 != v20 )
          {
            v27[0] = v20;
            ApicIdAndNumaNode = HvlpSetLogicalProcessorProperty(v22, 6LL, v27);
            if ( ApicIdAndNumaNode >= 0 )
              *v21 = v20;
          }
          if ( ApicIdAndNumaNode < 0 )
            goto LABEL_39;
        }
        while ( ++v20 < (unsigned int)HvlpLogicalProcessorCount );
      }
    }
    memset(&v25[8], 0, 32);
    v23 = (_DWORD *)HvlpAcquireHypercallPage(&v25[8], 1LL, 0LL, 8LL);
    v23[1] = *(_DWORD *)((char *)&Mm64BitPhysicalAddress + 7);
    *v23 = 5;
    v24 = HvcallInitiateHypercall(135);
    HvlpReleaseHypercallPage(&v25[8]);
    v14 = v24;
    LOWORD(v14) = -v24;
    ApicIdAndNumaNode = v24 != 0 ? 0xC0000001 : 0;
    if ( v24 )
    {
LABEL_39:
      MmFreeIndependentPages(v8, v6);
      return (unsigned int)ApicIdAndNumaNode;
    }
LABEL_37:
    ApicIdAndNumaNode = 0;
    if ( !KeDynamicPartitioningSupported )
      HvlNotifyAllProcessorsStarted(v14, v13, v15, v16);
    goto LABEL_39;
  }
  return (unsigned int)-1073741670;
}
