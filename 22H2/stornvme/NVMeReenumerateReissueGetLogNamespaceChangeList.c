/*
 * XREFs of NVMeReenumerateReissueGetLogNamespaceChangeList @ 0x1C000778C
 * Callers:
 *     NVMeReenumerateNameSpaceIdentifyWorkItem @ 0x1C0006C40 (NVMeReenumerateNameSpaceIdentifyWorkItem.c)
 * Callees:
 *     BuildGetLogPageCommand @ 0x1C0002AA4 (BuildGetLogPageCommand.c)
 *     ProcessCommand @ 0x1C0002C00 (ProcessCommand.c)
 *     NVMeZeroMemory @ 0x1C0005A70 (NVMeZeroMemory.c)
 *     NVMeFreeDmaBuffer @ 0x1C0005AAC (NVMeFreeDmaBuffer.c)
 *     NVMeAllocateDmaBuffer @ 0x1C0005B00 (NVMeAllocateDmaBuffer.c)
 *     memmove @ 0x1C0007D80 (memmove.c)
 *     memset @ 0x1C0008040 (memset.c)
 */

__int64 __fastcall NVMeReenumerateReissueGetLogNamespaceChangeList(__int64 a1, const void *a2)
{
  __int64 result; // rax
  __int64 v5; // r9
  void *v6; // rcx
  int v7; // edx
  void *v8; // [rsp+A8h] [rbp+38h] BYREF
  void *v9; // [rsp+B0h] [rbp+40h]
  __int64 v10; // [rsp+B8h] [rbp+48h]

  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  if ( a2 )
  {
    StorPortExtendedFunction(0LL, a1, 4096LL, 1701672526LL);
    if ( !v9 )
    {
      ++*(_DWORD *)(a1 + 4028);
      goto LABEL_7;
    }
    memset(v9, 0, 0x1000uLL);
    memmove(v9, a2, 0x1000uLL);
  }
  NVMeAllocateDmaBuffer(a1, 0x1000u);
  if ( v8 )
  {
    NVMeZeroMemory(v8, 0x1000u);
    v6 = *(void **)(a1 + 1608);
    *(_BYTE *)(a1 + 1523) = 0;
    memset(v6, 0, 0x10A0uLL);
    v7 = 0;
    *(_QWORD *)(*(_QWORD *)(a1 + 1608) + 4232LL) = 0LL;
    *(_QWORD *)(a1 + 1576) = *(_QWORD *)(a1 + 1608);
    *(_DWORD *)(a1 + 1512) = 1;
    do
      *(_BYTE *)(*(_QWORD *)(a1 + 1608) + 4253LL) |= ++v7;
    while ( v7 < 2 );
    *(_WORD *)(*(_QWORD *)(a1 + 1608) + 4244LL) = 0;
    BuildGetLogPageCommand(a1, *(_QWORD *)(a1 + 1608), 4u, 0x1000u, v10, 0, 0LL, 0);
    *(_QWORD *)(*(_QWORD *)(a1 + 1608) + 4200LL) = v8;
    *(_QWORD *)(*(_QWORD *)(a1 + 1608) + 4208LL) = v10;
    *(_DWORD *)(*(_QWORD *)(a1 + 1608) + 4240LL) = 4096;
    *(_BYTE *)(*(_QWORD *)(a1 + 1608) + 4253LL) |= 4u;
    *(_QWORD *)(*(_QWORD *)(a1 + 1608) + 4224LL) = NVMeReenumerateReissueGetLogNamespaceChangeListCompletion;
    *(_QWORD *)(*(_QWORD *)(a1 + 1608) + 4232LL) = v9;
    return ProcessCommand(a1, a1 + 1520);
  }
  ++*(_DWORD *)(a1 + 4024);
LABEL_7:
  result = StorPortExtendedFunction(85LL, a1, 0LL, 1LL);
  if ( v9 )
    result = StorPortExtendedFunction(1LL, a1, v9, v5);
  if ( v8 )
    result = NVMeFreeDmaBuffer(a1, 4096LL, (__int64 *)&v8, v10);
  _interlockedbittestandreset((volatile signed __int32 *)(a1 + 3812), 1u);
  return result;
}
