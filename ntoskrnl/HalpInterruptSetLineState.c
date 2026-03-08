/*
 * XREFs of HalpInterruptSetLineState @ 0x1403793AC
 * Callers:
 *     HalEnableInterrupt @ 0x14028F730 (HalEnableInterrupt.c)
 *     HalpInterruptEnableNmi @ 0x140378254 (HalpInterruptEnableNmi.c)
 *     HalpInterruptEnablePerformanceEvents @ 0x1403789F8 (HalpInterruptEnablePerformanceEvents.c)
 *     HalpTimerConfigureInterrupt @ 0x140379C34 (HalpTimerConfigureInterrupt.c)
 *     HalpTimerEnableHypervisorTimer @ 0x140508738 (HalpTimerEnableHypervisorTimer.c)
 * Callees:
 *     HalpInterruptDestinationToTarget @ 0x14028EC7C (HalpInterruptDestinationToTarget.c)
 *     HalpInterruptFindLines @ 0x14028EE80 (HalpInterruptFindLines.c)
 *     HalpInterruptLookupController @ 0x14028EEE0 (HalpInterruptLookupController.c)
 *     HalpInterruptFindBestRouting @ 0x1403791C4 (HalpInterruptFindBestRouting.c)
 *     HalpInterruptGetPriority @ 0x1403792F0 (HalpInterruptGetPriority.c)
 *     HalpInterruptSetLineStateInternal @ 0x1403796D0 (HalpInterruptSetLineStateInternal.c)
 *     HalpInterruptApplyOverrides @ 0x140379748 (HalpInterruptApplyOverrides.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     HalpInterruptSetProblemEx @ 0x140518598 (HalpInterruptSetProblemEx.c)
 */

