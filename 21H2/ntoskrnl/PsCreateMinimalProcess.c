/*
 * XREFs of PsCreateMinimalProcess @ 0x1407C65A4
 * Callers:
 *     ?SmFirstTimeInit@@YAJKK@Z @ 0x1402A2388 (-SmFirstTimeInit@@YAJKK@Z.c)
 *     CmpInitializeRegistryProcess @ 0x1407C638C (CmpInitializeRegistryProcess.c)
 *     PspCreateProcess @ 0x1407CE5D0 (PspCreateProcess.c)
 *     PspCreatePicoProcess @ 0x14090BE60 (PspCreatePicoProcess.c)
 *     PspCreatePartitionSystemProcess @ 0x14090D0B8 (PspCreatePartitionSystemProcess.c)
 *     VmCreateMemoryProcess @ 0x14092EDD0 (VmCreateMemoryProcess.c)
 *     PspInitPhase1 @ 0x140A4C338 (PspInitPhase1.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     KeKvaShadowingActive @ 0x14024D904 (KeKvaShadowingActive.c)
 *     KeStackAttachProcess @ 0x14027D680 (KeStackAttachProcess.c)
 *     KeUnstackDetachProcess @ 0x1402ABEC0 (KeUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     PsTerminateProcess @ 0x14061B628 (PsTerminateProcess.c)
 *     PspCreateObjectHandle @ 0x14063F5E4 (PspCreateObjectHandle.c)
 *     PspInsertProcess @ 0x1406971A0 (PspInsertProcess.c)
 *     PspGetMemoryPartitionContext @ 0x14069CA30 (PspGetMemoryPartitionContext.c)
 *     PspAllocateProcess @ 0x1406AD918 (PspAllocateProcess.c)
 *     PspRundownSingleProcess @ 0x1406F3E68 (PspRundownSingleProcess.c)
 *     PsAssignProcessToJobObject @ 0x1406F6D10 (PsAssignProcessToJobObject.c)
 *     PsReferencePrimaryToken @ 0x14071E0E0 (PsReferencePrimaryToken.c)
 *     DbgkCreateMinimalProcess @ 0x1407C6898 (DbgkCreateMinimalProcess.c)
 *     PspSetMinimalProcessName @ 0x1407C6904 (PspSetMinimalProcessName.c)
 *     MmSynchronizeAddressPolicy @ 0x1407C69A0 (MmSynchronizeAddressPolicy.c)
 *     PspDeleteMemoryPartitionContext @ 0x140908E68 (PspDeleteMemoryPartitionContext.c)
 *     PspDeleteObjectAccessState @ 0x14090A23C (PspDeleteObjectAccessState.c)
 */

__int64 __fastcall PsCreateMinimalProcess(
        PEPROCESS Process,
        __int64 a2,
        __int64 a3,
        char a4,
        PADAPTER_OBJECT DmaAdapter,
        int a6,
        char a7,
        __int64 a8,
        _QWORD *Object,
        _QWORD *a10)
{
  _QWORD *v11; // r14
  PADAPTER_OBJECT v12; // r12
  unsigned int v14; // ebx
  int MemoryPartitionContext; // esi
  PRKPROCESS v16; // rdi
  char v17; // al
  PRKPROCESS PROCESS; // [rsp+80h] [rbp-80h] BYREF
  _QWORD *v20; // [rsp+88h] [rbp-78h] BYREF
  PVOID v21; // [rsp+90h] [rbp-70h] BYREF
  __int64 v22; // [rsp+98h] [rbp-68h] BYREF
  __int64 v23; // [rsp+A0h] [rbp-60h]
  __int64 v24; // [rsp+A8h] [rbp-58h]
  _QWORD *v25; // [rsp+B0h] [rbp-50h]
  _BYTE v26[400]; // [rsp+C0h] [rbp-40h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+250h] [rbp+150h] BYREF
  int v28; // [rsp+308h] [rbp+208h]

  v11 = Object;
  v24 = a3;
  v23 = a2;
  v20 = Object;
  v12 = DmaAdapter;
  v25 = a10;
  v22 = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  memset(v26, 0, sizeof(v26));
  v21 = 0LL;
  PROCESS = 0LL;
  if ( !DmaAdapter )
    v12 = (PADAPTER_OBJECT)PsReferencePrimaryToken(Process);
  v14 = DmaAdapter != 0LL;
  v28 = a6 | 0x800;
  MemoryPartitionContext = PspGetMemoryPartitionContext((__int64)Process, v28, (__int64)&v20, Object != 0LL, &v21);
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
                               v28,
                               a7,
                               0LL,
                               DmaAdapter != 0LL,
                               v21,
                               (__int64)&v22,
                               &PROCESS);
    if ( MemoryPartitionContext < 0 )
    {
      PROCESS = 0LL;
    }
    else
    {
      if ( a8 )
        *(_QWORD *)&PROCESS[2].Affinity.Count = a8;
      v16 = PROCESS;
      if ( (HIDWORD(PROCESS[2].Header.WaitListHead.Flink) & 1) != 0
        && !*(_QWORD *)&PROCESS[2].Affinity.Count
        && (unsigned int)KeKvaShadowingActive() )
      {
        v16->AddressPolicy = 1;
        if ( !_interlockedbittestandset((volatile signed __int32 *)&PROCESS[2].Header.WaitListHead.Flink + 1, 0xEu) )
        {
          KeStackAttachProcess(PROCESS, &ApcState);
          MmSynchronizeAddressPolicy(PROCESS);
          KeUnstackDetachProcess(&ApcState);
        }
        v11 = v20;
        v16 = PROCESS;
      }
      if ( v23 )
      {
        PspSetMinimalProcessName(v16, v23);
        v16 = PROCESS;
      }
      v17 = 1;
      if ( (_DWORD)v22 )
        v17 = 3;
      MemoryPartitionContext = PspInsertProcess(
                                 (char *)v16,
                                 Process,
                                 0x2000000u,
                                 v28,
                                 0LL,
                                 v17,
                                 v24,
                                 (PACCESS_STATE)v26);
      if ( MemoryPartitionContext < 0 )
      {
        PspRundownSingleProcess((ULONG_PTR)PROCESS, 0);
      }
      else
      {
        v14 |= 4u;
        if ( !v11
          || (MemoryPartitionContext = PsAssignProcessToJobObject(v11, PROCESS, 0LL), MemoryPartitionContext >= 0) )
        {
          DbgkCreateMinimalProcess(PROCESS);
          v14 |= 2u;
          *(_DWORD *)&v26[384] |= 0x200u;
          MemoryPartitionContext = PspCreateObjectHandle(PROCESS, (__int64)v26, (struct _OBJECT_TYPE *)PsProcessType);
          if ( MemoryPartitionContext >= 0 )
          {
            v14 &= ~4u;
            *v25 = *(_QWORD *)&v26[392];
          }
        }
      }
    }
  }
  if ( (v14 & 2) != 0 )
    PspDeleteObjectAccessState(v26);
  if ( PROCESS )
  {
    if ( v14 >= 4 )
      PsTerminateProcess((ULONG_PTR)PROCESS);
    ObfDereferenceObjectWithTag(PROCESS, 0x72437350u);
  }
  if ( v21 )
    PspDeleteMemoryPartitionContext();
  if ( (v14 & 1) == 0 )
    HalPutDmaAdapter(v12);
  return (unsigned int)MemoryPartitionContext;
}
