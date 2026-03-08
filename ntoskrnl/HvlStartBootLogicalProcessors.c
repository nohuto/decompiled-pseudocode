/*
 * XREFs of HvlStartBootLogicalProcessors @ 0x1403714E0
 * Callers:
 *     KeStartAllProcessors @ 0x140B3C580 (KeStartAllProcessors.c)
 * Callees:
 *     HalQueryMaximumProcessorCount @ 0x140375910 (HalQueryMaximumProcessorCount.c)
 *     HvcallInitiateHypercall @ 0x1403C81E0 (HvcallInitiateHypercall.c)
 *     qsort @ 0x1403D48B0 (qsort.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     HvlpAcquireHypercallPage @ 0x14053E3C0 (HvlpAcquireHypercallPage.c)
 *     HvlpEnableNextLogicalProcessor @ 0x14053E9B4 (HvlpEnableNextLogicalProcessor.c)
 *     HvlpGetLpcbByApicId @ 0x14053EB98 (HvlpGetLpcbByApicId.c)
 *     HvlpQueryApicIdAndNumaNode @ 0x14053EF38 (HvlpQueryApicIdAndNumaNode.c)
 *     HvlpReleaseHypercallPage @ 0x14053F010 (HvlpReleaseHypercallPage.c)
 *     HvlpSelectLpSet @ 0x14053F128 (HvlpSelectLpSet.c)
 *     HvlpSelectVpSet @ 0x14053F57C (HvlpSelectVpSet.c)
 *     HvlpSetLogicalProcessorProperty @ 0x14053FBE4 (HvlpSetLogicalProcessorProperty.c)
 *     HvlNotifyAllProcessorsStarted @ 0x140542A34 (HvlNotifyAllProcessorsStarted.c)
 *     MmAllocateIndependentPages @ 0x140869AC0 (MmAllocateIndependentPages.c)
 *     MmFreeIndependentPages @ 0x14087B250 (MmFreeIndependentPages.c)
 *     HvlpDiscoverTopologyLocal @ 0x14093E420 (HvlpDiscoverTopologyLocal.c)
 */

