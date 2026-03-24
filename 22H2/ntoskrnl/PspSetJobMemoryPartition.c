/*
 * XREFs of PspSetJobMemoryPartition @ 0x14090958C
 * Callers:
 *     NtSetInformationJobObject @ 0x140614660 (NtSetInformationJobObject.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140205660 (ObfReferenceObjectWithTag.c)
 *     ExReleaseResourceLite @ 0x1402CBB00 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402CC2B0 (ExAcquireResourceExclusiveLite.c)
 *     PsDereferencePartition @ 0x140303F4C (PsDereferencePartition.c)
 *     PsIsServerSilo @ 0x140361920 (PsIsServerSilo.c)
 *     PsReferencePartitionByHandle @ 0x140676644 (PsReferencePartitionByHandle.c)
 *     PsAssignProcessToJobObject @ 0x14071E780 (PsAssignProcessToJobObject.c)
 *     PspConvertJobToMixed @ 0x140908D04 (PspConvertJobToMixed.c)
 */

__int64 __fastcall PspSetJobMemoryPartition(__int64 a1, char a2, ULONG_PTR a3)
{
  char v4; // r14
  int v5; // ebx
  __int64 v6; // rcx
  volatile signed __int32 *v7; // rdi
  PVOID Object; // [rsp+68h] [rbp+20h] BYREF

  Object = 0LL;
  v4 = 0;
  v5 = PsReferencePartitionByHandle(a3, 1, a2, 0x624A7350u, &Object);
  if ( v5 < 0 )
    goto LABEL_13;
  if ( _interlockedbittestandset((volatile signed __int32 *)Object + 30, 0) )
  {
    v5 = -1073741637;
LABEL_13:
    v7 = (volatile signed __int32 *)Object;
    goto LABEL_14;
  }
  v4 = 1;
  ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 56), 1u);
  if ( PsIsServerSilo(a1) || *(_QWORD *)(a1 + 1560) || *(_QWORD *)(a1 + 1056) != a1 + 1056 || *(_DWORD *)(a1 + 216) )
  {
    v5 = -1073741637;
    goto LABEL_12;
  }
  v5 = PspConvertJobToMixed(v6, 1);
  if ( v5 < 0 )
  {
LABEL_12:
    ExReleaseResourceLite((PERESOURCE)(a1 + 56));
    goto LABEL_13;
  }
  *(_QWORD *)(a1 + 1560) = -1LL;
  ExReleaseResourceLite((PERESOURCE)(a1 + 56));
  v7 = (volatile signed __int32 *)Object;
  v5 = PsAssignProcessToJobObject(a1, *((PEPROCESS *)Object + 13), 0LL);
  if ( v5 >= 0 )
  {
    ObfReferenceObjectWithTag((PVOID)v7, 0x624A7350u);
    ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 56), 1u);
    *(_QWORD *)(a1 + 1560) = v7;
    *(_QWORD *)(a1 + 1568) = a1;
    ExReleaseResourceLite((PERESOURCE)(a1 + 56));
    v4 = 0;
    v5 = 0;
  }
LABEL_14:
  if ( v7 )
  {
    if ( *(_QWORD *)(a1 + 1560) == -1LL )
      *(_QWORD *)(a1 + 1560) = 0LL;
    if ( v4 )
    {
      _interlockedbittestandreset(v7 + 30, 0);
      v7 = (volatile signed __int32 *)Object;
    }
    PsDereferencePartition((__int64)v7);
  }
  return (unsigned int)v5;
}
