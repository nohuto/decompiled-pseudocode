/*
 * XREFs of ?vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C00E7AAC
 * Callers:
 *     GreGetGlyphOutlineInternal @ 0x1C009C154 (GreGetGlyphOutlineInternal.c)
 *     ?wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z @ 0x1C00E7118 (-wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@33@Z @ 0x1C0001008 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C00172B0 (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C00173F0 (--0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     _tlgKeywordOn @ 0x1C00305A8 (_tlgKeywordOn.c)
 *     ?pGetLinkedFontList@PFEOBJ@@QEAAPEAU_LIST_ENTRY@@XZ @ 0x1C00633C4 (-pGetLinkedFontList@PFEOBJ@@QEAAPEAU_LIST_ENTRY@@XZ.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C009AE74 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z @ 0x1C009B920 (--0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z.c)
 *     ??0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVDCOBJ@@@Z @ 0x1C009BFA8 (--0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVDCOBJ@@@Z.c)
 *     ?vMakeInactive@RFONTOBJ@@QEAAXXZ @ 0x1C009CF3C (-vMakeInactive@RFONTOBJ@@QEAAXXZ.c)
 *     ?bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z @ 0x1C009D0D0 (-bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z.c)
 *     PALLOCMEM2 @ 0x1C009FDB8 (PALLOCMEM2.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00B2938 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z @ 0x1C00E8260 (-vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z.c)
 *     ?bCheckEudcFontCaps@RFONTOBJ@@QEBAHAEAVIFIOBJ@@@Z @ 0x1C00E8A70 (-bCheckEudcFontCaps@RFONTOBJ@@QEBAHAEAVIFIOBJ@@@Z.c)
 *     ?UpdateFontLinksLockOrder@RFONTOBJ@@AEAAXXZ @ 0x1C00E8AC0 (-UpdateFontLinksLockOrder@RFONTOBJ@@AEAAXXZ.c)
 *     ?ComputeEUDCLogfont@RFONTOBJ@@QEAAXPEAU_EUDCLOGFONT@@AEAVXDCOBJ@@@Z @ 0x1C00E8C04 (-ComputeEUDCLogfont@RFONTOBJ@@QEAAXPEAU_EUDCLOGFONT@@AEAVXDCOBJ@@@Z.c)
 *     ?GetEUDCDefaultFontPFE@RFONTOBJ@@AEAAPEAVPFE@@I@Z @ 0x1C014FC0C (-GetEUDCDefaultFontPFE@RFONTOBJ@@AEAAPEAVPFE@@I@Z.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C01698C8 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C016A21C (--1MDCOBJ@@QEAA@XZ.c)
 *     ?bActive@RFONTOBJ@@QEBA_NAEBVSEMOBJSHARED@@@Z @ 0x1C016A2B8 (-bActive@RFONTOBJ@@QEBA_NAEBVSEMOBJSHARED@@@Z.c)
 *     memset @ 0x1C016DE00 (memset.c)
 *     ?vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C02A7388 (-vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 */

