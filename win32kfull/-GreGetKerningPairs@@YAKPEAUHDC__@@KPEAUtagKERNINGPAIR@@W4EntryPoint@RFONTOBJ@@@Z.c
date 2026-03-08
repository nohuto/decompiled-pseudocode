/*
 * XREFs of ?GreGetKerningPairs@@YAKPEAUHDC__@@KPEAUtagKERNINGPAIR@@W4EntryPoint@RFONTOBJ@@@Z @ 0x1C02906A8
 * Callers:
 *     NtGdiGetKerningPairs @ 0x1C02C5A20 (NtGdiGetKerningPairs.c)
 *     ?GreGetCharacterPlacementW@@YAKPEAUHDC__@@PEAGKKPEAUtagGCP_RESULTSW@@KW4EntryPoint@RFONTOBJ@@@Z @ 0x1C02D90CC (-GreGetCharacterPlacementW@@YAKPEAUHDC__@@PEAGKKPEAUtagGCP_RESULTSW@@KW4EntryPoint@RFONTOBJ@@@Z.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004FFBC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0050C40 (--1DCOBJ@@QEAA@XZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HKAEBUTag@1@@Z @ 0x1C0057C50 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HKAEBUTag@1@@Z.c)
 *     bFToL @ 0x1C00D1C50 (bFToL.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00D32A0 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C011DDB0 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vDeleteRFONTRef@PFFOBJ@@QEAAXXZ @ 0x1C0123C28 (-vDeleteRFONTRef@PFFOBJ@@QEAAXXZ.c)
 *     ?bGetNtoWScale@@YAHPEAVEFLOAT@@AEAVDCOBJ@@AEAVRFONTOBJ@@AEAVPFEOBJ@@@Z @ 0x1C02908FC (-bGetNtoWScale@@YAHPEAVEFLOAT@@AEAVDCOBJ@@AEAVRFONTOBJ@@AEAVPFEOBJ@@@Z.c)
 *     ?cKernPairs@PFEOBJ@@QEAAKPEAPEBU_FD_KERNINGPAIR@@@Z @ 0x1C02E3380 (-cKernPairs@PFEOBJ@@QEAAKPEAPEBU_FD_KERNINGPAIR@@@Z.c)
 */

__int64 __fastcall GreGetKerningPairs(HDC a1, unsigned int a2, unsigned __int64 a3, unsigned int a4)
{
  __int64 v6; // rsi
  char v7; // r14
  Gre::Base *v8; // rcx
  _QWORD *v9; // rbx
  __int64 v10; // r15
  Gre::Base *v11; // rcx
  unsigned int v12; // eax
  unsigned __int64 v13; // r15
  struct _FD_KERNINGPAIR *v14; // rcx
  int fwdKern; // eax
  Gre::Base *v17; // [rsp+38h] [rbp-50h] BYREF
  struct _FD_KERNINGPAIR *v18; // [rsp+40h] [rbp-48h] BYREF
  float v19; // [rsp+48h] [rbp-40h] BYREF
  _QWORD v20[2]; // [rsp+50h] [rbp-38h] BYREF
  _QWORD v21[4]; // [rsp+60h] [rbp-28h] BYREF

  v6 = a2;
  DCOBJ::DCOBJ((DCOBJ *)v21, a1);
  if ( !v21[0] )
    goto LABEL_21;
  v7 = 0;
  v19 = 0.0;
  v18 = (struct _FD_KERNINGPAIR *)__PAIR64__(*(unsigned __int16 *)(v21[0] + 12LL), a4);
  v17 = 0LL;
  if ( (unsigned int)RFONTOBJ::bInit(&v17, (struct XDCOBJ *)v21, 0, 2u, (const struct RFONTOBJ::Tag *)&v18) )
    GreAcquireSemaphore(*((_QWORD *)v17 + 63));
  if ( !v17
    || (v20[0] = *((_QWORD *)v17 + 15),
        !bGetNtoWScale((struct EFLOAT *)&v19, (struct DCOBJ *)v21, (struct RFONTOBJ *)&v17, (struct PFEOBJ *)v20)) )
  {
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v17);
LABEL_21:
    DCOBJ::~DCOBJ((DCOBJ *)v21);
    return 0LL;
  }
  v9 = (_QWORD *)*((_QWORD *)v17 + 15);
  v10 = *((_QWORD *)v17 + 16);
  if ( (*(_DWORD *)(*(_QWORD *)(v10 + 88) + 40LL) & 0x8000) != 0 )
  {
    v20[0] = *((_QWORD *)Gre::Base::Globals(v8) + 6);
    GreAcquireSemaphore(v20[0]);
    Gre::Base::Globals(v11);
    v7 = 1;
    ++*(_DWORD *)(v10 + 68);
    SEMOBJ::vUnlock((SEMOBJ *)v20);
  }
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v17);
  v20[0] = v9;
  if ( (_DWORD)v6 && a3 )
  {
    v18 = 0LL;
    v12 = PFEOBJ::cKernPairs((PFEOBJ *)v20, (const struct _FD_KERNINGPAIR **)&v18);
    if ( v12 < (unsigned int)v6 )
      v6 = v12;
    v13 = a3 + 8 * v6;
    while ( a3 < v13 )
    {
      v14 = v18;
      *(_WORD *)a3 = v18->wcFirst;
      *(_WORD *)(a3 + 2) = v14->wcSecond;
      fwdKern = v14->fwdKern;
      LODWORD(v17) = 0;
      bFToL((float)fwdKern * v19, (int *)&v17, 0);
      *(_DWORD *)(a3 + 4) = (_DWORD)v17;
      ++v18;
      a3 += 8LL;
      v21[2] = a3;
    }
  }
  else
  {
    LODWORD(v6) = *(_DWORD *)(v9[4] + 164LL);
  }
  if ( v7 )
  {
    v20[0] = *v9;
    PFFOBJ::vDeleteRFONTRef((PFFOBJ *)v20);
  }
  DCOBJ::~DCOBJ((DCOBJ *)v21);
  return (unsigned int)v6;
}
