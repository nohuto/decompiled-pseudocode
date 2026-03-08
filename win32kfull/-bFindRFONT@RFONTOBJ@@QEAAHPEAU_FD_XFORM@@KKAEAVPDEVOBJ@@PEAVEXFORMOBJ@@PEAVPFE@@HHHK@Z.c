/*
 * XREFs of ?bFindRFONT@RFONTOBJ@@QEAAHPEAU_FD_XFORM@@KKAEAVPDEVOBJ@@PEAVEXFORMOBJ@@PEAVPFE@@HHHK@Z @ 0x1C02B8F58
 * Callers:
 *     ?vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z @ 0x1C014F852 (-vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z.c)
 *     ?bSetNewFDX@RFONTOBJ@@QEAAHAEAVXDCOBJ@@AEAU_FD_XFORM@@K@Z @ 0x1C02B9210 (-bSetNewFDX@RFONTOBJ@@QEAAHAEAVXDCOBJ@@AEAU_FD_XFORM@@K@Z.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00D32A0 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?vInsert@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z @ 0x1C0122EF0 (-vInsert@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z.c)
 *     ?prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@XZ @ 0x1C0122F60 (-prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@XZ.c)
 *     ?prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z @ 0x1C0122FB8 (-prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z.c)
 *     ?vRemove@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z @ 0x1C0123A3C (-vRemove@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z.c)
 *     ?prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@XZ @ 0x1C0123AD4 (-prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@XZ.c)
 *     ?prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z @ 0x1C0123AF4 (-prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z.c)
 *     ?cInactive@PDEVOBJ@@QEAAIXZ @ 0x1C0123B7C (-cInactive@PDEVOBJ@@QEAAIXZ.c)
 *     ?bMatchRealization@RFONTOBJ@@AEAAHPEAU_FD_XFORM@@KKPEAVEXFORMOBJ@@PEAVPFE@@HHHK@Z @ 0x1C014FBFC (-bMatchRealization@RFONTOBJ@@AEAAHPEAU_FD_XFORM@@KKPEAVEXFORMOBJ@@PEAVPFE@@HHHK@Z.c)
 */

__int64 __fastcall RFONTOBJ::bFindRFONT(
        RFONTOBJ *this,
        struct _FD_XFORM *a2,
        int a3,
        int a4,
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
  int matched; // eax
  __int64 v20; // rcx
  struct RFONT *v21; // rax
  __int64 v22; // rcx
  int v24; // eax
  __int64 v25; // rdx
  int v26; // eax
  __int64 v27; // [rsp+50h] [rbp-10h] BYREF
  struct RFONT *v28; // [rsp+90h] [rbp+30h] BYREF

  v27 = *((_QWORD *)Gre::Base::Globals(this) + 3);
  GreAcquireSemaphore(v27);
  v15 = a5;
  v16 = PDEVOBJ::prfntActive(a5);
  v17 = a11;
  v18 = 0;
  while ( 1 )
  {
    *(_QWORD *)this = v16;
    if ( !v16 )
      break;
    matched = RFONTOBJ::bMatchRealization(this, a2, a3, a4, a6, a7, a8, a9, a10, v17);
    v20 = *(_QWORD *)this;
    if ( matched )
    {
      v18 = 1;
      ++*(_DWORD *)(v20 + 660);
      v28 = PDEVOBJ::prfntActive(v15);
      if ( v28 != *(struct RFONT **)this )
      {
        RFONTOBJ::vRemove((__int64)this, &v28, 1);
        RFONTOBJ::vInsert((unsigned __int64 *)this, (unsigned __int64 *)&v28, 1);
        PDEVOBJ::prfntActive(v15, v28);
      }
      goto LABEL_9;
    }
    v16 = *(struct RFONT **)(v20 + 672);
  }
  v21 = PDEVOBJ::prfntInactive(v15);
  *(_QWORD *)this = v21;
  if ( v21 )
  {
    while ( !(unsigned int)RFONTOBJ::bMatchRealization(this, a2, a3, a4, a6, a7, a8, a9, a10, v17) )
    {
      v22 = *(_QWORD *)(*(_QWORD *)this + 672LL);
      *(_QWORD *)this = v22;
      if ( !v22 )
        goto LABEL_8;
    }
    v18 = 1;
    v28 = PDEVOBJ::prfntInactive(v15);
    RFONTOBJ::vRemove((__int64)this, &v28, 1);
    PDEVOBJ::prfntInactive(v15, v28);
    v24 = PDEVOBJ::cInactive(v15);
    v25 = *(_QWORD *)v15;
    v26 = v24 - 1;
    if ( (*(_DWORD *)(*(_QWORD *)v15 + 40LL) & 0x800000) != 0 )
      *(_DWORD *)(*(_QWORD *)(v25 + 3496) + 1528LL) = v26;
    else
      *(_DWORD *)(v25 + 1528) = v26;
    v28 = PDEVOBJ::prfntActive(v15);
    RFONTOBJ::vInsert((unsigned __int64 *)this, (unsigned __int64 *)&v28, 1);
    PDEVOBJ::prfntActive(v15, v28);
    *(_DWORD *)(*(_QWORD *)this + 660LL) = 1;
  }
  else
  {
LABEL_8:
    *(_QWORD *)this = 0LL;
  }
LABEL_9:
  SEMOBJ::vUnlock((SEMOBJ *)&v27);
  return v18;
}
