NTSTATUS __fastcall MiResolveMemoryEvent(__int64 a1, __int64 a2, __int64 a3, PVOID *a4)
{
  __int64 ThreadPartition; // rax
  int v6; // edx
  __int64 v7; // r8
  NTSTATUS result; // eax
  PVOID Object; // [rsp+48h] [rbp+10h] BYREF

  ThreadPartition = MiGetThreadPartition((__int64)KeGetCurrentThread());
  Object = 0LL;
  *(_OWORD *)v7 = *(_OWORD *)&MiMemoryEventNames[8 * v6];
  *(_QWORD *)(v7 + 8) += 2LL;
  *(_WORD *)v7 -= 2;
  *(_WORD *)(v7 + 2) -= 2;
  result = ObReferenceObjectByHandle(*(HANDLE *)(ThreadPartition + 256), 0xF000Fu, 0LL, 0, &Object, 0LL);
  *a4 = Object;
  return result;
}
