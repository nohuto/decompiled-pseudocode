/*
 * XREFs of GreGetFontUnicodeRanges @ 0x1C015C188
 * Callers:
 *     NtGdiGetFontUnicodeRanges @ 0x1C015C0C0 (NtGdiGetFontUnicodeRanges.c)
 * Callees:
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C0093AC0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C009AF04 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ @ 0x1C009ED10 (-pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ.c)
 *     ?vFreepfdg@PFEOBJ@@QEAAXXZ @ 0x1C009EE30 (-vFreepfdg@PFEOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00B2C98 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C016A098 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C016AA7C (--1MDCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreGetFontUnicodeRanges(HDC a1, int *a2)
{
  ULONG v3; // ebx
  int v4; // esi
  struct _FD_GLYPHSET *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  _QWORD v9[2]; // [rsp+20h] [rbp-30h] BYREF
  _BYTE v10[32]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v11; // [rsp+80h] [rbp+30h] BYREF
  __int64 *v12; // [rsp+88h] [rbp+38h] BYREF

  v3 = 0;
  v4 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v9, a1);
  if ( !v9[0] )
    goto LABEL_14;
  v11 = 0LL;
  if ( (unsigned int)RFONTOBJ::bInit((RFONTOBJ *)&v11, (struct XDCOBJ *)v9, 0, 2u) )
    GreAcquireSemaphore(*(_QWORD *)(v11 + 504));
  if ( !v11 )
  {
LABEL_13:
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v11);
LABEL_14:
    v3 = v4;
    goto LABEL_15;
  }
  v12 = *(__int64 **)(v11 + 120);
  v5 = PFEOBJ::pfdg(&v12);
  if ( v5 )
  {
    v4 = 4 * v5->cRuns + 16;
    if ( a2 )
    {
      if ( *a2 == v4 )
      {
        *a2 = v4;
        a2[2] = v5->cGlyphsSupported;
        a2[3] = v5->cRuns;
        a2[1] = 0;
        a2[1] = (v5->flAccel & 2) != 0;
        if ( v5->cRuns )
        {
          do
          {
            v6 = v3;
            v7 = v3++;
            v7 *= 2LL;
            LOWORD(a2[v6 + 4]) = *(&v5->awcrun[0].wcLow + 4 * v7);
            HIWORD(a2[v6 + 4]) = *(&v5->awcrun[0].cGlyphs + 4 * v7);
          }
          while ( v3 < v5->cRuns );
        }
      }
      else
      {
        v4 = 0;
      }
    }
    PFEOBJ::vFreepfdg(&v12);
    goto LABEL_13;
  }
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v11);
LABEL_15:
  MDCOBJ::~MDCOBJ((MDCOBJ *)v9);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v10);
  return v3;
}
