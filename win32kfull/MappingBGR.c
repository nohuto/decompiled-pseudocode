unsigned __int8 __fastcall MappingBGR(unsigned __int8 *a1, int a2, __int64 a3, unsigned __int8 *a4)
{
  unsigned int v4; // ebx
  unsigned __int8 *v6; // r10
  unsigned __int64 v7; // r11
  unsigned __int8 *v8; // r9
  unsigned __int64 v9; // r8
  __int64 v10; // rcx
  unsigned __int8 result; // al

  v4 = *a4;
  v6 = a1;
  v7 = (unsigned __int64)&a1[2 * a2 + a2];
  v8 = a4 + 1;
  do
  {
    v9 = (4 * (BGR555Idx[*v6] - (_WORD)v4)) & 0x7C00 | (unsigned __int64)((((__int64)(BGR555Idx[v6[2]]
                                                                                    - (unsigned __int64)v4) >> 5) | (BGR555Idx[v6[1]] - (_WORD)v4) & 0x1F00) >> 3);
    v10 = a3 + 2 * v9;
    *(_WORD *)v6 = *(_WORD *)(v9 + v10);
    result = *(_BYTE *)(v9 + v10 + 2);
    v6[2] = result;
    v4 = *v8++;
    if ( !v4 )
    {
      v8 -= 66;
      v4 = *v8;
    }
    v6 += 3;
  }
  while ( (unsigned __int64)v6 < v7 );
  return result;
}
