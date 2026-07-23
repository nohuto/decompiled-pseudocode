/*
 * XREFs of PspSetJobMemoryPartition @ 0x14090969C
 * Callers:
 *     NtSetInformationJobObject @ 0x14067DE60 (NtSetInformationJobObject.c)
 * Callees:
 *     PsDereferencePartition @ 0x140274588 (PsDereferencePartition.c)
 *     ObfReferenceObjectWithTag @ 0x1402A9FE0 (ObfReferenceObjectWithTag.c)
 *     PsIsServerSilo @ 0x1402F70B0 (PsIsServerSilo.c)
 *     ExReleaseResourceLite @ 0x140356140 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1403568F0 (ExAcquireResourceExclusiveLite.c)
 *     PsReferencePartitionByHandle @ 0x14067CE44 (PsReferencePartitionByHandle.c)
 *     PsAssignProcessToJobObject @ 0x1406F6D10 (PsAssignProcessToJobObject.c)
 *     PspConvertJobToMixed @ 0x140908E14 (PspConvertJobToMixed.c)
 */

__int64 __fastcall PspSetJobMemoryPartition(char *Object, char a2, __int64 a3)
{
  ULONG_PTR v4; // rax
  char v5; // r14
  int v6; // ebx
  __int64 v7; // rcx
  volatile signed __int32 *v8; // rdi
  PVOID Objecta; // [rsp+68h] [rbp+20h] BYREF

  Objecta = 0LL;
  v4 = a3;
  LOBYTE(a3) = a2;
  v5 = 0;
  v6 = PsReferencePartitionByHandle(v4, 1LL, a3, 0x624A7350u, &Objecta);
  if ( v6 < 0 )
    goto LABEL_13;
  if ( _interlockedbittestandset((volatile signed __int32 *)Objecta + 30, 0) )
  {
    v6 = -1073741637;
LABEL_13:
    v8 = (volatile signed __int32 *)Objecta;
    goto LABEL_14;
  }
  v5 = 1;
  ExAcquireResourceExclusiveLite((PERESOURCE)(Object + 56), 1u);
  if ( PsIsServerSilo((__int64)Object)
    || *((_QWORD *)Object + 195)
    || *((char **)Object + 132) != Object + 1056
    || *((_DWORD *)Object + 54) )
  {
    v6 = -1073741637;
    goto LABEL_12;
  }
  v6 = PspConvertJobToMixed(v7, 1);
  if ( v6 < 0 )
  {
LABEL_12:
    ExReleaseResourceLite((PERESOURCE)(Object + 56));
    goto LABEL_13;
  }
  *((_QWORD *)Object + 195) = -1LL;
  ExReleaseResourceLite((PERESOURCE)(Object + 56));
  v8 = (volatile signed __int32 *)Objecta;
  v6 = PsAssignProcessToJobObject(Object, *((PEPROCESS *)Objecta + 13), 0LL);
  if ( v6 >= 0 )
  {
    ObfReferenceObjectWithTag((PVOID)v8, 0x624A7350u);
    ExAcquireResourceExclusiveLite((PERESOURCE)(Object + 56), 1u);
    *((_QWORD *)Object + 195) = v8;
    *((_QWORD *)Object + 196) = Object;
    ExReleaseResourceLite((PERESOURCE)(Object + 56));
    v5 = 0;
    v6 = 0;
  }
LABEL_14:
  if ( v8 )
  {
    if ( *((_QWORD *)Object + 195) == -1LL )
      *((_QWORD *)Object + 195) = 0LL;
    if ( v5 )
    {
      _interlockedbittestandreset(v8 + 30, 0);
      v8 = (volatile signed __int32 *)Objecta;
    }
    PsDereferencePartition((__int64)v8);
  }
  return (unsigned int)v6;
}
