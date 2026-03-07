__int64 __fastcall MmManagePartitionCombineMemory(unsigned __int16 **a1, __int64 a2, __int64 a3, KPROCESSOR_MODE a4)
{
  unsigned __int16 *v5; // rcx
  __int64 result; // rax
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = 0LL;
  v5 = *a1;
  if ( (*(_DWORD *)(a2 + 8) & 1) != 0 && v5 != MiSystemPartition )
    return 3221225711LL;
  result = MiCombineIdenticalPages(v5, *(void **)a3, *(_DWORD *)(a3 + 8), 0LL, a4, &v7);
  if ( (int)result >= 0 )
  {
    *(_QWORD *)(a2 + 16) = v7;
    return 0LL;
  }
  return result;
}
