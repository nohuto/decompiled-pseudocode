/*
 * XREFs of ScaleRGB @ 0x1C0258074
 * Callers:
 *     ComputeBGRMappingTable @ 0x1C0256580 (ComputeBGRMappingTable.c)
 * Callees:
 *     DivFD6 @ 0x1C014AF0C (DivFD6.c)
 */

__int64 __fastcall ScaleRGB(_DWORD *a1)
{
  int v2; // ecx
  int v3; // eax
  int v4; // r15d
  int v5; // r14d
  int v6; // ebx
  int v7; // edx
  __int64 result; // rax
  int v9; // ebp
  int v10; // r14d
  int v11; // edi
  int v12; // ebx

  v2 = *a1;
  v3 = v2;
  v4 = a1[2];
  v5 = v4;
  v6 = a1[1];
  v7 = v6;
  if ( v2 <= v6 )
  {
    v3 = a1[1];
    v7 = v2;
  }
  if ( v4 <= v3 )
    v5 = v3;
  result = (unsigned int)v4;
  if ( v4 >= v7 )
    result = (unsigned int)v7;
  v9 = 0;
  if ( v5 > 1000000 || (int)result < 0 )
  {
    if ( (int)result < 1000000 )
    {
      if ( v5 > 0 )
      {
        if ( v5 < 1000000 )
          v5 = 1000000;
        if ( (int)result <= 0 )
          v9 = result;
        v10 = v5 - v9;
        v11 = DivFD6(v2 - v9, v10);
        v12 = DivFD6(v6 - v9, v10);
        result = DivFD6(v4 - v9, v10);
        a1[2] = result;
        *a1 = v11;
        a1[1] = v12;
      }
      else
      {
        *(_QWORD *)(a1 + 1) = 0LL;
        *a1 = 0;
      }
    }
    else
    {
      a1[2] = 1000000;
      a1[1] = 1000000;
      *a1 = 1000000;
    }
  }
  return result;
}
