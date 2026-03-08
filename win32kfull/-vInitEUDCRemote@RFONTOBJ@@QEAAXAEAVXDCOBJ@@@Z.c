/*
 * XREFs of ?vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C02B7BC0
 * Callers:
 *     ?vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C02B740C (-vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00D32A0 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     _tlgKeywordOn @ 0x1C0102BC4 (_tlgKeywordOn.c)
 *     ??0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVXDCOBJ@@@Z @ 0x1C0110770 (--0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVXDCOBJ@@@Z.c)
 *     ??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z @ 0x1C0111C24 (--0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z.c)
 *     ?vMakeInactive@RFONTOBJ@@QEAAXXZ @ 0x1C0113AAC (-vMakeInactive@RFONTOBJ@@QEAAXXZ.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C011DDB0 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vDeleteRFONTRef@PFFOBJ@@QEAAXXZ @ 0x1C0123C28 (-vDeleteRFONTRef@PFFOBJ@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 *     ?vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z @ 0x1C014F852 (-vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z.c)
 *     ?pGetLinkedFontList@PFEOBJ@@QEAAPEAU_LIST_ENTRY@@XZ @ 0x1C01502CC (-pGetLinkedFontList@PFEOBJ@@QEAAPEAU_LIST_ENTRY@@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@33@Z @ 0x1C027773C (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     ??1LFONTOBJ@@QEAA@XZ @ 0x1C0290134 (--1LFONTOBJ@@QEAA@XZ.c)
 *     ?ComputeEUDCLogfont@RFONTOBJ@@QEAAXPEAU_EUDCLOGFONT@@AEAVXDCOBJ@@@Z @ 0x1C02B5E2C (-ComputeEUDCLogfont@RFONTOBJ@@QEAAXPEAU_EUDCLOGFONT@@AEAVXDCOBJ@@@Z.c)
 *     ?ppfeFromUFI@@YAPEAVPFE@@PEAU_UNIVERSAL_FONT_ID@@@Z @ 0x1C02B72DC (-ppfeFromUFI@@YAPEAVPFE@@PEAU_UNIVERSAL_FONT_ID@@@Z.c)
 *     ?UpdateFontLinksLockOrder@RFONTOBJ@@AEAAXXZ @ 0x1C02B8A98 (-UpdateFontLinksLockOrder@RFONTOBJ@@AEAAXXZ.c)
 */

