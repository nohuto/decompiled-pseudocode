bool __fastcall SupportedPixelRate(__int64 a1, __int64 a2, int a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // r8
  int v11; // r11d
  int v12; // r8d
  int v13; // r9d

  if ( (unsigned int)(a3 - 1) > 1 )
    WdLogSingleEntry0(1LL);
  if ( *(_DWORD *)(a2 + 36) != 2 )
    WdLogSingleEntry0(1LL);
  if ( a3 == 2 )
  {
    if ( *(_QWORD *)(a1 + 40) <= *(_QWORD *)(a2 + 40) )
    {
      v6 = *(unsigned int *)(a1 + 24);
      v7 = *(unsigned int *)(a1 + 20);
      if ( v7 * (unsigned __int64)*(unsigned int *)(a2 + 8) >= v6 * (unsigned __int64)*(unsigned int *)(a2 + 4)
        && v7 * (unsigned __int64)*(unsigned int *)(a2 + 16) <= v6 * (unsigned __int64)*(unsigned int *)(a2 + 12) )
      {
        v8 = *(unsigned int *)(a1 + 32);
        v9 = *(unsigned int *)(a1 + 28);
        if ( v9 * (unsigned __int64)*(unsigned int *)(a2 + 24) >= v8 * (unsigned __int64)*(unsigned int *)(a2 + 20)
          && v9 * (unsigned __int64)*(unsigned int *)(a2 + 32) <= v8 * (unsigned __int64)*(unsigned int *)(a2 + 28) )
        {
          return 1;
        }
      }
    }
    return 0;
  }
  v11 = *(_DWORD *)(a1 + 16);
  v12 = *(_DWORD *)(a1 + 20) / *(_DWORD *)(a1 + 24);
  if ( (unsigned __int64)(unsigned int)(v11 * *(_DWORD *)(a1 + 12) * v12) > *(_QWORD *)(a2 + 40) )
    return 0;
  if ( v12 - *(_DWORD *)(a2 + 4) / *(_DWORD *)(a2 + 8) < 0 )
    return 0;
  v13 = v12 - 61;
  if ( v12 - *(_DWORD *)(a2 + 12) / *(_DWORD *)(a2 + 16) > 0 && v13 > 0 )
    return 0;
  if ( (int)((unsigned int)*(_QWORD *)(a1 + 20) * v11 / (unsigned int)HIDWORD(*(_QWORD *)(a1 + 20))
           - *(_DWORD *)(a2 + 20) / *(_DWORD *)(a2 + 24)) < 0
    && v12 - 60 < 0 )
  {
    return 0;
  }
  if ( (int)((unsigned int)*(_QWORD *)(a1 + 20) * v11 / (unsigned int)HIDWORD(*(_QWORD *)(a1 + 20))
           - *(_DWORD *)(a2 + 28) / *(_DWORD *)(a2 + 32)) <= 0 )
    return 1;
  return v13 <= 0;
}
