__int64 __fastcall ExpQueryNumaProcessorMap(_DWORD *a1, unsigned int a2, _DWORD *a3)
{
  USHORT v6; // bx
  USHORT HighestNodeNumber; // ax
  unsigned int v8; // esi
  unsigned int v9; // eax
  int v10; // edx
  int v11; // edi

  v6 = 0;
  if ( a2 < 4 )
  {
    if ( a3 )
      *a3 = 4;
    return 3221225476LL;
  }
  else
  {
    HighestNodeNumber = KeQueryHighestNodeNumber();
    *a1 = HighestNodeNumber;
    v8 = HighestNodeNumber + 1;
    if ( (a2 - 8) >> 4 <= v8 )
      v8 = (a2 - 8) >> 4;
    if ( a2 >= 8 && v8 )
    {
      *a3 = 16 * v8 + 8;
      v9 = 0;
      v10 = 0;
      v11 = 0;
      while ( v9 < v8 )
      {
        KeQueryNodeActiveAffinity(v6, (PGROUP_AFFINITY)&a1[4 * v10 + 2], 0LL);
        v9 = v11 + 1;
        v6 = v11 + 1;
        v10 = ++v11;
      }
      return 0LL;
    }
    else
    {
      *a3 = 4;
      return 0LL;
    }
  }
}
