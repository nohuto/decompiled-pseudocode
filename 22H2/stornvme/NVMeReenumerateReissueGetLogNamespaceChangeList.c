/*
 * XREFs of NVMeReenumerateReissueGetLogNamespaceChangeList @ 0x1C00228A8
 * Callers:
 *     NVMeReenumerateNameSpaceIdentifyWorkItem @ 0x1C0021D10 (NVMeReenumerateNameSpaceIdentifyWorkItem.c)
 * Callees:
 *     ProcessCommand @ 0x1C0002360 (ProcessCommand.c)
 *     memmove @ 0x1C0004880 (memmove.c)
 *     memset @ 0x1C0004B80 (memset.c)
 *     NVMeZeroMemory @ 0x1C00092D8 (NVMeZeroMemory.c)
 *     LocalCommandReuse @ 0x1C000C21C (LocalCommandReuse.c)
 *     NVMeAllocateDmaBuffer @ 0x1C000C26C (NVMeAllocateDmaBuffer.c)
 *     NVMeFreeDmaBuffer @ 0x1C000EEA4 (NVMeFreeDmaBuffer.c)
 *     BuildGetLogPageCommand @ 0x1C0010E84 (BuildGetLogPageCommand.c)
 */

__int64 __fastcall NVMeReenumerateReissueGetLogNamespaceChangeList(__int64 a1, const void *a2)
{
  __int64 result; // rax
  void *v5; // rcx
  unsigned int v6; // r8d
  int i; // edx
  void *v8; // [rsp+A8h] [rbp+38h] BYREF
  void *v9; // [rsp+B0h] [rbp+40h]
  __int64 v10; // [rsp+B8h] [rbp+48h]

  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  if ( a2 )
  {
    result = StorPortExtendedFunction(0LL, a1, 4096LL);
    v5 = v9;
    if ( !v9 )
    {
      ++*(_DWORD *)(a1 + 4484);
      goto LABEL_7;
    }
    memset(v9, 0, 0x1000uLL);
    memmove(v9, a2, 0x1000uLL);
  }
  result = NVMeAllocateDmaBuffer(a1, 0x1000u);
  if ( v8 )
  {
    NVMeZeroMemory(v8, 0x1000u);
    LocalCommandReuse(a1, a1 + 1712);
    for ( i = 0; i < 2; *(_BYTE *)(*(_QWORD *)(a1 + 1808) + 4253LL) |= i )
      ++i;
    LOBYTE(v6) = 4;
    *(_WORD *)(*(_QWORD *)(a1 + 1808) + 4244LL) = 0;
    BuildGetLogPageCommand(a1, *(_QWORD *)(a1 + 1808), v6, 0x1000u, v10, 0, 0LL, 0);
    *(_QWORD *)(*(_QWORD *)(a1 + 1808) + 4200LL) = v8;
    *(_QWORD *)(*(_QWORD *)(a1 + 1808) + 4208LL) = v10;
    *(_DWORD *)(*(_QWORD *)(a1 + 1808) + 4240LL) = 4096;
    *(_BYTE *)(*(_QWORD *)(a1 + 1808) + 4253LL) |= 4u;
    *(_QWORD *)(*(_QWORD *)(a1 + 1808) + 4224LL) = NVMeReenumerateReissueGetLogNamespaceChangeListCompletion;
    *(_QWORD *)(*(_QWORD *)(a1 + 1808) + 4232LL) = v9;
    return ProcessCommand(a1, a1 + 1720);
  }
  ++*(_DWORD *)(a1 + 4480);
  v5 = v9;
LABEL_7:
  if ( *(_BYTE *)(a1 + 22) )
  {
    result = StorPortExtendedFunction(85LL, a1, 0LL);
    v5 = v9;
  }
  if ( v5 )
    result = StorPortExtendedFunction(1LL, a1, v5);
  if ( v8 )
    result = NVMeFreeDmaBuffer(a1, 4096LL, (__int64 *)&v8, v10);
  _interlockedbittestandreset((volatile signed __int32 *)(a1 + 4028), 1u);
  return result;
}
