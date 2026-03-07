__int64 __fastcall ExpWorkQueueInitialize(__int64 a1, int a2, int a3, __int64 a4, USHORT *a5, unsigned int a6)
{
  USHORT *v10; // rbx
  __int64 result; // rax
  struct _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-28h] BYREF
  USHORT Count; // [rsp+58h] [rbp+10h] BYREF

  Count = 0;
  Affinity = 0LL;
  memset((void *)a1, 0, 0x2E0uLL);
  v10 = a5;
  KeQueryNodeActiveAffinity(*a5, &Affinity, &Count);
  KeInitializePriQueue(a1, Count);
  result = a6;
  *(_DWORD *)(a1 + 716) ^= (*(_DWORD *)(a1 + 716) ^ a2) & 0x7FFFFFFF;
  *(_QWORD *)(a1 + 696) = v10;
  *(_DWORD *)(a1 + 720) = a3;
  *(_QWORD *)(a1 + 688) = a4;
  *(_DWORD *)(a1 + 724) = result;
  return result;
}
