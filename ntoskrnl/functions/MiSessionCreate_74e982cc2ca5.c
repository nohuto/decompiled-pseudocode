__int64 MiSessionCreate()
{
  __int64 result; // rax
  _KPROCESS *Process; // r15
  _QWORD *ProcessPartition; // r14
  unsigned __int32 NewSessionId; // eax
  unsigned __int32 v4; // esi
  unsigned __int64 v5; // rdi
  _DWORD *Pool; // rax
  __int64 v7; // rbx
  void *CurrentServerSilo; // rax
  LARGE_INTEGER v9; // [rsp+30h] [rbp-48h] BYREF
  __int64 v10; // [rsp+38h] [rbp-40h] BYREF
  unsigned __int32 v11; // [rsp+40h] [rbp-38h]
  int v12; // [rsp+44h] [rbp-34h]
  __int64 *v13; // [rsp+48h] [rbp-30h] BYREF
  int v14; // [rsp+50h] [rbp-28h]
  int v15; // [rsp+54h] [rbp-24h]

  result = MiInitializeSessionGlobals();
  if ( (int)result < 0 )
    return result;
  Process = KeGetCurrentThread()->ApcState.Process;
  ProcessPartition = (_QWORD *)MiGetProcessPartition((__int64)Process);
  NewSessionId = MiGetNewSessionId();
  v4 = NewSessionId;
  if ( NewSessionId == -1 )
    return 3221225495LL;
  v5 = NewSessionId != 0 ? 1024LL : 20LL;
  if ( !(unsigned int)MiChargeResident(ProcessPartition, v5, 0LL) )
  {
LABEL_15:
    MiFreeSessionId(v4);
    return 3221225495LL;
  }
  Pool = MiAllocatePool(64, 0x340uLL, 0x7353694Du);
  v7 = (__int64)Pool;
  if ( !Pool )
  {
    MiReturnResident((__int64)ProcessPartition, v5);
    goto LABEL_15;
  }
  Pool[2] = v4;
  *Pool = 1;
  Pool[18] = PsDefaultSystemLocaleId;
  *((_QWORD *)Pool + 99) = RtlGetInterruptTimePrecise(&v9);
  *(_WORD *)(v7 + 366) = *(_WORD *)ProcessPartition;
  if ( _InterlockedIncrement64((volatile signed __int64 *)(ProcessPartition[25] + 32LL)) <= 1 )
    __fastfail(0xEu);
  *(_QWORD *)(v7 + 304) = v5;
  *(_QWORD *)(v7 + 64) = 0LL;
  *(_QWORD *)(v7 + 24) = v7 + 16;
  *(_QWORD *)(v7 + 16) = v7 + 16;
  *(_DWORD *)(v7 + 12) = 1;
  *(_QWORD *)(v7 + 160) = _InterlockedIncrement64(&PsNextSecurityDomain);
  CurrentServerSilo = (void *)PsGetCurrentServerSilo();
  *(_QWORD *)(v7 + 784) = CurrentServerSilo;
  if ( CurrentServerSilo )
  {
    ObfReferenceObjectWithTag(CurrentServerSilo, 0x73536D4Du);
    _InterlockedCompareExchange(
      *((volatile signed __int32 **)PsGetServerSiloGlobals(*(_QWORD *)(v7 + 784)) + 165),
      v4,
      -1);
  }
  MiMarkSessionReferenceProcess((__int64)Process, v7);
  *(_BYTE *)(v7 + 376) = *(_BYTE *)(v7 + 376) & 0xF8 | 1;
  if ( (DWORD1(PerfGlobalGroupMask) & 0x400000) != 0 )
  {
    v12 = 0;
    v15 = 0;
    v13 = &v10;
    v11 = v4;
    v10 = v7;
    v14 = 12;
    EtwTraceKernelEvent((__int64)&v13, 1u, 0x20400000u, 0x24Bu, 0x401803u);
  }
  *(_DWORD *)(v7 + 4) |= 4u;
  MiInitializeSystemWorkingSetList((__int64)ProcessPartition, v7 + 192, 1, 0LL);
  *(_DWORD *)(v7 + 4) |= 1u;
  if ( (int)MiSessionObjectCreate() < 0 )
    MiDereferenceSession();
  return 0LL;
}
