__int64 __fastcall VIDMM_GLOBAL::ValidateSegmentForAcquisitionOfResource(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        char a5)
{
  __int64 v6; // r14
  __int64 v7; // rbp
  int v8; // edx
  int v10; // edx
  __int64 v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // rcx
  _QWORD *v14; // rax

  v6 = a3;
  v7 = a1;
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 3712) + 8LL * a3) + 80LL) & 0x1001) != 0 )
  {
    if ( a4 == 1 )
      goto LABEL_11;
  }
  else if ( (*(_DWORD *)(a2 + 72) & 0x10000) != 0 && *(_DWORD *)(a2 + 360) || (*(_DWORD *)(a2 + 72) & 0x8000) != 0 )
  {
    goto LABEL_11;
  }
  if ( a4 != 2 || (a1 = *(_QWORD *)(*(_QWORD *)(a1 + 3712) + 8LL * a3), (*(_DWORD *)(a1 + 80) & 0x1001) != 0) )
  {
    if ( *(int *)(a2 + 360) <= 0 )
      goto LABEL_5;
    a1 = *(_QWORD *)(*(_QWORD *)(v7 + 3712) + 8LL * a3);
    v10 = *(_DWORD *)(a1 + 80);
    if ( (v10 & 0x1001) != 0 )
      goto LABEL_5;
    if ( *(_BYTE *)(a2 + 80) )
    {
      v11 = v7 + 24;
      v12 = **(unsigned int **)(a2 + 536);
      if ( (v12 & 4) != 0 && (v12 = *(unsigned int *)(*(_QWORD *)v11 + 436LL), (v12 & 8) == 0) || (v10 & 0x2004) == 0 )
      {
        if ( g_IsInternalReleaseOrDbg )
        {
          WdLogNewEntry5_WdTrace(v12);
          v14 = (_QWORD *)WdLogNewEntry5_WdTrace(v13);
          v14[3] = (**(_DWORD **)(a2 + 536) >> 2) & 1;
          v14[4] = (*(_DWORD *)(*(_QWORD *)v11 + 436LL) >> 3) & 1;
          v14[5] = (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 3712) + 8 * v6) + 80LL) >> 2) & 1;
          v14[6] = (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 3712) + 8 * v6) + 80LL) >> 13) & 1;
        }
        return 3221225473LL;
      }
      goto LABEL_5;
    }
    if ( a4 == 1 )
    {
LABEL_5:
      if ( a5 )
        v8 = *(_DWORD *)(a2 + 56);
      else
        v8 = *(_DWORD *)(a2 + 60);
      a1 = 1616LL * (*(_DWORD *)(a2 + 68) & 0x3F);
      if ( _bittest(&v8, (unsigned __int8)(a3 - *(_BYTE *)(a1 + *(_QWORD *)(v7 + 40224) + 28))) )
        return 0LL;
    }
  }
LABEL_11:
  if ( g_IsInternalReleaseOrDbg )
    WdLogNewEntry5_WdTrace(a1);
  return 3221225473LL;
}
