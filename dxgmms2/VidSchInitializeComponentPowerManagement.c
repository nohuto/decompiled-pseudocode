__int64 __fastcall VidSchInitializeComponentPowerManagement(
        __int64 a1,
        int a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        _BYTE *a6)
{
  unsigned int v6; // eax
  __int64 v7; // rcx
  _BYTE *v8; // r10
  __int64 *v9; // rdx
  __int64 v10; // rcx
  char v11; // al

  *a6 = 0;
  if ( a2 )
  {
    if ( a2 == 2 )
    {
      if ( a4 >= *(_DWORD *)(a1 + 40) )
        return 3221225485LL;
      *(_DWORD *)(*(_QWORD *)(a1 + 8LL * a4 + 3200) + 44328LL) = a5;
    }
    return 0LL;
  }
  v6 = VidSchiDriverNodeEngineToSchedulerNode(a1, a4, a3);
  if ( v6 < *(_DWORD *)(v7 + 80) )
  {
    v9 = *(__int64 **)(v7 + 632);
    if ( v6 < *(_DWORD *)(v7 + 704) )
      v9 += v6;
    v10 = *v9;
    *(_DWORD *)(v10 + 11272) = a5;
    v11 = *(_BYTE *)(v10 + 12) & 1;
    *(_BYTE *)(v10 + 11276) = 1;
    *v8 = v11;
    return 0LL;
  }
  return 3221225485LL;
}
