__int64 __fastcall HUBDSM_Setting30Speed(__int64 a1)
{
  __int64 v1; // r11
  unsigned int v2; // r10d
  __int64 v3; // rsi
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rbp
  _DWORD *v6; // rdi
  unsigned __int64 v7; // rdx
  _DWORD *v8; // rcx
  __int16 v9; // ax
  __int64 v10; // r11
  __int16 v11; // ax
  __int64 v12; // r11

  v1 = *(_QWORD *)(a1 + 960);
  v2 = 4077;
  v3 = *(_QWORD *)(v1 + 8);
  *(_DWORD *)(v1 + 2580) = 2621480;
  if ( (*(_DWORD *)(v3 + 204) & 0x100) != 0 )
  {
    v4 = 0LL;
    v5 = *(unsigned int *)(v3 + 232);
    v6 = *(_DWORD **)(v3 + 224);
    v7 = 0LL;
    if ( *(_DWORD *)(v3 + 232) )
    {
      v8 = *(_DWORD **)(v3 + 224);
      while ( (*v8 & 0xF) != (*(_DWORD *)(v3 + 188) & 0xF) || (*v8 & 0x80u) != 0 )
      {
        ++v7;
        ++v8;
        if ( v7 >= v5 )
          goto LABEL_11;
      }
      v9 = HUBMISC_ComputeDelayInNanoSecondsFromSpeedAttr(v8, (*(_DWORD *)(v3 + 188) >> 8) & 0xF);
      if ( v9 == -1 )
        return 4065;
      *(_WORD *)(v10 + 2580) = v9;
    }
LABEL_11:
    if ( !v5 )
      return v2;
    while ( (*v6 & 0xF) != ((*(_DWORD *)(v3 + 188) >> 4) & 0xF) || (*v6 & 0x80u) == 0 )
    {
      ++v4;
      ++v6;
      if ( v4 >= v5 )
        return v2;
    }
    v11 = HUBMISC_ComputeDelayInNanoSecondsFromSpeedAttr(v6, (unsigned __int16)*(_DWORD *)(v3 + 188) >> 12);
    if ( v11 != -1 )
    {
      *(_WORD *)(v12 + 2582) = v11;
      return v2;
    }
    return 4065;
  }
  return v2;
}
