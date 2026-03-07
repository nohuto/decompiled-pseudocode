__int64 __fastcall GreGetFontUnicodeRanges(HDC a1, unsigned int *a2)
{
  unsigned int v3; // edi
  int v4; // eax
  struct _FD_GLYPHSET *v5; // rax
  struct _FD_GLYPHSET *v6; // r8
  ULONG cRuns; // eax
  int v9; // eax
  __int64 v10; // r9
  __int64 *v11; // [rsp+30h] [rbp-20h] BYREF
  _QWORD v12[3]; // [rsp+38h] [rbp-18h] BYREF
  Gre::Base *v13; // [rsp+78h] [rbp+28h] BYREF

  v3 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v12, a1);
  if ( v12[0] )
  {
    v4 = *(unsigned __int16 *)(v12[0] + 12LL);
    v13 = 0LL;
    HIDWORD(v11) = v4;
    LODWORD(v11) = 13;
    if ( (unsigned int)RFONTOBJ::bInit(&v13, (struct XDCOBJ *)v12, 0, 2u, (const struct RFONTOBJ::Tag *)&v11) )
      GreAcquireSemaphore(*((_QWORD *)v13 + 63));
    if ( v13 )
    {
      v11 = (__int64 *)*((_QWORD *)v13 + 15);
      v5 = PFEOBJ::pfdg((PFEOBJ *)&v11);
      v6 = v5;
      if ( !v5 )
      {
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v13);
        DCOBJ::~DCOBJ((DCOBJ *)v12);
        return 0LL;
      }
      v3 = 4 * v5->cRuns + 16;
      if ( a2 )
      {
        if ( *a2 == v3 )
        {
          *a2 = v3;
          a2[2] = v5->cGlyphsSupported;
          cRuns = v5->cRuns;
          a2[1] = 0;
          a2[3] = cRuns;
          v9 = a2[1];
          if ( (v6->flAccel & 2) != 0 )
            v9 = 1;
          v10 = 0LL;
          for ( a2[1] = v9; (unsigned int)v10 < v6->cRuns; v10 = (unsigned int)(v10 + 1) )
          {
            LOWORD(a2[v10 + 4]) = v6->awcrun[(unsigned int)v10].wcLow;
            HIWORD(a2[v10 + 4]) = v6->awcrun[(unsigned int)v10].cGlyphs;
          }
        }
        else
        {
          v3 = 0;
        }
      }
      PFEOBJ::vFreepfdg(&v11);
    }
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v13);
    if ( v12[0] )
      XDCOBJ::vUnlockFast((XDCOBJ *)v12);
  }
  return v3;
}
