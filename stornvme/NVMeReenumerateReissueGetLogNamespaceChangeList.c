__int64 __fastcall NVMeReenumerateReissueGetLogNamespaceChangeList(__int64 a1, const void *a2)
{
  __int64 result; // rax
  __int64 v5; // r9
  void *v6; // rcx
  unsigned int v7; // r8d
  int i; // edx
  void *v9; // [rsp+A8h] [rbp+38h] BYREF
  void *v10; // [rsp+B0h] [rbp+40h]
  __int64 v11; // [rsp+B8h] [rbp+48h]

  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  if ( a2 )
  {
    result = StorPortExtendedFunction(0LL, a1, 4096LL, 1701672526LL);
    v6 = v10;
    if ( !v10 )
    {
      ++*(_DWORD *)(a1 + 4484);
      goto LABEL_7;
    }
    memset(v10, 0, 0x1000uLL);
    memmove(v10, a2, 0x1000uLL);
  }
  result = NVMeAllocateDmaBuffer(a1, 0x1000u);
  if ( v9 )
  {
    NVMeZeroMemory(v9, 0x1000u);
    LocalCommandReuse(a1, a1 + 1712);
    for ( i = 0; i < 2; *(_BYTE *)(*(_QWORD *)(a1 + 1808) + 4253LL) |= i )
      ++i;
    LOBYTE(v7) = 4;
    *(_WORD *)(*(_QWORD *)(a1 + 1808) + 4244LL) = 0;
    BuildGetLogPageCommand(a1, *(_QWORD *)(a1 + 1808), v7, 0x1000u, v11, 0, 0LL, 0);
    *(_QWORD *)(*(_QWORD *)(a1 + 1808) + 4200LL) = v9;
    *(_QWORD *)(*(_QWORD *)(a1 + 1808) + 4208LL) = v11;
    *(_DWORD *)(*(_QWORD *)(a1 + 1808) + 4240LL) = 4096;
    *(_BYTE *)(*(_QWORD *)(a1 + 1808) + 4253LL) |= 4u;
    *(_QWORD *)(*(_QWORD *)(a1 + 1808) + 4224LL) = NVMeReenumerateReissueGetLogNamespaceChangeListCompletion;
    *(_QWORD *)(*(_QWORD *)(a1 + 1808) + 4232LL) = v10;
    return ProcessCommand(a1, a1 + 1720);
  }
  ++*(_DWORD *)(a1 + 4480);
  v6 = v10;
LABEL_7:
  if ( *(_BYTE *)(a1 + 22) )
  {
    result = StorPortExtendedFunction(85LL, a1, 0LL, 1LL);
    v6 = v10;
  }
  if ( v6 )
    result = StorPortExtendedFunction(1LL, a1, v6, v5);
  if ( v9 )
    result = NVMeFreeDmaBuffer(a1, 4096LL, (__int64 *)&v9, v11);
  _interlockedbittestandreset((volatile signed __int32 *)(a1 + 4028), 1u);
  return result;
}
