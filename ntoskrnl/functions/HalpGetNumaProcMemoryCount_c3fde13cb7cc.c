char __fastcall HalpGetNumaProcMemoryCount(unsigned int *a1, unsigned __int64 i, _DWORD *a3, _DWORD *a4)
{
  __int64 v4; // r15
  unsigned int v5; // ebx
  _DWORD *v8; // rsi
  __int64 v9; // r10
  bool v11; // r13
  unsigned __int64 v12; // rbp
  __int64 v13; // rax
  __int64 v14; // r10
  unsigned __int8 *v15; // r11
  int v16; // ecx
  unsigned int v17; // r8d
  unsigned int v18; // ecx
  _DWORD *v19; // r8
  __int64 v20; // r10
  _DWORD v22[64]; // [rsp+40h] [rbp-258h] BYREF
  _DWORD v23[64]; // [rsp+140h] [rbp-158h] BYREF

  v4 = HalpAcpiSrat;
  v5 = 0;
  *a1 = 0;
  *a3 = 0;
  *(_DWORD *)i = 0;
  v8 = (_DWORD *)i;
  *a4 = 0;
  v9 = v4 + 48;
  v11 = *(_BYTE *)(v4 + 8) >= 3u;
  v12 = v4 + *(unsigned int *)(v4 + 4);
  while ( v9 + 2 <= v12 )
  {
    v13 = *(unsigned __int8 *)(v9 + 1);
    if ( (unsigned __int8)v13 < 2u || v9 + v13 > v12 )
      break;
    LOBYTE(i) = v11;
    if ( !(unsigned __int8)HalpVerifySratEntryLengthAndFlag(v9, i) )
      goto LABEL_22;
    if ( *(_BYTE *)(v4 + 8) == 1 )
    {
      v16 = *v15;
    }
    else if ( *(_BYTE *)v14 )
    {
      if ( *(_BYTE *)v14 == 2 )
        v16 = *(_DWORD *)(v14 + 4);
      else
        v16 = *(_DWORD *)v15;
    }
    else
    {
      v16 = *v15
          + ((*(unsigned __int8 *)(v14 + 9)
            + ((*(unsigned __int8 *)(v14 + 10) + (*(unsigned __int8 *)(v14 + 11) << 8)) << 8)) << 8);
    }
    v17 = *a1;
    for ( i = 0LL; (unsigned int)i < v17; i = (unsigned int)(i + 1) )
    {
      if ( v16 == v23[(unsigned int)i] )
        break;
    }
    if ( (_DWORD)i == v17 )
    {
      if ( (_DWORD)i == 64 )
        return 0;
      v23[(unsigned int)i] = v16;
      v22[(unsigned int)i] = 0;
      *a1 = v17 + 1;
    }
    if ( !*(_BYTE *)v14 )
      goto LABEL_21;
    if ( *(_BYTE *)v14 != 1 )
    {
      if ( *(_BYTE *)v14 != 2 )
        goto LABEL_22;
LABEL_21:
      ++*v8;
      ++v22[(unsigned int)i];
      goto LABEL_22;
    }
    ++*a3;
LABEL_22:
    v9 = *(unsigned __int8 *)(v14 + 1) + v14;
  }
  if ( *a3 && *v8 )
  {
    if ( HalpAcpiMsct )
      HalpUpdateConfigurationFromMsct((_DWORD)a1, 64, (_DWORD)v8, 0, 0LL, (__int64)v23, (__int64)v22, 0LL);
    if ( HalpSplitLargeNumaNodes )
    {
      v18 = *a1;
      if ( *a1 )
      {
        v19 = v22;
        v20 = v18;
        do
        {
          if ( *v19 > (unsigned int)HalpMaximumGroupSize )
            v5 = (HalpMaximumGroupSize + *v19 - 1) / (unsigned int)HalpMaximumGroupSize + v5 - 1;
          ++v19;
          --v20;
        }
        while ( v20 );
      }
      *a1 = v5 + v18;
    }
    if ( *a1 <= 0x40 )
    {
      *a4 = HalpParseChannelCount();
      return 1;
    }
  }
  return 0;
}
