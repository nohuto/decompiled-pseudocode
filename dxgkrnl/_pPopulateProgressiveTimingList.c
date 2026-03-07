__int64 __fastcall pPopulateProgressiveTimingList(_DWORD *a1)
{
  unsigned int v1; // eax
  unsigned int v2; // ebx
  __int64 v4; // rdx
  int v5; // esi
  _DWORD *v6; // rcx
  __int64 v7; // r8
  bool v8; // zf
  int v9; // eax
  unsigned int v11; // r8d
  __int64 v12; // r9
  __int64 v13; // rcx

  v1 = a1[4];
  v2 = 0;
  v4 = 0LL;
  v5 = 0;
  if ( v1 )
  {
    v6 = a1 + 7;
    v7 = v1;
    do
    {
      v8 = (*v6 & 0x10000000) == 0;
      v9 = v5 + 1;
      v6 += 7;
      if ( !v8 )
        v9 = v5;
      v5 = v9;
      --v7;
    }
    while ( v7 );
    if ( v9 )
    {
      v4 = operator new[]((unsigned int)(28 * v9 + 20), 0x4D677844u, 256LL);
      if ( !v4 )
      {
        WdLogSingleEntry0(6LL);
        return 0LL;
      }
      v11 = 0;
      *(_DWORD *)(v4 + 8) = a1[2];
      *(_BYTE *)(v4 + 12) = 1;
      for ( *(_DWORD *)(v4 + 16) = v5; v11 < a1[4]; ++v11 )
      {
        v12 = 7LL * v11;
        if ( (a1[v12 + 7] & 0x10000000) == 0 )
        {
          v13 = 28LL * v2++;
          *(_OWORD *)(v13 + v4 + 20) = *(_OWORD *)&a1[v12 + 5];
          *(_QWORD *)(v13 + v4 + 36) = *(_QWORD *)&a1[v12 + 9];
          *(_DWORD *)(v13 + v4 + 44) = a1[v12 + 11];
        }
      }
    }
  }
  return v4;
}
