/*
 * XREFs of ?bFindRFONT@RFONTOBJ@@QEAAHPEAU_FD_XFORM@@KKAEAVPDEVOBJ@@PEAVEXFORMOBJ@@PEAVPFE@@HHHK@Z @ 0x1C00E85E8
 * Callers:
 *     ?vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z @ 0x1C00E8260 (-vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z.c)
 *     ?bSetNewFDX@RFONTOBJ@@QEAAHAEAVXDCOBJ@@AEAU_FD_XFORM@@K@Z @ 0x1C02A7D6C (-bSetNewFDX@RFONTOBJ@@QEAAHAEAVXDCOBJ@@AEAU_FD_XFORM@@K@Z.c)
 * Callees:
 *     ?prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@XZ @ 0x1C009D600 (-prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@XZ.c)
 *     ?vInsert@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z @ 0x1C009E3C0 (-vInsert@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z.c)
 *     ?prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z @ 0x1C009E430 (-prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z.c)
 *     ?prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@XZ @ 0x1C009E458 (-prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@XZ.c)
 *     ?vRemove@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z @ 0x1C009F0E4 (-vRemove@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z.c)
 *     ?prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z @ 0x1C009F3D0 (-prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z.c)
 *     ??1RFONTTMPOBJ@@QEAA@XZ @ 0x1C00E7978 (--1RFONTTMPOBJ@@QEAA@XZ.c)
 *     ?bMatchRealization@RFONTOBJ@@AEAAHPEAU_FD_XFORM@@KKPEAVEXFORMOBJ@@PEAVPFE@@HHHK@Z @ 0x1C00E883C (-bMatchRealization@RFONTOBJ@@AEAAHPEAU_FD_XFORM@@KKPEAVEXFORMOBJ@@PEAVPFE@@HHHK@Z.c)
 *     ?cInactive@PDEVOBJ@@QEAAIXZ @ 0x1C00E8AA0 (-cInactive@PDEVOBJ@@QEAAIXZ.c)
 *     ??0PUBLIC_PFTOBJ@@QEAA@PEAVPFT@@@Z @ 0x1C016A238 (--0PUBLIC_PFTOBJ@@QEAA@PEAVPFT@@@Z.c)
 *     ??1SEMOBJ@@QEAA@XZ @ 0x1C026D1FC (--1SEMOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall RFONTOBJ::bFindRFONT(
        RFONTOBJ *this,
        struct _FD_XFORM *a2,
        unsigned int a3,
        unsigned int a4,
        struct PDEVOBJ *a5,
        struct EXFORMOBJ *a6,
        struct PFE *a7,
        int a8,
        int a9,
        int a10,
        unsigned int a11)
{
  PDEVOBJ *v15; // rsi
  struct RFONT *v16; // rax
  unsigned int v17; // r13d
  unsigned int v18; // ebx
  struct PFT *v19; // rdx
  int matched; // eax
  __int64 v21; // rcx
  struct RFONT *v22; // rax
  struct PFT *v23; // rdx
  unsigned int v25; // eax
  __int64 v26; // rdx
  unsigned int v27; // ecx
  __int64 v28; // [rsp+50h] [rbp-10h] BYREF
  struct RFONT *v29; // [rsp+90h] [rbp+30h] BYREF

  v28 = ghsemRFONTList;
  GreAcquireSemaphore(ghsemRFONTList);
  v15 = a5;
  v16 = PDEVOBJ::prfntActive(a5);
  v17 = a11;
  v18 = 0;
  *(_QWORD *)this = v16;
  v19 = v16;
  if ( v16 )
  {
    while ( 1 )
    {
      PUBLIC_PFTOBJ::PUBLIC_PFTOBJ((PUBLIC_PFTOBJ *)&v29, v19);
      RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v29);
      matched = RFONTOBJ::bMatchRealization(this, a2, a3, a4, a6, a7, a8, a9, a10, v17);
      v21 = *(_QWORD *)this;
      if ( matched )
        break;
      v19 = *(struct PFT **)(v21 + 672);
      *(_QWORD *)this = v19;
      if ( !v19 )
        goto LABEL_4;
    }
    v18 = 1;
    ++*(_DWORD *)(v21 + 660);
    v29 = PDEVOBJ::prfntActive(v15);
    if ( v29 != *(struct RFONT **)this )
    {
      RFONTOBJ::vRemove((__int64)this, (unsigned __int64 *)&v29, 1);
      RFONTOBJ::vInsert((unsigned __int64 *)this, (unsigned __int64 *)&v29, 1);
      PDEVOBJ::prfntActive(v15, v29);
    }
  }
  else
  {
LABEL_4:
    v22 = PDEVOBJ::prfntInactive(v15);
    *(_QWORD *)this = v22;
    v23 = v22;
    if ( v22 )
    {
      while ( 1 )
      {
        PUBLIC_PFTOBJ::PUBLIC_PFTOBJ((PUBLIC_PFTOBJ *)&v29, v23);
        RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v29);
        if ( (unsigned int)RFONTOBJ::bMatchRealization(this, a2, a3, a4, a6, a7, a8, a9, a10, v17) )
          break;
        v23 = *(struct PFT **)(*(_QWORD *)this + 672LL);
        *(_QWORD *)this = v23;
        if ( !v23 )
          goto LABEL_7;
      }
      v18 = 1;
      v29 = PDEVOBJ::prfntInactive(v15);
      RFONTOBJ::vRemove((__int64)this, (unsigned __int64 *)&v29, 1);
      PDEVOBJ::prfntInactive(v15, v29);
      v25 = PDEVOBJ::cInactive(v15);
      v26 = *(_QWORD *)v15;
      v27 = v25 - 1;
      if ( (*(_DWORD *)(*(_QWORD *)v15 + 40LL) & 0x800000) != 0 )
        *(_DWORD *)(*(_QWORD *)(v26 + 3520) + 1536LL) = v27;
      else
        *(_DWORD *)(v26 + 1536) = v27;
      v29 = PDEVOBJ::prfntActive(v15);
      RFONTOBJ::vInsert((unsigned __int64 *)this, (unsigned __int64 *)&v29, 1);
      PDEVOBJ::prfntActive(v15, v29);
      *(_DWORD *)(*(_QWORD *)this + 660LL) = 1;
    }
    else
    {
LABEL_7:
      *(_QWORD *)this = 0LL;
    }
  }
  SEMOBJ::~SEMOBJ((SEMOBJ *)&v28);
  return v18;
}
