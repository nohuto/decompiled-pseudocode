__int64 __fastcall HalpInterruptInitializeLocalUnit(ULONG_PTR BugCheckParameter3)
{
  __int64 v1; // r14
  int v3; // r15d
  int v4; // eax
  unsigned int v5; // edi
  __int64 v6; // r9
  char v7; // di
  __int64 (__fastcall *v8)(_QWORD, __int128 *); // rax
  __int64 (__fastcall *v9)(_QWORD, unsigned int *, __int128 *, __int64); // rax
  int v10; // eax
  int v11; // edx
  unsigned int v12; // ecx
  __int64 v13; // rax
  int v14; // ecx
  __int64 v15; // rdx
  int v17; // eax
  int v18; // edx
  __int64 v19; // rcx
  __int64 (__fastcall *v20)(_QWORD); // rax
  int v21; // r8d
  ULONG_PTR v22; // r8
  int v23; // eax
  int BugCheckParameter4; // [rsp+20h] [rbp-58h]
  __int128 v25; // [rsp+40h] [rbp-38h] BYREF
  __int64 v26; // [rsp+50h] [rbp-28h]
  int v27; // [rsp+70h] [rbp-8h]
  unsigned int v28; // [rsp+80h] [rbp+8h] BYREF

  v28 = 0;
  LODWORD(v26) = 0;
  v25 = 0LL;
  LODWORD(v1) = KeGetPcr()->Prcb.Number;
  _disable();
  v3 = v27 & 0x200;
  v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(BugCheckParameter3 + 32))(
         *(_QWORD *)(BugCheckParameter3 + 16),
         (unsigned int)v1,
         223LL);
  v5 = v4;
  if ( v4 < 0 )
  {
    BugCheckParameter4 = 593;
    v18 = 4;
LABEL_36:
    v14 = BugCheckParameter3;
LABEL_38:
    HalpInterruptSetProblemEx(
      v14,
      v18,
      v4,
      (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\intsup.c",
      BugCheckParameter4);
    goto LABEL_25;
  }
  if ( !KeGetPcr()->Prcb.Number )
    HalpInterruptP0LocalId = v28;
  HalpInterruptMarkProcessorStarted(v28);
  if ( *(_DWORD *)(HalpInterruptTargets + 24 * v1) )
  {
    if ( !HalpInterruptPhysicalModeOnly )
    {
      v20 = *(__int64 (__fastcall **)(_QWORD))(BugCheckParameter3 + 80);
      if ( v20 )
      {
        v21 = v20(*(_QWORD *)(BugCheckParameter3 + 16));
        if ( v21 < 0 )
        {
          HalpInterruptSetProblemEx(
            BugCheckParameter3,
            6,
            v21,
            (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\intsup.c",
            804);
          KeBugCheckEx(0x5Cu, 0x200uLL, HalpInterruptLastProblem, BugCheckParameter3, v22);
        }
      }
    }
    goto LABEL_20;
  }
  if ( !HalpInterruptPhysicalModeOnly )
  {
    if ( !HalpInterruptClusterModeEnabled
      && !HalpInterruptClusterModeForced
      && (!HalpInterruptMaxClusterSize || (unsigned int)HalpInterruptProcessorCount <= HalpInterruptLogicalFlatLimit) )
    {
      LODWORD(v25) = 5;
      v17 = 1 << v1;
      goto LABEL_32;
    }
    if ( HalpInterruptNextCluster < (unsigned int)HalpInterruptMaxCluster
      && (*(_DWORD *)(BugCheckParameter3 + 244) & 8) != 0 )
    {
      v7 = 1;
      DWORD2(v25) = HalpInterruptNextCluster;
      HIDWORD(v25) = 1 << HalpInterruptNextClusterIndex;
      LODWORD(v25) = 6;
      goto LABEL_10;
    }
  }
  v17 = v28;
  LODWORD(v25) = 4;
LABEL_32:
  v7 = 0;
  DWORD2(v25) = v17;
  if ( HalpInterruptPhysicalModeOnly )
    goto LABEL_43;
LABEL_10:
  v8 = *(__int64 (__fastcall **)(_QWORD, __int128 *))(BugCheckParameter3 + 80);
  if ( v8 )
  {
    v10 = v8(*(_QWORD *)(BugCheckParameter3 + 16), &v25);
    v11 = v25;
LABEL_41:
    v12 = DWORD2(v25);
    goto LABEL_14;
  }
  v9 = *(__int64 (__fastcall **)(_QWORD, unsigned int *, __int128 *, __int64))(BugCheckParameter3 + 144);
  if ( !v9 )
  {
LABEL_43:
    v19 = HalpInterruptTargets;
    *(_DWORD *)(HalpInterruptTargets + 24 * v1) = 4;
    *(_DWORD *)(v19 + 24 * v1 + 8) = v28;
LABEL_44:
    KeAddProcessorAffinityEx((unsigned __int16 *)&HalpInterruptPhysicalTargets, v1);
    goto LABEL_20;
  }
  LOBYTE(v6) = 1;
  v7 = 0;
  v10 = v9(*(_QWORD *)(BugCheckParameter3 + 16), &v28, &v25, v6);
  v11 = v25;
  if ( (_DWORD)v25 != 6 )
    goto LABEL_41;
  v12 = DWORD2(v25);
  if ( DWORD2(v25) >= (unsigned int)HalpInterruptMaxCluster )
  {
    DWORD2(v25) = v28;
    LODWORD(v25) = 4;
    goto LABEL_43;
  }
LABEL_14:
  if ( v10 < 0 )
    goto LABEL_43;
  HalpInterruptLogicalMode = 1;
  if ( v11 == 6 )
  {
    HalpInterruptClusterModeEnabled = 1;
    if ( v12 > HalpInterruptNextCluster )
      HalpInterruptNextCluster = v12;
  }
  if ( v7 )
  {
    if ( ++HalpInterruptNextClusterIndex >= (unsigned int)HalpInterruptMaxClusterSize )
    {
      HalpInterruptNextClusterIndex = 0;
      ++HalpInterruptNextCluster;
    }
  }
  v13 = HalpInterruptTargets;
  *(_OWORD *)(HalpInterruptTargets + 24 * v1) = v25;
  *(_QWORD *)(v13 + 24 * v1 + 16) = v26;
  if ( (_DWORD)v25 == 4 )
    goto LABEL_44;
LABEL_20:
  v4 = HalpInitializeCmciVector(BugCheckParameter3, v28);
  v5 = v4;
  v14 = BugCheckParameter3;
  if ( v4 < 0 )
  {
    BugCheckParameter4 = 825;
    v18 = 10;
    goto LABEL_38;
  }
  v4 = HalpInitializeDeferredErrorVector(BugCheckParameter3, v28);
  v5 = v4;
  if ( v4 < 0 )
  {
    BugCheckParameter4 = 838;
    v18 = 38;
    goto LABEL_36;
  }
  if ( (*(_DWORD *)(BugCheckParameter3 + 244) & 2) != 0 )
    (*(void (__fastcall **)(_QWORD, _QWORD))(BugCheckParameter3 + 48))(*(_QWORD *)(BugCheckParameter3 + 16), 0LL);
  if ( (unsigned int)(*(_DWORD *)(BugCheckParameter3 + 240) - 3) <= 1
    && (*(_DWORD *)(BugCheckParameter3 + 248) & 1) != 0 )
  {
    LOBYTE(v15) = 1;
    v23 = HalpInterruptRestoreController(BugCheckParameter3, v15);
    v5 = v23;
    if ( v23 < 0 )
      KeBugCheckEx(0x5Cu, 0x200uLL, HalpInterruptLastProblem, 4uLL, v23);
  }
LABEL_25:
  if ( v3 )
    _enable();
  return v5;
}
