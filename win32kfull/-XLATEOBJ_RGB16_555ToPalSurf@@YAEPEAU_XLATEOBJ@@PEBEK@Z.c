unsigned __int8 __fastcall XLATEOBJ_RGB16_555ToPalSurf(struct _XLATEOBJ *a1, const unsigned __int8 *a2, __int16 a3)
{
  __int64 v4; // rbx
  struct Gre::Base::SESSION_GLOBALS *v5; // rax
  __int64 v6; // rcx
  char v7; // cl
  __int64 v8; // rax

  v4 = a2[a3 & 0x7FFF];
  if ( (a1[3].flXlate & 0x800) != 0 )
  {
    v5 = Gre::Base::Globals((Gre::Base *)a1);
    v6 = *(_QWORD *)&a1[2].iSrcType;
    if ( v6 == *((_QWORD *)v5 + 750) )
    {
      v7 = v4 - 20;
      if ( (unsigned __int8)v4 < 0xAu )
        v7 = v4;
      LOBYTE(v4) = v7;
    }
    else
    {
      if ( (a1[3].flXlate & 0x1000) != 0 )
        v8 = *(_QWORD *)(v6 + 80);
      else
        v8 = *(_QWORD *)(v6 + 72);
      LOBYTE(v4) = *(_BYTE *)(v8 + v4 + 4);
    }
  }
  return v4;
}
