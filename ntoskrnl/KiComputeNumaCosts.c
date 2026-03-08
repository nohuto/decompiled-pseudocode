/*
 * XREFs of KiComputeNumaCosts @ 0x140B727C4
 * Callers:
 *     KeInitSystem @ 0x140B42FB8 (KeInitSystem.c)
 * Callees:
 *     KeRevertToUserGroupAffinityThread @ 0x1402AA110 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x1402ABED0 (KeSetSystemGroupAffinityThread.c)
 *     KiQuerySubNodeActiveAffinity @ 0x1402AE38C (KiQuerySubNodeActiveAffinity.c)
 *     KeGetNodePrimarySubNode @ 0x1402AE8B4 (KeGetNodePrimarySubNode.c)
 *     MmAllocatePartitionNodePagesForMdlEx @ 0x1402B39C0 (MmAllocatePartitionNodePagesForMdlEx.c)
 *     MiFreePagesFromMdl @ 0x1402C0DD0 (MiFreePagesFromMdl.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1403272A0 (MmMapLockedPagesSpecifyCache.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     qsort @ 0x1403D48B0 (qsort.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     HvlQueryNumaDistance @ 0x14053DE50 (HvlQueryNumaDistance.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 *     KiGetHalNumaConversionFactor @ 0x140B925EC (KiGetHalNumaConversionFactor.c)
 */

