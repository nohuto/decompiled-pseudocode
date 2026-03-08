/*
 * XREFs of PspSetJobMemoryPartition @ 0x1409AFC84
 * Callers:
 *     NtSetInformationJobObject @ 0x1406FC3C0 (NtSetInformationJobObject.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140258DC0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     PsIsServerSilo @ 0x140294E20 (PsIsServerSilo.c)
 *     PsDereferencePartition @ 0x140295BF8 (PsDereferencePartition.c)
 *     ObfReferenceObjectWithTag @ 0x14033E0E0 (ObfReferenceObjectWithTag.c)
 *     PsAssignProcessToJobObject @ 0x1406FF9A0 (PsAssignProcessToJobObject.c)
 *     PsReferencePartitionByHandle @ 0x14070591C (PsReferencePartitionByHandle.c)
 *     SmCreatePartition @ 0x140728884 (SmCreatePartition.c)
 *     PspConvertJobToMixed @ 0x1409AF1C4 (PspConvertJobToMixed.c)
 *     SmPartitionJobPaired @ 0x1409D3EB4 (SmPartitionJobPaired.c)
 */

__int64 __fastcall PspSetJobMemoryPartition(ULONG_PTR a1, KPROCESSOR_MODE a2, void *a3)
{
  char v4; // r14
  int Partition; // ebx
  __int64 v6; // rcx
  PVOID v7; // rdi
  PVOID Object; // [rsp+68h] [rbp+20h] BYREF

  Object = 0LL;
  v4 = 0;
  Partition = PsReferencePartitionByHandle(a3, 1u, a2, 0x624A7350u, &Object);
  if ( Partition < 0 )
    goto LABEL_14;
  if ( _interlockedbittestandset((volatile signed __int32 *)Object + 32, 0) )
  {
    Partition = -1073741637;
LABEL_14:
    v7 = Object;
    goto LABEL_15;
  }
  v4 = 1;
  ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 56), 1u);
  if ( PsIsServerSilo(a1) || *(_QWORD *)(a1 + 1776) || *(_QWORD *)(a1 + 1272) != a1 + 1272 || *(_DWORD *)(a1 + 216) )
  {
    Partition = -1073741637;
    goto LABEL_13;
  }
  Partition = PspConvertJobToMixed(v6, 1);
  if ( Partition < 0 )
  {
LABEL_13:
    ExReleaseResourceLite((PERESOURCE)(a1 + 56));
    goto LABEL_14;
  }
  *(_QWORD *)(a1 + 1776) = -1LL;
  ExReleaseResourceLite((PERESOURCE)(a1 + 56));
  v7 = Object;
  Partition = SmCreatePartition((__int64)Object);
  if ( Partition >= 0 )
  {
    Partition = PsAssignProcessToJobObject(a1, *((PEPROCESS *)v7 + 14), 0LL);
    if ( Partition >= 0 )
    {
      ObfReferenceObjectWithTag(v7, 0x624A7350u);
      ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 56), 1u);
      *(_QWORD *)(a1 + 1776) = v7;
      *(_QWORD *)(a1 + 1784) = a1;
      ExReleaseResourceLite((PERESOURCE)(a1 + 56));
      SmPartitionJobPaired(v7, a1);
      v4 = 0;
      Partition = 0;
    }
  }
LABEL_15:
  if ( v7 )
  {
    if ( *(_QWORD *)(a1 + 1776) == -1LL )
      *(_QWORD *)(a1 + 1776) = 0LL;
    if ( v4 )
    {
      _interlockedbittestandreset((volatile signed __int32 *)v7 + 32, 0);
      v7 = Object;
    }
    PsDereferencePartition((__int64)v7);
  }
  return (unsigned int)Partition;
}
