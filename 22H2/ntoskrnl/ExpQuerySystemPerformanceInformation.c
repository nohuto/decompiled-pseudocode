/*
 * XREFs of ExpQuerySystemPerformanceInformation @ 0x1406BF5C0
 * Callers:
 *     ExpQuerySystemInformation @ 0x1406C9E30 (ExpQuerySystemInformation.c)
 * Callees:
 *     MmGetWorkingSetLeafSize @ 0x14033B0E0 (MmGetWorkingSetLeafSize.c)
 *     MmGetSharedCommit @ 0x14033B124 (MmGetSharedCommit.c)
 *     MmGetResidentAvailablePages @ 0x14033B134 (MmGetResidentAvailablePages.c)
 *     ExQueryPoolUsage @ 0x14033B154 (ExQueryPoolUsage.c)
 *     MmGetSystemPageCounts @ 0x14033B27C (MmGetSystemPageCounts.c)
 *     MmGetNumberOfFreeSystemPtes @ 0x14033B290 (MmGetNumberOfFreeSystemPtes.c)
 *     MiMaximumCommitmentAvailable @ 0x14033B46C (MiMaximumCommitmentAvailable.c)
 *     MiFreePoolPagesLeft @ 0x14033B490 (MiFreePoolPagesLeft.c)
 *     MmGetAvailablePages @ 0x140344570 (MmGetAvailablePages.c)
 *     MmGetTotalCommittedPages @ 0x140344590 (MmGetTotalCommittedPages.c)
 *     MmGetTotalCommitLimit @ 0x1403445B0 (MmGetTotalCommitLimit.c)
 *     MmGetPeakCommitment @ 0x1403445D0 (MmGetPeakCommitment.c)
 *     MmGetProcessPartitionId @ 0x1403445F0 (MmGetProcessPartitionId.c)
 *     memmove @ 0x140413540 (memmove.c)
 *     memset @ 0x140413800 (memset.c)
 *     PsQueryRuntimeProcess @ 0x1406215F0 (PsQueryRuntimeProcess.c)
 */

