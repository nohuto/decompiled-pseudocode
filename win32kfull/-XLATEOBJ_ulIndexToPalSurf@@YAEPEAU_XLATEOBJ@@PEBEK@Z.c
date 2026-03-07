unsigned __int8 __fastcall XLATEOBJ_ulIndexToPalSurf(struct _XLATEOBJ *a1, const unsigned __int8 *a2, unsigned int a3)
{
  struct Gre::Base::SESSION_GLOBALS *v6; // rax
  struct Gre::Base::SESSION_GLOBALS *v7; // rbp
  unsigned int v8; // eax
  __int64 v9; // r8
  FLONG flXlate; // edx
  __int64 v11; // rax
  char v12; // cl
  __int64 v13; // rax
  ULONG *pulXlate; // [rsp+30h] [rbp+8h] BYREF

  v6 = Gre::Base::Globals((Gre::Base *)a1);
  pulXlate = a1[1].pulXlate;
  v7 = v6;
  v8 = XEPALOBJ::ulIndexToRGB((XEPALOBJ *)&pulXlate, a3);
  v9 = a2[((unsigned __int64)BYTE2(v8) >> 3) | (4 * ((v8 >> 8) & 0xF8 | (32 * (v8 & 0xF8))))];
  flXlate = a1[3].flXlate;
  if ( (flXlate & 0x800) != 0 )
  {
    v11 = *(_QWORD *)&a1[2].iSrcType;
    if ( v11 == *((_QWORD *)v7 + 750) )
    {
      v12 = v9 - 20;
      if ( (unsigned __int8)v9 < 0xAu )
        v12 = v9;
      LOBYTE(v9) = v12;
    }
    else
    {
      if ( (flXlate & 0x1000) != 0 )
        v13 = *(_QWORD *)(v11 + 80);
      else
        v13 = *(_QWORD *)(v11 + 72);
      LOBYTE(v9) = *(_BYTE *)(v13 + v9 + 4);
    }
  }
  return v9;
}
