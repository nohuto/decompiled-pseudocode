/*
 * XREFs of ?bOldPenNominal@DC@@QEAAHAEAVEXFORMOBJ@@J@Z @ 0x1C000565C
 * Callers:
 *     ?vRealizeLineAttrs@DC@@QEAAXAEAVEXFORMOBJ@@@Z @ 0x1C0005598 (-vRealizeLineAttrs@DC@@QEAAXAEAVEXFORMOBJ@@@Z.c)
 * Callees:
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_VECTORL@@PEAU_VECTORFX@@_K@Z @ 0x1C00056E0 (-bXform@EXFORMOBJ@@QEAAHPEAU_VECTORL@@PEAU_VECTORFX@@_K@Z.c)
 */

__int64 __fastcall DC::bOldPenNominal(DC *this, struct EXFORMOBJ *a2, int a3)
{
  unsigned int v3; // ebx
  int v5; // ecx
  int v6; // r8d
  int v7; // ecx
  bool v8; // sf
  int v9; // r8d
  int v10; // r10d
  int v11; // r8d
  bool v12; // sf
  int v13; // [rsp+20h] [rbp-10h] BYREF
  __int64 v14; // [rsp+24h] [rbp-Ch]
  int v15; // [rsp+2Ch] [rbp-4h]
  int v16; // [rsp+40h] [rbp+10h] BYREF
  int v17; // [rsp+44h] [rbp+14h]

  v3 = 0;
  if ( (*(_DWORD *)(*((_QWORD *)this + 122) + 340LL) & 0x20) != 0 )
  {
    v13 = a3;
    v15 = a3;
    v14 = 0LL;
    if ( (unsigned int)EXFORMOBJ::bXform(a2, (struct _VECTORL *)&v13, (struct _VECTORFX *)&v13, 2uLL) )
    {
      v5 = v13;
      if ( v13 < 0 )
        v5 = -v13;
      v6 = v14;
      if ( (int)v14 < 0 )
        v6 = -(int)v14;
      if ( v5 <= v6 )
      {
        v7 = v14;
        v8 = (int)v14 < 0;
      }
      else
      {
        v7 = v13;
        v8 = v13 < 0;
      }
      if ( v8 )
        v7 = -v7;
      if ( v7 < 24 )
      {
        v9 = HIDWORD(v14);
        if ( v14 < 0 )
          v9 = -HIDWORD(v14);
        v10 = v15;
        if ( v15 < 0 )
          v10 = -v15;
        if ( v9 <= v10 )
        {
          v11 = v15;
          v12 = v15 < 0;
        }
        else
        {
          v11 = HIDWORD(v14);
          v12 = v14 < 0;
        }
        if ( v12 )
          v11 = -v11;
        if ( v11 < 24 && v13 * v13 + (int)v14 * (int)v14 < 576 && HIDWORD(v14) * HIDWORD(v14) + v15 * v15 < 576 )
          return 1;
      }
    }
  }
  else
  {
    v16 = a3;
    v17 = 0;
    if ( (unsigned int)EXFORMOBJ::bXform(a2, (struct _VECTORL *)&v16, (struct _VECTORFX *)&v16, 1uLL) )
      return (int)abs32(v16) < 24;
  }
  return v3;
}
