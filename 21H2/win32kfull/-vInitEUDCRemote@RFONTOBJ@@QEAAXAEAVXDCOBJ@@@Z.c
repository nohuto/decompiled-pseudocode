/*
 * XREFs of ?vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C02A79B8
 * Callers:
 *     ?vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C00E7DFC (-vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@33@Z @ 0x1C0001008 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C00172B0 (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C00173F0 (--0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     _tlgKeywordOn @ 0x1C0030648 (_tlgKeywordOn.c)
 *     ?pGetLinkedFontList@PFEOBJ@@QEAAPEAU_LIST_ENTRY@@XZ @ 0x1C0063464 (-pGetLinkedFontList@PFEOBJ@@QEAAPEAU_LIST_ENTRY@@XZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C009032C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C009AF04 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z @ 0x1C009B9B0 (--0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z.c)
 *     ??0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVDCOBJ@@@Z @ 0x1C009C038 (--0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVDCOBJ@@@Z.c)
 *     ?vMakeInactive@RFONTOBJ@@QEAAXXZ @ 0x1C009CFCC (-vMakeInactive@RFONTOBJ@@QEAAXXZ.c)
 *     ?vDeleteRFONTRef@PFFOBJ@@QEAAXXZ @ 0x1C009F308 (-vDeleteRFONTRef@PFFOBJ@@QEAAXXZ.c)
 *     PALLOCMEM2 @ 0x1C009FE48 (PALLOCMEM2.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C00B2BF0 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00B2C98 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1RFONTTMPOBJ@@QEAA@XZ @ 0x1C00E7CC8 (--1RFONTTMPOBJ@@QEAA@XZ.c)
 *     ?vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z @ 0x1C00E85B0 (-vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z.c)
 *     ?UpdateFontLinksLockOrder@RFONTOBJ@@AEAAXXZ @ 0x1C00E8E10 (-UpdateFontLinksLockOrder@RFONTOBJ@@AEAAXXZ.c)
 *     ?ComputeEUDCLogfont@RFONTOBJ@@QEAAXPEAU_EUDCLOGFONT@@AEAVXDCOBJ@@@Z @ 0x1C00E8F54 (-ComputeEUDCLogfont@RFONTOBJ@@QEAAXPEAU_EUDCLOGFONT@@AEAVXDCOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     ?bActive@RFONTOBJ@@QEBA_NAEBVSEMOBJSHARED@@@Z @ 0x1C016AB18 (-bActive@RFONTOBJ@@QEBA_NAEBVSEMOBJSHARED@@@Z.c)
 *     memset @ 0x1C016E780 (memset.c)
 *     ??1LFONTOBJ@@QEAA@XZ @ 0x1C028B1B8 (--1LFONTOBJ@@QEAA@XZ.c)
 *     ?ppfeFromUFI@@YAPEAVPFE@@PEAU_UNIVERSAL_FONT_ID@@@Z @ 0x1C02A7898 (-ppfeFromUFI@@YAPEAVPFE@@PEAU_UNIVERSAL_FONT_ID@@@Z.c)
 */

