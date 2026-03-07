__int64 __fastcall RtlpHpLfhSubsegmentDecBlockCounts(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  char v6; // cl
  __int64 v7; // r11
  __int64 v8; // rbx
  char *v9; // rdx
  int v10; // eax
  __int64 v11; // r8
  char *v12; // r9
  int v13; // eax
  signed __int16 v14; // cx

  v6 = *(_BYTE *)(a2 + 44);
  v7 = a3 >> v6;
  v8 = 2 * v7;
  v9 = (char *)(2 * v7 + a2 + *(unsigned __int16 *)(a2 + 46));
  _m_prefetchw(v9);
  v10 = ((a3 + a4 - 1) >> v6) - v7;
  LODWORD(v11) = -1;
  v12 = &v9[2 * (v10 + 1)];
  v13 = 0;
  if ( v9 < v12 )
  {
    do
    {
      v14 = _InterlockedDecrement16((volatile signed __int16 *)v9);
      if ( v14 )
      {
        if ( v14 == -1 )
          --v13;
      }
      else
      {
        ++v13;
        if ( (_DWORD)v11 == -1 )
          v11 = v8 >> 1;
      }
      v9 += 2;
      v8 += 2LL;
    }
    while ( v9 < v12 );
    if ( v13 && (RtlpHpLfhPerfFlags & 0x20) != 0 )
      _InterlockedExchangeAdd64(
        (volatile signed __int64 *)(*(__int16 *)(a1 + 58) + a1 + 24),
        (v13 << *(_BYTE *)(a2 + 44)) / 4096);
  }
  return (unsigned int)v11;
}
