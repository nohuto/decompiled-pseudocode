/*
 * XREFs of GreEudcLoadLinkW @ 0x1C02A10C8
 * Callers:
 *     NtGdiEudcLoadUnloadLink @ 0x1C02A3450 (NtGdiEudcLoadUnloadLink.c)
 * Callees:
 *     ?GetSessionTextStackStatus@UmfdHostLifeTimeManager@@SAJXZ @ 0x1C00B7924 (-GetSessionTextStackStatus@UmfdHostLifeTimeManager@@SAJXZ.c)
 *     ??1?$AutoResource@$1?Win32FreePool@@YAXPEAX@Z@@QEAA@XZ @ 0x1C00B90C0 (--1-$AutoResource@$1-Win32FreePool@@YAXPEAX@Z@@QEAA@XZ.c)
 *     ?IsConcurrentEUDCOperationInProgress@@YA_NAEAUSESSION_GLOBALS@Full@Gre@@@Z @ 0x1C00B918C (-IsConcurrentEUDCOperationInProgress@@YA_NAEAUSESSION_GLOBALS@Full@Gre@@@Z.c)
 *     ?bAppendSysDirectory@@YAHPEAGPEBGI@Z @ 0x1C00B9FA4 (-bAppendSysDirectory@@YAHPEAGPEBGI@Z.c)
 *     ?bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEBGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@H@Z @ 0x1C00BA638 (-bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEBGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@H@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00D32A0 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     vUnlinkAllEudcRFONTsAndPFEs @ 0x1C00DEFF0 (vUnlinkAllEudcRFONTsAndPFEs.c)
 *     vLinkEudcPFEs @ 0x1C011177C (vLinkEudcPFEs.c)
 *     bUnloadEudcFont @ 0x1C01162DC (bUnloadEudcFont.c)
 *     ??0MALLOCOBJ@@QEAA@K@Z @ 0x1C0116400 (--0MALLOCOBJ@@QEAA@K@Z.c)
 *     bAddFlEntry @ 0x1C0119070 (bAddFlEntry.c)
 *     EngUnmapFontFileFD @ 0x1C011CB40 (EngUnmapFontFileFD.c)
 *     ?pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEBGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z @ 0x1C011D0B8 (-pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEBGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z.c)
 *     ??0UmfdClientSideFileViewMapper@@QEAA@AEAVPFFOBJ@@@Z @ 0x1C02A0ACC (--0UmfdClientSideFileViewMapper@@QEAA@AEAVPFFOBJ@@@Z.c)
 *     ?bComputeQuickLookup@@YAHPEAU_QUICKLOOKUP@@PEAVPFE@@H@Z @ 0x1C02A1C30 (-bComputeQuickLookup@@YAHPEAU_QUICKLOOKUP@@PEAVPFE@@H@Z.c)
 *     bWriteUserSystemEUDCRegistry @ 0x1C02A2A34 (bWriteUserSystemEUDCRegistry.c)
 */

