/*
 * XREFs of MiInsertHugeRangeInList @ 0x14061EB84
 * Callers:
 *     MiGetHugeRangeFromNode @ 0x1403BF1C4 (MiGetHugeRangeFromNode.c)
 *     MiAddPartitionHugeRange @ 0x14061CDC4 (MiAddPartitionHugeRange.c)
 *     MiDereferenceIoHugeRange @ 0x14061D540 (MiDereferenceIoHugeRange.c)
 *     MiHugeRangeFreeToZero @ 0x14061E83C (MiHugeRangeFreeToZero.c)
 *     MiMarkHugePfnBad @ 0x14061F1D0 (MiMarkHugePfnBad.c)
 *     MiMarkHugePfnGood @ 0x14061F9B8 (MiMarkHugePfnGood.c)
 *     MiMoveBadHugeRangeCrossPartition @ 0x14061FC7C (MiMoveBadHugeRangeCrossPartition.c)
 *     MiReleaseMemoryRuns @ 0x14061FEB0 (MiReleaseMemoryRuns.c)
 *     MiFreePartitionPageRun @ 0x140657734 (MiFreePartitionPageRun.c)
 *     MiInsertPartitionPages @ 0x140657EB8 (MiInsertPartitionPages.c)
 *     MiAllocatePartitionPhysicalPages @ 0x140A416B8 (MiAllocatePartitionPhysicalPages.c)
 * Callees:
 *     MiSearchNumaNodeTable @ 0x140319DD0 (MiSearchNumaNodeTable.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140333520 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiWakePageZeroing @ 0x140361388 (MiWakePageZeroing.c)
 *     MiPageToChannel @ 0x140370C10 (MiPageToChannel.c)
 *     MiHugePfnPartition @ 0x14061E808 (MiHugePfnPartition.c)
 *     MiUpdateHugePageCounts @ 0x14062090C (MiUpdateHugePageCounts.c)
 *     MiMarkHugeRangeTransition @ 0x14062C4CC (MiMarkHugeRangeTransition.c)
 */

void __fastcall MiInsertHugeRangeInList(__int64 a1, __int64 a2, char a3)
{
  unsigned __int64 v3; // r14
  __int64 v6; // r13
  __int64 v7; // rsi
  unsigned int v8; // eax
  unsigned int v9; // edx
  unsigned __int64 v10; // r12
  __int64 *v11; // r11
  __int64 v12; // rbx
  __int64 v13; // r8
  unsigned int v14; // r15d
  __int64 v15; // r9
  unsigned __int64 *v16; // rsi
  __int16 v17; // bx
  unsigned __int64 v18; // rcx
  __int64 v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // r9
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // r10
  __int64 v24; // r14
  __int64 v25; // r10
  __int64 *v26; // [rsp+20h] [rbp-58h]
  int v27; // [rsp+28h] [rbp-50h]
  unsigned int v29; // [rsp+88h] [rbp+10h]
  int v30; // [rsp+90h] [rbp+18h]
  __int64 v31; // [rsp+98h] [rbp+20h]

  v3 = a2 & 0x3FFFFF;
  v26 = (__int64 *)(qword_140C67A70 + 8 * v3);
  if ( a1 )
    v6 = a1;
  else
    v6 = MiHugePfnPartition((_QWORD *)(qword_140C67A70 + 8 * v3));
  v31 = *(_QWORD *)(v6 + 16208);
  v7 = *((unsigned int *)MiSearchNumaNodeTable(v3 << 18) + 2);
  v8 = MiPageToChannel(v3 << 18);
  v9 = dword_140C65800[0];
  v29 = v8;
  v10 = *(_QWORD *)(v6 + 16) + 25408 * v7;
  v30 = dword_140C65800[0];
  if ( (a3 & 1) == 0 )
  {
    if ( (a3 & 0x20) == 0 && (unsigned int)MiMarkHugeRangeTransition(v3 << 18) )
      return;
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v10 + 23104));
    v9 = v30;
  }
  v11 = v26;
  v12 = *v26;
  v13 = ((unsigned __int64)*v26 >> 59) & 1;
  v27 = v13;
  if ( (*v26 & 8) != 0 )
    a3 = a3 & 0xF5 | 8;
  if ( (a3 & 2) != 0 )
  {
    v14 = 0;
    v15 = v31 + 16LL * v9 * (unsigned int)v7;
  }
  else
  {
    if ( (a3 & 8) != 0 )
    {
      v14 = 5;
      v16 = (unsigned __int64 *)(v31 + 8LL * ((unsigned int)v7 + 2 * v9 * (unsigned __int16)KeNumberNodes));
      goto LABEL_16;
    }
    v14 = 1;
    v15 = v31 + 8 * (v9 + (unsigned __int64)(2 * v9 * (unsigned int)v7));
  }
  v16 = (unsigned __int64 *)(v15 + 8 * (v3 % v9));
LABEL_16:
  if ( a1 )
  {
    LOWORD(v12) = (v12 ^ (16 * *(_WORD *)v6)) & 0x7FF0 ^ v12;
    MiUpdateHugePageCounts(v6, a2, 1LL, 1LL);
    LODWORD(v13) = v27;
    v11 = v26;
  }
  if ( v14 )
  {
    if ( v14 == 1 )
      v17 = v12 & 0xFFF8 | 2;
    else
      v17 = v12 & 0xFFF8 | 4;
  }
  else
  {
    v17 = v12 & 0xFFF8 | 1;
  }
  v18 = *v16;
  v19 = v17 & 0x7FFF;
  v20 = (unsigned int)v19 | 0x800000000000000LL;
  if ( !(_DWORD)v13 )
    v20 = v19;
  v21 = (*v16 >> 15) & 0x3FFFFF;
  if ( v21 )
  {
    v23 = v3;
    v24 = v3 << 37;
    v25 = v23 << 15;
    if ( (a3 & 0x10) != 0 )
    {
      *v11 = v20 | (((v18 >> 37) & 0x3FFFFF) << 37);
      *(_QWORD *)(qword_140C67A70 + 8 * ((v18 >> 37) & 0x3FFFFF)) = v25 | *(_QWORD *)(qword_140C67A70
                                                                                    + 8 * ((v18 >> 37) & 0x3FFFFF)) & 0xFFFFFFE000007FFFuLL;
      LODWORD(v13) = v27;
      v22 = v24 | v18 & 0xF800001FFFFFFFFFuLL;
    }
    else
    {
      *v11 = v20 | v18 & 0x1FFFFF8000LL;
      *(_QWORD *)(qword_140C67A70 + 8 * v21) = v24 | *(_QWORD *)(qword_140C67A70 + 8 * v21) & 0xF800001FFFFFFFFFuLL;
      v22 = v25 | v18 & 0xFFFFFFE000007FFFuLL;
    }
  }
  else
  {
    *v11 = v20;
    v22 = v18 & 0xF800000000007FFFuLL | ((v3 | (v3 << 22)) << 15);
  }
  *v16 = v22;
  if ( v14 != 5 )
  {
    ++*(_QWORD *)(v10 + 8 * (v29 + 4LL * v14) + 22864);
    _InterlockedIncrement64((volatile signed __int64 *)(v6 + 16216));
    if ( v14 == 1 && !(_DWORD)v13 )
      MiWakePageZeroing(v6, v10, 1);
  }
  if ( (a3 & 1) == 0 )
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v10 + 23104));
}
