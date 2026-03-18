/*
 * XREFs of ?vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C02B5720
 * Callers:
 *     ?vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C02B4F3C (-vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 * Callees:
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C001B818 (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     _tlgKeywordOn @ 0x1C0041D94 (_tlgKeywordOn.c)
 *     ??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z @ 0x1C0076E28 (--0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z.c)
 *     ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C007AC00 (--0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C007F350 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ??0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVXDCOBJ@@@Z @ 0x1C0083498 (--0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVXDCOBJ@@@Z.c)
 *     ?vDeleteRFONTRef@PFFOBJ@@QEAAXXZ @ 0x1C0087CDC (-vDeleteRFONTRef@PFFOBJ@@QEAAXXZ.c)
 *     ?vMakeInactive@RFONTOBJ@@QEAAXXZ @ 0x1C009313C (-vMakeInactive@RFONTOBJ@@QEAAXXZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00FA95C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     ??1RFONTTMPOBJ@@QEAA@XZ @ 0x1C013E734 (--1RFONTTMPOBJ@@QEAA@XZ.c)
 *     ?bActive@RFONTOBJ@@QEBA_NAEBVSEMOBJSHARED@@@Z @ 0x1C013E7A8 (-bActive@RFONTOBJ@@QEBA_NAEBVSEMOBJSHARED@@@Z.c)
 *     memset_0 @ 0x1C0141600 (memset_0.c)
 *     ?vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z @ 0x1C015C6AE (-vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z.c)
 *     ?pGetLinkedFontList@PFEOBJ@@QEAAPEAU_LIST_ENTRY@@XZ @ 0x1C015D12C (-pGetLinkedFontList@PFEOBJ@@QEAAPEAU_LIST_ENTRY@@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@33@Z @ 0x1C0274D2C (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     ??1LFONTOBJ@@QEAA@XZ @ 0x1C028D8B4 (--1LFONTOBJ@@QEAA@XZ.c)
 *     ?ComputeEUDCLogfont@RFONTOBJ@@QEAAXPEAU_EUDCLOGFONT@@AEAVXDCOBJ@@@Z @ 0x1C02B395C (-ComputeEUDCLogfont@RFONTOBJ@@QEAAXPEAU_EUDCLOGFONT@@AEAVXDCOBJ@@@Z.c)
 *     ?ppfeFromUFI@@YAPEAVPFE@@PEAU_UNIVERSAL_FONT_ID@@@Z @ 0x1C02B4E0C (-ppfeFromUFI@@YAPEAVPFE@@PEAU_UNIVERSAL_FONT_ID@@@Z.c)
 *     ?UpdateFontLinksLockOrder@RFONTOBJ@@AEAAXXZ @ 0x1C02B65E8 (-UpdateFontLinksLockOrder@RFONTOBJ@@AEAAXXZ.c)
 */