__int64 __fastcall HalpInterruptSetLineState(
        __int64 *a1,
        unsigned int a2,
        char a3,
        int a4,
        int a5,
        __int64 a6,
        __int64 a7,
        unsigned int a8)
{
  ULONG_PTR v8; // r13
  char v9; // si
  __int64 v10; // rax
  ULONG_PTR *v11; // rax
  __int64 v12; // rdi
  _QWORD *Lines; // r15
  __int64 v14; // rcx
  __int64 v15; // r12
  __int128 v16; // xmm10
  __int64 v17; // r14
  ULONG_PTR v18; // rbx
  bool v19; // zf
  __int64 v20; // xmm0_8
  __int128 v21; // xmm6
  __int128 v22; // xmm7
  __int128 v23; // xmm8
  __int64 v24; // xmm9_8
  _DWORD *v25; // r14
  int BestRouting; // r8d
  int v28; // r8d
  int Priority; // eax
  char v30; // cl
  __int64 v31; // rax
  int v32; // edx
  int v33; // ecx
  signed __int32 v34[8]; // [rsp+8h] [rbp-B9h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+28h] [rbp-99h]
  _QWORD v36[3]; // [rsp+38h] [rbp-89h]
  __int128 v37; // [rsp+50h] [rbp-71h]
  __int128 v38; // [rsp+60h] [rbp-61h]
  __int128 v39; // [rsp+70h] [rbp-51h]
  __int64 v40; // [rsp+108h] [rbp+47h] BYREF
  char v41; // [rsp+118h] [rbp+57h]
  int v42; // [rsp+120h] [rbp+5Fh] BYREF

  v42 = a4;
  v41 = a3;
  a8 = 0;
  v8 = a2;
  if ( a5 == 3 )
  {
    v9 = 1;
    a5 = 2;
  }
  else if ( a5 == 4 )
  {
    v9 = 1;
    a5 = 1;
  }
  else
  {
    v9 = 0;
  }
  v40 = *a1;
  HalpInterruptApplyOverrides(&v40, &a5, &v42);
  LODWORD(v10) = v40;
  while ( 1 )
  {
    v11 = HalpInterruptLookupController(v10);
    v12 = (__int64)v11;
    if ( !v11 )
      break;
    if ( (v11[31] & 2) != 0 )
      KeBugCheckEx(0x5Cu, 0x200uLL, HalpInterruptLastProblem, (ULONG_PTR)v11, 0x7931847uLL);
    Lines = HalpInterruptFindLines((unsigned int *)&v40);
    if ( !Lines )
    {
      LODWORD(BugCheckParameter4) = 2240;
      v32 = 18;
      v33 = v12;
      goto LABEL_36;
    }
    v14 = Lines[6];
    v15 = 2LL * a8;
    if ( *(_BYTE *)(v14 + 16LL * a8) )
    {
      HalpInterruptSetProblemEx(v12, 19, 0, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\connect.c", 2253);
      return (unsigned int)-1073741811;
    }
    v16 = *(_OWORD *)(v14 + 16LL * a8);
    v17 = 56LL * a8;
    v18 = v17 + Lines[5];
    v36[0] = v17;
    v19 = *(_BYTE *)(v14 + 16LL * a8 + 12) == 0;
    v20 = *(_QWORD *)(v18 + 48);
    v21 = *(_OWORD *)v18;
    v22 = *(_OWORD *)(v18 + 16);
    v23 = *(_OWORD *)(v18 + 32);
    *(_OWORD *)&v36[1] = *(_OWORD *)v18;
    v37 = v22;
    v38 = v23;
    v24 = v20;
    *(_QWORD *)&v39 = v20;
    if ( v19 )
    {
      v28 = HalpInterruptDestinationToTarget(v14, a6, v18 + 24);
      if ( v28 < 0 )
      {
        HalpInterruptSetProblemEx(
          v12,
          22,
          v28,
          (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\connect.c",
          2330);
        goto LABEL_31;
      }
      v25 = (_DWORD *)(v18 + 16);
      BestRouting = HalpInterruptFindBestRouting((int *)&v40, *(_QWORD *)a7);
      if ( BestRouting < 0 )
        goto LABEL_24;
      *(_DWORD *)v18 = a5;
      *(_DWORD *)(v18 + 8) = v42;
      *(_BYTE *)(v18 + 4) = v9;
      *(_DWORD *)(v18 + 12) = 16;
      *(_DWORD *)(v18 + 48) = v8;
      Priority = HalpInterruptGetPriority(v12, v8);
      v30 = v41;
      *(_DWORD *)(v18 + 52) = Priority;
      *((_BYTE *)&HalpHwToSwIrqlMap + ((unsigned __int64)(unsigned __int8)v8 >> 4)) = v30;
    }
    else
    {
      if ( !HalpHvPresent
        && (*(_DWORD *)(v18 + 48) != (_DWORD)v8
         || *(_DWORD *)(v18 + 8) != v42
         || *(_DWORD *)v18 != a5
         || *(_BYTE *)(v18 + 4) != v9) )
      {
        HalpInterruptSetProblemEx(v12, 32, 0, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\connect.c", 2295);
        KeBugCheckEx(0x5Cu, 0x202uLL, v18, *(unsigned int *)(v18 + 48), v8);
      }
      *(_DWORD *)(v18 + 12) |= 0x10u;
      v25 = (_DWORD *)(v18 + 16);
    }
    _InterlockedOr(v34, 0);
    BestRouting = HalpInterruptSetLineStateInternal(v12, &v40);
    if ( BestRouting < 0 )
    {
      v24 = v39;
      v23 = v38;
      v22 = v37;
      v21 = *(_OWORD *)&v36[1];
LABEL_24:
      v17 = v36[0];
LABEL_31:
      v31 = Lines[5];
      *(_OWORD *)(v31 + v17) = v21;
      *(_OWORD *)(v31 + v17 + 16) = v22;
      *(_OWORD *)(v31 + v17 + 32) = v23;
      *(_QWORD *)(v31 + v17 + 48) = v24;
      *(_OWORD *)(Lines[6] + 8 * v15) = v16;
      return (unsigned int)BestRouting;
    }
    if ( *(_DWORD *)(v18 + 20) == *(_DWORD *)(a7 + 4) && *v25 == *(_DWORD *)a7 )
      return 0;
    v10 = *(_QWORD *)v25;
    v40 = *(_QWORD *)v25;
  }
  LODWORD(BugCheckParameter4) = 2216;
  v32 = 17;
  v33 = 0;
LABEL_36:
  HalpInterruptSetProblemEx(
    v33,
    v32,
    0,
    (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\connect.c",
    BugCheckParameter4);
  return (unsigned int)-1073741275;
}
