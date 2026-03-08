/*
 * XREFs of ?ulBitfieldToRGB@XEPALOBJ@@QEAAKK@Z @ 0x1C0184AA0
 * Callers:
 *     ?ulIndexToRGB@XEPALOBJ@@QEAAKK@Z @ 0x1C0008B50 (-ulIndexToRGB@XEPALOBJ@@QEAAKK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XEPALOBJ::ulBitfieldToRGB(XEPALOBJ *this, unsigned int a2)
{
  _DWORD *v3; // r11
  unsigned int v4; // r8d
  unsigned int v5; // r9d
  unsigned int v6; // edx
  unsigned int v7; // r8d
  int v8; // ecx
  unsigned int v9; // eax
  unsigned int v10; // r11d
  unsigned int v11; // eax
  unsigned int v12; // r8d

  v3 = *(_DWORD **)(*(_QWORD *)this + 112LL);
  v4 = v3[9];
  v5 = (*v3 & a2) >> v3[6];
  if ( v4 < 8 )
    v5 = (v5 << (8 - v4) >> v4) | (v5 << (8 - v4));
  v6 = v3[10];
  v7 = (a2 & v3[1]) >> v3[7];
  if ( v6 < 8 )
    v7 = (v7 << (8 - v6) >> v6) | (v7 << (8 - v6));
  v8 = v3[8];
  v9 = a2 & v3[2];
  v10 = v3[11];
  v11 = v9 >> v8;
  v12 = v7 << 8;
  if ( v10 < 8 )
    v11 = (v11 << (8 - v10) >> v10) | (v11 << (8 - v10));
  return v5 | v12 | (v11 << 16);
}
