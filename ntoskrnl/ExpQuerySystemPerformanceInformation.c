/*
 * XREFs of ExpQuerySystemPerformanceInformation @ 0x14071F960
 * Callers:
 *     ExpQuerySystemInformation @ 0x1406AC2A0 (ExpQuerySystemInformation.c)
 * Callees:
 *     ExQueryPoolUsage @ 0x14029971C (ExQueryPoolUsage.c)
 *     MmGetSystemPageCounts @ 0x140299844 (MmGetSystemPageCounts.c)
 *     MmGetProcessPartitionId @ 0x140299858 (MmGetProcessPartitionId.c)
 *     MmGetWorkingSetLeafSize @ 0x140299868 (MmGetWorkingSetLeafSize.c)
 *     MmGetSharedCommit @ 0x140299934 (MmGetSharedCommit.c)
 *     MmGetResidentAvailablePages @ 0x140299944 (MmGetResidentAvailablePages.c)
 *     MmGetTotalCommittedPages @ 0x140299964 (MmGetTotalCommittedPages.c)
 *     MmGetTotalCommitLimit @ 0x140299984 (MmGetTotalCommitLimit.c)
 *     MmGetPeakCommitment @ 0x1402999A4 (MmGetPeakCommitment.c)
 *     MmGetAvailablePages @ 0x1402999C4 (MmGetAvailablePages.c)
 *     MiMaximumCommitmentAvailable @ 0x1402999E4 (MiMaximumCommitmentAvailable.c)
 *     MiFreePoolPagesLeft @ 0x140299A08 (MiFreePoolPagesLeft.c)
 *     MmGetNumberOfFreeSystemPtes @ 0x140299A38 (MmGetNumberOfFreeSystemPtes.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     PsQueryRuntimeProcess @ 0x140720A5C (PsQueryRuntimeProcess.c)
 */

