/*
 * XREFs of GreGetTextExtentExW @ 0x1C016D540
 * Callers:
 *     NtGdiGetTextExtentExW @ 0x1C0093630 (NtGdiGetTextExtentExW.c)
 *     GreGetCharacterPlacementW @ 0x1C02BB890 (GreGetCharacterPlacementW.c)
 * Callees:
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C0093A30 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ?vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z @ 0x1C00951E0 (-vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C009AE74 (--1RFONTOBJ@@QEAA@XZ.c)
 *     PALLOCMEM2 @ 0x1C009FDB8 (PALLOCMEM2.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00B2938 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vFixUpGlyphIndices@RFONTOBJ@@QEBAXPEAGI@Z @ 0x1C00FD5AC (-vFixUpGlyphIndices@RFONTOBJ@@QEBAXPEAGI@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00FD8F4 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C01698C8 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C016A21C (--1MDCOBJ@@QEAA@XZ.c)
 *     ??1ESTROBJ@@QEAA@XZ @ 0x1C016B4A8 (--1ESTROBJ@@QEAA@XZ.c)
 *     ?bTextExtent@ESTROBJ@@QEAAHAEAVRFONTOBJ@@JPEAUtagSIZE@@@Z @ 0x1C016D7F4 (-bTextExtent@ESTROBJ@@QEAAHAEAVRFONTOBJ@@JPEAUtagSIZE@@@Z.c)
 */

__int64 __fastcall GreGetTextExtentExW(
        HDC a1,
        unsigned __int16 *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int *a5,
        int *a6,
        struct tagSIZE *a7,
        char a8)
{
  int *v8; // r14
  int *v10; // rbx
  unsigned int v12; // r12d
  unsigned int v14; // eax
  __int64 v15; // [rsp+90h] [rbp-80h] BYREF
  unsigned int v16; // [rsp+98h] [rbp-78h]
  struct tagSIZE *v17; // [rsp+A0h] [rbp-70h]
  _QWORD v18[2]; // [rsp+A8h] [rbp-68h] BYREF
  char v19[32]; // [rsp+B8h] [rbp-58h] BYREF
  float *v20[3]; // [rsp+D8h] [rbp-38h] BYREF
  _BYTE v21[320]; // [rsp+F0h] [rbp-20h] BYREF
  char v22; // [rsp+230h] [rbp+120h] BYREF

  v8 = 0LL;
  v10 = a6;
  v16 = a4;
  v12 = 0;
  v17 = a7;
  if ( (a2 || !a3) && a7 )
  {
    if ( a3 )
    {
      DCOBJ::DCOBJ((DCOBJ *)v18, a1);
      if ( v18[0] )
      {
        EXFORMOBJ::vQuickInit((EXFORMOBJ *)v20, (struct XDCOBJ *)v18, 516);
        v15 = 0LL;
        if ( (unsigned int)RFONTOBJ::bInit((RFONTOBJ *)&v15, (struct XDCOBJ *)v18, 0, 2 * (a8 & 1u) + 2) )
          GreAcquireSemaphore(*(_QWORD *)(v15 + 504));
        if ( v15 )
        {
          if ( (*(_DWORD *)(v15 + 84) & 4) != 0 )
            RFONTOBJ::vFixUpGlyphIndices((RFONTOBJ *)&v15, a2, a3);
          if ( !a6 && a5 )
          {
            if ( a3 > 0x28 )
            {
              v8 = (int *)PALLOCMEM2(4 * a3, 1954051143LL, 1);
              if ( !v8 )
                EngSetLastError(8u);
              v10 = v8;
            }
            else
            {
              v10 = (int *)&v22;
            }
          }
          ESTROBJ::vInit(
            (ESTROBJ *)v21,
            a2,
            a3,
            (struct XDCOBJ *)v18,
            (struct RFONTOBJ *)&v15,
            v20,
            0LL,
            0,
            *(_DWORD *)(v18[0] + 1764LL),
            *(_DWORD *)(*(_QWORD *)(v18[0] + 976LL) + 280LL),
            *(_DWORD *)(*(_QWORD *)(v18[0] + 976LL) + 284LL),
            *(_DWORD *)(*(_QWORD *)(v18[0] + 976LL) + 288LL),
            0,
            0,
            0,
            v10,
            0LL,
            0);
          if ( (v21[232] & 4) != 0
            && (unsigned int)ESTROBJ::bTextExtent((ESTROBJ *)v21, (struct RFONTOBJ *)&v15, 0, v17) )
          {
            if ( a5 && v10 )
            {
              v14 = 0;
              do
              {
                if ( *v10 > v16 )
                  break;
                ++v14;
                ++v10;
              }
              while ( v14 < a3 );
              *a5 = v14;
            }
            v12 = 1;
          }
          if ( v8 )
            Win32FreePool(v8);
          ESTROBJ::~ESTROBJ((ESTROBJ *)v21);
        }
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v15);
      }
      else
      {
        EngSetLastError(6u);
      }
      MDCOBJ::~MDCOBJ((MDCOBJ *)v18);
      UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v19);
      return v12;
    }
    else
    {
      if ( a5 )
        *a5 = 0;
      return 1LL;
    }
  }
  else
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
}
