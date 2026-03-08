/*
 * XREFs of vLine8Octant16 @ 0x1C02FF480
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BYTE *__fastcall vLine8Octant16(int *a1, __int64 a2, int a3, char a4)
{
  _BYTE *result; // rax
  int v5; // r10d
  _BYTE *v6; // rdx
  int v7; // r11d
  int v8; // ebx
  int v9; // edi
  int i; // r10d
  int v11; // ecx
  int v12; // r11d

  result = (_BYTE *)a1[1];
  v5 = a1[3];
  v6 = &result[a2];
  v7 = a1[6];
  v8 = a1[4];
  v9 = a1[5];
  *v6 = a4;
  for ( i = v5 - 1; i; --i )
  {
    result = &v6[a3];
    v6 = result + 1;
    v12 = v9 + v7;
    v11 = v12;
    if ( v12 < 0 )
      v6 = result;
    v7 = v12 - v8;
    if ( v11 < 0 )
      v7 = v11;
    *v6 = a4;
  }
  return result;
}