void *__fastcall ExpQuerySystemPerformanceInformation(unsigned int a1, void *a2, unsigned int a3)
{
  __int64 v3; // r14
  ULONG v4; // r11d
  __int64 *v5; // rsi
  LARGE_INTEGER v6; // rax
  unsigned int v7; // ebx
  ULONG v8; // r15d
  LARGE_INTEGER v9; // r9
  __int64 v10; // rdi
  ULONG v11; // r12d
  LARGE_INTEGER v12; // rdx
  __int64 *v13; // r10
  __int64 v14; // r13
  __int64 v15; // r8
  int v16; // edx
  int v17; // r8d
  __int64 *v18; // rcx
  __int64 v19; // r9
  __int64 v20; // rax
  unsigned __int16 v21; // r15
  unsigned __int64 AvailablePages; // rax
  int v23; // ecx
  unsigned __int64 TotalCommittedPages; // rax
  unsigned __int16 v25; // cx
  unsigned __int64 v26; // r9
  int v27; // r8d
  unsigned __int64 TotalCommitLimit; // rax
  unsigned __int64 v29; // r9
  int v30; // ecx
  unsigned __int64 PeakCommitment; // rax
  unsigned int v32; // r8d
  unsigned __int64 v33; // r9
  unsigned int v34; // ecx
  int v35; // r9d
  unsigned int v36; // ecx
  unsigned int v37; // r10d
  unsigned int v38; // r11d
  unsigned int v39; // r12d
  unsigned int v40; // r13d
  unsigned int v41; // eax
  unsigned int v42; // edx
  unsigned int v43; // r8d
  __int64 *v44; // rdx
  __int64 v45; // r8
  int v46; // r15d
  _DWORD *v47; // rcx
  __int64 v48; // rdx
  char *WorkingSetLeafSize; // rax
  __int64 v50; // rdx
  char *v51; // rax
  unsigned __int64 v52; // r8
  unsigned __int64 v53; // rax
  unsigned __int64 v54; // rdx
  ULONG v55; // r10d
  unsigned int v56; // ecx
  unsigned int v57; // edx
  unsigned int v58; // r8d
  unsigned int v59; // r9d
  unsigned int v60; // r11d
  unsigned int v61; // r12d
  int v62; // r13d
  int v63; // r14d
  int v64; // r15d
  _DWORD *v65; // rax
  unsigned int v67; // [rsp+40h] [rbp-C0h]
  unsigned int v68; // [rsp+44h] [rbp-BCh]
  unsigned int v69; // [rsp+48h] [rbp-B8h]
  __int64 v70; // [rsp+4Ch] [rbp-B4h]
  __int64 v71; // [rsp+54h] [rbp-ACh]
  _QWORD Src[44]; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v73; // [rsp+1C0h] [rbp+C0h] BYREF
  unsigned __int16 ProcessPartitionId; // [rsp+220h] [rbp+120h]
  unsigned int v77; // [rsp+238h] [rbp+138h] BYREF

  v3 = a1;
  memset(Src, 0, 0x158uLL);
  v4 = IoOtherOperationCount;
  v5 = KiProcessorBlock;
  v6 = IoOtherTransferCount;
  v7 = 0;
  v8 = IoReadOperationCount;
  v9 = IoReadTransferCount;
  v10 = (unsigned int)v3;
  v11 = IoWriteOperationCount;
  v12 = IoWriteTransferCount;
  v73 = 0LL;
  if ( (_DWORD)v3 )
  {
    v13 = KiProcessorBlock;
    v14 = (unsigned int)v3;
    do
    {
      v15 = *v13++;
      v4 += *(_DWORD *)(v15 + 11620);
      v8 += *(_DWORD *)(v15 + 11612);
      v11 += *(_DWORD *)(v15 + 11616);
      v12.QuadPart += *(_QWORD *)(v15 + 11632);
      v6.QuadPart += *(_QWORD *)(v15 + 11640);
      v9.QuadPart += *(_QWORD *)(v15 + 11624);
      --v14;
    }
    while ( v14 );
  }
  Src[2] = v12.QuadPart;
  v16 = 0;
  Src[1] = v9.QuadPart;
  v17 = 0;
  Src[3] = v6.QuadPart;
  Src[4] = __PAIR64__(v11, v8);
  LODWORD(Src[5]) = v4;
  if ( (_DWORD)v3 )
  {
    v18 = KiProcessorBlock;
    v19 = v3;
    do
    {
      v20 = *v18++;
      v17 += *(_DWORD *)(v20 + 11580);
      v16 += *(_DWORD *)(v20 + 11576);
      --v19;
    }
    while ( v19 );
  }
  LODWORD(Src[37]) = v17;
  *(_QWORD *)((char *)&Src[37] + 4) = 0LL;
  HIDWORD(Src[38]) = v16;
  ProcessPartitionId = MmGetProcessPartitionId((__int64)KeGetCurrentThread()->ApcState.Process);
  v21 = ProcessPartitionId;
  AvailablePages = MmGetAvailablePages(ProcessPartitionId);
  v23 = -1;
  if ( AvailablePages <= 0xFFFFFFFF )
    v23 = AvailablePages;
  HIDWORD(Src[5]) = v23;
  TotalCommittedPages = MmGetTotalCommittedPages(ProcessPartitionId);
  v27 = v26;
  if ( TotalCommittedPages <= v26 )
    v27 = TotalCommittedPages;
  LODWORD(Src[6]) = v27;
  TotalCommitLimit = MmGetTotalCommitLimit(v25);
  v30 = v29;
  if ( TotalCommitLimit <= v29 )
    v30 = TotalCommitLimit;
  HIDWORD(Src[6]) = v30;
  PeakCommitment = MmGetPeakCommitment(ProcessPartitionId);
  v77 = 0;
  v34 = v33;
  v67 = 0;
  if ( PeakCommitment <= v33 )
    v34 = PeakCommitment;
  v68 = 0;
  v69 = 0;
  v35 = 0;
  LODWORD(v70) = 0;
  if ( v34 < v32 )
    v34 = v32;
  HIDWORD(v70) = 0;
  LODWORD(Src[7]) = v34;
  v36 = 0;
  v71 = 0LL;
  v37 = 0;
  v38 = 0;
  v39 = 0;
  v40 = 0;
  v41 = 0;
  v42 = 0;
  v43 = 0;
  if ( (_DWORD)v3 )
  {
    v44 = KiProcessorBlock;
    v45 = v3;
    v46 = 0;
    do
    {
      v47 = (_DWORD *)*v44++;
      v35 += v47[2884];
      v37 += v47[2885];
      v38 += v47[2886];
      v39 += v47[8394];
      v40 += v47[2887];
      v77 += v47[2888];
      v67 += v47[2889];
      v68 += v47[8395];
      v69 += v47[8396];
      LODWORD(v70) = v47[2890] + v70;
      HIDWORD(v70) += v47[2891];
      LODWORD(v71) = v47[2892] + v71;
      v46 += v47[2893];
      --v45;
    }
    while ( v45 );
    v41 = v77;
    v36 = v67;
    v42 = v68;
    v43 = v69;
    HIDWORD(v71) = v46;
    v21 = ProcessPartitionId;
  }
  Src[10] = __PAIR64__(v36, v41);
  Src[12] = v70;
  Src[13] = v71;
  HIDWORD(Src[7]) = v35;
  Src[8] = __PAIR64__(v38, v37);
  Src[9] = __PAIR64__(v40, v39);
  Src[11] = __PAIR64__(v43, v42);
  LODWORD(Src[17]) = MmGetNumberOfFreeSystemPtes();
  MmGetSystemPageCounts(&v73);
  HIDWORD(Src[17]) = v73;
  WorkingSetLeafSize = MmGetWorkingSetLeafSize(2LL, v48);
  if ( (unsigned __int64)WorkingSetLeafSize > 0xFFFFFFFF )
    LODWORD(WorkingSetLeafSize) = -1;
  HIDWORD(Src[20]) = (_DWORD)WorkingSetLeafSize;
  v51 = MmGetWorkingSetLeafSize(3LL, v50);
  if ( (unsigned __int64)v51 > v52 )
    LODWORD(v51) = v52;
  Src[21] = __PAIR64__(DWORD1(v73), (unsigned int)v51);
  Src[18] = __PAIR64__(DWORD2(v73), HIDWORD(v73));
  MiFreePoolPagesLeft(6);
  v53 = MiMaximumCommitmentAvailable();
  if ( v54 > v53 )
    LODWORD(v54) = v53;
  LODWORD(Src[20]) = v54;
  Src[0] = (unsigned int)KeMaximumIncrement * (unsigned __int64)(unsigned int)PsQueryRuntimeProcess(PsIdleProcess, &v77);
  ExQueryPoolUsage(
    (int)&Src[14],
    (int)&Src[14] + 4,
    (int)&Src[15],
    (int)&Src[15] + 4,
    (__int64)&Src[19] + 4,
    (__int64)&Src[16],
    (__int64)&Src[16] + 4,
    (__int64)&Src[19]);
  v55 = CcFastMdlReadWait;
  v56 = 0;
  HIDWORD(Src[24]) = CcFastMdlReadWait;
  v57 = 0;
  memset(&Src[22], 0, 20);
  v58 = 0;
  v59 = 0;
  v60 = 0;
  memset(&Src[25], 0, 96);
  v61 = 0;
  v62 = 0;
  if ( (_DWORD)v3 )
  {
    v63 = HIDWORD(Src[26]);
    v64 = 0;
    do
    {
      v65 = (_DWORD *)*v5++;
      HIDWORD(Src[26]) = v65[8372] + v63;
      HIDWORD(Src[27]) += v65[8388];
      LODWORD(Src[28]) += v65[8373];
      HIDWORD(Src[28]) += v65[8374];
      LODWORD(Src[29]) += v65[8375];
      v7 += v65[2897];
      v56 += v65[2898];
      v57 += v65[8384];
      v58 += v65[2899];
      v59 += v65[8368];
      v55 += v65[8369];
      v60 += v65[8386];
      v61 += v65[8370];
      v62 += v65[8371];
      v64 += v65[8387];
      HIDWORD(Src[29]) += v65[8389];
      LODWORD(Src[30]) += v65[8390];
      HIDWORD(Src[30]) += v65[2900];
      LODWORD(Src[31]) += v65[2901];
      HIDWORD(Src[31]) += v65[2902];
      LODWORD(Src[32]) += v65[8385];
      HIDWORD(Src[32]) += v65[8376];
      LODWORD(Src[33]) += v65[8377];
      HIDWORD(Src[33]) += v65[8391];
      LODWORD(Src[34]) += v65[8392];
      HIDWORD(Src[34]) += v65[8393];
      LODWORD(Src[35]) += v65[8379];
      HIDWORD(Src[35]) += v65[8380];
      LODWORD(Src[36]) += v65[8381];
      HIDWORD(Src[36]) += v65[8382];
      v63 = HIDWORD(Src[26]);
      --v10;
    }
    while ( v10 );
    LODWORD(Src[27]) = v64;
    v21 = ProcessPartitionId;
    Src[22] = __PAIR64__(v56, v7);
    Src[23] = __PAIR64__(v58, v57);
    Src[24] = __PAIR64__(v55, v59);
    Src[25] = __PAIR64__(v61, v60);
    LODWORD(Src[26]) = v62;
  }
  Src[39] = *(_QWORD *)CcSystemPartitionDirtyPageStatistics;
  Src[40] = *(_QWORD *)CcSystemPartitionDirtyPageThresholds;
  Src[41] = MmGetResidentAvailablePages(v21);
  Src[42] = MmGetSharedCommit();
  return memmove(a2, Src, a3);
}