void __fastcall RFONTOBJ::vInitEUDCRemote(RFONTOBJ *this, HDC **a2)
{
  RFONTOBJ *v2; // rsi
  __int64 v3; // rcx
  __int64 v4; // rdi
  _QWORD *v6; // rax
  char v7; // r13
  unsigned int v8; // edx
  void *v9; // rax
  HDC v10; // rax
  __int64 v11; // rbx
  struct HLFONT__ *v12; // rdx
  HDC *v13; // rdx
  __int64 *v14; // r12
  unsigned int v15; // r14d
  unsigned int v16; // ecx
  HDC *v17; // rdx
  unsigned int v18; // esi
  __int64 v19; // r13
  struct PFE *v20; // rax
  struct PFE *v21; // rbx
  struct _LIST_ENTRY *LinkedFontList; // rax
  struct _LIST_ENTRY *i; // rcx
  int Blink; // eax
  __int64 v25; // rcx
  int v26; // r15d
  const struct SEMOBJSHARED *v27; // rdx
  const struct SEMOBJSHARED *v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  bool v32; // bl
  __int64 v33; // rdx
  HDC v34; // rdx
  void *v35; // rcx
  __int64 *v36; // rbx
  __int64 v37; // rdi
  __int64 v38; // [rsp+50h] [rbp-B0h] BYREF
  int v39; // [rsp+58h] [rbp-A8h] BYREF
  HDC v40; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v41; // [rsp+68h] [rbp-98h] BYREF
  __int64 v42; // [rsp+70h] [rbp-90h] BYREF
  __int64 v43; // [rsp+78h] [rbp-88h] BYREF
  struct LFONT *v44; // [rsp+80h] [rbp-80h] BYREF
  __int64 v45; // [rsp+88h] [rbp-78h] BYREF
  int v46; // [rsp+98h] [rbp-68h]
  __int128 v47; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v48; // [rsp+B0h] [rbp-50h]
  _OWORD v49[4]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v50[48]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v51[80]; // [rsp+130h] [rbp+30h] BYREF

  v2 = this;
  v43 = (__int64)this;
  v3 = *(_QWORD *)this;
  v4 = 0LL;
  v6 = *(_QWORD **)(v3 + 744);
  if ( v6 )
  {
    if ( *v6 )
      return;
    DbgkWerCaptureLiveKernelDump(L"win32kfull.sys", 356LL, 24LL);
    v3 = *(_QWORD *)v2;
  }
  v7 = 0;
  if ( !*(_QWORD *)(v3 + 744) )
  {
    v8 = *((_DWORD *)*a2 + 76);
    if ( v8 <= 0xA )
    {
      *(_QWORD *)(v3 + 744) = v3 + 752;
    }
    else
    {
      v9 = PALLOCMEM2(8 * v8, 1718382187LL, 1);
      *(_QWORD *)(*(_QWORD *)v2 + 744LL) = v9;
      if ( !v9 )
        return;
      v7 = 1;
    }
  }
  *(_DWORD *)(*(_QWORD *)v2 + 840LL) = 0;
  v10 = (*a2)[6];
  v12 = (struct HLFONT__ *)(*a2)[219];
  v42 = *(_QWORD *)(*(_QWORD *)v2 + 120LL);
  v11 = v42;
  v40 = v10;
  LFONTOBJ::LFONTOBJ((LFONTOBJ *)&v44, v12, (struct PDEVOBJ *)&v40);
  v13 = *a2;
  v40 = *(HDC *)v2;
  DCOBJ::DCOBJ((DCOBJ *)v50, *v13);
  IFIOBJR::IFIOBJR(
    (IFIOBJR *)v49,
    *(const struct _IFIMETRICS **)(v11 + 32),
    (struct RFONTOBJ *)&v40,
    (struct DCOBJ *)v50);
  v47 = 0LL;
  v48 = 0LL;
  RFONTOBJ::ComputeEUDCLogfont(v2, (struct _EUDCLOGFONT *)&v47, (struct XDCOBJ *)a2);
  memset(v51, 0, sizeof(v51));
  v14 = (__int64 *)v51;
  v15 = 0;
  v16 = *((_DWORD *)*a2 + 76);
  if ( v16 <= 0xA || (v14 = (__int64 *)PALLOCMEM2(8 * v16, 1718382187LL, 1)) != 0LL )
  {
    *(_DWORD *)(*(_QWORD *)v2 + 712LL) |= 0x200u;
    v17 = *a2;
    if ( ((_DWORD)(*a2)[6][10] & 0x8000) != 0 )
    {
      EtwTraceGreLockReleaseSemaphore(L"prfnt->hsemEUDC", *(_QWORD *)(*(_QWORD *)v2 + 848LL));
      GreReleaseSemaphoreInternal(*(_QWORD *)(*(_QWORD *)v2 + 848LL));
      EtwTraceGreLockReleaseSemaphore(L"prfnt->hsemCache", *(_QWORD *)(*(_QWORD *)v2 + 504LL));
      GreReleaseSemaphoreInternal(*(_QWORD *)(*(_QWORD *)v2 + 504LL));
      v17 = *a2;
    }
    if ( *((_DWORD *)v17 + 76) )
    {
      v18 = 0;
      do
      {
        v19 = 0LL;
        v38 = 0LL;
        v45 = 0LL;
        v41 = ghsemPublicPFT;
        GreAcquireSemaphore(ghsemPublicPFT);
        v20 = ppfeFromUFI((struct _UNIVERSAL_FONT_ID *)((*a2)[37] + 2 * v18));
        v21 = v20;
        if ( v20 )
        {
          v19 = *(_QWORD *)v20;
          v45 = v19;
          v46 = 0;
          ++*(_DWORD *)(v19 + 68);
        }
        SEMOBJ::vUnlock((SEMOBJ *)&v41);
        if ( v21 )
        {
          v49[0] = v47;
          v49[1] = v48;
          LinkedFontList = PFEOBJ::pGetLinkedFontList((PFEOBJ *)&v42);
          if ( LinkedFontList )
          {
            for ( i = LinkedFontList->Flink; i != LinkedFontList; i = i->Flink )
            {
              if ( (struct PFE *)i[2].Flink == v21 || (struct PFE *)i[2].Blink == v21 )
              {
                Blink = (int)i[1].Blink;
                if ( Blink )
                  HIDWORD(v49[0]) = HIDWORD(v47) * Blink / SHIDWORD(i[1].Blink);
                break;
              }
            }
          }
          RFONTOBJ::vInit((RFONTOBJ *)&v38, (struct XDCOBJ *)a2, v21, (struct _EUDCLOGFONT *)v49);
          if ( v38 )
          {
            v25 = v15++;
            v14[v25] = v38;
          }
        }
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v38);
        if ( v19 && !v46 )
          PFFOBJ::vDeleteRFONTRef((PFFOBJ *)&v45);
        v17 = *a2;
        ++v18;
      }
      while ( v18 < *((_DWORD *)*a2 + 76) );
      v2 = (RFONTOBJ *)v43;
    }
    if ( ((_DWORD)v17[6][10] & 0x8000) != 0 )
    {
      GreAcquireSemaphore(*(_QWORD *)(*(_QWORD *)v2 + 504LL));
      GreAcquireSemaphore(*(_QWORD *)(*(_QWORD *)v2 + 848LL));
    }
    v26 = *(_DWORD *)(*(_QWORD *)v2 + 712LL) & 0x200;
    *(_DWORD *)(*(_QWORD *)v2 + 712LL) &= ~0x200u;
    SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)&v42, ghsemRFONTList);
    if ( !RFONTOBJ::bActive(v2, v27)
      && v26
      && (unsigned int)dword_1C032B3D8 > 5
      && tlgKeywordOn((__int64)&dword_1C032B3D8, 0x400000000000LL) )
    {
      v39 = 0;
      LODWORD(v41) = 1;
      v43 = 0x1000000LL;
      LODWORD(v38) = 68651;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v29,
        (int)&unk_1C02F50FA,
        v30,
        v31,
        (__int64)&v38,
        (__int64)&v43,
        (__int64)&v41,
        (__int64)&v39);
    }
    v32 = RFONTOBJ::bActive(v2, v28);
    SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)&v42);
    if ( ((unsigned __int8)-(v26 != 0) & v32) != 0 )
    {
      if ( v15 )
      {
        v33 = v15;
        do
        {
          *(_QWORD *)(v4 * 8 + *(_QWORD *)(*(_QWORD *)v2 + 744LL)) = v14[v4];
          ++v4;
          --v33;
        }
        while ( v33 );
        *(_DWORD *)(*(_QWORD *)v2 + 840LL) = v15;
      }
      else
      {
        v34 = *(HDC *)v2;
        v35 = *(void **)(*(_QWORD *)v2 + 744LL);
        if ( v35 != (void *)(*(_QWORD *)v2 + 752LL) )
        {
          Win32FreePool(v35);
          v34 = *(HDC *)v2;
        }
        *((_QWORD *)v34 + 93) = 0LL;
        *(_DWORD *)(*(_QWORD *)v2 + 840LL) = 0;
      }
      RFONTOBJ::UpdateFontLinksLockOrder(v2);
    }
    else if ( v15 )
    {
      v36 = v14;
      v37 = v15;
      do
      {
        v38 = *v36;
        RFONTOBJ::vMakeInactive((RFONTOBJ *)&v38);
        RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v38);
        ++v36;
        --v37;
      }
      while ( v37 );
    }
    if ( v14 != (__int64 *)v51 )
      Win32FreePool(v14);
  }
  else if ( v7 )
  {
    Win32FreePool(*(void **)(*(_QWORD *)v2 + 744LL));
    *(_QWORD *)(*(_QWORD *)v2 + 744LL) = 0LL;
  }
  DCOBJ::~DCOBJ((DCOBJ *)v50);
  RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v40);
  LFONTOBJ::~LFONTOBJ(&v44);
}
