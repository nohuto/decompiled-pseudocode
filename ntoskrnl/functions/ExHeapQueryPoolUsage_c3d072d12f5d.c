_DWORD *__fastcall ExHeapQueryPoolUsage(
        _DWORD *a1,
        _DWORD *a2,
        _DWORD *a3,
        _DWORD *a4,
        _DWORD *a5,
        _DWORD *a6,
        _DWORD *a7,
        _DWORD *a8)
{
  unsigned int v8; // r10d
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 *v14; // r9
  __int64 *v15; // r8
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rcx
  _DWORD *result; // rax

  *a1 = 0;
  v8 = 0;
  for ( *a2 = 0; v8 < dword_140C74660; ++v8 )
  {
    v12 = 8384LL * v8;
    v13 = 2LL;
    v14 = (__int64 *)((char *)&ExPoolState + v12 + 14592);
    v15 = (__int64 *)((char *)&ExPoolState + v12 + 14608);
    do
    {
      v16 = *v15++;
      *a1 += *(_QWORD *)(v16 + 136);
      *a1 += *(_QWORD *)(v16 + 96);
      --v13;
    }
    while ( v13 );
    v17 = 2LL;
    do
    {
      v18 = *v14++;
      *a2 += *(_QWORD *)(v18 + 136);
      *a2 += *(_QWORD *)(v18 + 96);
      --v17;
    }
    while ( v17 );
  }
  *a3 = 0;
  *a4 = 0;
  *a5 = 0;
  *a6 = 0;
  *a7 = 0;
  result = a8;
  *a8 = 0;
  return result;
}
