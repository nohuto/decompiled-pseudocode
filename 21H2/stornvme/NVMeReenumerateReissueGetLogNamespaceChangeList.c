/*
 * XREFs of NVMeReenumerateReissueGetLogNamespaceChangeList @ 0x1C000F748
 * Callers:
 *     NVMeReenumerateNameSpaceIdentifyWorkItem @ 0x1C000EC00 (NVMeReenumerateNameSpaceIdentifyWorkItem.c)
 * Callees:
 *     ProcessCommand @ 0x1C00039C8 (ProcessCommand.c)
 *     NVMeZeroMemory @ 0x1C0005100 (NVMeZeroMemory.c)
 *     NVMeFreeDmaBuffer @ 0x1C00053FC (NVMeFreeDmaBuffer.c)
 *     BuildGetLogPageCommand @ 0x1C0005458 (BuildGetLogPageCommand.c)
 *     NVMeAllocateDmaBuffer @ 0x1C00055C4 (NVMeAllocateDmaBuffer.c)
 *     memmove @ 0x1C0010700 (memmove.c)
 *     memset @ 0x1C00109C0 (memset.c)
 */

__int64 __fastcall NVMeReenumerateReissueGetLogNamespaceChangeList(__int64 a1, const void *a2)
{
  __int64 v4; // r9
  __int64 result; // rax
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
    result = (__int64)v9;
    if ( !v9 )
    {
      ++*(_DWORD *)(a1 + 4164);
      goto LABEL_7;
    }
    memset(v9, 0, 0x1000uLL);
    memmove(v9, a2, 0x1000uLL);
  }
  NVMeAllocateDmaBuffer(a1, 0x1000u);
  if ( v8 )
  {
    NVMeZeroMemory(v8, 0x1000u);
    v6 = *(void **)(a1 + 1624);
    *(_BYTE *)(a1 + 1539) = 0;
    memset(v6, 0, 0x10A0uLL);
    v7 = 0;
    *(_QWORD *)(*(_QWORD *)(a1 + 1624) + 4232LL) = 0LL;
    *(_QWORD *)(a1 + 1592) = *(_QWORD *)(a1 + 1624);
    *(_DWORD *)(a1 + 1528) = 1;
    do
      *(_BYTE *)(*(_QWORD *)(a1 + 1624) + 4253LL) |= ++v7;
    while ( v7 < 2 );
    *(_WORD *)(*(_QWORD *)(a1 + 1624) + 4244LL) = 0;
    BuildGetLogPageCommand(a1, *(_QWORD *)(a1 + 1624), 4u, 0x1000u, v10, 0, 0LL, 0);
    *(_QWORD *)(*(_QWORD *)(a1 + 1624) + 4200LL) = v8;
    *(_QWORD *)(*(_QWORD *)(a1 + 1624) + 4208LL) = v10;
    *(_DWORD *)(*(_QWORD *)(a1 + 1624) + 4240LL) = 4096;
    *(_BYTE *)(*(_QWORD *)(a1 + 1624) + 4253LL) |= 4u;
    *(_QWORD *)(*(_QWORD *)(a1 + 1624) + 4224LL) = NVMeReenumerateReissueGetLogNamespaceChangeListCompletion;
    *(_QWORD *)(*(_QWORD *)(a1 + 1624) + 4232LL) = v9;
    return ProcessCommand(a1, a1 + 1536);
  }
  ++*(_DWORD *)(a1 + 4160);
  result = (__int64)v9;
LABEL_7:
  if ( *(_BYTE *)(a1 + 22) )
  {
    StorPortExtendedFunction(85LL, a1, 0LL, 1LL);
    result = (__int64)v9;
  }
  if ( result )
    result = StorPortExtendedFunction(1LL, a1, result, v4);
  if ( v8 )
    result = NVMeFreeDmaBuffer(a1, 4096LL, (__int64 *)&v8, v10);
  _interlockedbittestandreset((volatile signed __int32 *)(a1 + 3828), 1u);
  return result;
}
