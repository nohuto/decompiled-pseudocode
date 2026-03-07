void *__fastcall RtlSparseArrayElementAllocate(__int64 a1, __int64 a2, const void *a3)
{
  int v3; // edi
  __int64 v4; // rdx
  void *v6; // rbx
  __int128 v8; // [rsp+20h] [rbp-28h] BYREF
  __int128 v9; // [rsp+30h] [rbp-18h] BYREF

  v3 = *(_DWORD *)(a1 + 8);
  v4 = a2 << v3;
  *(_QWORD *)&v8 = 0LL;
  v6 = (void *)(v4 + *(_QWORD *)(a1 + 24));
  BYTE8(v8) = 0;
  v9 = 0LL;
  if ( (int)RtlpCSparseBitmapPageCommit(a1 + 16, (unsigned __int64)(8 * v4) >> 15, &v9, &v8) < 0 )
    return 0LL;
  memmove(v6, a3, (unsigned int)(1 << v3));
  RtlpCSparseBitmapUnlock(&v9);
  v9 = v8;
  RtlCSparseBitmapLeaveLockingRegion(&v9);
  return v6;
}
