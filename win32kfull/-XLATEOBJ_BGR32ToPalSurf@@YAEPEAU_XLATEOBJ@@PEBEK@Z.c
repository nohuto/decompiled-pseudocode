unsigned __int8 __fastcall XLATEOBJ_BGR32ToPalSurf(struct _XLATEOBJ *a1, const unsigned __int8 *a2, unsigned int a3)
{
  struct Gre::Base::SESSION_GLOBALS *v6; // rax
  FLONG flXlate; // r8d
  struct Gre::Base::SESSION_GLOBALS *v8; // r11
  __int64 v9; // rdx
  __int64 v10; // rax
  unsigned __int8 v11; // cl
  __int64 v12; // rax

  v6 = Gre::Base::Globals((Gre::Base *)a1);
  flXlate = a1[3].flXlate;
  v8 = v6;
  v9 = a2[((unsigned __int64)(unsigned __int8)a3 >> 3) | (4 * ((a3 >> 8) & 0xF8 | (32 * (HIWORD(a3) & 0xF8))))];
  if ( (flXlate & 0x800) != 0 )
  {
    v10 = *(_QWORD *)&a1[2].iSrcType;
    if ( v10 == *((_QWORD *)v8 + 750) )
    {
      v11 = v9 - 20;
      if ( (unsigned __int8)v9 < 0xAu )
        v11 = a2[((unsigned __int64)(unsigned __int8)a3 >> 3) | (4 * ((a3 >> 8) & 0xF8 | (32 * (HIWORD(a3) & 0xF8))))];
      LOBYTE(v9) = v11;
    }
    else
    {
      if ( (flXlate & 0x1000) != 0 )
        v12 = *(_QWORD *)(v10 + 80);
      else
        v12 = *(_QWORD *)(v10 + 72);
      LOBYTE(v9) = *(_BYTE *)(v12 + v9 + 4);
    }
  }
  return v9;
}
