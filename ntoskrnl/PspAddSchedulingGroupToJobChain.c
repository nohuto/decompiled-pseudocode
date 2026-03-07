__int64 __fastcall PspAddSchedulingGroupToJobChain(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rbx
  __int64 Pool2; // rax
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // r14
  __int64 *v9; // rsi
  __int64 v10; // r15
  __int64 v11; // r14
  __int64 v12; // rcx
  _QWORD *v13; // rax
  __int64 *RateControl; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  _QWORD *v18; // rbx
  __int64 v19; // rdi
  char **v20; // rcx
  __int64 v21; // rcx
  _QWORD *v22; // rax
  _QWORD P[2]; // [rsp+30h] [rbp-10h] BYREF

  P[1] = P;
  v3 = P;
  P[0] = P;
  if ( a2 )
  {
    Pool2 = ExAllocatePool2(256LL, 24LL, 1649046352LL);
    v3 = (_QWORD *)Pool2;
    if ( !Pool2 )
      return 3221225626LL;
    *(_QWORD *)(Pool2 + 16) = a2;
    v6 = P[0];
    if ( *(_QWORD **)(P[0] + 8LL) != P )
LABEL_32:
      __fastfail(3u);
    *v3 = P[0];
    v3[1] = P;
    *(_QWORD *)(v6 + 8) = v3;
    P[0] = v3;
  }
  if ( !a1 )
    goto LABEL_6;
  while ( 1 )
  {
    if ( (*(_DWORD *)(a1 + 1536) & 0x20) != 0 )
      goto LABEL_6;
    RateControl = PspAllocateRateControl(2LL);
    *(_QWORD *)(a1 + 1224) = RateControl;
    if ( !RateControl )
      break;
    *((_DWORD *)RateControl + 33) |= 3u;
    *((_DWORD *)RateControl + 32) = 655370000;
    *(_DWORD *)(*(_QWORD *)(a1 + 1224) + 44LL) = *((_DWORD *)RateControl + 32);
    *(_DWORD *)(*(_QWORD *)(a1 + 1224) + 40LL) |= 0x40u;
    v16 = ExAllocatePool2(256LL, 24LL, 1649046352LL);
    v3 = (_QWORD *)v16;
    if ( !v16 )
    {
      PspFreeRateControl(*(char ***)(a1 + 1224), 2u);
      *(_QWORD *)(a1 + 1224) = 0LL;
      break;
    }
    _InterlockedOr((volatile signed __int32 *)(a1 + 1536), 0x20u);
    *(_QWORD *)(v16 + 16) = a1;
    v17 = P[0];
    if ( *(_QWORD **)(P[0] + 8LL) != P )
      goto LABEL_32;
    *v3 = P[0];
    v3[1] = P;
    *(_QWORD *)(v17 + 8) = v3;
    P[0] = v3;
    a1 = *(_QWORD *)(a1 + 1288);
    if ( !a1 )
    {
LABEL_6:
      while ( v3 != P )
      {
        v7 = v3[2];
        v8 = *(_QWORD *)(v7 + 1288);
        v9 = (__int64 *)(v7 + 1232);
        v10 = *(_QWORD *)(v7 + 1224);
        if ( v8 )
        {
          v11 = *(_QWORD *)(v8 + 1224) + 128LL;
        }
        else
        {
          v11 = *v9;
          if ( PsCpuFairShareEnabled && v11 )
            ObfReferenceObjectWithTag(*(PVOID *)(v7 + 1328), 0x624A7350u);
        }
        KeInsertSchedulingGroup(v10 + 128, *(_QWORD *)(v10 + 128), v11);
        if ( *v9 )
          PspEnumJobsAndProcessesInJobHierarchy(
            (_QWORD *)v7,
            (int)PspSetCpuRateControlJobPreCallback,
            (int)PspSetCpuRateControlJobPostCallback,
            0,
            0LL,
            8);
        PspEnumJobsAndProcessesInJobHierarchy(
          (_QWORD *)v7,
          (int)PspSetCpuRateControlJobPreCallback,
          (int)PspSetCpuRateControlJobPostCallback,
          0,
          *(_QWORD *)(v7 + 1224),
          8);
        v12 = *v3;
        if ( *(_QWORD **)(*v3 + 8LL) != v3 )
          goto LABEL_32;
        v13 = (_QWORD *)v3[1];
        if ( (_QWORD *)*v13 != v3 )
          goto LABEL_32;
        *v13 = v12;
        *(_QWORD *)(v12 + 8) = v13;
        ExFreePoolWithTag(v3, 0x624A7350u);
        v3 = (_QWORD *)P[0];
      }
      return 0LL;
    }
  }
  while ( 1 )
  {
    v18 = (_QWORD *)P[0];
    if ( (_QWORD *)P[0] == P )
      return 3221225626LL;
    v19 = *(_QWORD *)(P[0] + 16LL);
    v20 = *(char ***)(v19 + 1224);
    if ( v20 )
    {
      PspFreeRateControl(v20, 2u);
      *(_QWORD *)(v19 + 1224) = 0LL;
      _InterlockedAnd((volatile signed __int32 *)(v19 + 1536), 0xFFFFFFDF);
    }
    v21 = *v18;
    if ( *(_QWORD **)(*v18 + 8LL) != v18 )
      goto LABEL_32;
    v22 = (_QWORD *)v18[1];
    if ( (_QWORD *)*v22 != v18 )
      goto LABEL_32;
    *v22 = v21;
    *(_QWORD *)(v21 + 8) = v22;
    ExFreePoolWithTag(v18, 0x624A7350u);
  }
}
