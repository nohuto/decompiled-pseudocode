__int64 __fastcall RtlpLookasideAdjustDepth(__int64 a1, int a2)
{
  unsigned int v2; // r8d
  unsigned int v3; // r9d
  __int64 result; // rax
  int v5; // r10d
  unsigned int v6; // eax
  int v7; // r9d
  unsigned int v8; // eax
  int v9; // r9d
  unsigned int v10; // edx
  int v11; // r9d

  v2 = *(_DWORD *)(a1 + 20) - *(_DWORD *)(a1 + 36);
  *(_DWORD *)(a1 + 36) = *(_DWORD *)(a1 + 20);
  v3 = *(_DWORD *)(a1 + 24) - *(_DWORD *)(a1 + 40);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 24);
  *(_DWORD *)(a1 + 44) = *(_DWORD *)(a1 + 28);
  if ( a2 )
  {
    result = 0LL;
LABEL_3:
    *(_WORD *)(a1 + 16) = result;
    return result;
  }
  if ( v3 > v2 )
    v3 = v2;
  if ( !v2 )
  {
    v7 = *(unsigned __int16 *)(a1 + 16);
    goto LABEL_18;
  }
  v5 = *(unsigned __int16 *)(a1 + 18);
  v6 = 1000 * v3;
  v7 = *(unsigned __int16 *)(a1 + 16);
  v8 = v6 / v2;
  if ( v2 < 0x19 )
  {
LABEL_18:
    v11 = v7 - 10;
    result = 4LL;
    if ( v11 <= 4 )
      LOWORD(v11) = 4;
    *(_WORD *)(a1 + 16) = v11;
    return result;
  }
  if ( v8 >= 5 )
  {
    v10 = v8 * (v5 - v7) / 0x7D0 + 5;
    if ( v10 >= 0x1E )
      v10 = 30;
    result = v10 + v7;
    if ( (int)result >= v5 )
      result = *(unsigned __int16 *)(a1 + 18);
    goto LABEL_3;
  }
  v9 = v7 - 1;
  result = 4LL;
  if ( v9 <= 4 )
    LOWORD(v9) = 4;
  *(_WORD *)(a1 + 16) = v9;
  return result;
}
