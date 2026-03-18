/*
 * XREFs of ?GreGetKerningPairs@@YAKPEAUHDC__@@KPEAUtagKERNINGPAIR@@W4EntryPoint@RFONTOBJ@@@Z @ 0x1C028DE40
 * Callers:
 *     NtGdiGetKerningPairs @ 0x1C02C3220 (NtGdiGetKerningPairs.c)
 *     ?GreGetCharacterPlacementW@@YAKPEAUHDC__@@PEAGKKPEAUtagGCP_RESULTSW@@KW4EntryPoint@RFONTOBJ@@@Z @ 0x1C02D72B0 (-GreGetCharacterPlacementW@@YAKPEAUHDC__@@PEAGKKPEAUtagGCP_RESULTSW@@KW4EntryPoint@RFONTOBJ@@@Z.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C007F350 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vDeleteRFONTRef@PFFOBJ@@QEAAXXZ @ 0x1C0087CDC (-vDeleteRFONTRef@PFFOBJ@@QEAAXXZ.c)
 *     bFToL @ 0x1C009BB20 (bFToL.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00FA95C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HKAEBUTag@1@@Z @ 0x1C010CB90 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HKAEBUTag@1@@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C011B310 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C011BFF0 (--1DCOBJ@@QEAA@XZ.c)
 *     ?bGetNtoWScale@@YAHPEAVEFLOAT@@AEAVDCOBJ@@AEAVRFONTOBJ@@AEAVPFEOBJ@@@Z @ 0x1C028E094 (-bGetNtoWScale@@YAHPEAVEFLOAT@@AEAVDCOBJ@@AEAVRFONTOBJ@@AEAVPFEOBJ@@@Z.c)
 *     ?cKernPairs@PFEOBJ@@QEAAKPEAPEBU_FD_KERNINGPAIR@@@Z @ 0x1C02E161C (-cKernPairs@PFEOBJ@@QEAAKPEAPEBU_FD_KERNINGPAIR@@@Z.c)
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
  _QWORD *v17; // [rsp+38h] [rbp-70h] BYREF
  struct _FD_KERNINGPAIR *v18; // [rsp+40h] [rbp-68h] BYREF
  float v19; // [rsp+48h] [rbp-60h] BYREF
  _QWORD v20[2]; // [rsp+50h] [rbp-58h] BYREF
  _QWORD v21[8]; // [rsp+60h] [rbp-48h] BYREF

  v6 = a2;
  DCOBJ::DCOBJ((DCOBJ *)v21, a1);
  if ( !v21[0] )
    goto LABEL_21;
  v7 = 0;
  v19 = 0.0;
  v18 = (struct _FD_KERNINGPAIR *)__PAIR64__(*(unsigned __int16 *)(v21[0] + 12LL), a4);
  v17 = 0LL;
  if ( (unsigned int)RFONTOBJ::bInit((RFONTOBJ *)&v17, (struct XDCOBJ *)v21, 0, 2u, (const struct RFONTOBJ::Tag *)&v18) )
    GreAcquireSemaphore(v17[63]);
  if ( !v17
    || (v20[0] = v17[15],
        !bGetNtoWScale((struct EFLOAT *)&v19, (struct DCOBJ *)v21, (struct RFONTOBJ *)&v17, (struct PFEOBJ *)v20)) )
  {
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v17);
LABEL_21:
    DCOBJ::~DCOBJ((DCOBJ *)v21);
    return 0LL;
  }
  v9 = (_QWORD *)v17[15];
  v10 = v17[16];
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
      v21[6] = a3;
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