void __fastcall RFONTOBJ::vInitEUDC(RFONTOBJ *this, struct XDCOBJ *a2)
{
  struct XDCOBJ *v2; // r13
  __int64 v3; // rdx
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rax
  struct HLFONT__ *v9; // rdx
  HDC *v10; // rdx
  __int64 v11; // rdi
  __int64 v12; // r12
  __int64 v13; // rax
  _BYTE *v14; // r14
  __int64 v15; // r15
  __int64 v16; // rcx
  __int64 v17; // r13
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  void *v21; // rcx
  __int64 v22; // rdi
  unsigned int v23; // ecx
  struct PFE * near *v24; // r10
  struct PFE *v25; // r10
  struct PFE *EUDCDefaultFontPFE; // rax
  __int64 v27; // rcx
  struct PFE *v28; // r11
  unsigned int v29; // ecx
  struct _LIST_ENTRY *LinkedFontList; // rax
  struct _LIST_ENTRY *Flink; // rdi
  __int64 v32; // rbx
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  int Blink; // ecx
  struct PFE *v36; // r10
  int v37; // r13d
  const struct SEMOBJSHARED *v38; // rdx
  const struct SEMOBJSHARED *v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  bool v43; // di
  __int64 v44; // rax
  _BYTE *v45; // rcx
  __int64 v46; // rdx
  __int64 v47; // r8
  __int64 v48; // rax
  int v49; // ecx
  _QWORD *v50; // rbx
  __int64 v51; // rdi
  int v52; // [rsp+20h] [rbp-E0h]
  _QWORD v53[2]; // [rsp+40h] [rbp-C0h] BYREF
  struct XDCOBJ *v54; // [rsp+50h] [rbp-B0h] BYREF
  BOOL v55; // [rsp+58h] [rbp-A8h]
  __int64 v56; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v57; // [rsp+68h] [rbp-98h]
  _QWORD v58[2]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v59; // [rsp+80h] [rbp-80h] BYREF
  __int64 v60; // [rsp+88h] [rbp-78h] BYREF
  __int128 v61; // [rsp+90h] [rbp-70h] BYREF
  __int128 v62; // [rsp+A0h] [rbp-60h]
  struct LFONT *v63; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v64; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE v65[16]; // [rsp+C8h] [rbp-38h] BYREF
  char v66[40]; // [rsp+D8h] [rbp-28h] BYREF
  _OWORD v67[4]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v68[80]; // [rsp+140h] [rbp+40h] BYREF

  v2 = a2;
  v54 = a2;
  v3 = *(_QWORD *)a2;
  if ( *(_DWORD *)(v3 + 304) )
  {
    RFONTOBJ::vInitEUDCRemote(this, v2);
    return;
  }
  v5 = *(_QWORD *)this;
  v6 = *(_QWORD *)(v5 + 120);
  v60 = v6;
  v59 = v6;
  if ( !*(_QWORD *)(v5 + 728) && *(_OWORD *)&gappfeSysEUDC != 0LL
    || (bFinallyInitializeFontAssocDefault || gbSystemDBCSFontEnabled) && !*(_QWORD *)(v5 + 736)
    || (v7 = *(_QWORD *)(v6 + 120)) != 0
    && (!*(_QWORD *)(v5 + 744) || *(_DWORD *)(v5 + 832) != 1 || *(_DWORD *)(v5 + 836) != *(_DWORD *)(v7 + 104)) )
  {
    v8 = *(_QWORD *)(v3 + 48);
    v9 = *(struct HLFONT__ **)(v3 + 1752);
    v53[0] = v8;
    LFONTOBJ::LFONTOBJ((LFONTOBJ *)&v63, v9, (struct PDEVOBJ *)v53);
    v10 = *(HDC **)v2;
    v53[0] = *(_QWORD *)this;
    DCOBJ::DCOBJ((DCOBJ *)v65, *v10);
    IFIOBJR::IFIOBJR(
      (IFIOBJR *)v67,
      *(const struct _IFIMETRICS **)(v6 + 32),
      (struct RFONTOBJ *)v53,
      (struct DCOBJ *)v65);
    v61 = 0LL;
    v62 = 0LL;
    RFONTOBJ::ComputeEUDCLogfont(this, (struct _EUDCLOGFONT *)&v61, v2);
    v11 = *(_QWORD *)this;
    v12 = *(_QWORD *)(*(_QWORD *)this + 736LL);
    v57 = *(_QWORD *)(*(_QWORD *)this + 728LL);
    v58[0] = v12;
    memset(v68, 0, sizeof(v68));
    v13 = *(_QWORD *)(v6 + 120);
    v14 = v68;
    v15 = 0LL;
    v55 = 0;
    if ( v13 )
    {
      v16 = v11;
      v55 = *(_DWORD *)(v11 + 832) == 0;
      if ( *(_QWORD *)(v11 + 744) && *(_DWORD *)(v11 + 836) != *(_DWORD *)(v13 + 104) )
      {
        v17 = 0LL;
        if ( *(_DWORD *)(v11 + 840) )
        {
          v18 = v11;
          do
          {
            v19 = *(_QWORD *)(v18 + 744);
            if ( *(_QWORD *)(v19 + 8 * v17) )
            {
              v56 = *(_QWORD *)(v19 + 8 * v17);
              RFONTOBJ::bMakeInactiveHelper((RFONTOBJ *)&v56, 0LL);
              v20 = *(_QWORD *)this;
              v56 = 0LL;
              *(_QWORD *)(*(_QWORD *)(v20 + 744) + 8 * v17) = 0LL;
              RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v56);
              v11 = *(_QWORD *)this;
            }
            v17 = (unsigned int)(v17 + 1);
            v18 = v11;
          }
          while ( (unsigned int)v17 < *(_DWORD *)(v11 + 840) );
        }
        v21 = *(void **)(v11 + 744);
        if ( v21 != (void *)(v11 + 752) )
        {
          Win32FreePool(v21);
          v11 = *(_QWORD *)this;
        }
        *(_QWORD *)(v11 + 744) = 0LL;
        v2 = v54;
        *(_DWORD *)(*(_QWORD *)this + 840LL) = 0;
        v16 = *(_QWORD *)this;
      }
      v11 = v16;
      if ( !*(_QWORD *)(v16 + 744) )
        v55 = 1;
    }
    *(_DWORD *)(v11 + 712) |= 0x200u;
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v2 + 48LL) + 40LL) & 0x8000) != 0 )
    {
      EtwTraceGreLockReleaseSemaphore(L"prfnt->hsemEUDC", *(_QWORD *)(*(_QWORD *)this + 848LL));
      GreReleaseSemaphoreInternal(*(_QWORD *)(*(_QWORD *)this + 848LL));
      EtwTraceGreLockReleaseSemaphore(L"prfnt->hsemCache", *(_QWORD *)(*(_QWORD *)this + 504LL));
      GreReleaseSemaphoreInternal(*(_QWORD *)(*(_QWORD *)this + 504LL));
    }
    v22 = v57;
    v23 = *(_DWORD *)(*(_QWORD *)this + 844LL) != 0;
    LODWORD(v54) = v23;
    if ( !v57 )
    {
      v24 = (&gappfeSysEUDC)[v23];
      if ( v24 )
      {
        v56 = 0LL;
        v53[0] = v24[4];
        if ( (unsigned int)RFONTOBJ::bCheckEudcFontCaps(this, (struct IFIOBJ *)v53) )
        {
          RFONTOBJ::vInit((RFONTOBJ *)&v56, v2, v25, (struct _EUDCLOGFONT *)&v61, v52);
          if ( v56 )
            v22 = v56;
          v57 = v22;
        }
        else
        {
          v57 = 0LL;
        }
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v56);
        v23 = (unsigned int)v54;
      }
    }
    if ( bFinallyInitializeFontAssocDefault )
    {
      if ( v12 )
        goto LABEL_43;
      EUDCDefaultFontPFE = RFONTOBJ::GetEUDCDefaultFontPFE(this, v23);
      if ( EUDCDefaultFontPFE )
      {
        v27 = *((_QWORD *)EUDCDefaultFontPFE + 4);
        v53[0] = 0LL;
        v58[0] = v27;
        if ( (unsigned int)RFONTOBJ::bCheckEudcFontCaps(this, (struct IFIOBJ *)v58) )
        {
          RFONTOBJ::vInit((RFONTOBJ *)v53, v2, v28, (struct _EUDCLOGFONT *)&v61, v52);
          if ( v53[0] )
            v12 = v53[0];
        }
        v58[0] = v12;
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)v53);
        goto LABEL_43;
      }
    }
    v12 = 0LL;
    v58[0] = 0LL;
