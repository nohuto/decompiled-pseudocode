void __fastcall RFONTOBJ::vInitEUDC(RFONTOBJ *this, struct XDCOBJ *a2)
{
  __int64 v2; // rax
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r15
  __int64 v9; // rax
  struct HLFONT__ *v10; // rdx
  const struct _IFIMETRICS *v11; // rdx
  __int64 v12; // rsi
  __int64 v13; // r13
  __int64 v14; // rax
  _BYTE *v15; // r14
  __int64 v16; // r12
  __int64 v17; // r13
  __int64 v18; // rax
  __int64 v19; // rax
  void *v20; // rcx
  struct XDCOBJ *v21; // rsi
  unsigned int v22; // ecx
  __int64 v23; // rax
  __int64 v24; // rsi
  struct PFE *EUDCDefaultFontPFE; // rax
  struct PFE *v26; // rsi
  __int64 v27; // rcx
  __int64 v28; // r15
  int v29; // r13d
  unsigned int v30; // ecx
  __int64 v31; // rcx
  struct _LIST_ENTRY *LinkedFontList; // rax
  struct XDCOBJ *v33; // rbx
  __int64 v34; // r15
  struct _LIST_ENTRY *i; // rsi
  int Blink; // ecx
  __int64 v37; // r13
  struct PFE *v38; // r8
  int v39; // esi
  __int64 v40; // r9
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // r8
  __int64 v46; // rax
  int v47; // ecx
  __int64 *v48; // rbx
  __int64 v49; // rdi
  __int64 v50; // [rsp+40h] [rbp-C0h] BYREF
  int v51; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v52; // [rsp+50h] [rbp-B0h] BYREF
  struct RFONT *v53; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v54; // [rsp+60h] [rbp-A0h]
  struct XDCOBJ *v55; // [rsp+68h] [rbp-98h]
  __int64 v56; // [rsp+70h] [rbp-90h] BYREF
  __int64 v57; // [rsp+78h] [rbp-88h] BYREF
  _QWORD v58[2]; // [rsp+80h] [rbp-80h] BYREF
  struct LFONT *v59; // [rsp+90h] [rbp-70h] BYREF
  _OWORD v60[4]; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v61; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v62; // [rsp+F0h] [rbp-10h]
  _BYTE v63[80]; // [rsp+100h] [rbp+0h] BYREF

  v2 = *(_QWORD *)a2;
  v55 = a2;
  if ( *(_DWORD *)(v2 + 304) )
  {
    RFONTOBJ::vInitEUDCRemote(this, a2);
    return;
  }
  v5 = *(_QWORD *)(*(_QWORD *)this + 120LL);
  v56 = v5;
  v57 = v5;
  v6 = SGDGetSessionState(this);
  v7 = *(_QWORD *)this;
  v8 = *(_QWORD *)(v6 + 32);
  if ( !*(_QWORD *)(*(_QWORD *)this + 728LL) && (*(_QWORD *)(v8 + 13320) || *(_QWORD *)(v8 + 13328))
    || (*(_DWORD *)(v8 + 19360) || *(_DWORD *)(v8 + 19352)) && !*(_QWORD *)(v7 + 736)
    || (v9 = *(_QWORD *)(v5 + 120)) != 0
    && (!*(_QWORD *)(v7 + 744) || *(_DWORD *)(v7 + 832) != 1 || *(_DWORD *)(v7 + 836) != *(_DWORD *)(v9 + 104)) )
  {
    v10 = *(struct HLFONT__ **)(*(_QWORD *)a2 + 1744LL);
    v50 = *(_QWORD *)(*(_QWORD *)a2 + 48LL);
    LFONTOBJ::LFONTOBJ((LFONTOBJ *)&v59, v10, (struct PDEVOBJ *)&v50);
    v11 = *(const struct _IFIMETRICS **)(v5 + 32);
    v50 = *(_QWORD *)this;
    IFIOBJR::IFIOBJR((IFIOBJR *)v60, v11, (struct RFONTOBJ *)&v50, a2);
    v61 = 0LL;
    v62 = 0LL;
    RFONTOBJ::ComputeEUDCLogfont(this, (struct _EUDCLOGFONT *)&v61, a2);
    v12 = *(_QWORD *)this;
    v13 = *(_QWORD *)(*(_QWORD *)this + 736LL);
    v54 = *(_QWORD *)(*(_QWORD *)this + 728LL);
    v52 = v13;
    memset_0(v63, 0, sizeof(v63));
    v14 = *(_QWORD *)(v5 + 120);
    v15 = v63;
    v16 = 0LL;
    v51 = 0;
    if ( v14 )
    {
      v51 = *(_DWORD *)(v12 + 832) == 0;
      if ( *(_QWORD *)(v12 + 744) && *(_DWORD *)(v12 + 836) != *(_DWORD *)(v14 + 104) )
      {
        v17 = 0LL;
        if ( *(_DWORD *)(v12 + 840) )
        {
          do
          {
            v18 = *(_QWORD *)(v12 + 744);
            if ( *(_QWORD *)(v18 + 8 * v17) )
            {
              v53 = *(struct RFONT **)(v18 + 8 * v17);
              RFONTOBJ::bMakeInactiveHelper(&v53, 0LL);
              v19 = *(_QWORD *)this;
              v53 = 0LL;
              *(_QWORD *)(*(_QWORD *)(v19 + 744) + 8 * v17) = 0LL;
              RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v53);
            }
            v12 = *(_QWORD *)this;
            v17 = (unsigned int)(v17 + 1);
          }
          while ( (unsigned int)v17 < *(_DWORD *)(*(_QWORD *)this + 840LL) );
        }
        v20 = *(void **)(v12 + 744);
        if ( v20 != (void *)(v12 + 752) )
          Win32FreePool(v20);
        v13 = v52;
        *(_QWORD *)(*(_QWORD *)this + 744LL) = 0LL;
        *(_DWORD *)(*(_QWORD *)this + 840LL) = 0;
      }
      v12 = *(_QWORD *)this;
      if ( !*(_QWORD *)(*(_QWORD *)this + 744LL) )
        v51 = 1;
    }
    *(_DWORD *)(v12 + 712) |= 0x200u;
    v21 = v55;
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v55 + 48LL) + 40LL) & 0x8000) != 0 )
    {
      EtwTraceGreLockReleaseSemaphore(L"prfnt->hsemEUDC");
      GreReleaseSemaphoreInternal(*(_QWORD *)(*(_QWORD *)this + 848LL));
      EtwTraceGreLockReleaseSemaphore(L"prfnt->hsemCache");
      GreReleaseSemaphoreInternal(*(_QWORD *)(*(_QWORD *)this + 504LL));
    }
    v22 = *(_DWORD *)(*(_QWORD *)this + 844LL) != 0;
    LODWORD(v53) = v22;
    if ( !v54 )
    {
      v23 = *(_QWORD *)(v8 + 8LL * v22 + 13320);
      if ( v23 )
      {
        v50 = 0LL;
        v58[0] = *(_QWORD *)(v23 + 32);
        if ( (unsigned int)RFONTOBJ::bCheckEudcFontCaps(this, (struct IFIOBJ *)v58) )
        {
          RFONTOBJ::vInit(
            (RFONTOBJ *)&v50,
            v21,
            *(struct PFE **)(v8 + 8LL * (unsigned int)v53 + 13320),
            (struct _EUDCLOGFONT *)&v61);
          v24 = v54;
          if ( v50 )
            v24 = v50;
          v54 = v24;
        }
        else
        {
          v54 = 0LL;
        }
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v50);
        v22 = (unsigned int)v53;
      }
    }
    if ( *(_DWORD *)(v8 + 19360) )
    {
      if ( v13 )
      {
        v28 = v52;
        goto LABEL_46;
      }
      EUDCDefaultFontPFE = RFONTOBJ::GetEUDCDefaultFontPFE(this, v22);
      v26 = EUDCDefaultFontPFE;
      if ( EUDCDefaultFontPFE )
      {
        v27 = *((_QWORD *)EUDCDefaultFontPFE + 4);
        v50 = 0LL;
        v58[0] = v27;
        if ( (unsigned int)RFONTOBJ::bCheckEudcFontCaps(this, (struct IFIOBJ *)v58) )
        {
          RFONTOBJ::vInit((RFONTOBJ *)&v50, v55, v26, (struct _EUDCLOGFONT *)&v61);
          if ( v50 )
            v13 = v50;
          v52 = v13;
          v28 = v13;
        }
        else
        {
          v28 = 0LL;
          v52 = 0LL;
        }
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v50);
LABEL_46:
        v29 = v51;
        if ( v51 )
        {
          v30 = *(_DWORD *)(*(_QWORD *)(v5 + 120) + 100LL);
          if ( v30 <= 0xA )
          {
            v15 = v63;
            goto LABEL_54;
          }
          v31 = 8 * v30;
          if ( (_DWORD)v31 )
            v15 = (_BYTE *)Win32AllocPoolZInit(v31, 1718382187LL);
          else
            v15 = 0LL;
          if ( v15 )
          {
LABEL_54:
            LinkedFontList = PFEOBJ::pGetLinkedFontList((PFEOBJ *)&v57);
            v33 = v55;
            v34 = (unsigned int)v53;
            for ( i = LinkedFontList->Flink; i != PFEOBJ::pGetLinkedFontList((PFEOBJ *)&v57); i = i->Flink )
            {
              Blink = (int)i[1].Blink;
              v60[0] = v61;
              v60[1] = v62;
              if ( Blink )
                HIDWORD(v60[0]) = Blink * HIDWORD(v61) / SHIDWORD(i[1].Blink);
              v37 = *((_QWORD *)&i[2].Flink + v34) != 0LL ? (unsigned int)v34 : 0;
              v58[0] = *(_QWORD *)(*((_QWORD *)&i[2].Flink + v37) + 32LL);
              if ( (unsigned int)RFONTOBJ::bCheckEudcFontCaps(this, (struct IFIOBJ *)v58) )
              {
                v38 = (struct PFE *)*((_QWORD *)&i[2].Flink + v37);
                v50 = 0LL;
                RFONTOBJ::vInit((RFONTOBJ *)&v50, v33, v38, (struct _EUDCLOGFONT *)v60);
                if ( v50 )
                {
                  *(_QWORD *)&v15[8 * v16] = v50;
                  v16 = (unsigned int)(v16 + 1);
                }
                RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v50);
              }
            }
            v5 = v56;
            v28 = v52;
            v29 = v51;
          }
        }
        if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v55 + 48LL) + 40LL) & 0x8000) != 0 )
        {
          GreAcquireSemaphore(*(_QWORD *)(*(_QWORD *)this + 504LL));
          GreAcquireSemaphore(*(_QWORD *)(*(_QWORD *)this + 848LL));
        }
        v39 = *(_DWORD *)(*(_QWORD *)this + 712LL) & 0x200;
        *(_DWORD *)(*(_QWORD *)this + 712LL) &= ~0x200u;
        v40 = *(_QWORD *)this;
        if ( !*(_DWORD *)(*(_QWORD *)this + 660LL) )
        {
          if ( v39 && (unsigned int)dword_1C0357098 > 5 && tlgKeywordOn((__int64)&dword_1C0357098, 0x400000000000LL) )
          {
            LODWORD(v53) = 0;
            v51 = 2;
            v56 = 0x1000000LL;
            LODWORD(v52) = 68651;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
              v41,
              byte_1C03200B1,
              v42,
              v40,
              (__int64)&v52,
              (__int64)&v56,
              (__int64)&v51,
              (__int64)&v53);
            v40 = *(_QWORD *)this;
          }
          if ( !*(_DWORD *)(v40 + 660) )
            goto LABEL_90;
        }
        if ( v39 )
        {
          *(_QWORD *)(v40 + 728) = v54;
          *(_QWORD *)(*(_QWORD *)this + 736LL) = v28;
          if ( v29 )
          {
            v43 = *(_QWORD *)this;
            if ( (_DWORD)v16 )
            {
              if ( (unsigned int)v16 <= 0xA )
                *(_QWORD *)(v43 + 744) = v43 + 752;
              else
                *(_QWORD *)(v43 + 744) = v15;
              v44 = 0LL;
              v45 = (unsigned int)v16;
              do
              {
                *(_QWORD *)(v44 + *(_QWORD *)(*(_QWORD *)this + 744LL)) = *(_QWORD *)&v15[v44];
                v44 += 8LL;
                --v45;
              }
              while ( v45 );
            }
            else
            {
              *(_QWORD *)(v43 + 744) = 0LL;
            }
            *(_DWORD *)(*(_QWORD *)this + 840LL) = v16;
            v46 = *(_QWORD *)(v5 + 120);
            if ( v46 )
              v47 = *(_DWORD *)(v46 + 104);
            else
              v47 = 0;
            *(_DWORD *)(*(_QWORD *)this + 836LL) = v47;
            *(_DWORD *)(*(_QWORD *)this + 832LL) = 1;
          }
          if ( *(_BYTE **)(*(_QWORD *)this + 744LL) != v15 && v15 && v15 != v63 )
            Win32FreePool(v15);
          RFONTOBJ::UpdateFontLinksLockOrder(this);
        }
        else
        {
LABEL_90:
          v50 = v54;
          RFONTOBJ::vMakeInactive((RFONTOBJ *)&v50);
          v50 = v28;
          RFONTOBJ::vMakeInactive((RFONTOBJ *)&v50);
          if ( (_DWORD)v16 )
          {
            v48 = (__int64 *)v15;
            v49 = (unsigned int)v16;
            do
            {
              v50 = *v48;
              RFONTOBJ::vMakeInactive((RFONTOBJ *)&v50);
              v50 = 0LL;
              RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v50);
              ++v48;
              --v49;
            }
            while ( v49 );
          }
          if ( v15 != v63 )
            Win32FreePool(v15);
          v50 = 0LL;
          RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v50);
          v50 = 0LL;
          RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v50);
        }
        v50 = 0LL;
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v50);
        if ( v59 )
          DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v59);
        return;
      }
    }
    v28 = 0LL;
    v52 = 0LL;
    goto LABEL_46;
  }
}
