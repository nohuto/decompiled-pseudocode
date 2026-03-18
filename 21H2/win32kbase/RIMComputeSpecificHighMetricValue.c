/*
 * XREFs of RIMComputeSpecificHighMetricValue @ 0x1C01B6C84
 * Callers:
 *     RIMPopulatePointerDevice @ 0x1C018C3A8 (RIMPopulatePointerDevice.c)
 *     RIMCreatePointerDeviceInfo @ 0x1C0190190 (RIMCreatePointerDeviceInfo.c)
 * Callees:
 *     RIMComputePower @ 0x1C01B6C4C (RIMComputePower.c)
 */

__int64 __fastcall RIMComputeSpecificHighMetricValue(unsigned int a1, __int64 a2)
{
  unsigned int v2; // r8d
  unsigned int v3; // edi
  unsigned int v4; // r10d
  unsigned int v5; // esi
  _BYTE *v6; // rax
  __int64 v7; // rax
  int v8; // ebx
  unsigned int v9; // eax
  __int16 v10; // r9
  int v11; // r10d
  int v12; // r10d
  __int64 result; // rax

  v2 = 0;
  v3 = abs32(a1);
  v4 = 0;
  v5 = a1 >> 31;
  v6 = word_1C026A590;
  do
  {
    if ( *v6 == (*(_BYTE *)(a2 + 32) & 0xF) )
      break;
    ++v2;
    v6 += 4;
  }
  while ( v2 < 0xB );
  v7 = *(_DWORD *)(a2 + 36) & 0xF;
  if ( (unsigned int)v7 < 5 )
  {
    v8 = dword_1C026A5C0[v7];
    if ( (unsigned int)(v8 - 1) <= 1 && v2 < 0xB )
    {
      v9 = RIMComputePower(word_1C026A590[2 * v2 + 1]);
      if ( v10 >= 0 )
      {
        v12 = 2540;
        if ( v8 != 1 )
          v12 = 1000;
        v4 = v9 * v3 * v12;
      }
      else if ( v9 )
      {
        v11 = 2540;
        if ( v8 != 1 )
          v11 = 1000;
        v4 = v3 * v11 / v9;
      }
    }
  }
  result = -v4;
  if ( !(_BYTE)v5 )
    return v4;
  return result;
}
