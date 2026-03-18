/*
 * XREFs of GreEudcLoadLinkW @ 0x1C0295894
 * Callers:
 *     NtGdiEudcLoadUnloadLink @ 0x1C0297690 (NtGdiEudcLoadUnloadLink.c)
 * Callees:
 *     EngUnmapFontFileFD @ 0x1C0011220 (EngUnmapFontFileFD.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C001174C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     bUnloadEudcFont @ 0x1C00119A4 (bUnloadEudcFont.c)
 *     ?bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEAGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@H@Z @ 0x1C0013268 (-bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEAGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@H@Z.c)
 *     ?pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEBGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z @ 0x1C0013CF0 (-pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEBGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z.c)
 *     ?bAppendSysDirectory@@YAHPEAGPEBGI@Z @ 0x1C0014850 (-bAppendSysDirectory@@YAHPEAGPEBGI@Z.c)
 *     ??1?$AutoResource@$1?Win32FreePool@@YAXPEAX@Z@@QEAA@XZ @ 0x1C0014A8C (--1-$AutoResource@$1-Win32FreePool@@YAXPEAX@Z@@QEAA@XZ.c)
 *     bAddFlEntry @ 0x1C0014B64 (bAddFlEntry.c)
 *     ??0MALLOCOBJ@@QEAA@K@Z @ 0x1C0014F34 (--0MALLOCOBJ@@QEAA@K@Z.c)
 *     ?GetSessionTextStackStatus@UmfdHostLifeTimeManager@@SAJXZ @ 0x1C001C660 (-GetSessionTextStackStatus@UmfdHostLifeTimeManager@@SAJXZ.c)
 *     vLinkEudcPFEs @ 0x1C010E458 (vLinkEudcPFEs.c)
 *     ?bComputeQuickLookup@@YAHPEAU_QUICKLOOKUP@@PEAVPFE@@H@Z @ 0x1C013B0A4 (-bComputeQuickLookup@@YAHPEAU_QUICKLOOKUP@@PEAVPFE@@H@Z.c)
 *     vUnlinkAllEudcRFONTsAndPFEs @ 0x1C015EC88 (vUnlinkAllEudcRFONTsAndPFEs.c)
 *     ??0UmfdClientSideFileViewMapper@@QEAA@AEAVPFFOBJ@@@Z @ 0x1C029532C (--0UmfdClientSideFileViewMapper@@QEAA@AEAVPFFOBJ@@@Z.c)
 *     bWriteUserSystemEUDCRegistry @ 0x1C0296CB4 (bWriteUserSystemEUDCRegistry.c)
 */

__int64 __fastcall GreEudcLoadLinkW(
        wchar_t *a1,
        __int64 a2,
        const unsigned __int16 *a3,
        unsigned int a4,
        int a5,
        unsigned int a6)
{
  unsigned int v8; // edi
  unsigned __int16 *v10; // rbx
  unsigned int appended; // esi
  __int64 v12; // r14
  __int64 v13; // rax
  __int64 v14; // r13
  unsigned int v15; // r12d
  unsigned int i; // ebx
  int v17; // r8d
  struct _FONTHASH **v18; // [rsp+48h] [rbp-39h] BYREF
  wchar_t *Src; // [rsp+50h] [rbp-31h] BYREF
  struct PFF *v20; // [rsp+58h] [rbp-29h] BYREF
  __int64 v21; // [rsp+60h] [rbp-21h] BYREF
  struct PFE *v22[2]; // [rsp+68h] [rbp-19h] BYREF
  _QWORD v23[2]; // [rsp+78h] [rbp-9h] BYREF
  __int64 v24; // [rsp+88h] [rbp+7h] BYREF
  unsigned int v25; // [rsp+98h] [rbp+17h]
  unsigned int v26; // [rsp+F0h] [rbp+6Fh] BYREF

  v26 = a4;
  v8 = 0;
  if ( (unsigned int)UmfdHostLifeTimeManager::GetSessionTextStackStatus() )
    return 0LL;
  GreAcquireSemaphore(ghsemEUDC1);
  if ( gcEUDCCount <= 0 )
  {
    if ( a1 )
    {
      v17 = a6;
      Src = 0LL;
      if ( a6 > 1 )
        v17 = 1;
      appended = bAddFlEntry(a1, a3, v17, a5, (__int64 *)&Src);
      if ( appended && Src )
        vLinkEudcPFEs((__int64)Src);
    }
    else
    {
      MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&Src, 0x20Au);
      v10 = Src;
      *(_OWORD *)v22 = 0LL;
      appended = Src != 0LL;
      if ( Src )
      {
        appended = bAppendSysDirectory(Src, a3);
        if ( appended )
        {
          v21 = ghsemPublicPFT;
          GreAcquireSemaphore(ghsemPublicPFT);
          v12 = -1LL;
          v18 = gpPFTPublic;
          v13 = -1LL;
          do
            ++v13;
          while ( v10[v13] );
          if ( PUBLIC_PFTOBJ::pPFFGet((PUBLIC_PFTOBJ *)&v18, v10, (int)v13 + 1, 1, 0LL, 0, 0LL, 1) )
          {
            appended = 0;
          }
          else
          {
            v23[0] = v22;
            v23[1] = 0LL;
            v26 = 0;
            v20 = 0LL;
            appended = PUBLIC_PFTOBJ::bLoadAFont((PUBLIC_PFTOBJ *)&v18, v10, &v26, 8u, &v20, (struct _EUDCLOAD *)v23, 0);
          }
          SEMOBJ::vUnlock((SEMOBJ *)&v21);
          if ( appended )
          {
            if ( *(_OWORD *)&gappfeSysEUDC != 0LL )
            {
              vUnlinkAllEudcRFONTsAndPFEs(0);
              bUnloadEudcFont((__int64)&gappfeSysEUDC);
            }
            *(_OWORD *)&gappfeSysEUDC = *(_OWORD *)v22;
            wcscpy_s(Dst, 0x105uLL, v10);
            ++dword_1C0336378;
            if ( !(unsigned int)bComputeQuickLookup((struct _QUICKLOOKUP *)&gqlEUDC, v22[0], 1) )
            {
              v23[0] = *(_QWORD *)v22[0];
              UmfdClientSideFileViewMapper::UmfdClientSideFileViewMapper(
                (UmfdClientSideFileViewMapper *)&v24,
                (struct PFFOBJ *)v23);
              v14 = v24;
              v15 = v25;
              if ( v25 == *(_DWORD *)(v24 + 36) )
                bComputeQuickLookup((struct _QUICKLOOKUP *)&gqlEUDC, v22[0], 1);
              for ( i = 0; i < v15; EngUnmapFontFileFD(*(_QWORD *)(*(_QWORD *)(v14 + 200) + 8LL * i++)) )
              {
                if ( i >= *(_DWORD *)(v14 + 36) )
                  break;
              }
            }
            do
              ++v12;
            while ( Dst[v12] );
            bWriteUserSystemEUDCRegistry(Dst);
          }
        }
      }
      AutoResource<&void Win32FreePool(void *)>::~AutoResource<&void Win32FreePool(void *)>((__int64 *)&Src);
    }
    v8 = appended;
  }
  else
  {
    EngSetLastError(0xA7u);
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
  GreReleaseSemaphoreInternal(ghsemEUDC1);
  return v8;
}
