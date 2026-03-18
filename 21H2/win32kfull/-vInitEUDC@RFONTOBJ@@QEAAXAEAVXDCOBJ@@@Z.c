/*
 * XREFs of ?vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C015154C
 * Callers:
 *     GreGetGlyphOutlineInternal @ 0x1C00196F4 (GreGetGlyphOutlineInternal.c)
 *     ?wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z @ 0x1C012451C (-wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z.c)
 * Callees:
 *     ?vMakeInactive@RFONTOBJ@@QEAAXXZ @ 0x1C000A82C (-vMakeInactive@RFONTOBJ@@QEAAXXZ.c)
 *     ?bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z @ 0x1C000A940 (-bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z.c)
 *     ??0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVDCOBJ@@@Z @ 0x1C001713C (--0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVDCOBJ@@@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0019ED8 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z @ 0x1C001EC98 (--0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0041DDC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     _tlgKeywordOn @ 0x1C00CD6B0 (_tlgKeywordOn.c)
 *     ?pGetLinkedFontList@PFEOBJ@@QEAAPEAU_LIST_ENTRY@@XZ @ 0x1C0124BD4 (-pGetLinkedFontList@PFEOBJ@@QEAAPEAU_LIST_ENTRY@@XZ.c)
 *     ?GetEUDCDefaultFontPFE@RFONTOBJ@@AEAAPEAVPFE@@I@Z @ 0x1C0124C50 (-GetEUDCDefaultFontPFE@RFONTOBJ@@AEAAPEAVPFE@@I@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D384 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C015DA34 (--1MDCOBJ@@QEAA@XZ.c)
 *     memset @ 0x1C0160540 (memset.c)
 *     ?vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z @ 0x1C016FEF6 (-vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@33@Z @ 0x1C01D1F5C (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     ?bActive@RFONTOBJ@@QEBAHXZ @ 0x1C0270718 (-bActive@RFONTOBJ@@QEBAHXZ.c)
 *     ?ComputeEUDCLogfont@RFONTOBJ@@QEAAXPEAU_EUDCLOGFONT@@AEAVXDCOBJ@@@Z @ 0x1C02A51B0 (-ComputeEUDCLogfont@RFONTOBJ@@QEAAXPEAU_EUDCLOGFONT@@AEAVXDCOBJ@@@Z.c)
 *     ?bCheckEudcFontCaps@RFONTOBJ@@QEBAHAEAVIFIOBJ@@@Z @ 0x1C02A57A4 (-bCheckEudcFontCaps@RFONTOBJ@@QEBAHAEAVIFIOBJ@@@Z.c)
 *     ?vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C02A5B8C (-vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?UpdateFontLinksLockOrder@RFONTOBJ@@AEAAXXZ @ 0x1C02A6348 (-UpdateFontLinksLockOrder@RFONTOBJ@@AEAAXXZ.c)
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
  __int64 v11; // rsi
  struct RFONT *v12; // r12
  __int64 v13; // rax
  _BYTE *v14; // r14
  __int64 v15; // r15
  __int64 v16; // rcx
  __int64 v17; // r13
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rcx
  struct RFONT *v22; // rsi
  unsigned int v23; // ecx
  struct PFE * near *v24; // r10
  struct PFE *v25; // r10
  struct PFE *EUDCDefaultFontPFE; // rax
  __int64 v27; // rcx
  struct PFE *v28; // r11
  unsigned int v29; // ecx
  __int64 v30; // rcx
  struct _LIST_ENTRY *LinkedFontList; // rax
  struct _LIST_ENTRY *Flink; // rsi
  __int64 v33; // rbx
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  int Blink; // ecx
  struct PFE *v37; // r10
  int v38; // esi
  int v39; // r8d
  int v40; // r9d
  __int64 v41; // rax
  _BYTE *v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // rax
  int v46; // ecx
  _QWORD *v47; // rbx
  __int64 v48; // rdi
  int v49; // [rsp+20h] [rbp-E0h]
  struct RFONT *v50; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v51[2]; // [rsp+48h] [rbp-B8h] BYREF
  BOOL v52; // [rsp+58h] [rbp-A8h]
  _QWORD v53[2]; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v54[4]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v55; // [rsp+80h] [rbp-80h] BYREF
  __int64 v56; // [rsp+88h] [rbp-78h] BYREF
  struct LFONT *v57; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v58[16]; // [rsp+98h] [rbp-68h] BYREF
  char v59[40]; // [rsp+A8h] [rbp-58h] BYREF
  _OWORD v60[4]; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v61; // [rsp+110h] [rbp+10h] BYREF
  __int128 v62; // [rsp+120h] [rbp+20h]
  _BYTE v63[80]; // [rsp+130h] [rbp+30h] BYREF

  v2 = a2;
  *(_QWORD *)v54 = a2;
  v3 = *(_QWORD *)a2;
  if ( *(_DWORD *)(v3 + 304) )
  {
    RFONTOBJ::vInitEUDCRemote(this, v2);
    return;
  }
  v5 = *(_QWORD *)this;
  v6 = *(_QWORD *)(v5 + 120);
  v55 = v6;
  v56 = v6;
  if ( !*(_QWORD *)(v5 + 728) && *(_OWORD *)&gappfeSysEUDC != 0LL
    || (bFinallyInitializeFontAssocDefault || gbSystemDBCSFontEnabled) && !*(_QWORD *)(v5 + 736)
    || (v7 = *(_QWORD *)(v6 + 120)) != 0
    && (!*(_QWORD *)(v5 + 744) || *(_DWORD *)(v5 + 832) != 1 || *(_DWORD *)(v5 + 836) != *(_DWORD *)(v7 + 104)) )
  {
    v8 = *(_QWORD *)(v3 + 48);
    v9 = *(struct HLFONT__ **)(v3 + 1744);
    v51[0] = v8;
    LFONTOBJ::LFONTOBJ((LFONTOBJ *)&v57, v9, (struct PDEVOBJ *)v51);
    v10 = *(HDC **)v2;
    v51[0] = *(_QWORD *)this;
    DCOBJ::DCOBJ((DCOBJ *)v58, *v10);
    IFIOBJR::IFIOBJR(
      (IFIOBJR *)v60,
      *(const struct _IFIMETRICS **)(v6 + 32),
      (struct RFONTOBJ *)v51,
      (struct DCOBJ *)v58);
    v61 = 0LL;
    v62 = 0LL;
    RFONTOBJ::ComputeEUDCLogfont(this, (struct _EUDCLOGFONT *)&v61, v2);
    v11 = *(_QWORD *)this;
    v12 = *(struct RFONT **)(*(_QWORD *)this + 736LL);
    v51[0] = *(_QWORD *)(*(_QWORD *)this + 728LL);
    v53[0] = v12;
    memset(v63, 0, sizeof(v63));
    v13 = *(_QWORD *)(v6 + 120);
    v14 = v63;
    v15 = 0LL;
    v52 = 0;
    if ( v13 )
    {
      v16 = v11;
      v52 = *(_DWORD *)(v11 + 832) == 0;
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
              v50 = *(struct RFONT **)(v19 + 8 * v17);
              RFONTOBJ::bMakeInactiveHelper(&v50, 0LL);
              v20 = *(_QWORD *)this;
              v50 = 0LL;
              *(_QWORD *)(*(_QWORD *)(v20 + 744) + 8 * v17) = 0LL;
              RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v50);
              v11 = *(_QWORD *)this;
            }
            v17 = (unsigned int)(v17 + 1);
            v18 = v11;
          }
          while ( (unsigned int)v17 < *(_DWORD *)(v11 + 840) );
        }
        v21 = *(_QWORD *)(v11 + 744);
        if ( v21 != v11 + 752 )
        {
          Win32FreePool(v21);
          v11 = *(_QWORD *)this;
        }
        *(_QWORD *)(v11 + 744) = 0LL;
        v2 = *(struct XDCOBJ **)v54;
        *(_DWORD *)(*(_QWORD *)this + 840LL) = 0;
        v16 = *(_QWORD *)this;
      }
      v11 = v16;
      if ( !*(_QWORD *)(v16 + 744) )
        v52 = 1;
    }
    *(_DWORD *)(v11 + 712) |= 0x200u;
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v2 + 48LL) + 40LL) & 0x8000) != 0 )
    {
      EtwTraceGreLockReleaseSemaphore(L"prfnt->hsemEUDC", *(_QWORD *)(*(_QWORD *)this + 848LL));
      GreReleaseSemaphoreInternal(*(_QWORD *)(*(_QWORD *)this + 848LL));
      EtwTraceGreLockReleaseSemaphore(L"prfnt->hsemCache", *(_QWORD *)(*(_QWORD *)this + 504LL));
      GreReleaseSemaphoreInternal(*(_QWORD *)(*(_QWORD *)this + 504LL));
    }
    v22 = (struct RFONT *)v51[0];
    v23 = *(_DWORD *)(*(_QWORD *)this + 844LL) != 0;
    v54[0] = v23;
    if ( !v51[0] )
    {
      v24 = (&gappfeSysEUDC)[v23];
      if ( v24 )
      {
        v50 = 0LL;
        v51[0] = v24[4];
        if ( (unsigned int)RFONTOBJ::bCheckEudcFontCaps(this, (struct IFIOBJ *)v51) )
        {
          RFONTOBJ::vInit((RFONTOBJ *)&v50, v2, v25, (struct _EUDCLOGFONT *)&v61, v49);
          if ( v50 )
            v22 = v50;
          v51[0] = v22;
        }
        else
        {
          v51[0] = 0LL;
        }
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v50);
        v23 = v54[0];
      }
    }
    if ( !bFinallyInitializeFontAssocDefault )
      goto LABEL_42;
    if ( v12 )
      goto LABEL_43;
    EUDCDefaultFontPFE = RFONTOBJ::GetEUDCDefaultFontPFE(this, v23);
    if ( EUDCDefaultFontPFE )
    {
      v27 = *((_QWORD *)EUDCDefaultFontPFE + 4);
      v50 = 0LL;
      v53[0] = v27;
      if ( (unsigned int)RFONTOBJ::bCheckEudcFontCaps(this, (struct IFIOBJ *)v53) )
      {
        RFONTOBJ::vInit((RFONTOBJ *)&v50, v2, v28, (struct _EUDCLOGFONT *)&v61, v49);
        if ( v50 )
          v12 = v50;
      }
      v53[0] = v12;
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v50);
    }
    else
    {
LABEL_42:
      v12 = 0LL;
      v53[0] = 0LL;
    }
LABEL_43:
    if ( v52 )
    {
      v29 = *(_DWORD *)(*(_QWORD *)(v6 + 120) + 100LL);
      if ( v29 <= 0xA )
      {
        v14 = v63;
        goto LABEL_51;
      }
      v30 = 8 * v29;
      if ( (_DWORD)v30 )
        v14 = (_BYTE *)Win32AllocPoolZInit(v30, 1718382187LL);
      else
        v14 = 0LL;
      if ( v14 )
      {
LABEL_51:
        LinkedFontList = PFEOBJ::pGetLinkedFontList((PFEOBJ *)&v56);
        Flink = LinkedFontList->Flink;
        if ( LinkedFontList->Flink != LinkedFontList )
        {
          v33 = v54[0];
          v34 = v62;
          v35 = v61;
          do
          {
            Blink = (int)Flink[1].Blink;
            v60[0] = v35;
            v60[1] = v34;
            if ( Blink )
              HIDWORD(v60[0]) = Blink * HIDWORD(v61) / SHIDWORD(Flink[1].Blink);
            *(_QWORD *)v54 = *(_QWORD *)(*((_QWORD *)&Flink[2].Flink
                                         + (*((_QWORD *)&Flink[2].Flink + v33) != 0LL ? v33 : 0))
                                       + 32LL);
            if ( (unsigned int)RFONTOBJ::bCheckEudcFontCaps(this, (struct IFIOBJ *)v54) )
            {
              v50 = 0LL;
              RFONTOBJ::vInit((RFONTOBJ *)&v50, v2, v37, (struct _EUDCLOGFONT *)v60, v49);
              if ( v50 )
              {
                *(_QWORD *)&v14[8 * v15] = v50;
                v15 = (unsigned int)(v15 + 1);
              }
              RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v50);
              v34 = v62;
              v35 = v61;
            }
            Flink = Flink->Flink;
          }
          while ( Flink != PFEOBJ::pGetLinkedFontList((PFEOBJ *)&v56) );
          v6 = v55;
          v12 = (struct RFONT *)v53[0];
        }
      }
    }
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v2 + 48LL) + 40LL) & 0x8000) != 0 )
    {
      GreAcquireSemaphore(*(_QWORD *)(*(_QWORD *)this + 504LL));
      GreAcquireSemaphore(*(_QWORD *)(*(_QWORD *)this + 848LL));
    }
    v38 = *(_DWORD *)(*(_QWORD *)this + 712LL) & 0x200;
    *(_DWORD *)(*(_QWORD *)this + 712LL) &= ~0x200u;
    if ( !(unsigned int)RFONTOBJ::bActive(this)
      && v38
      && (unsigned int)dword_1C03263F8 > 5
      && tlgKeywordOn((__int64)&dword_1C03263F8, 0x400000000000LL) )
    {
      v54[0] = 0;
      LODWORD(v50) = 2;
      v55 = 0x1000000LL;
      LODWORD(v53[0]) = 68651;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (unsigned int)&dword_1C03263F8,
        (unsigned int)&unk_1C02F2504,
        v39,
        v40,
        (__int64)v53,
        (__int64)&v55,
        (__int64)&v50,
        (__int64)v54);
    }
    if ( ((unsigned __int8)-(v38 != 0) & ((unsigned int)RFONTOBJ::bActive(this) != 0)) != 0 )
    {
      *(_QWORD *)(*(_QWORD *)this + 728LL) = v51[0];
      *(_QWORD *)(*(_QWORD *)this + 736LL) = v12;
      if ( v52 )
      {
        v41 = *(_QWORD *)this;
        if ( (_DWORD)v15 )
        {
          v42 = v14;
          if ( (unsigned int)v15 <= 0xA )
            v42 = (_BYTE *)(v41 + 752);
          *(_QWORD *)(v41 + 744) = v42;
          v43 = 0LL;
          v44 = (unsigned int)v15;
          do
          {
            *(_QWORD *)(v43 + *(_QWORD *)(*(_QWORD *)this + 744LL)) = *(_QWORD *)&v14[v43];
            v43 += 8LL;
            --v44;
          }
          while ( v44 );
        }
        else
        {
          *(_QWORD *)(v41 + 744) = 0LL;
        }
        *(_DWORD *)(*(_QWORD *)this + 840LL) = v15;
        v45 = *(_QWORD *)(v6 + 120);
        if ( v45 )
          v46 = *(_DWORD *)(v45 + 104);
        else
          v46 = 0;
        *(_DWORD *)(*(_QWORD *)this + 836LL) = v46;
        *(_DWORD *)(*(_QWORD *)this + 832LL) = 1;
      }
      if ( *(_BYTE **)(*(_QWORD *)this + 744LL) != v14 && v14 && v14 != v63 )
        Win32FreePool(v14);
      RFONTOBJ::UpdateFontLinksLockOrder(this);
    }
    else
    {
      RFONTOBJ::vMakeInactive((RFONTOBJ *)v51);
      v51[0] = v12;
      RFONTOBJ::vMakeInactive((RFONTOBJ *)v51);
      if ( (_DWORD)v15 )
      {
        v47 = v14;
        v48 = (unsigned int)v15;
        do
        {
          v51[0] = *v47;
          RFONTOBJ::vMakeInactive((RFONTOBJ *)v51);
          v51[0] = 0LL;
          RFONTOBJ::~RFONTOBJ((RFONTOBJ *)v51);
          ++v47;
          --v48;
        }
        while ( v48 );
      }
      if ( v14 != v63 )
        Win32FreePool(v14);
      v51[0] = 0LL;
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)v51);
      v51[0] = 0LL;
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)v51);
    }
    MDCOBJ::~MDCOBJ((MDCOBJ *)v58);
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v59);
    v51[0] = 0LL;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)v51);
    if ( v57 )
      DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v57);
  }
}
