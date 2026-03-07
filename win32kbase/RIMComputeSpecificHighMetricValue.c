__int64 __fastcall RIMComputeSpecificHighMetricValue(int a1, __int64 a2)
{
  int v2; // edi
  unsigned int v3; // r8d
  unsigned int v4; // r10d
  _BYTE *v5; // rax
  unsigned int v6; // esi
  __int64 v7; // rax
  int v8; // ebx
  unsigned int v9; // eax
  __int16 v10; // cx
  int v11; // r10d
  int v12; // r10d
  __int64 result; // rax

  v2 = -a1;
  v3 = 0;
  v4 = 0;
  v5 = word_1C02A4708;
  if ( a1 >= 0 )
    v2 = a1;
  v6 = (unsigned int)a1 >> 31;
  do
  {
    if ( *v5 == (*(_BYTE *)(a2 + 32) & 0xF) )
      break;
    ++v3;
    v5 += 4;
  }
  while ( v3 < 0xB );
  v7 = *(_DWORD *)(a2 + 36) & 0xF;
  if ( (unsigned int)v7 < 5 )
  {
    v8 = dword_1C02A46B0[v7];
    if ( (unsigned int)(v8 - 1) <= 1 && v3 < 0xB )
    {
      v9 = RIMComputePower(word_1C02A4708[2 * v3 + 1]);
      if ( v10 >= 0 )
      {
        v12 = 2540;
        if ( v8 != 1 )
          v12 = 1000;
        v4 = v9 * v2 * v12;
      }
      else if ( v9 )
      {
        v11 = 2540;
        if ( v8 != 1 )
          v11 = 1000;
        v4 = v2 * v11 / v9;
      }
    }
  }
  result = -v4;
  if ( !(_BYTE)v6 )
    return v4;
  return result;
}
