_BOOL8 __fastcall MiHashIsCommon(__int64 a1, __int64 a2, void *a3)
{
  _QWORD *v3; // r9
  unsigned int v5; // r8d
  __int64 v6; // rax

  v3 = *(_QWORD **)(a1 + 120);
  v5 = *(_DWORD *)(a1 + 136);
  v6 = 0LL;
  if ( !v5 )
    return 0LL;
  while ( a2 != *v3 )
  {
    v6 = (unsigned int)(v6 + 1);
    ++v3;
    if ( (unsigned int)v6 >= v5 )
      return 0LL;
  }
  return !a3 || RtlCompareMemoryUlong(a3, 0x1000uLL, *(_DWORD *)(*(_QWORD *)(a1 + 128) + 4 * v6)) == 4096;
}
