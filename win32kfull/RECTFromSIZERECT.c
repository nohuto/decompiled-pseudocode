/*
 * XREFs of RECTFromSIZERECT @ 0x1C00D21BC
 * Callers:
 *     xxxCheckFullScreen @ 0x1C0033340 (xxxCheckFullScreen.c)
 *     xxxCreateWindowEx @ 0x1C00AF050 (xxxCreateWindowEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RECTFromSIZERECT(_DWORD *a1, _DWORD *a2)
{
  unsigned int v2; // r8d
  int v3; // r10d
  int v4; // r10d
  __int64 result; // rax
  unsigned int v6; // eax

  *a1 = *a2;
  v2 = 0x80000000;
  a1[1] = a2[1];
  v3 = a2[2] + *a2;
  a1[2] = v3;
  if ( (unsigned int)v3 >> 31 != *a2 >> 31 && (unsigned int)v3 >> 31 != a2[2] >> 31 )
  {
    v6 = 0x80000000;
    if ( v3 < 0 )
      v6 = 0x7FFFFFFF;
    a1[2] = v6;
  }
  v4 = a2[1] + a2[3];
  a1[3] = v4;
  result = a2[1] >> 31;
  if ( (unsigned int)v4 >> 31 != (_DWORD)result )
  {
    result = a2[3] >> 31;
    if ( (unsigned int)v4 >> 31 != (_DWORD)result )
    {
      if ( v4 < 0 )
        v2 = 0x7FFFFFFF;
      a1[3] = v2;
    }
  }
  return result;
}