void __fastcall RFONTOBJ::vInitEUDCRemote(RFONTOBJ *this, struct XDCOBJ *a2)
{
  __int64 v2; // rax
  RFONTOBJ *v3; // rsi
  __int64 v4; // rdi
  _QWORD *v6; // rcx
  char v7; // r13
  unsigned int v8; // eax
  unsigned int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rbx
  struct HLFONT__ *v12; // rdx
  const struct _IFIMETRICS *v13; // rdx
  __int64 *v14; // r12
  unsigned int v15; // r14d
  unsigned int v16; // eax
  unsigned int v17; // eax
  Gre::Base *v18; // rcx
  __int64 v19; // rax
  unsigned int v20; // esi
  __int64 v21; // r13
  struct PFE *v22; // rax
  Gre::Base *v23; // rcx
  struct PFE *v24; // rbx
  struct _LIST_ENTRY *LinkedFontList; // rax
  struct _LIST_ENTRY *i; // rcx
  int Blink; // eax
  __int64 v28; // rcx
  Gre::Base *v29; // rcx
  int v30; // r15d
  struct Gre::Base::SESSION_GLOBALS *v31; // rax
  const struct SEMOBJSHARED *v32; // rdx
  const struct SEMOBJSHARED *v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  bool v37; // bl
  __int64 v38; // rdx
  void *v39; // rcx
  __int64 *v40; // rbx
  __int64 v41; // rdi
  __int64 v42; // [rsp+50h] [rbp-B0h] BYREF
  int v43; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v44; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v45; // [rsp+68h] [rbp-98h] BYREF
  __int64 v46; // [rsp+70h] [rbp-90h] BYREF
  __int64 v47; // [rsp+78h] [rbp-88h] BYREF
  struct LFONT *v48; // [rsp+80h] [rbp-80h] BYREF
  __int64 v49; // [rsp+88h] [rbp-78h] BYREF
  int v50; // [rsp+98h] [rbp-68h]
  _OWORD v51[4]; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v52; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v53; // [rsp+F0h] [rbp-10h]
  _BYTE v54[80]; // [rsp+100h] [rbp+0h] BYREF

  v2 = *(_QWORD *)this;
  v3 = this;
  v47 = (__int64)this;
  v4 = 0LL;
  v6 = *(_QWORD **)(v2 + 744);
  if ( v6 )
  {
    if ( *v6 )
      return;
    DbgkWerCaptureLiveKernelDump(L"win32kfull.sys", 356LL, 24LL, 0LL, 0LL, 0LL, 0LL, 0LL, 1);
  }
  v7 = 0;
  if ( !*(_QWORD *)(*(_QWORD *)v3 + 744LL) )
  {
    v8 = *(_DWORD *)(*(_QWORD *)a2 + 304LL);
    if ( v8 <= 0xA )
    {
      *(_QWORD *)(*(_QWORD *)v3 + 744LL) = *(_QWORD *)v3 + 752LL;
    }
    else
    {
      v9 = 8 * v8;
      if ( v9 )
        v10 = Win32AllocPoolZInit(v9, 1718382187LL);
      else
        v10 = 0LL;
      *(_QWORD *)(*(_QWORD *)v3 + 744LL) = v10;
      if ( !v10 )
        return;
      v7 = 1;
    }
  }
  *(_DWORD *)(*(_QWORD *)v3 + 840LL) = 0;
  v11 = *(_QWORD *)(*(_QWORD *)v3 + 120LL);
  v12 = *(struct HLFONT__ **)(*(_QWORD *)a2 + 1744LL);
  v44 = *(_QWORD *)(*(_QWORD *)a2 + 48LL);
  v46 = v11;
  LFONTOBJ::LFONTOBJ((LFONTOBJ *)&v48, v12, (struct PDEVOBJ *)&v44);
  v13 = *(const struct _IFIMETRICS **)(v11 + 32);
  v44 = *(_QWORD *)v3;
  IFIOBJR::IFIOBJR((IFIOBJR *)v51, v13, (struct RFONTOBJ *)&v44, a2);
  v52 = 0LL;
  v53 = 0LL;
  RFONTOBJ::ComputeEUDCLogfont(v3, (struct _EUDCLOGFONT *)&v52, a2);
  memset_0(v54, 0, sizeof(v54));
  v14 = (__int64 *)v54;
  v15 = 0;
  v16 = *(_DWORD *)(*(_QWORD *)a2 + 304LL);
  if ( v16 <= 0xA || (v17 = 8 * v16) != 0 && (v14 = (__int64 *)Win32AllocPoolZInit(v17, 1718382187LL)) != 0LL )
  {
    *(_DWORD *)(*(_QWORD *)v3 + 712LL) |= 0x200u;
    v18 = *(Gre::Base **)(*(_QWORD *)a2 + 48LL);
    if ( (*((_DWORD *)v18 + 10) & 0x8000) != 0 )
    {
      EtwTraceGreLockReleaseSemaphore(L"prfnt->hsemEUDC");
      GreReleaseSemaphoreInternal(*(_QWORD *)(*(_QWORD *)v3 + 848LL));
      EtwTraceGreLockReleaseSemaphore(L"prfnt->hsemCache");
      GreReleaseSemaphoreInternal(*(_QWORD *)(*(_QWORD *)v3 + 504LL));
    }
    v19 = *(_QWORD *)a2;
    if ( *(_DWORD *)(*(_QWORD *)a2 + 304LL) )
    {
      v20 = 0;
      do
      {
        v21 = 0LL;
        v49 = 0LL;
        v42 = 0LL;
        v45 = *((_QWORD *)Gre::Base::Globals(v18) + 6);
        GreAcquireSemaphore(v45);
        v22 = ppfeFromUFI((struct _UNIVERSAL_FONT_ID *)(*(_QWORD *)(*(_QWORD *)a2 + 296LL) + 8LL * v20));
        v24 = v22;
        if ( v22 )
        {
          v49 = *(_QWORD *)v22;
          v21 = v49;
          Gre::Base::Globals(v23);
          ++*(_DWORD *)(v21 + 68);
          v50 = 0;
        }
        SEMOBJ::vUnlock((SEMOBJ *)&v45);
        if ( v24 )
        {
          v51[0] = v52;
          v51[1] = v53;
          LinkedFontList = PFEOBJ::pGetLinkedFontList((PFEOBJ *)&v46);
          if ( LinkedFontList )
          {
            for ( i = LinkedFontList->Flink; i != LinkedFontList; i = i->Flink )
            {
              if ( (struct PFE *)i[2].Flink == v24 || (struct PFE *)i[2].Blink == v24 )
              {
                Blink = (int)i[1].Blink;
                if ( Blink )
                  HIDWORD(v51[0]) = HIDWORD(v52) * Blink / SHIDWORD(i[1].Blink);
                break;
              }
            }
          }
          RFONTOBJ::vInit((RFONTOBJ *)&v42, a2, v24, (struct _EUDCLOGFONT *)v51);
          if ( v42 )
          {
            v28 = v15++;
            v14[v28] = v42;
          }
        }
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v42);
        if ( v21 && !v50 )
          PFFOBJ::vDeleteRFONTRef((PFFOBJ *)&v49);
        v19 = *(_QWORD *)a2;
        ++v20;
      }
      while ( v20 < *(_DWORD *)(*(_QWORD *)a2 + 304LL) );
      v3 = (RFONTOBJ *)v47;
    }
    if ( (*(_DWORD *)(*(_QWORD *)(v19 + 48) + 40LL) & 0x8000) != 0 )
    {
      GreAcquireSemaphore(*(_QWORD *)(*(_QWORD *)v3 + 504LL));
      GreAcquireSemaphore(*(_QWORD *)(*(_QWORD *)v3 + 848LL));
    }
    v29 = *(Gre::Base **)v3;
    v30 = *(_DWORD *)(*(_QWORD *)v3 + 712LL) & 0x200;
    *((_DWORD *)v29 + 178) = *(_DWORD *)(*(_QWORD *)v3 + 712LL) & 0xFFFFFDFF;
    v31 = Gre::Base::Globals(v29);
    SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)&v46, *((HSEMAPHORE *)v31 + 3));
    if ( !RFONTOBJ::bActive(v3, v32)
      && v30
      && (unsigned int)dword_1C0354098 > 5
      && tlgKeywordOn((__int64)&dword_1C0354098, 0x400000000000LL) )
    {
      v43 = 0;
      LODWORD(v45) = 1;
      v47 = 0x1000000LL;
      LODWORD(v42) = 68651;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v34,
        byte_1C031E89C,
        v35,
        v36,
        (__int64)&v42,
        (__int64)&v47,
        (__int64)&v45,
        (__int64)&v43);
    }
    v37 = RFONTOBJ::bActive(v3, v33);
    SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)&v46);
    if ( ((unsigned __int8)-(v30 != 0) & v37) != 0 )
    {
      if ( v15 )
      {
        v38 = v15;
        do
        {
          *(_QWORD *)(v4 * 8 + *(_QWORD *)(*(_QWORD *)v3 + 744LL)) = v14[v4];
          ++v4;
          --v38;
        }
        while ( v38 );
        *(_DWORD *)(*(_QWORD *)v3 + 840LL) = v15;
      }
      else
      {
        v39 = *(void **)(*(_QWORD *)v3 + 744LL);
        if ( v39 != (void *)(*(_QWORD *)v3 + 752LL) )
          Win32FreePool(v39);
        *(_QWORD *)(*(_QWORD *)v3 + 744LL) = 0LL;
        *(_DWORD *)(*(_QWORD *)v3 + 840LL) = 0;
      }
      RFONTOBJ::UpdateFontLinksLockOrder(v3);
    }
    else if ( v15 )
    {
      v40 = v14;
      v41 = v15;
      do
      {
        v42 = *v40;
        RFONTOBJ::vMakeInactive((RFONTOBJ *)&v42);
        RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v42);
        ++v40;
        --v41;
      }
      while ( v41 );
    }
    if ( v14 != (__int64 *)v54 )
      Win32FreePool(v14);
  }
  else if ( v7 )
  {
    Win32FreePool(*(void **)(*(_QWORD *)v3 + 744LL));
    *(_QWORD *)(*(_QWORD *)v3 + 744LL) = 0LL;
  }
  RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v44);
  LFONTOBJ::~LFONTOBJ(&v48);
}
