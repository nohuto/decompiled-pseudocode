/*
 * XREFs of RtlpValidateHeapHeaders @ 0x1800FAA84
 * Callers:
 *     RtlDebugAllocateHeap @ 0x1800F8870 (RtlDebugAllocateHeap.c)
 *     RtlDebugCompactHeap @ 0x1800F8C2C (RtlDebugCompactHeap.c)
 *     RtlDebugCreateHeap @ 0x1800F8D80 (RtlDebugCreateHeap.c)
 *     RtlDebugCreateTagHeap @ 0x1800F9074 (RtlDebugCreateTagHeap.c)
 *     RtlDebugFreeHeap @ 0x1800F927C (RtlDebugFreeHeap.c)
 *     RtlDebugReAllocateHeap @ 0x1800F9860 (RtlDebugReAllocateHeap.c)
 *     RtlpValidateHeap @ 0x1800FA4A4 (RtlpValidateHeap.c)
 * Callees:
 *     DbgPrint @ 0x180051AC0 (DbgPrint.c)
 *     ZwAllocateVirtualMemory @ 0x18009D7E0 (ZwAllocateVirtualMemory.c)
 *     RtlCompareMemory @ 0x1800A1E90 (RtlCompareMemory.c)
 *     memmove @ 0x1800A4340 (memmove.c)
 */

char __fastcall RtlpValidateHeapHeaders(PVOID *Src, char a2)
{
  PVOID *v3; // rsi
  PVOID v4; // rcx
  size_t v5; // r8
  SIZE_T v6; // rdi
  ULONG_PTR v7; // rax
  unsigned int v8; // edx
  __int64 v9; // rbx
  __int64 v10; // rax
  ULONG_PTR v12; // [rsp+50h] [rbp+18h] BYREF

  if ( !RtlpValidateHeapHdrsEnable )
    return 1;
  v3 = Src + 27;
  v4 = Src[27];
  if ( v4 )
    goto LABEL_5;
  v12 = *((unsigned __int16 *)Src + 105);
  if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v3, 0LL, &v12, 0x1000u, 4u) < 0 )
    return 1;
  v4 = *v3;
  a2 = 1;
LABEL_5:
  v5 = *((unsigned __int16 *)Src + 105);
  v12 = v5;
  if ( a2 )
  {
    memmove(v4, Src, v5);
    v7 = v12;
    v6 = v12;
  }
  else
  {
    v6 = RtlCompareMemory(Src, v4, v5);
    v7 = v12;
  }
  if ( v7 == v6 )
    return 1;
  if ( NtCurrentPeb()->Ldr )
    DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
  else
    DbgPrint("HEAP: ");
  DbgPrint(
    "Heap %p - headers modified (%p is %lx instead of %lx)\n",
    Src,
    (char *)Src + v6,
    *(_DWORD *)((char *)Src + v6),
    *(_DWORD *)((char *)*v3 + v6));
  v8 = 0;
  if ( "Entry" )
  {
    v9 = 0LL;
    v10 = 0LL;
    while ( v6 < *(unsigned int *)((char *)&RtlpHeapHeaderFieldOffsets + v10)
         || v6 >= *((unsigned int *)&RtlpHeapHeaderFieldOffsets + 4 * v8 + 4) )
    {
      v10 = 16LL * ++v8;
      v9 = v8;
      if ( !*(_QWORD *)((char *)&RtlpHeapHeaderFieldOffsets + v10 + 8) )
        return 0;
    }
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint(
      "    This is located in the %s field of the heap header.\n",
      *((const char **)&RtlpHeapHeaderFieldOffsets + 2 * v9 + 1));
  }
  return 0;
}
