__int64 __fastcall GreAddFontMemResourceEx(
        struct tagDOWNLOADFONTHEADER *a1,
        int a2,
        struct tagDESIGNVECTOR *a3,
        unsigned int a4,
        unsigned int *a5)
{
  __int64 v9; // rdi
  int v10; // eax
  struct tagDOWNLOADFONTHEADER *v11; // rdx
  Gre::Base *v12; // rcx
  Gre::Base *v13; // rcx
  struct Gre::Base::SESSION_GLOBALS *v14; // rbx
  struct PFT *v15; // rax
  struct _FONTFILEVIEW **v17; // [rsp+30h] [rbp-71h] BYREF
  struct PFT *v18; // [rsp+38h] [rbp-69h] BYREF
  _BYTE v19[160]; // [rsp+50h] [rbp-51h] BYREF
  struct tagDOWNLOADFONTHEADER *v20; // [rsp+100h] [rbp+5Fh] BYREF
  unsigned int v21; // [rsp+108h] [rbp+67h] BYREF

  memset_0(v19, 0, 0x78uLL);
  v9 = 0LL;
  v20 = a1;
  v17 = 0LL;
  v10 = cMapRemoteFonts(&v20, (unsigned int)(a2 + 16), v19, 2LL);
  v11 = v20;
  if ( v20 && v10 )
  {
    LODWORD(v20) = 1;
    if ( (unsigned int)bCreateFontFileView((const struct _FONTFILEVIEW *)v19, v11, a2 + 16, &v17, 1u) )
    {
      v14 = Gre::Base::Globals(v12);
      if ( *((_QWORD *)v14 + 796) || (unsigned int)bInitPrivatePFT(v13) )
      {
        v15 = (struct PFT *)*((_QWORD *)v14 + 796);
        v21 = 0;
        v18 = v15;
        v9 = PUBLIC_PFTOBJ::hLoadMemFonts(&v18, v17, a3, a4, &v21, (int *)&v20);
        if ( v9 )
        {
          *a5 = v21;
          return v9;
        }
        if ( !(_DWORD)v20 )
          return v9;
      }
    }
    vUnmapRemoteFonts(v19);
  }
  return v9;
}
