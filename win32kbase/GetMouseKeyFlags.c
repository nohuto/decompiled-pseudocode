/*
 * XREFs of GetMouseKeyFlags @ 0x1C00B96D0
 * Callers:
 *     GetPointerFlagsFromMouse @ 0x1C0155800 (GetPointerFlagsFromMouse.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetMouseKeyFlags(unsigned __int8 *a1)
{
  unsigned __int8 v1; // r9
  int v2; // r8d
  int v3; // edx
  unsigned __int8 v4; // r8
  int v5; // ecx
  int v6; // edx
  unsigned int v7; // ecx
  __int64 result; // rax

  v1 = a1[237];
  v2 = (a1[236] >> 2) & 1 | 2;
  if ( (a1[236] & 0x10) == 0 )
    v2 = (a1[236] >> 2) & 1;
  v3 = v2 | 0x10;
  if ( (v1 & 1) == 0 )
    v3 = v2;
  v4 = a1[240];
  v5 = v3 | 0x20;
  if ( (v1 & 4) == 0 )
    v5 = v3;
  v6 = v5 | 0x40;
  if ( (v1 & 0x10) == 0 )
    v6 = v5;
  v7 = v6 | 4;
  if ( (v4 & 1) == 0 )
    v7 = v6;
  result = v7 | 8;
  if ( (v4 & 4) == 0 )
    return v7;
  return result;
}
