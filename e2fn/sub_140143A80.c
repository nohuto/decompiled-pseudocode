__int64 __fastcall sub_140143A80(__int64 a1, int *a2)
{
  int v2; // esi
  BOOL v3; // ebx
  int v4; // edi
  int v5; // ebx
  int v6; // edi
  unsigned int v7; // ebx
  bool v8; // al
  unsigned int v9; // ecx

  v2 = *a2;
  v3 = sub_14000F270(*a2, 1);
  v4 = v3 | 2;
  if ( !sub_14000F270(v2, 2) )
    v4 = v3;
  v5 = v4 | 4;
  if ( !sub_14000F270(v2, 4) )
    v5 = v4;
  v6 = v5 | 8;
  if ( !sub_14000F270(v2, 8) )
    v6 = v5;
  v7 = v6 | 0x10;
  if ( !sub_14000F270(v2, 16) )
    v7 = v6;
  v8 = sub_14000F270(v2, 32);
  v9 = v7 | 0x20;
  if ( !v8 )
    return v7;
  return v9;
}