LABEL_43:
    if ( v55 )
    {
      v29 = *(_DWORD *)(*(_QWORD *)(v6 + 120) + 100LL);
      v14 = v29 <= 0xA ? v68 : PALLOCMEM2(8 * v29, 1718382187LL, 1);
      if ( v14 )
      {
        LinkedFontList = PFEOBJ::pGetLinkedFontList((PFEOBJ *)&v59);
        Flink = LinkedFontList->Flink;
        if ( LinkedFontList->Flink != LinkedFontList )
        {
          v32 = (unsigned int)v54;
          v33 = v62;
          v34 = v61;
          do
          {
            Blink = (int)Flink[1].Blink;
            v67[0] = v34;
            v67[1] = v33;
            if ( Blink )
              HIDWORD(v67[0]) = Blink * HIDWORD(v61) / SHIDWORD(Flink[1].Blink);
            v64 = *(_QWORD *)(*((_QWORD *)&Flink[2].Flink + (*((_QWORD *)&Flink[2].Flink + v32) != 0LL ? v32 : 0)) + 32LL);
            if ( (unsigned int)RFONTOBJ::bCheckEudcFontCaps(this, (struct IFIOBJ *)&v64) )
            {
              v54 = 0LL;
              RFONTOBJ::vInit((RFONTOBJ *)&v54, v2, v36, (struct _EUDCLOGFONT *)v67, v52);
              if ( v54 )
              {
                *(_QWORD *)&v14[8 * v15] = v54;
                v15 = (unsigned int)(v15 + 1);
              }
              RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v54);
              v33 = v62;
              v34 = v61;
            }
            Flink = Flink->Flink;
          }
          while ( Flink != PFEOBJ::pGetLinkedFontList((PFEOBJ *)&v59) );
          v6 = v60;
          v12 = v58[0];
        }
      }
    }
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v2 + 48LL) + 40LL) & 0x8000) != 0 )
    {
      GreAcquireSemaphore(*(_QWORD *)(*(_QWORD *)this + 504LL));
      GreAcquireSemaphore(*(_QWORD *)(*(_QWORD *)this + 848LL));
    }
    v37 = *(_DWORD *)(*(_QWORD *)this + 712LL) & 0x200;
    *(_DWORD *)(*(_QWORD *)this + 712LL) &= ~0x200u;
    SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)&v59, ghsemRFONTList);
    if ( !RFONTOBJ::bActive(this, v38)
      && v37
      && (unsigned int)dword_1C032A3D8 > 5
      && tlgKeywordOn((__int64)&dword_1C032A3D8, 0x400000000000LL) )
    {
      LODWORD(v54) = 0;
      LODWORD(v56) = 2;
      v60 = 0x1000000LL;
      LODWORD(v58[0]) = 68651;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v40,
        (int)&unk_1C02F401A,
        v41,
        v42,
        (__int64)v58,
        (__int64)&v60,
        (__int64)&v56,
        (__int64)&v54);
    }
    v43 = RFONTOBJ::bActive(this, v39);
    SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)&v59);
    if ( ((unsigned __int8)-(v37 != 0) & v43) != 0 )
    {
      *(_QWORD *)(*(_QWORD *)this + 728LL) = v57;
      *(_QWORD *)(*(_QWORD *)this + 736LL) = v12;
      if ( v55 )
      {
        v44 = *(_QWORD *)this;
        if ( (_DWORD)v15 )
        {
          v45 = v14;
          if ( (unsigned int)v15 <= 0xA )
            v45 = (_BYTE *)(v44 + 752);
          *(_QWORD *)(v44 + 744) = v45;
          v46 = 0LL;
          v47 = (unsigned int)v15;
          do
          {
            *(_QWORD *)(v46 + *(_QWORD *)(*(_QWORD *)this + 744LL)) = *(_QWORD *)&v14[v46];
            v46 += 8LL;
            --v47;
          }
          while ( v47 );
        }
        else
        {
          *(_QWORD *)(v44 + 744) = 0LL;
        }
        *(_DWORD *)(*(_QWORD *)this + 840LL) = v15;
        v48 = *(_QWORD *)(v6 + 120);
        if ( v48 )
          v49 = *(_DWORD *)(v48 + 104);
        else
          v49 = 0;
        *(_DWORD *)(*(_QWORD *)this + 836LL) = v49;
        *(_DWORD *)(*(_QWORD *)this + 832LL) = 1;
      }
      if ( *(_BYTE **)(*(_QWORD *)this + 744LL) != v14 && v14 && v14 != v68 )
        Win32FreePool(v14);
      RFONTOBJ::UpdateFontLinksLockOrder(this);
    }
    else
    {
      v53[0] = v57;
      RFONTOBJ::vMakeInactive((RFONTOBJ *)v53);
      v53[0] = v12;
      RFONTOBJ::vMakeInactive((RFONTOBJ *)v53);
      if ( (_DWORD)v15 )
      {
        v50 = v14;
        v51 = (unsigned int)v15;
        do
        {
          v53[0] = *v50;
          RFONTOBJ::vMakeInactive((RFONTOBJ *)v53);
          v53[0] = 0LL;
          RFONTOBJ::~RFONTOBJ((RFONTOBJ *)v53);
          ++v50;
          --v51;
        }
        while ( v51 );
      }
      if ( v14 != v68 )
        Win32FreePool(v14);
      v53[0] = 0LL;
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)v53);
      v53[0] = 0LL;
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)v53);
    }
    MDCOBJ::~MDCOBJ((MDCOBJ *)v65);
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v66);
    v53[0] = 0LL;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)v53);
    if ( v63 )
      DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v63);
  }
}
