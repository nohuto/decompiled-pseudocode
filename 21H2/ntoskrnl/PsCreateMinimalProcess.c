/*
 * XREFs of PsCreateMinimalProcess @ 0x140831810
 * Callers:
 *     ?SmFirstTimeInit@@YAJKK@Z @ 0x140261354 (-SmFirstTimeInit@@YAJKK@Z.c)
 *     CmpInitializeRegistryProcess @ 0x140831BF4 (CmpInitializeRegistryProcess.c)
 *     PspCreateProcess @ 0x14085DACC (PspCreateProcess.c)
 *     PspCreatePicoProcess @ 0x1409B2390 (PspCreatePicoProcess.c)
 *     PspCreatePartitionSystemProcess @ 0x1409B3358 (PspCreatePartitionSystemProcess.c)
 *     VmCreateMemoryProcess @ 0x1409D91B0 (VmCreateMemoryProcess.c)
 *     MiInitializeHotPatches @ 0x140B0838C (MiInitializeHotPatches.c)
 *     PspInitPhase1 @ 0x140B1E0A8 (PspInitPhase1.c)
 * Callees:
 *     KeStackAttachProcess @ 0x140203630 (KeStackAttachProcess.c)
 *     KeUnstackDetachProcess @ 0x1402037B0 (KeUnstackDetachProcess.c)
 *     KeKvaShadowingActive @ 0x1402581D0 (KeKvaShadowingActive.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     PspInsertProcess @ 0x14066D0AC (PspInsertProcess.c)
 *     PspDeleteMemoryPartitionContext @ 0x14066EFCC (PspDeleteMemoryPartitionContext.c)
 *     PspGetMemoryPartitionContext @ 0x14066F440 (PspGetMemoryPartitionContext.c)
 *     PspRundownSingleProcess @ 0x140683990 (PspRundownSingleProcess.c)
 *     PsAssignProcessToJobObject @ 0x140688050 (PsAssignProcessToJobObject.c)
 *     MmSynchronizeAddressPolicy @ 0x1406DFF40 (MmSynchronizeAddressPolicy.c)
 *     PspCreateObjectHandle @ 0x140701A98 (PspCreateObjectHandle.c)
 *     PspAllocateProcess @ 0x14070BD10 (PspAllocateProcess.c)
 *     PsReferencePrimaryToken @ 0x1407AFED0 (PsReferencePrimaryToken.c)
 *     PsTerminateProcess @ 0x1407D80A4 (PsTerminateProcess.c)
 *     DbgkCreateMinimalProcess @ 0x140831AEC (DbgkCreateMinimalProcess.c)
 *     PspSetMinimalProcessName @ 0x140831B58 (PspSetMinimalProcessName.c)
 *     PspDeleteObjectAccessState @ 0x140882484 (PspDeleteObjectAccessState.c)
 */

