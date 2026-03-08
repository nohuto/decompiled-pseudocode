/*
 * XREFs of MiInitializePartitionSpecialPurposeMemory @ 0x140A4470C
 * Callers:
 *     MiInitializePartitionSpecialPurposeMemoryCallout @ 0x14065E110 (MiInitializePartitionSpecialPurposeMemoryCallout.c)
 *     MiAddSpecialPurposeMemoryPrepare @ 0x140A44160 (MiAddSpecialPurposeMemoryPrepare.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402411C0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     MiAllocatePool @ 0x140289CF0 (MiAllocatePool.c)
 *     PsDereferencePartition @ 0x140295BF8 (PsDereferencePartition.c)
 *     ObfReferenceObjectWithTag @ 0x14033E0E0 (ObfReferenceObjectWithTag.c)
 *     KeExpandKernelStackAndCallout @ 0x1403D0D60 (KeExpandKernelStackAndCallout.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     MiFindSpecialPurposeMemoryType @ 0x14065DBE8 (MiFindSpecialPurposeMemoryType.c)
 *     ObDuplicateObject @ 0x1406ED5C0 (ObDuplicateObject.c)
 *     PsReferencePartitionByHandle @ 0x14070591C (PsReferencePartitionByHandle.c)
 *     PsCreatePartition @ 0x140855A0C (PsCreatePartition.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiInitializePartitionSpecialPurposeMemory(__int64 a1, _OWORD *a2)
{
  PVOID *v5; // r15
  void *v6; // r14
  __int64 v7; // r14
  volatile signed __int64 *v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rdi
  int v11; // esi
  _QWORD *SpecialPurposeMemoryType; // rax
  char *Pool; // rdi
  __int64 v14; // rbx
  PVOID v15; // rax
  HANDLE v16; // rax
  __int128 v17; // xmm1
  _QWORD *v18; // rcx
  __int64 *v19; // [rsp+40h] [rbp-29h] BYREF
  __int128 Parameter; // [rsp+48h] [rbp-21h] BYREF
  __int64 v21; // [rsp+58h] [rbp-11h]
  int v22[2]; // [rsp+60h] [rbp-9h] BYREF
  __int64 v23; // [rsp+68h] [rbp-1h]
  __int64 v24; // [rsp+70h] [rbp+7h]
  int v25; // [rsp+78h] [rbp+Fh]
  int v26; // [rsp+7Ch] [rbp+13h]
  __int128 v27; // [rsp+80h] [rbp+17h]
  void *v28; // [rsp+E0h] [rbp+77h] BYREF
  HANDLE Handle; // [rsp+E8h] [rbp+7Fh] BYREF

  v26 = 0;
  v22[1] = 0;
  Parameter = 0LL;
  v21 = 0LL;
  if ( MiFindSpecialPurposeMemoryType(a1, a2) )
    return 0LL;
  Handle = 0LL;
  v19 = 0LL;
  v5 = (PVOID *)(a1 + 200);
  v6 = 0LL;
  v28 = 0LL;
  if ( (unsigned __int16 *)a1 != MiSystemPartition )
  {
    v7 = **((_QWORD **)*v5 + 8);
    v21 = 0LL;
    *(_QWORD *)&Parameter = v7;
    *((_QWORD *)&Parameter + 1) = a2;
    v8 = (volatile signed __int64 *)(v7 + 16992);
    v9 = KeAbPreAcquire(v7 + 16992, 0LL);
    v10 = v9;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 16992), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v7 + 16992), v9, v7 + 16992);
    if ( v10 )
      *(_BYTE *)(v10 + 18) = 1;
    v11 = KeExpandKernelStackAndCallout(
            (PEXPAND_STACK_CALLOUT)MiInitializePartitionSpecialPurposeMemoryCallout,
            &Parameter,
            0x2000uLL);
    if ( v11 < 0
      || (v11 = v21, (int)v21 < 0)
      || (SpecialPurposeMemoryType = MiFindSpecialPurposeMemoryType(v7, a2),
          v11 = ObDuplicateObject(
                  (ULONG_PTR)PsInitialSystemProcess,
                  (void *)SpecialPurposeMemoryType[7],
                  0LL,
                  (unsigned __int64 *)&v28,
                  0,
                  512,
                  2,
                  0),
          v11 < 0) )
    {
      Pool = 0LL;
      if ( v7 != -16992 )
      {
        if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(v7 + 16992));
        KeAbPostRelease(v7 + 16992);
      }
LABEL_25:
      v6 = v28;
      goto LABEL_26;
    }
    if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v7 + 16992));
    KeAbPostRelease(v7 + 16992);
    v6 = v28;
  }
  Pool = (char *)MiAllocatePool(64, 0x58uLL, 0x744D694Du);
  if ( Pool )
  {
    v23 = 0LL;
    v24 = 0LL;
    v22[0] = 48;
    v25 = 512;
    v27 = 0LL;
    v11 = PsCreatePartition(v6, &Handle, 2031619, (int)v22, 0, 2);
    if ( v11 < 0 )
      goto LABEL_26;
    v11 = PsReferencePartitionByHandle(Handle, 0x1F0003u, 0, 0x4D536D4Du, (PVOID *)&v19);
    if ( v11 < 0 )
      goto LABEL_26;
    v14 = *v19;
    ObfReferenceObjectWithTag(*v5, 0x72536D4Du);
    v15 = *v5;
    v28 = 0LL;
    *(_QWORD *)(v14 + 16944) = v15;
    *(_QWORD *)(v14 + 16952) = v6;
    *(_OWORD *)(v14 + 16960) = *a2;
    *(_OWORD *)(v14 + 16976) = a2[1];
    *((_QWORD *)Pool + 2) = _InterlockedIncrement64(&qword_140C66970);
    v16 = Handle;
    *(_OWORD *)(Pool + 24) = *a2;
    v17 = a2[1];
    *((_QWORD *)Pool + 7) = v16;
    *((_QWORD *)Pool + 8) = v14;
    *(_OWORD *)(Pool + 40) = v17;
    v18 = *(_QWORD **)(a1 + 16952);
    if ( *v18 != a1 + 16944 )
      __fastfail(3u);
    Handle = 0LL;
    v11 = 0;
    *(_QWORD *)Pool = a1 + 16944;
    *((_QWORD *)Pool + 1) = v18;
    *v18 = Pool;
    *(_QWORD *)(a1 + 16952) = Pool;
    Pool = 0LL;
    goto LABEL_25;
  }
  v11 = -1073741670;
LABEL_26:
  if ( v6 )
    ZwClose(v6);
  if ( Handle )
    ZwClose(Handle);
  if ( v19 )
    PsDereferencePartition((__int64)v19);
  if ( Pool )
    ExFreePoolWithTag(Pool, 0);
  return (unsigned int)v11;
}