void *__fastcall ExpQuerySystemPerformanceInformation(unsigned int a1, void *a2, unsigned int a3)
{
  __int64 v3; // r15
  ULONG v4; // r11d
  LARGE_INTEGER v5; // rax
  ULONG v6; // ebx
  LARGE_INTEGER v7; // rcx
  ULONG v8; // edi
  LARGE_INTEGER v9; // rdx
  __int64 *v10; // r10
  __int64 v11; // rsi
  __int64 v12; // r9
  int v13; // ebx
  int v14; // edx
  int v15; // r8d
  __int64 *v16; // rax
  __int64 v17; // r9
  __int64 v18; // rcx
  unsigned __int64 AvailablePages; // rax
  unsigned __int16 v20; // cx
  unsigned __int64 TotalCommittedPages; // rax
  unsigned __int16 v22; // cx
  unsigned __int64 v23; // r10
  unsigned __int64 TotalCommitLimit; // rax
  unsigned __int16 v25; // cx
  unsigned __int64 v26; // r10
  unsigned __int64 PeakCommitment; // rax
  int v28; // r8d
  unsigned int v29; // r9d
  unsigned __int64 v30; // r10
  int v31; // r8d
  int v32; // r9d
  int v33; // r10d
  int v34; // r11d
  int v35; // edi
  int v36; // esi
  int v37; // r15d
  int v38; // r12d
  int v39; // r13d
  int v40; // eax
  int v41; // ecx
  int v42; // edx
  __int64 *v43; // rdx
  int v44; // r14d
  _DWORD *v45; // rcx
  __int64 v46; // rdx
  char *WorkingSetLeafSize; // rax
  __int64 v48; // rdx
  char *v49; // rax
  unsigned __int64 v50; // r8
  unsigned __int64 v51; // rax
  unsigned __int64 v52; // r8
  int v53; // ecx
  ULONG v54; // r10d
  unsigned int v55; // edx
  unsigned int v56; // r8d
  unsigned int v57; // r9d
  unsigned int v58; // r11d
  unsigned int v59; // edi
  unsigned int v60; // esi
  unsigned int v61; // r14d
  unsigned int v62; // r15d
  unsigned int v63; // r12d
  int v64; // r13d
  __int64 *v65; // rax
  _DWORD *v66; // rax
  int v67; // ebx
  bool v68; // zf
  int v70; // [rsp+40h] [rbp-C0h]
  int v71; // [rsp+44h] [rbp-BCh]
  int v72; // [rsp+48h] [rbp-B8h]
  __int64 v73; // [rsp+50h] [rbp-B0h]
  __int64 v74; // [rsp+50h] [rbp-B0h]
  _QWORD Src[4]; // [rsp+60h] [rbp-A0h] BYREF
  ULONG v76; // [rsp+80h] [rbp-80h]
  ULONG v77; // [rsp+84h] [rbp-7Ch]
  ULONG v78; // [rsp+88h] [rbp-78h]
  int v79; // [rsp+8Ch] [rbp-74h]
  int v80; // [rsp+90h] [rbp-70h]
  int v81; // [rsp+94h] [rbp-6Ch]
  int v82; // [rsp+98h] [rbp-68h]
  int v83; // [rsp+9Ch] [rbp-64h]
  int v84; // [rsp+A0h] [rbp-60h]
  int v85; // [rsp+A4h] [rbp-5Ch]
  int v86; // [rsp+A8h] [rbp-58h]
  int v87; // [rsp+ACh] [rbp-54h]
  int v88; // [rsp+B0h] [rbp-50h]
  int v89; // [rsp+B4h] [rbp-4Ch]
  int v90; // [rsp+B8h] [rbp-48h]
  int v91; // [rsp+BCh] [rbp-44h]
  int v92; // [rsp+C0h] [rbp-40h]
  int v93; // [rsp+C4h] [rbp-3Ch]
  int v94; // [rsp+C8h] [rbp-38h]
  int v95; // [rsp+CCh] [rbp-34h]
  __int128 v96; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v97; // [rsp+E0h] [rbp-20h] BYREF
  int NumberOfFreeSystemPtes; // [rsp+E8h] [rbp-18h]
  int v99; // [rsp+ECh] [rbp-14h]
  int v100; // [rsp+F0h] [rbp-10h]
  int v101; // [rsp+F4h] [rbp-Ch]
  __int64 v102; // [rsp+F8h] [rbp-8h] BYREF
  int v103; // [rsp+100h] [rbp+0h]
  int v104; // [rsp+104h] [rbp+4h]
  int v105; // [rsp+108h] [rbp+8h]
  int v106; // [rsp+10Ch] [rbp+Ch]
  _QWORD v107[15]; // [rsp+110h] [rbp+10h] BYREF
  int v108; // [rsp+188h] [rbp+88h]
  __int64 v109; // [rsp+18Ch] [rbp+8Ch]
  int v110; // [rsp+194h] [rbp+94h]
  __int128 v111; // [rsp+198h] [rbp+98h]
  __int128 v112; // [rsp+1A8h] [rbp+A8h]
  __int64 *v113; // [rsp+1C0h] [rbp+C0h]
  __int128 v114; // [rsp+1C8h] [rbp+C8h] BYREF
  _DWORD v115[18]; // [rsp+1D8h] [rbp+D8h] BYREF
  unsigned __int16 ProcessPartitionId; // [rsp+248h] [rbp+148h]

  v3 = a1;
  v82 = 0;
  v97 = 0LL;
  v102 = 0LL;
  v96 = 0LL;
  memset(v107, 0, sizeof(v107));
  v4 = IoOtherOperationCount;
  v5 = IoOtherTransferCount;
  v6 = IoReadOperationCount;
  v7 = IoReadTransferCount;
  v8 = IoWriteOperationCount;
  v9 = IoWriteTransferCount;
  v113 = KiProcessorBlock;
  v111 = 0LL;
  v112 = 0LL;
  v114 = 0LL;
  if ( (_DWORD)v3 )
  {
    v10 = KiProcessorBlock;
    v11 = (unsigned int)v3;
    do
    {
      v12 = *v10++;
      v4 += *(_DWORD *)(v12 + 11620);
      v6 += *(_DWORD *)(v12 + 11612);
      v8 += *(_DWORD *)(v12 + 11616);
      v9.QuadPart += *(_QWORD *)(v12 + 11632);
      v5.QuadPart += *(_QWORD *)(v12 + 11640);
      v7.QuadPart += *(_QWORD *)(v12 + 11624);
      --v11;
    }
    while ( v11 );
  }
  v76 = v6;
  v13 = 0;
  Src[2] = v9.QuadPart;
  v14 = 0;
  Src[1] = v7.QuadPart;
  v15 = 0;
  Src[3] = v5.QuadPart;
  v77 = v8;
  v78 = v4;
  if ( (_DWORD)v3 )
  {
    v16 = KiProcessorBlock;
    v17 = v3;
    do
    {
      v18 = *v16++;
      v15 += *(_DWORD *)(v18 + 11580);
      v14 += *(_DWORD *)(v18 + 11576);
      --v17;
    }
    while ( v17 );
  }
  v108 = v15;
  v109 = 0LL;
  v110 = v14;
  ProcessPartitionId = MmGetProcessPartitionId((__int64)KeGetCurrentThread()->ApcState.Process);
  AvailablePages = MmGetAvailablePages(ProcessPartitionId);
  if ( AvailablePages > 0xFFFFFFFF )
    v79 = -1;
  else
    v79 = AvailablePages;
  TotalCommittedPages = MmGetTotalCommittedPages(v20);
  if ( TotalCommittedPages > v23 )
    v80 = v23;
  else
    v80 = TotalCommittedPages;
  TotalCommitLimit = MmGetTotalCommitLimit(v22);
  if ( TotalCommitLimit > v26 )
    v81 = v26;
  else
    v81 = TotalCommitLimit;
  PeakCommitment = MmGetPeakCommitment(v25);
  if ( PeakCommitment > v30 )
    LODWORD(PeakCommitment) = v30;
  v82 = PeakCommitment;
  if ( (unsigned int)PeakCommitment < v29 )
    v82 = v28;
  v31 = 0;
  v32 = 0;
  v33 = 0;
  v34 = 0;
  v35 = 0;
  v36 = 0;
  v37 = 0;
  v38 = 0;
  v39 = 0;
  v40 = 0;
  v41 = 0;
  v70 = 0;
  v42 = 0;
  v71 = 0;
  v72 = 0;
  if ( a1 )
  {
    v43 = KiProcessorBlock;
    v73 = a1;
    v44 = 0;
    do
    {
      v45 = (_DWORD *)*v43++;
      v31 += v45[2884];
      v32 += v45[2885];
      v33 += v45[2886];
      v34 += v45[8186];
      v35 += v45[2887];
      v36 += v45[2888];
      v37 += v45[2889];
      v38 += v45[8187];
      v39 += v45[8188];
      v44 += v45[2890];
      v70 += v45[2891];
      v71 += v45[2892];
      v72 += v45[2893];
      --v73;
    }
    while ( v73 );
    v40 = v70;
    v41 = v71;
    v42 = v72;
  }
  else
  {
    v44 = 0;
  }
  v83 = v31;
  v84 = v32;
  v85 = v33;
  v86 = v34;
  v87 = v35;
  v88 = v36;
  v89 = v37;
  v90 = v38;
  v91 = v39;
  v92 = v44;
  v93 = v40;
  v94 = v41;
  v95 = v42;
  NumberOfFreeSystemPtes = MmGetNumberOfFreeSystemPtes();
  MmGetSystemPageCounts(&v114);
  v99 = v114;
  WorkingSetLeafSize = MmGetWorkingSetLeafSize(2LL, v46);
  if ( (unsigned __int64)WorkingSetLeafSize > 0xFFFFFFFF )
    LODWORD(WorkingSetLeafSize) = -1;
  v104 = (int)WorkingSetLeafSize;
  v49 = MmGetWorkingSetLeafSize(3LL, v48);
  if ( (unsigned __int64)v49 > v50 )
    LODWORD(v49) = v50;
  v105 = (int)v49;
  v101 = DWORD2(v114);
  v106 = DWORD1(v114);
  v100 = HIDWORD(v114);
  MiFreePoolPagesLeft(6);
  v51 = MiMaximumCommitmentAvailable((__int64)&MiSystemPartition);
  if ( v52 > v51 )
    LODWORD(v52) = v51;
  v103 = v52;
  Src[0] = KeMaximumIncrement * (unsigned __int64)(unsigned int)PsQueryRuntimeProcess((__int64)PsIdleProcess, v115);
  ExQueryPoolUsage(
    (int)&v96,
    (int)&v96 + 4,
    (int)&v96 + 8,
    (int)&v96 + 12,
    (__int64)&v102 + 4,
    (__int64)&v97,
    (__int64)&v97 + 4,
    (__int64)&v102);
  v53 = 0;
  v54 = CcFastMdlReadWait;
  v55 = 0;
  memset(v107, 0, 20);
  v56 = 0;
  v57 = 0;
  v58 = 0;
  HIDWORD(v107[2]) = CcFastMdlReadWait;
  v59 = 0;
  memset(&v107[3], 0, 96);
  v60 = 0;
  v61 = 0;
  v62 = 0;
  v63 = 0;
  v64 = 0;
  if ( a1 )
  {
    v74 = a1;
    v65 = KiProcessorBlock;
    do
    {
      v66 = (_DWORD *)*v65;
      LODWORD(v107[0]) = v66[2897] + v13;
      HIDWORD(v107[6]) += v66[8166];
      v53 += v66[2898];
      v55 += v66[8176];
      v56 += v66[2899];
      v57 += v66[8160];
      v54 += v66[8161];
      v58 += v66[8178];
      v59 += v66[8162];
      v60 += v66[8163];
      v61 += v66[8164];
      v62 += v66[8179];
      v63 += v66[8180];
      v64 += v66[8165];
      LODWORD(v107[7]) += v66[8167];
      HIDWORD(v107[7]) += v66[8181];
      LODWORD(v107[8]) += v66[8182];
      HIDWORD(v107[8]) += v66[2900];
      LODWORD(v107[9]) += v66[2901];
      HIDWORD(v107[9]) += v66[2902];
      LODWORD(v107[10]) += v66[8177];
      HIDWORD(v107[10]) += v66[8168];
      LODWORD(v107[11]) += v66[8169];
      HIDWORD(v107[11]) += v66[8183];
      LODWORD(v107[12]) += v66[8184];
      HIDWORD(v107[12]) += v66[8185];
      LODWORD(v107[13]) += v66[8171];
      HIDWORD(v107[13]) += v66[8172];
      LODWORD(v107[14]) += v66[8173];
      v67 = v66[8174] + HIDWORD(v107[14]);
      v65 = v113 + 1;
      HIDWORD(v107[14]) = v67;
      v68 = v74-- == 1;
      v13 = v107[0];
      ++v113;
    }
    while ( !v68 );
    HIDWORD(v107[0]) = v53;
    v107[1] = __PAIR64__(v56, v55);
    v107[2] = __PAIR64__(v54, v57);
    v107[3] = __PAIR64__(v59, v58);
    v107[4] = __PAIR64__(v61, v60);
    v107[5] = __PAIR64__(v63, v62);
    LODWORD(v107[6]) = v64;
  }
  v111 = *(_OWORD *)CcSystemPartitionDirtyPageStatistics;
  *(_QWORD *)&v112 = MmGetResidentAvailablePages(ProcessPartitionId);
  *((_QWORD *)&v112 + 1) = MmGetSharedCommit();
  return memmove(a2, Src, a3);
}