__int64 __fastcall GreEudcLoadLinkW(
        char *a1,
        __int64 a2,
        const unsigned __int16 *a3,
        unsigned int a4,
        int a5,
        unsigned int a6)
{
  __int64 v8; // rcx
  unsigned int v9; // edi
  __int64 v11; // r14
  wchar_t *v12; // rbx
  unsigned int appended; // esi
  Gre::Base *v14; // rcx
  __int64 v15; // r12
  __int64 v16; // rax
  _WORD *v17; // r13
  struct PFE *v18; // rdx
  __int64 v19; // r13
  unsigned int v20; // eax
  unsigned int v21; // ebx
  int v22; // r8d
  wchar_t *Src; // [rsp+48h] [rbp-39h] BYREF
  struct PFF *v24; // [rsp+50h] [rbp-31h] BYREF
  __int64 v25; // [rsp+58h] [rbp-29h] BYREF
  __int64 v26; // [rsp+60h] [rbp-21h] BYREF
  struct PFE *v27[2]; // [rsp+68h] [rbp-19h] BYREF
  _QWORD v28[2]; // [rsp+78h] [rbp-9h] BYREF
  unsigned int v29; // [rsp+88h] [rbp+7h]
  _QWORD v30[3]; // [rsp+90h] [rbp+Fh] BYREF
  unsigned int v31; // [rsp+F0h] [rbp+6Fh] BYREF

  v31 = a4;
  v9 = 0;
  if ( (unsigned int)UmfdHostLifeTimeManager::GetSessionTextStackStatus((__int64)a1) )
    return 0LL;
  v11 = *(_QWORD *)(SGDGetSessionState(v8) + 32);
  v26 = *(_QWORD *)(v11 + 13288);
  GreAcquireSemaphore(v26);
  GreAcquireSemaphore(*(_QWORD *)(v11 + 13272));
  if ( !IsConcurrentEUDCOperationInProgress((struct Gre::Full::SESSION_GLOBALS *)v11) )
  {
    if ( a1 )
    {
      v22 = a6;
      Src = 0LL;
      if ( a6 > 1 )
        v22 = 1;
      appended = bAddFlEntry(a1, (__int64)a3, v22, a5, &Src);
      if ( appended && Src )
        vLinkEudcPFEs((Gre::Base *)Src);
    }
    else
    {
      MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&Src, 0x20Au);
      v12 = Src;
      *(_OWORD *)v27 = 0LL;
      appended = Src != 0LL;
      if ( Src )
      {
        appended = bAppendSysDirectory(Src, a3);
        if ( appended )
        {
          v25 = *((_QWORD *)Gre::Base::Globals(v14) + 6);
          GreAcquireSemaphore(v25);
          v15 = -1LL;
          v30[0] = *(_QWORD *)(v11 + 20272);
          v16 = -1LL;
          do
            ++v16;
          while ( v12[v16] );
          if ( PUBLIC_PFTOBJ::pPFFGet((PUBLIC_PFTOBJ *)v30, v12, (int)v16 + 1, 1, 0LL, 0, 0LL, 1) )
          {
            appended = 0;
          }
          else
          {
            v28[0] = v27;
            v28[1] = 0LL;
            v31 = 0;
            v24 = 0LL;
            appended = PUBLIC_PFTOBJ::bLoadAFont((PUBLIC_PFTOBJ *)v30, v12, &v31, 8u, &v24, (struct _EUDCLOAD *)v28, 0);
          }
          SEMOBJ::vUnlock((SEMOBJ *)&v25);
          if ( appended )
          {
            if ( *(_QWORD *)(v11 + 13320) || *(_QWORD *)(v11 + 13328) )
            {
              vUnlinkAllEudcRFONTsAndPFEs(0LL);
              bUnloadEudcFont((__int64 *)(v11 + 13320));
            }
            *(_OWORD *)(v11 + 13320) = *(_OWORD *)v27;
            v17 = (_WORD *)(v11 + 13336);
            wcscpy_s((wchar_t *)(v11 + 13336), 0x105uLL, v12);
            v18 = v27[0];
            ++*(_DWORD *)(v11 + 13896);
            if ( !(unsigned int)bComputeQuickLookup((struct _QUICKLOOKUP *)(v11 + 13864), v18, 1) )
            {
              v30[0] = *(_QWORD *)v27[0];
              UmfdClientSideFileViewMapper::UmfdClientSideFileViewMapper(
                (UmfdClientSideFileViewMapper *)v28,
                (struct PFFOBJ *)v30);
              v19 = v28[0];
              v20 = v29;
              if ( v29 == *(_DWORD *)(v28[0] + 36LL) )
              {
                bComputeQuickLookup((struct _QUICKLOOKUP *)(v11 + 13864), v27[0], 1);
                v20 = v29;
              }
              v21 = 0;
              if ( v20 )
              {
                do
                {
                  if ( v21 >= *(_DWORD *)(v19 + 36) )
                    break;
                  EngUnmapFontFileFD(*(_QWORD *)(*(_QWORD *)(v19 + 200) + 8LL * v21++));
                }
                while ( v21 < v29 );
              }
              v17 = (_WORD *)(v11 + 13336);
            }
            do
              ++v15;
            while ( v17[v15] );
            bWriteUserSystemEUDCRegistry(v17);
          }
        }
      }
      AutoResource<&void Win32FreePool(void *)>::~AutoResource<&void Win32FreePool(void *)>((void **)&Src);
    }
    v9 = appended;
  }
  EtwTraceGreLockReleaseSemaphore(L"GreFullGlobals.hsemEUDC1");
  GreReleaseSemaphoreInternal(*(_QWORD *)(v11 + 13272));
  SEMOBJ::vUnlock((SEMOBJ *)&v26);
  return v9;
}
