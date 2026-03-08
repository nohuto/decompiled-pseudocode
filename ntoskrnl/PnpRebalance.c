/*
 * XREFs of PnpRebalance @ 0x14096B948
 * Callers:
 *     PnpProcessRebalance @ 0x140562AF4 (PnpProcessRebalance.c)
 *     PnpAllocateResources @ 0x1406F5CE0 (PnpAllocateResources.c)
 *     PnpReallocateResources @ 0x14096A5D8 (PnpReallocateResources.c)
 * Callees:
 *     PnpDiagnosticTraceObject @ 0x140202BAC (PnpDiagnosticTraceObject.c)
 *     PnpDiagnosticTraceObjectWithStatus @ 0x1402B146C (PnpDiagnosticTraceObjectWithStatus.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     PnpFindBestConfiguration @ 0x140803704 (PnpFindBestConfiguration.c)
 *     PnpBuildCmResourceLists @ 0x140803A38 (PnpBuildCmResourceLists.c)
 *     PnpFreeResourceRequirementsForAssignTable @ 0x140803C30 (PnpFreeResourceRequirementsForAssignTable.c)
 *     IopCommitConfiguration @ 0x14084D8A8 (IopCommitConfiguration.c)
 *     PnpRequestDeviceRemoval @ 0x140862294 (PnpRequestDeviceRemoval.c)
 *     PipClearDevNodeProblem @ 0x14086666C (PipClearDevNodeProblem.c)
 *     PipSetDevNodeProblem @ 0x1408667BC (PipSetDevNodeProblem.c)
 *     IopMarkDeviceToBeReset @ 0x140954500 (IopMarkDeviceToBeReset.c)
 *     PnpTraceRebalanceResult @ 0x140968FDC (PnpTraceRebalanceResult.c)
 *     PnpCancelStopDeviceSubtree @ 0x14096B514 (PnpCancelStopDeviceSubtree.c)
 *     PnpFindRebalanceCandidates @ 0x14096B548 (PnpFindRebalanceCandidates.c)
 *     PnpStopDeviceSubtree @ 0x14096BD20 (PnpStopDeviceSubtree.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpRebalance(__int64 a1, void *a2, unsigned int a3, int a4)
{
  __int64 v4; // r12
  void *v6; // rcx
  unsigned __int16 *v9; // r15
  _QWORD *Pool2; // rax
  _QWORD *v11; // r14
  int BestConfiguration; // edi
  __int64 v13; // r15
  int v14; // edx
  _QWORD *v15; // r8
  unsigned int v16; // ecx
  _DWORD *v17; // r13
  unsigned int v18; // ecx
  unsigned int v19; // ebx
  unsigned __int64 v20; // r13
  _OWORD *v21; // rcx
  int v22; // eax
  unsigned int v24; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v25; // [rsp+34h] [rbp-CCh]
  unsigned int v26; // [rsp+38h] [rbp-C8h]
  _OWORD *v27; // [rsp+40h] [rbp-C0h]
  _QWORD *v28[2]; // [rsp+48h] [rbp-B8h] BYREF
  void *v29; // [rsp+58h] [rbp-A8h]
  char *v30; // [rsp+60h] [rbp-A0h]
  _OWORD v31[8]; // [rsp+70h] [rbp-90h] BYREF

  v4 = a3;
  v28[1] = v28;
  v6 = *(void **)(a1 + 712);
  v28[0] = v28;
  v29 = a2;
  if ( v6 )
    memset(v6, 0, 0x68uLL);
  memset(v31, 0, sizeof(v31));
  v9 = (unsigned __int16 *)(a1 + 40);
  *(_QWORD *)&v31[3] = IopRootDeviceNode;
  *((_QWORD *)&v31[1] + 1) = IopRootDeviceNode;
  *(_QWORD *)&v31[2] = IopRootDeviceNode;
  DWORD2(v31[3]) = a4;
  PnpDiagnosticTraceObject(&KMPnPEvt_Rebalance_Start, (unsigned __int16 *)(a1 + 40));
  Pool2 = (_QWORD *)ExAllocatePool2(256LL, (unsigned __int64)(unsigned int)IopNumberDeviceNodes << 6, 812674640LL);
  v11 = Pool2;
  if ( !Pool2 )
  {
    LODWORD(v31[1]) = 2;
    BestConfiguration = -1073741670;
    goto LABEL_16;
  }
  v13 = v4 << 6;
  if ( (_DWORD)v4 )
    memmove(Pool2, a2, v4 << 6);
  BestConfiguration = 0;
  v14 = v13 + (_DWORD)v11;
  v24 = 0;
  v15 = &v31[4];
  v16 = 0;
  v30 = (char *)v11 + v13;
  v25 = 0;
  v17 = &v31[1];
  v27 = &v31[4];
  while ( 1 )
  {
    DWORD2(v31[0]) = v16;
    *v15 = MEMORY[0xFFFFF78000000008];
    v26 = v24;
    PnpFindRebalanceCandidates(v16, a1, v14, &v24, a4, (__int64)v31);
    if ( !(_DWORD)v4 && (a4 & 3) == 0 )
    {
      v18 = 0;
      if ( !v24 )
      {
LABEL_13:
        BestConfiguration = -1073741823;
        *((_DWORD *)&v31[1] + v25) = 4 - (*(_DWORD *)(a1 + 300) != 779);
LABEL_14:
        PnpCancelStopDeviceSubtree((ULONG_PTR)IopRootDeviceNode);
        v19 = v24;
        v20 = (unsigned __int64)v30;
        goto LABEL_15;
      }
      while ( v11[8 * (unsigned __int64)v18] != *(_QWORD *)(a1 + 32) )
      {
        if ( ++v18 >= v24 )
          goto LABEL_13;
      }
    }
    if ( v26 == v24 )
    {
      if ( (a4 & 2) != 0 )
        break;
      if ( !*v17 )
        *v17 = 5;
      if ( BestConfiguration != -1073739512 )
        BestConfiguration = -1073741823;
    }
    else
    {
      BestConfiguration = PnpFindBestConfiguration((__int64)v11, (unsigned int)v4 + v24, (__int64)v28);
      if ( BestConfiguration >= 0 )
        goto LABEL_33;
      if ( !*v17 )
        *v17 = 6;
    }
    ++v17;
    v16 = v25 + 1;
    v15 = (_QWORD *)v27 + 1;
    v25 = v16;
    v27 = (_OWORD *)((char *)v27 + 8);
    if ( v16 >= 2 )
      break;
    v14 = v13 + (_DWORD)v11;
  }
  if ( BestConfiguration < 0 )
    goto LABEL_14;
LABEL_33:
  PnpStopDeviceSubtree(IopRootDeviceNode);
  if ( (a4 & 2) != 0 && *(_DWORD *)(a1 + 300) == 780 )
  {
    PipSetDevNodeProblem(a1, 54, 0);
    v22 = IopMarkDeviceToBeReset(*(_QWORD *)(a1 + 32));
    if ( v22 < 0 )
      PnpRequestDeviceRemoval(a1, 0, 54, v22);
    else
      PipClearDevNodeProblem(a1);
  }
  IopCommitConfiguration(v28);
  v20 = (unsigned __int64)v11 + v13;
  if ( (_DWORD)v4 )
    PnpBuildCmResourceLists((unsigned __int64)v11, (unsigned __int64)v11 + v13, 0);
  v19 = v24;
  PnpBuildCmResourceLists(
    (unsigned __int64)v11 + v13,
    (unsigned __int64)&v11[8 * (unsigned __int64)((unsigned int)v4 + v24)],
    1);
  if ( (_DWORD)v4 )
    memmove(v29, v11, v4 << 6);
LABEL_15:
  PnpFreeResourceRequirementsForAssignTable(v20, (unsigned __int64)&v11[8 * (unsigned __int64)((unsigned int)v4 + v19)]);
  ExFreePoolWithTag(v11, 0x30706E50u);
  v9 = (unsigned __int16 *)(a1 + 40);
LABEL_16:
  PnpTraceRebalanceResult(0, BestConfiguration, (__int64)v31);
  if ( DWORD2(v31[0]) == 1 )
    PnpTraceRebalanceResult(1u, BestConfiguration, (__int64)v31);
  v21 = *(_OWORD **)(a1 + 712);
  if ( BestConfiguration >= 0 )
  {
    if ( v21 )
    {
      ExFreePoolWithTag(v21, 0x62655250u);
      *(_QWORD *)(a1 + 712) = 0LL;
    }
  }
  else if ( v21 )
  {
    *v21 = v31[0];
    v21[1] = v31[1];
    v21[2] = v31[2];
    v21[3] = v31[3];
    v21[4] = v31[4];
    v21[5] = v31[5];
    *((_QWORD *)v21 + 12) = *(_QWORD *)&v31[6];
  }
  PnpDiagnosticTraceObjectWithStatus(&KMPnPEvt_Rebalance_Stop, v9, BestConfiguration);
  return (unsigned int)BestConfiguration;
}