char KiComputeNumaCosts()
{
  char *Pool2; // rax
  __int64 v1; // rsi
  unsigned __int16 v2; // dx
  int v3; // r10d
  unsigned int v4; // esi
  __int64 v5; // rcx
  unsigned int v6; // edi
  int v7; // ecx
  __int16 v8; // r9
  unsigned int v9; // r15d
  __int64 *v10; // rax
  __int64 NodePrimarySubNode; // rax
  int v12; // r10d
  struct _GROUP_AFFINITY *p_PreviousAffinity_8; // rdx
  unsigned int v14; // r14d
  struct _MDL *PartitionNodePagesForMdl; // rax
  struct _MDL *v16; // r13
  char *v17; // r8
  unsigned __int8 CurrentIrql; // di
  _DWORD *SchedulerAssist; // r10
  __int64 v20; // rdx
  char *v21; // rcx
  unsigned __int64 v22; // r12
  unsigned __int8 v23; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v25; // r9
  int v26; // eax
  bool v27; // zf
  unsigned int v28; // edi
  int v29; // r8d
  unsigned int v30; // esi
  unsigned __int16 *v31; // r10
  int v32; // eax
  unsigned int v33; // r15d
  int v34; // r9d
  unsigned __int16 *v35; // rcx
  int v36; // eax
  _QWORD *v37; // r12
  int v38; // edx
  __int64 v39; // rax
  __int64 v40; // r13
  int v41; // ecx
  __int64 v42; // r11
  __int64 v43; // r9
  unsigned int v44; // r14d
  __int64 HalNumaConversionFactor; // rax
  unsigned __int64 v46; // r11
  unsigned __int64 v47; // rcx
  unsigned int v48; // esi
  unsigned int v49; // r9d
  int v50; // r14d
  _QWORD *v51; // r8
  __int64 *v52; // r10
  unsigned __int16 *v53; // rax
  __int64 v54; // rdx
  size_t v55; // rdx
  unsigned int v56; // r8d
  unsigned int v57; // ecx
  __int64 v58; // rdx
  __int16 v59; // cx
  int v61; // [rsp+48h] [rbp-C0h]
  int v62; // [rsp+48h] [rbp-C0h]
  unsigned int v63; // [rsp+4Ch] [rbp-BCh]
  int v64[2]; // [rsp+50h] [rbp-B8h] BYREF
  unsigned __int64 v65; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int64 Affinity; // [rsp+60h] [rbp-A8h]
  struct _GROUP_AFFINITY Affinity_8; // [rsp+68h] [rbp-A0h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity_8; // [rsp+78h] [rbp-90h] BYREF
  _WORD Base[4]; // [rsp+88h] [rbp-80h] BYREF
  _QWORD v70[127]; // [rsp+90h] [rbp-78h] BYREF

  PreviousAffinity_8 = 0LL;
  if ( (unsigned __int16)KeNumberNodes > 1u )
  {
    v1 = (unsigned __int16)KeNumberNodes * (unsigned int)(unsigned __int16)KeNumberNodes;
    Pool2 = (char *)ExAllocatePool2(64LL, 10 * v1, 0x634E654Bu);
    KiActualNodeCost = Pool2;
    if ( !Pool2 )
      return (char)Pool2;
    KiNodeGraph = &Pool2[8 * v1];
    if ( (_DWORD)v1 )
      memset(Pool2, -1, 8 * v1);
    v64[0] = -1;
    v64[1] = -1;
    v2 = KeNumberNodes;
    v3 = 0;
    v61 = 0;
    v4 = 0;
    v63 = 0;
    Affinity_8 = 0LL;
    if ( !KeNumberNodes )
    {
LABEL_56:
      v28 = (unsigned __int16)KeNumberNodes;
      v29 = 0;
      v65 = 0LL;
      v30 = 0;
      v64[0] = 0;
      if ( KeNumberNodes )
      {
        do
        {
          v31 = (unsigned __int16 *)KeNodeBlock[v30];
          Affinity = (unsigned __int64)v31;
          v32 = *v31;
          if ( (_WORD)v32 == v31[1] )
          {
            v33 = 0;
            v34 = v28 * v32;
            v62 = v28 * v32;
            do
            {
              v35 = (unsigned __int16 *)KeNodeBlock[v33];
              v36 = *v35;
              if ( (_WORD)v36 == v35[1] )
              {
                v37 = KiActualNodeCost;
                v38 = *v35;
                v39 = (unsigned int)(v34 + v36);
                v40 = (unsigned int)v39;
                if ( *((_QWORD *)KiActualNodeCost + v39) == -1LL )
                {
                  v41 = *v31;
                  v42 = v41 + v28 * v38;
                  v43 = *((_QWORD *)KiActualNodeCost + v42);
                  if ( v43 == -1 )
                  {
                    v44 = *((_DWORD *)KeNodeDistance + (int)(v38 + v28 * v41));
                    if ( v44 != 1 || (v44 = *((_DWORD *)KeNodeDistance + (int)v42), v44 != 1) )
                    {
                      if ( v29 )
                      {
                        v46 = v65;
                      }
                      else
                      {
                        HalNumaConversionFactor = KiGetHalNumaConversionFactor(v64);
                        v29 = v64[0];
                        v46 = HalNumaConversionFactor;
                        v31 = (unsigned __int16 *)Affinity;
                        v65 = HalNumaConversionFactor;
                      }
                      if ( v29 == 2 )
                      {
                        v47 = v46 * v44 / 0x64;
                      }
                      else if ( v29 == 3 )
                      {
                        v47 = 100 * (unsigned __int64)v44 / v46;
                      }
                      else
                      {
                        v47 = -1LL;
                      }
                      v37[v40] = v47;
                    }
                  }
                  else
                  {
                    *((_QWORD *)KiActualNodeCost + v39) = v43;
                  }
                  v34 = v62;
                }
              }
              ++v33;
            }
            while ( v33 < v28 );
          }
          ++v30;
        }
        while ( v30 < v28 );
        v48 = 0;
        do
        {
          v49 = 0;
          v50 = v28 * *(unsigned __int16 *)(KeNodeBlock[v48] + 2);
          if ( v28 )
          {
            v51 = v70;
            v52 = KeNodeBlock;
            do
            {
              v53 = (unsigned __int16 *)*v52;
              *((_DWORD *)v51 - 2) = v49;
              if ( v53 )
              {
                v54 = *((_QWORD *)KiActualNodeCost + v50 + (unsigned int)*v53);
                *v51 = v54;
                if ( !v54 )
                  *v51 = 1LL;
              }
              else
              {
                *v51 = -1LL;
              }
              ++v49;
              ++v52;
              v51 += 2;
            }
            while ( v49 < v28 );
          }
          v55 = (unsigned __int16)KeNumberNodes;
          v70[2 * v48] = 0LL;
          qsort(Base, v55, 0x10uLL, MiNodeCostSort);
          v28 = (unsigned __int16)KeNumberNodes;
          v56 = 0;
          if ( KeNumberNodes )
          {
            v57 = (unsigned __int16)KeNumberNodes;
            do
            {
              v58 = v56 + v48 * v57;
              v59 = Base[8 * v56++];
              *((_WORD *)KiNodeGraph + v58) = v59;
              v57 = v28;
            }
            while ( v56 < v28 );
          }
          ++v48;
        }
        while ( v48 < v28 );
      }
      goto LABEL_2;
    }
    while ( 1 )
    {
      v5 = KeNodeBlock[v4];
      if ( (HvlEnlightenments & 0x800) != 0 )
      {
        v6 = 0;
        if ( v2 )
        {
          do
          {
            v65 = 0LL;
            HvlQueryNumaDistance(v4, v6, (__int64 *)&v65);
            v7 = v4 * (unsigned __int16)KeNumberNodes;
            if ( v65 == -1LL )
              *((_QWORD *)KiActualNodeCost + v6 + v7) = -1LL;
            else
              *((_QWORD *)KiActualNodeCost + v6 + v7) = v65 << 9 >> 10;
            ++v6;
          }
          while ( v6 < (unsigned __int16)KeNumberNodes );
LABEL_52:
          v3 = v61;
        }
      }
      else
      {
        v8 = *(_WORD *)v5;
        if ( *(_WORD *)v5 == *(_WORD *)(v5 + 2) )
        {
          if ( *(_DWORD *)(v5 + 16) )
          {
            v9 = v4;
          }
          else
          {
            v9 = 0;
            if ( v2 )
            {
              v10 = KeNodeBlock;
              do
              {
                v5 = *v10;
                if ( *(_WORD *)(*v10 + 2) == v8 && *(_DWORD *)(v5 + 16) )
                  break;
                ++v9;
                ++v10;
              }
              while ( v9 < v2 );
            }
            if ( v9 == v2 )
              goto LABEL_53;
          }
          NodePrimarySubNode = KeGetNodePrimarySubNode(v5);
          KiQuerySubNodeActiveAffinity(NodePrimarySubNode, (__int64)&Affinity_8, 0LL);
          Affinity_8.Mask &= Affinity_8.Mask ^ (Affinity_8.Mask - 1);
          if ( v12 )
          {
            p_PreviousAffinity_8 = 0LL;
          }
          else
          {
            v61 = 1;
            p_PreviousAffinity_8 = &PreviousAffinity_8;
          }
          KeSetSystemGroupAffinityThread(&Affinity_8, p_PreviousAffinity_8);
          v14 = 0;
          if ( KeNumberNodes )
          {
            do
            {
              PartitionNodePagesForMdl = (struct _MDL *)MmAllocatePartitionNodePagesForMdlEx(
                                                          0,
                                                          v64[0],
                                                          0LL,
                                                          0x1000uLL,
                                                          0,
                                                          v14,
                                                          7,
                                                          0LL);
              v16 = PartitionNodePagesForMdl;
              if ( PartitionNodePagesForMdl )
              {
                v17 = (char *)MmMapLockedPagesSpecifyCache(
                                PartitionNodePagesForMdl,
                                0,
                                MmNonCached,
                                0LL,
                                0,
                                0x40000020u);
                if ( v17 )
                {
                  CurrentIrql = KeGetCurrentIrql();
                  __writecr8(2uLL);
                  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
                  {
                    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
                    if ( CurrentIrql == 2 )
                      LODWORD(v20) = 4;
                    else
                      v20 = (-1LL << (CurrentIrql + 1)) & 4;
                    SchedulerAssist[5] |= v20;
                  }
                  v21 = v17 + 4096;
                  Affinity = __rdtsc();
                  while ( v17 < v21 )
                    v17 += 8;
                  v22 = __rdtsc();
                  if ( KiIrqlFlags )
                  {
                    v23 = KeGetCurrentIrql();
                    if ( (KiIrqlFlags & 1) != 0 && v23 <= 0xFu && CurrentIrql <= 0xFu && v23 >= 2u )
                    {
                      CurrentPrcb = KeGetCurrentPrcb();
                      v25 = CurrentPrcb->SchedulerAssist;
                      v26 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
                      v27 = (v26 & v25[5]) == 0;
                      v25[5] &= v26;
                      if ( v27 )
                        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
                    }
                  }
                  __writecr8(CurrentIrql);
                  *((_QWORD *)KiActualNodeCost + v14 + v9 * (unsigned __int16)KeNumberNodes) = v22 - Affinity;
                }
                MiFreePagesFromMdl((ULONG_PTR)v16, 0);
                ExFreePoolWithTag(v16, 0);
              }
              ++v14;
            }
            while ( v14 < (unsigned __int16)KeNumberNodes );
            v4 = v63;
          }
          goto LABEL_52;
        }
      }
LABEL_53:
      v2 = KeNumberNodes;
      v63 = ++v4;
      if ( v4 >= (unsigned __int16)KeNumberNodes )
      {
        if ( v3 == 1 )
          KeRevertToUserGroupAffinityThread(&PreviousAffinity_8);
        goto LABEL_56;
      }
    }
  }
LABEL_2:
  LOBYTE(Pool2) = 1;
  return (char)Pool2;
}
