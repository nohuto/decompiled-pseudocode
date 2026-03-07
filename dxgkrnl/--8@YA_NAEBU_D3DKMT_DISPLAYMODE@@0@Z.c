char __fastcall operator==(unsigned int *a1, __int64 a2)
{
  __int64 v2; // r10
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9

  v2 = *a1;
  if ( (_DWORD)v2 != *(_DWORD *)a2 )
    return 0;
  v5 = a1[1];
  if ( (_DWORD)v5 != *(_DWORD *)(a2 + 4) )
    return 0;
  v6 = (int)a1[2];
  if ( (_DWORD)v6 != *(_DWORD *)(a2 + 8) )
    return 0;
  v7 = a1[3];
  if ( (_DWORD)v7 != *(_DWORD *)(a2 + 12)
    || a1[7] != *(_DWORD *)(a2 + 28)
    || a1[8] != *(_DWORD *)(a2 + 32)
    || a1[6] != *(_DWORD *)(a2 + 24)
    || ((*(_BYTE *)(a2 + 40) ^ *((_BYTE *)a1 + 40)) & 0x10) != 0
    || ((*(_BYTE *)(a2 + 36) ^ *((_BYTE *)a1 + 36)) & 2) != 0 )
  {
    return 0;
  }
  if ( a1[4] != *(_DWORD *)(a2 + 16) || a1[5] != *(_DWORD *)(a2 + 20) )
  {
    WdLogSingleEntry4(7LL, v2, v5, v6, v7);
    WdLogSingleEntry4(7LL, a1[4], a1[5], *(unsigned int *)(a2 + 16), *(unsigned int *)(a2 + 20));
  }
  return 1;
}
