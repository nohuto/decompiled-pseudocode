/*
 * XREFs of MiZeroBootLargePages @ 0x1403CA524
 * Callers:
 *     MiZeroPageThread @ 0x1403CA4D0 (MiZeroPageThread.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14022BCB0 (KeQueryPerformanceCounter.c)
 *     MiAllocatePool @ 0x14025A5D0 (MiAllocatePool.c)
 *     KeWaitForGate @ 0x1402ED0C4 (KeWaitForGate.c)
 *     MiZeroPageCalibrate @ 0x1403AAC44 (MiZeroPageCalibrate.c)
 *     MiNodeCompletedBootZeroing @ 0x1403ABD08 (MiNodeCompletedBootZeroing.c)
 *     MiAllocateZeroPageDecisionTraceBuffer @ 0x1403CA794 (MiAllocateZeroPageDecisionTraceBuffer.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     ObCloseHandle @ 0x14061AFE0 (ObCloseHandle.c)
 *     PsCreateSystemThreadEx @ 0x1406FDA60 (PsCreateSystemThreadEx.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 *     MiComputeMemoryNodeProcessorAssignments @ 0x140A6E2CC (MiComputeMemoryNodeProcessorAssignments.c)
 */

__int64 __fastcall MiZeroBootLargePages(ULONG_PTR a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  _DWORD *v4; // r9
  unsigned int v5; // r13d
  _QWORD *p_P; // rdi
  int v7; // r14d
  int v8; // r15d
  unsigned int v9; // ebx
  _QWORD *Pool; // rdi
  _QWORD *v11; // rax
  __int64 v12; // rax
  int v13; // eax
  HANDLE v14; // rcx
  void *v16; // rcx
  _QWORD *P; // [rsp+50h] [rbp-30h] BYREF
  _QWORD **v18; // [rsp+58h] [rbp-28h]
  HANDLE Handle; // [rsp+60h] [rbp-20h] BYREF
  __int128 v20; // [rsp+68h] [rbp-18h] BYREF

  Handle = 0LL;
  v20 = 0LL;
  KeQueryPerformanceCounter(&stru_140C4DF10);
  if ( !(unsigned int)MiComputeMemoryNodeProcessorAssignments(a1) )
    return 3221225473LL;
  *(_WORD *)(a1 + 6416) = 0;
  *(_DWORD *)(a1 + 6420) = 0;
  v5 = (unsigned __int16)KeNumberNodes;
  p_P = &P;
  *(_QWORD *)(a1 + 6432) = a1 + 6424;
  v7 = 0;
  *(_QWORD *)(a1 + 6424) = a1 + 6424;
  v8 = 0;
  *(_BYTE *)(a1 + 6418) = 6;
  *(_DWORD *)(a1 + 6348) = 0;
  v9 = 0;
  *(_QWORD *)(a1 + 6360) = a1 + 6352;
  *(_QWORD *)(a1 + 6352) = a1 + 6352;
  v18 = &P;
  *(_WORD *)(a1 + 6344) = 263;
  *(_BYTE *)(a1 + 6346) = 6;
  P = &P;
  if ( v5 )
  {
    while ( 1 )
    {
      v20 = *(_OWORD *)(4544LL * v9 + *(_QWORD *)(a1 + 16) + 4472);
      Pool = MiAllocatePool(64, 0x138uLL, 0x20206D4Du);
      if ( !Pool )
        break;
      Pool[38] = MiAllocateZeroPageDecisionTraceBuffer(a1, v9);
      *((_DWORD *)Pool + 20) = v9;
      Pool[9] = a1;
      v11 = v18;
      if ( *v18 != &P )
LABEL_25:
        __fastfail(3u);
      Pool[1] = v18;
      *Pool = &P;
      ++v8;
      ++v9;
      *v11 = Pool;
      v18 = (_QWORD **)Pool;
      if ( v9 >= v5 )
        goto LABEL_6;
    }
    v7 = -1073741670;
    *(_BYTE *)(a1 + 6400) = 1;
LABEL_6:
    p_P = P;
  }
  *(_DWORD *)(a1 + 6336) = v8;
  *(_DWORD *)(a1 + 6408) = v8;
  while ( p_P != &P )
  {
    if ( (_QWORD **)p_P[1] != &P )
      goto LABEL_25;
    v12 = *p_P;
    if ( *(_QWORD **)(*p_P + 8LL) != p_P )
      goto LABEL_25;
    P = (_QWORD *)*p_P;
    *(_QWORD *)(v12 + 8) = &P;
    *(_OWORD *)p_P = 0LL;
    p_P[2] = 0LL;
    if ( v7 < 0 )
    {
      v14 = 0LL;
      Handle = 0LL;
    }
    else
    {
      v20 = *(_OWORD *)(4544LL * *((unsigned int *)p_P + 20) + *(_QWORD *)(a1 + 16) + 4472);
      v13 = PsCreateSystemThreadEx(&Handle, 0x1FFFFFLL, 0LL, 0LL, 0LL, MiZeroNodePages, p_P, &v20, 0LL);
      v14 = Handle;
      v7 = v13;
    }
    if ( v7 < 0 )
    {
      *(_BYTE *)(a1 + 6400) = 1;
      MiNodeCompletedBootZeroing(a1, v2, v3, v4);
      MiZeroPageCalibrate(a1, 0LL);
      v16 = (void *)p_P[38];
      if ( v16 )
        ExFreePoolWithTag(v16, 0);
      ExFreePoolWithTag(p_P, 0);
    }
    else
    {
      ObCloseHandle(v14, 0);
    }
    p_P = P;
  }
  KeWaitForGate(a1 + 6344, 0);
  if ( *(_BYTE *)(a1 + 6400) )
    return (unsigned int)-1073741823;
  return (unsigned int)v7;
}