__int64 __fastcall HvlStartBootLogicalProcessors(int a1)
{
  unsigned int v1; // r12d
  unsigned int MaximumProcessorCount; // eax
  __int64 v4; // rbx
  size_t v5; // r15
  char *IndependentPages; // rax
  char *v7; // rsi
  signed int ApicIdAndNumaNode; // edi
  struct _KPRCB *CurrentPrcb; // r14
  unsigned int v10; // r14d
  unsigned __int16 *v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  char *v15; // r9
  __int64 v16; // r11
  char v17; // bl
  __int64 LpcbByApicId; // rax
  __int64 v19; // rdx
  unsigned int i; // ebx
  int *v21; // r14
  __int64 v22; // rcx
  _DWORD *v23; // rax
  __int64 v24; // rdx
  unsigned __int16 v25; // bx
  __int128 v26; // [rsp+38h] [rbp-49h] BYREF
  __int64 v27; // [rsp+48h] [rbp-39h]
  __int64 v28; // [rsp+50h] [rbp-31h]
  _OWORD v29[2]; // [rsp+58h] [rbp-29h] BYREF
  __int128 v30; // [rsp+78h] [rbp-9h] BYREF
  __int128 v31; // [rsp+88h] [rbp+7h]
  __int128 v32; // [rsp+98h] [rbp+17h]
  __int64 v33; // [rsp+A8h] [rbp+27h]
  __int64 v34; // [rsp+B0h] [rbp+2Fh]
  int v35; // [rsp+E8h] [rbp+67h] BYREF

  v35 = a1;
  v1 = KiMaximumGroupSize;
  v33 = 0LL;
  LOWORD(v34) = 0;
  v30 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  if ( (HvlpFlags & 2) == 0 )
    return 0LL;
  v35 = 0;
  if ( ((int (__fastcall *)(__int64, __int64, __int128 *, int *))off_140C020E8[0])(11LL, 64LL, &v30, &v35) >= 0
    && v35 == 64 )
  {
    HvlpQueryProcessorNode = *((_QWORD *)&v30 + 1);
    HvlpQueryProximityId = *((_QWORD *)&v32 + 1);
    HvlpQueryProximityNode = *((_QWORD *)&v31 + 1);
    HvlpQueryNodeDistance = v34;
  }
  else
  {
    HvlpQueryProcessorNode = 0LL;
    HvlpQueryProximityId = 0LL;
    HvlpQueryProximityNode = 0LL;
    HvlpQueryNodeDistance = 0LL;
  }
  MaximumProcessorCount = HalQueryMaximumProcessorCount();
  v4 = MaximumProcessorCount;
  v5 = 40 * MaximumProcessorCount;
  IndependentPages = (char *)MmAllocateIndependentPages(v5, 0xFFFFFFFFLL);
  v7 = IndependentPages;
  if ( IndependentPages )
  {
    memset(IndependentPages, 0, v5);
    CurrentPrcb = KeGetCurrentPrcb();
    dword_140D2A9B4[0] = 0;
    ApicIdAndNumaNode = HvlpQueryApicIdAndNumaNode(0LL, &dword_140D2A9B8, &word_140D2A9BC);
    if ( ApicIdAndNumaNode >= 0 )
    {
      word_140D2A9BE = *(_WORD *)(KeNodeBlock[(unsigned __int16)word_140D2A9BC] + 2);
      qword_140D2A9D0 = (__int64)CurrentPrcb->StatisticsPage;
      dword_140D2A9C8 = CurrentPrcb->Number;
      HvlpCpuVendor = CurrentPrcb->CpuVendor;
      HvlpDiscoverTopologyLocal(
        (unsigned __int16)word_140D2A9BE,
        (unsigned int)dword_140D2A9B8,
        &unk_140D2A9C0,
        &unk_140D2A9C4);
      LODWORD(HvlpLogicalProcessorCount) = 1;
      HvlpLogicalProcessorRegions = 1;
      ApicIdAndNumaNode = HvlpSelectLpSet((unsigned int)v4, v7);
      if ( ApicIdAndNumaNode >= 0 )
      {
        v10 = 1;
        if ( (unsigned int)v4 > 1 )
        {
          v11 = (unsigned __int16 *)(v7 + 48);
          do
          {
            if ( *((_BYTE *)v11 - 7) )
            {
              if ( (int)HvlpEnableNextLogicalProcessor(*((unsigned int *)v11 - 1), *v11) < 0 )
                break;
              LODWORD(HvlpLogicalProcessorCount) = HvlpLogicalProcessorCount + 1;
              *((_BYTE *)v11 - 6) = 1;
            }
            ++v10;
            v11 += 20;
          }
          while ( v10 < (unsigned int)v4 );
        }
        ApicIdAndNumaNode = HvlpSelectVpSet((unsigned int)v4, v7, v1);
        if ( ApicIdAndNumaNode >= 0 )
        {
          if ( (_DWORD)v4 )
          {
            v15 = v7 + 1;
            v16 = v4;
            do
            {
              v17 = *v15;
              if ( *v15 || v15[2] )
              {
                LpcbByApicId = HvlpGetLpcbByApicId(*(unsigned int *)(v15 + 3));
                if ( v17 )
                  *(_DWORD *)(LpcbByApicId + 48) = 1;
                if ( v15[2] )
                {
                  ++HvlpActiveProcessorCount;
                  *(_BYTE *)(LpcbByApicId + 112) = 1;
                }
              }
              v15 += 40;
              --v16;
            }
            while ( v16 );
          }
          if ( (HvlpRootFlags & 0x800) == 0 )
            goto LABEL_36;
          if ( HvlpActiveProcessorCount != (_DWORD)HvlpLogicalProcessorCount )
          {
            qsort(
              &HvlpLogicalProcessorRegions,
              (unsigned int)HvlpLogicalProcessorCount,
              0x78uLL,
              HvlpCompareActiveLpcbs);
            for ( i = 0; i < (unsigned int)HvlpLogicalProcessorCount; ++i )
            {
              memset(v29, 0, sizeof(v29));
              ApicIdAndNumaNode = 0;
              v21 = &dword_140D2A9B4[30 * i];
              v22 = (unsigned int)*v21;
              if ( (_DWORD)v22 == i
                || (LODWORD(v29[0]) = i,
                    ApicIdAndNumaNode = HvlpSetLogicalProcessorProperty(v22, v19, v29),
                    ApicIdAndNumaNode < 0) )
              {
                if ( ApicIdAndNumaNode < 0 )
                  goto LABEL_38;
              }
              else
              {
                *v21 = i;
              }
            }
          }
          v27 = 0LL;
          LODWORD(v28) = 0;
          v26 = 0LL;
          v23 = (_DWORD *)HvlpAcquireHypercallPage(&v26, 1LL, 0LL, 8LL);
          v24 = v28;
          v23[1] = HvlpActiveProcessorCount;
          *v23 = 5;
          v25 = HvcallInitiateHypercall(135LL, v24, 0LL);
          HvlpReleaseHypercallPage(&v26);
          v13 = v25;
          LOWORD(v13) = -v25;
          ApicIdAndNumaNode = v25 != 0 ? 0xC0000001 : 0;
          if ( !v25 )
          {
LABEL_36:
            ApicIdAndNumaNode = 0;
            if ( !KeDynamicPartitioningSupported )
              HvlNotifyAllProcessorsStarted(v13, v12, v14, v15);
          }
        }
      }
    }
LABEL_38:
    MmFreeIndependentPages(v7, v5);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)ApicIdAndNumaNode;
}
