/*
 * XREFs of RtlpLookasideAdjustDepth @ 0x14020F2A8
 * Callers:
 *     RtlpDynamicLookasideRebalance @ 0x14020F160 (RtlpDynamicLookasideRebalance.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpLookasideAdjustDepth(__int64 a1, int a2)
{
  int v2; // eax
  int v4; // r8d
  unsigned int v5; // ecx
  unsigned int v6; // r10d
  __int64 result; // rax
  unsigned int v8; // eax
  int v9; // r10d
  unsigned int v10; // edx

  v2 = *(_DWORD *)(a1 + 20);
  LOWORD(v4) = 0;
  v5 = v2 - *(_DWORD *)(a1 + 36);
  *(_DWORD *)(a1 + 36) = v2;
  v6 = *(_DWORD *)(a1 + 24) - *(_DWORD *)(a1 + 40);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 24);
  result = *(unsigned int *)(a1 + 28);
  *(_DWORD *)(a1 + 44) = result;
  if ( a2 )
    goto LABEL_2;
  v4 = *(unsigned __int16 *)(a1 + 16);
  v8 = v5;
  if ( v6 <= v5 )
    v8 = v6;
  v9 = *(unsigned __int16 *)(a1 + 18);
  if ( !v5 )
    v5 = 1;
  result = 1000 * v8 / v5;
  if ( v5 < 0x19 )
  {
    v4 -= 10;
LABEL_10:
    if ( v4 <= 4 )
      LOWORD(v4) = 4;
    goto LABEL_2;
  }
  if ( (unsigned int)result < 5 )
  {
    --v4;
    goto LABEL_10;
  }
  v10 = (int)result * (v9 - v4) / 0x7D0u + 5;
  if ( v10 >= 0x1E )
    v10 = 30;
  result = v10 + v4;
  LOWORD(v4) = v10 + v4;
  if ( (int)result >= v9 )
    LOWORD(v4) = *(_WORD *)(a1 + 18);
LABEL_2:
  *(_WORD *)(a1 + 16) = v4;
  return result;
}