__int64 __fastcall PsCreateMinimalProcess(
        PEPROCESS Process,
        __int64 a2,
        __int64 a3,
        char a4,
        void *a5,
        int a6,
        char a7,
        __int64 a8,
        PVOID Object,
        _QWORD *a10)
{
  PVOID v10; // r14
  PACCESS_TOKEN v12; // r13
  unsigned int v14; // ebx
  int v15; // r15d
  signed int MemoryPartitionContext; // esi
  PRKPROCESS v17; // rdi
  char v18; // al
  PRKPROCESS PROCESS; // [rsp+80h] [rbp-80h] BYREF
  PVOID v21; // [rsp+88h] [rbp-78h] BYREF
  void *v22; // [rsp+90h] [rbp-70h] BYREF
  __int64 v23; // [rsp+98h] [rbp-68h] BYREF
  __int64 v24; // [rsp+A0h] [rbp-60h]
  __int64 v25; // [rsp+A8h] [rbp-58h]
  _QWORD *v26; // [rsp+B0h] [rbp-50h]
  _BYTE v27[400]; // [rsp+C0h] [rbp-40h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+250h] [rbp+150h] BYREF

  v10 = Object;
  v12 = a5;
  v25 = a3;
  v24 = a2;
  v21 = Object;
  v26 = a10;
  v23 = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  memset(v27, 0, sizeof(v27));
  v22 = 0LL;
  v14 = 0;
  PROCESS = 0LL;
  if ( a5 )
    v14 = 1;
  else
    v12 = PsReferencePrimaryToken(Process);
  v15 = a6 | 0x800;
  MemoryPartitionContext = PspGetMemoryPartitionContext(
                             (__int64)Process,
                             a6 | 0x800u,
                             (__int64)&v21,
                             Object != 0LL,
                             &v22);
  if ( MemoryPartitionContext >= 0 )
  {
    MemoryPartitionContext = PspAllocateProcess(
                               (__int64)Process,
                               0,
                               0LL,
                               a4,
                               0,
                               0,
                               0LL,
                               v12,
                               v15,
                               a7,
                               0LL,
                               v14,
                               v22,
                               (__int64)&v23,
                               &PROCESS);
    if ( MemoryPartitionContext < 0 )
    {
      PROCESS = 0LL;
    }
    else
    {
      if ( a8 )
        *(_QWORD *)&PROCESS[2].Affinity.Count = a8;
      v17 = PROCESS;
      if ( (HIDWORD(PROCESS[2].Header.WaitListHead.Flink) & 1) != 0
        && !*(_QWORD *)&PROCESS[2].Affinity.Count
        && (unsigned int)KeKvaShadowingActive() )
      {
        v17->AddressPolicy = 1;
        if ( !_interlockedbittestandset((volatile signed __int32 *)&PROCESS[2].Header.WaitListHead.Flink + 1, 0xEu) )
        {
          KeStackAttachProcess(PROCESS, &ApcState);
          MmSynchronizeAddressPolicy(PROCESS);
          KeUnstackDetachProcess(&ApcState);
        }
        v10 = v21;
        v17 = PROCESS;
      }
      if ( v24 )
      {
        PspSetMinimalProcessName(v17, v24);
        v17 = PROCESS;
      }
      v18 = 1;
      if ( (_DWORD)v23 )
        v18 = 3;
      MemoryPartitionContext = PspInsertProcess(
                                 (char *)v17,
                                 (__int64)Process,
                                 0x2000000,
                                 v15,
                                 0LL,
                                 v18,
                                 v25,
                                 (PACCESS_STATE)v27);
      if ( MemoryPartitionContext < 0 )
      {
        PspRundownSingleProcess((__int64)PROCESS, 0);
      }
      else
      {
        v14 |= 4u;
        if ( !v10
          || (MemoryPartitionContext = PsAssignProcessToJobObject(v10, (__int64)PROCESS, 0LL),
              MemoryPartitionContext >= 0) )
        {
          DbgkCreateMinimalProcess(PROCESS);
          v14 |= 2u;
          *(_DWORD *)&v27[384] |= 0x200u;
          MemoryPartitionContext = PspCreateObjectHandle(PROCESS, (__int64)v27, (struct _OBJECT_TYPE *)PsProcessType);
          if ( MemoryPartitionContext >= 0 )
          {
            v14 &= ~4u;
            *v26 = *(_QWORD *)&v27[392];
          }
        }
      }
    }
  }
  if ( (v14 & 2) != 0 )
    PspDeleteObjectAccessState(v27);
  if ( PROCESS )
  {
    if ( v14 >= 4 )
      PsTerminateProcess((__int64)PROCESS, MemoryPartitionContext);
    ObfDereferenceObjectWithTag(PROCESS, 0x72437350u);
  }
  if ( v22 )
    PspDeleteMemoryPartitionContext(v22);
  if ( (v14 & 1) == 0 )
    ObfDereferenceObject(v12);
  return (unsigned int)MemoryPartitionContext;
}