void __fastcall RFONTOBJ::vInitEUDCRemote(RFONTOBJ *this, struct XDCOBJ *a2)
{
  __int64 v3; // r12
  _QWORD *v5; // rcx
  char v6; // r15
  unsigned int v7; // eax
  unsigned int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rbx
  struct HLFONT__ *v11; // rdx
  const struct _IFIMETRICS *v12; // rdx
  __int64 *v13; // rsi
  __int64 v14; // rbx
  unsigned int v15; // eax
  unsigned int v16; // eax
  Gre::Base *v17; // rcx
  __int64 v18; // rax
  unsigned int i; // r13d
  struct PFE *v20; // rax
  Gre::Base *v21; // rcx
  struct PFE *v22; // r15
  struct _LIST_ENTRY *LinkedFontList; // rax
  struct _LIST_ENTRY *j; // rcx
  int Blink; // eax
  int v26; // r14d
  __int64 v27; // r9
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rdx
  __int64 v31; // r8
  void *v32; // rcx
  __int64 *v33; // rdi
  __int64 v34; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v35; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v36; // [rsp+60h] [rbp-A0h] BYREF
  struct LFONT *v37; // [rsp+68h] [rbp-98h] BYREF
  __int64 v38; // [rsp+70h] [rbp-90h] BYREF
  __int64 v39; // [rsp+78h] [rbp-88h] BYREF
  int v40; // [rsp+88h] [rbp-78h]
  _OWORD v41[4]; // [rsp+90h] [rbp-70h] BYREF
  __int128 v42; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v43; // [rsp+E0h] [rbp-20h]
  _BYTE v44[80]; // [rsp+F0h] [rbp-10h] BYREF

  v3 = 0LL;
  v5 = *(_QWORD **)(*(_QWORD *)this + 744LL);
  if ( v5 )
  {
    if ( *v5 )
      return;
    DbgkWerCaptureLiveKernelDump(L"win32kfull.sys", 356LL, 24LL, 0LL, 0LL, 0LL, 0LL, 0LL, 1);
  }
  v6 = 0;
  if ( !*(_QWORD *)(*(_QWORD *)this + 744LL) )
  {
    v7 = *(_DWORD *)(*(_QWORD *)a2 + 304LL);
    if ( v7 <= 0xA )
    {
      *(_QWORD *)(*(_QWORD *)this + 744LL) = *(_QWORD *)this + 752LL;
    }
    else
    {
      v8 = 8 * v7;
      if ( v8 )
        v9 = Win32AllocPoolZInit(v8, 1718382187LL);
      else
        v9 = 0LL;
      *(_QWORD *)(*(_QWORD *)this + 744LL) = v9;
      if ( !v9 )
        return;
      v6 = 1;
    }
  }
  *(_DWORD *)(*(_QWORD *)this + 840LL) = 0;
  v10 = *(_QWORD *)(*(_QWORD *)this + 120LL);
  v11 = *(struct HLFONT__ **)(*(_QWORD *)a2 + 1744LL);
  v34 = *(_QWORD *)(*(_QWORD *)a2 + 48LL);
  v35 = v10;
  LFONTOBJ::LFONTOBJ((LFONTOBJ *)&v37, v11, (struct PDEVOBJ *)&v34);
  v12 = *(const struct _IFIMETRICS **)(v10 + 32);
  v34 = *(_QWORD *)this;
  IFIOBJR::IFIOBJR((IFIOBJR *)v41, v12, (struct RFONTOBJ *)&v34, a2);
  v42 = 0LL;
  v43 = 0LL;
  RFONTOBJ::ComputeEUDCLogfont(this, (struct _EUDCLOGFONT *)&v42, a2);
  memset_0(v44, 0, sizeof(v44));
  v13 = (__int64 *)v44;
  v14 = 0LL;
  v15 = *(_DWORD *)(*(_QWORD *)a2 + 304LL);
  if ( v15 <= 0xA || (v16 = 8 * v15) != 0 && (v13 = (__int64 *)Win32AllocPoolZInit(v16, 1718382187LL)) != 0LL )
  {
    *(_DWORD *)(*(_QWORD *)this + 712LL) |= 0x200u;
    v17 = *(Gre::Base **)(*(_QWORD *)a2 + 48LL);
    if ( (*((_DWORD *)v17 + 10) & 0x8000) != 0 )
    {
      EtwTraceGreLockReleaseSemaphore(L"prfnt->hsemEUDC");
      GreReleaseSemaphoreInternal(*(_QWORD *)(*(_QWORD *)this + 848LL));
      EtwTraceGreLockReleaseSemaphore(L"prfnt->hsemCache");
      GreReleaseSemaphoreInternal(*(_QWORD *)(*(_QWORD *)this + 504LL));
    }
    v18 = *(_QWORD *)a2;
    for ( i = 0; i < *(_DWORD *)(*(_QWORD *)a2 + 304LL); ++i )
    {
      v34 = 0LL;
      v39 = v3;
      v36 = *((_QWORD *)Gre::Base::Globals(v17) + 6);
      GreAcquireSemaphore(v36);
      v20 = ppfeFromUFI((struct _UNIVERSAL_FONT_ID *)(*(_QWORD *)(*(_QWORD *)a2 + 296LL) + 8LL * i));
      v22 = v20;
      if ( v20 )
      {
        v39 = *(_QWORD *)v20;
        v3 = v39;
        Gre::Base::Globals(v21);
        ++*(_DWORD *)(v3 + 68);
        v40 = 0;
      }
      SEMOBJ::vUnlock((SEMOBJ *)&v36);
      if ( v22 )
      {
        v41[0] = v42;
        v41[1] = v43;
        LinkedFontList = PFEOBJ::pGetLinkedFontList((PFEOBJ *)&v35);
        if ( LinkedFontList )
        {
          for ( j = LinkedFontList->Flink; j != LinkedFontList; j = j->Flink )
          {
            if ( (struct PFE *)j[2].Flink == v22 || (struct PFE *)j[2].Blink == v22 )
            {
              Blink = (int)j[1].Blink;
              if ( Blink )
                HIDWORD(v41[0]) = HIDWORD(v42) * Blink / SHIDWORD(j[1].Blink);
              break;
            }
          }
        }
        RFONTOBJ::vInit((RFONTOBJ *)&v34, a2, v22, (struct _EUDCLOGFONT *)v41);
        if ( v34 )
        {
          v13[v14] = v34;
          v14 = (unsigned int)(v14 + 1);
        }
      }
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v34);
      if ( v3 )
      {
        v3 = 0LL;
        if ( !v40 )
          PFFOBJ::vDeleteRFONTRef((PFFOBJ *)&v39);
      }
      v18 = *(_QWORD *)a2;
    }
    if ( (*(_DWORD *)(*(_QWORD *)(v18 + 48) + 40LL) & 0x8000) != 0 )
    {
      GreAcquireSemaphore(*(_QWORD *)(*(_QWORD *)this + 504LL));
      GreAcquireSemaphore(*(_QWORD *)(*(_QWORD *)this + 848LL));
    }
    v26 = *(_DWORD *)(*(_QWORD *)this + 712LL) & 0x200;
    *(_DWORD *)(*(_QWORD *)this + 712LL) &= ~0x200u;
    v27 = *(_QWORD *)this;
    if ( *(_DWORD *)(*(_QWORD *)this + 660LL) == (_DWORD)v3 )
    {
      if ( v26 && (unsigned int)dword_1C0357098 > 5 && tlgKeywordOn((__int64)&dword_1C0357098, 0x400000000000LL) )
      {
        LODWORD(v35) = v3;
        LODWORD(v36) = 1;
        v38 = 0x1000000LL;
        LODWORD(v34) = 68651;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          v28,
          byte_1C03200B1,
          v29,
          v27,
          (__int64)&v34,
          (__int64)&v38,
          (__int64)&v36,
          (__int64)&v35);
        v27 = *(_QWORD *)this;
      }
      if ( *(_DWORD *)(v27 + 660) == (_DWORD)v3 )
        goto LABEL_56;
    }
    if ( !v26 )
    {
LABEL_56:
      if ( (_DWORD)v14 )
      {
        v33 = v13;
        do
        {
          v34 = *v33;
          RFONTOBJ::vMakeInactive((RFONTOBJ *)&v34);
          v34 = v3;
          RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v34);
          ++v33;
          --v14;
        }
        while ( v14 );
      }
    }
    else
    {
      if ( (_DWORD)v14 )
      {
        v30 = v3;
        v31 = (unsigned int)v14;
        do
        {
          *(_QWORD *)(v30 + *(_QWORD *)(*(_QWORD *)this + 744LL)) = *(__int64 *)((char *)v13 + v30);
          v30 += 8LL;
          --v31;
        }
        while ( v31 );
        *(_DWORD *)(*(_QWORD *)this + 840LL) = v14;
      }
      else
      {
        v32 = *(void **)(v27 + 744);
        if ( v32 != (void *)(v27 + 752) )
          Win32FreePool(v32);
        *(_QWORD *)(*(_QWORD *)this + 744LL) = v3;
        *(_DWORD *)(*(_QWORD *)this + 840LL) = v3;
      }
      RFONTOBJ::UpdateFontLinksLockOrder(this);
    }
    if ( v13 != (__int64 *)v44 )
      Win32FreePool(v13);
    v34 = v3;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v34);
    if ( v37 )
      DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v37);
  }
  else
  {
    if ( v6 )
    {
      Win32FreePool(*(void **)(*(_QWORD *)this + 744LL));
      *(_QWORD *)(*(_QWORD *)this + 744LL) = 0LL;
    }
    v34 = 0LL;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v34);
    LFONTOBJ::~LFONTOBJ(&v37);
  }
}
