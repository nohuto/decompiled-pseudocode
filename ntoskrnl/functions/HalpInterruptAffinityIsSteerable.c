__int64 __fastcall HalpInterruptAffinityIsSteerable(__int64 a1, bool *a2)
{
  __int64 v2; // rsi
  __int64 v3; // rbx
  int v6; // eax
  unsigned int v7; // edx
  bool v8; // zf
  unsigned int v9; // esi
  __int128 v11; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v12; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(unsigned __int16 *)(a1 + 8);
  v3 = 0LL;
  v12 = 0;
  v11 = 0LL;
  if ( (_WORD)v2 )
    goto LABEL_10;
  v6 = KeQueryInterruptPartitionCount(0LL, &v12);
  v7 = v6;
  if ( v6 == 259 )
  {
    if ( (_WORD)KeActiveProcessors )
      v3 = qword_140D1EFE8[v2];
    *a2 = v3 == *(_QWORD *)a1;
    return v7;
  }
  if ( v6 < 0 || (v8 = v12 == 0, !v12) )
  {
LABEL_10:
    v7 = 0;
LABEL_11:
    *a2 = 0;
    return v7;
  }
  *a2 = 1;
  v9 = 0;
  if ( !v8 )
  {
    while ( 1 )
    {
      v7 = KeQueryInterruptPartitionInformation(0LL, v9, &v11);
      if ( (v7 & 0x80000000) != 0 || (*(_QWORD *)a1 & (unsigned __int64)v11) == 0 )
        break;
      if ( ++v9 >= v12 )
        return v7;
    }
    goto LABEL_11;
  }
  return v7;
}
