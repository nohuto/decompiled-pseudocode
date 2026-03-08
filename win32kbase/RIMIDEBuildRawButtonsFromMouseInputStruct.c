/*
 * XREFs of RIMIDEBuildRawButtonsFromMouseInputStruct @ 0x1C01C1554
 * Callers:
 *     RIMIDEInjectMouseFromMouseInputStruct @ 0x1C01C4968 (RIMIDEInjectMouseFromMouseInputStruct.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RIMIDEBuildRawButtonsFromMouseInputStruct(int a1, __int64 a2)
{
  unsigned int v2; // r10d
  int v5; // r9d
  int v6; // r8d
  int v7; // ecx
  int v8; // eax
  int v9; // edx
  int v10; // r9d
  int v11; // ecx
  int v12; // eax

  v2 = *(_DWORD *)(a2 + 12);
  v5 = (v2 >> 1) & 1 | 2;
  if ( (v2 & 8) == 0 )
    v5 = (*(_DWORD *)(a2 + 12) >> 1) & 1;
  v6 = v5 | 4;
  if ( (v2 & 0x20) == 0 )
    v6 = v5;
  if ( (v2 & 0x80u) != 0 )
  {
    v7 = *(_DWORD *)(a2 + 8);
    v8 = v6 | 8;
    if ( v7 != 1 )
      v8 = v6;
    v6 = v8;
    if ( v7 == 2 )
      v6 = v8 | 0x10;
  }
  v9 = (v2 >> 2) & 1 | 2;
  if ( (v2 & 0x10) == 0 )
    v9 = (v2 >> 2) & 1;
  v10 = v9 | 4;
  if ( (v2 & 0x40) == 0 )
    v10 = v9;
  if ( (v2 & 0x100) != 0 )
  {
    v11 = *(_DWORD *)(a2 + 8);
    v12 = v10 | 8;
    if ( v11 != 1 )
      v12 = v10;
    v10 = v12;
    if ( v11 == 2 )
      v10 = v12 | 0x10;
  }
  return ~v10 & (a1 | (unsigned int)v6);
}
