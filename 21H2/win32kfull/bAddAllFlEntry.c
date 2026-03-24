/*
 * XREFs of bAddAllFlEntry @ 0x1C00E6C58
 * Callers:
 *     ?bInitializeEUDCInternal@@YAHXZ @ 0x1C00E6950 (-bInitializeEUDCInternal@@YAHXZ.c)
 *     GreEnableEUDC @ 0x1C00E95A8 (GreEnableEUDC.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C009032C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??0MALLOCOBJ@@QEAA@K@Z @ 0x1C009FE08 (--0MALLOCOBJ@@QEAA@K@Z.c)
 *     ?bAppendSysDirectory@@YAHPEAGPEBGI@Z @ 0x1C00A09FC (-bAppendSysDirectory@@YAHPEAGPEBGI@Z.c)
 *     ?bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEAGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@H@Z @ 0x1C00A1DA4 (-bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEAGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@H@Z.c)
 *     ?bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z @ 0x1C00A1FB8 (-bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z.c)
 *     vLinkEudcPFEs @ 0x1C00A3EEC (vLinkEudcPFEs.c)
 *     ?pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEBGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z @ 0x1C00BBC28 (-pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEBGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z.c)
 *     bReadUserSystemEUDCRegistry @ 0x1C00E7068 (bReadUserSystemEUDCRegistry.c)
 *     bNotIsKeySymbolicLink @ 0x1C00E7194 (bNotIsKeySymbolicLink.c)
 *     GetUserEUDCRegistryPath @ 0x1C00E7240 (GetUserEUDCRegistryPath.c)
 *     AddAllFlEntryWorker @ 0x1C00E730C (AddAllFlEntryWorker.c)
 *     ?bComputeQuickLookup@@YAHPEAU_QUICKLOOKUP@@PEAVPFE@@H@Z @ 0x1C00FEF24 (-bComputeQuickLookup@@YAHPEAU_QUICKLOOKUP@@PEAVPFE@@H@Z.c)
 *     EngUnmapFontFileFD @ 0x1C011DA70 (EngUnmapFontFileFD.c)
 *     ?ApplyFontInfEquivalentChangesOnServicingUpdate@@YAXXZ @ 0x1C016BE10 (-ApplyFontInfEquivalentChangesOnServicingUpdate@@YAXXZ.c)
 *     ??0UmfdClientSideFileViewMapper@@QEAA@AEAVPFFOBJ@@@Z @ 0x1C029794C (--0UmfdClientSideFileViewMapper@@QEAA@AEAVPFFOBJ@@@Z.c)
 */

__int64 __fastcall bAddAllFlEntry(int a1, unsigned int a2)
{
  _WORD *v3; // rbx
  wchar_t *v4; // rdi
  HSEMAPHORE v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  int v11; // esi
  bool v12; // r12
  PFTOBJ *v13; // rcx
  __int64 v14; // r14
  unsigned int v15; // r15d
  unsigned int i; // esi
  char v17; // al
  HANDLE v19; // [rsp+40h] [rbp-40h] BYREF
  struct PFE *v20[2]; // [rsp+48h] [rbp-38h] BYREF
  _QWORD v21[2]; // [rsp+58h] [rbp-28h] BYREF
  __int64 v22; // [rsp+68h] [rbp-18h] BYREF
  unsigned int v23; // [rsp+78h] [rbp-8h]
  unsigned int v24; // [rsp+C8h] [rbp+48h] BYREF
  wchar_t *Src; // [rsp+D0h] [rbp+50h] BYREF
  HANDLE Handle; // [rsp+D8h] [rbp+58h] BYREF

  v24 = a2;
  MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&Handle, 0x208u);
  MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&Src, 0x208u);
  v3 = Handle;
  if ( !Handle )
  {
    if ( !Src )
      return 0LL;
    Win32FreePool(Src);
LABEL_42:
    if ( v3 )
      goto LABEL_43;
    return 0LL;
  }
  v4 = Src;
  if ( !Src )
    goto LABEL_42;
  v5 = ghsemEUDC1;
  *Src = 0;
  *v3 = 0;
  GreAcquireSemaphore(v5);
  if ( gcEUDCCount > 0 )
  {
    EngSetLastError(0xA7u);
LABEL_5:
    EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
    GreReleaseSemaphoreInternal(ghsemEUDC1);
    Win32FreePool(v4);
LABEL_43:
    Win32FreePool(v3);
    return 0LL;
  }
  if ( a1 && *(_OWORD *)&gappfeSysEUDC == 0LL && (unsigned int)bReadUserSystemEUDCRegistry(v3) )
  {
    *(_OWORD *)v20 = 0LL;
    if ( !(unsigned int)bAppendSysDirectory(v4, v3) )
      goto LABEL_5;
    Src = (wchar_t *)gpPFTPublic;
    v19 = (HANDLE)ghsemPublicPFT;
    GreAcquireSemaphore(ghsemPublicPFT);
    v10 = -1LL;
    do
      ++v10;
    while ( v4[v10] );
    if ( PUBLIC_PFTOBJ::pPFFGet((PUBLIC_PFTOBJ *)&Src, v4, (int)v10 + 1, 1, 0LL, 0, 0LL, 1) )
    {
      v11 = 0;
    }
    else
    {
      v21[0] = v20;
      v21[1] = 0LL;
      v24 = 0;
      Handle = 0LL;
      v11 = PUBLIC_PFTOBJ::bLoadAFont(
              (PUBLIC_PFTOBJ *)&Src,
              v4,
              &v24,
              8u,
              (struct PFF **)&Handle,
              (struct _EUDCLOAD *)v21,
              0);
    }
    SEMOBJ::vUnlock((SEMOBJ *)&v19);
    if ( v11 )
    {
      if ( (unsigned int)bComputeQuickLookup((struct _QUICKLOOKUP *)&gqlEUDC, v20[0], 1) )
        goto LABEL_39;
      v12 = 0;
      v21[0] = *(_QWORD *)v20[0];
      UmfdClientSideFileViewMapper::UmfdClientSideFileViewMapper(
        (UmfdClientSideFileViewMapper *)&v22,
        (struct PFFOBJ *)v21);
      v14 = v22;
      v15 = v23;
      if ( v23 == *(_DWORD *)(v22 + 36) )
        v12 = (unsigned int)bComputeQuickLookup((struct _QUICKLOOKUP *)&gqlEUDC, v20[0], 1) != 0;
      for ( i = 0; i < v15; EngUnmapFontFileFD(*(_QWORD *)(*(_QWORD *)(v14 + 200) + 8LL * i++)) )
      {
        if ( i >= *(_DWORD *)(v14 + 36) )
          break;
      }
      if ( v12 )
      {
LABEL_39:
        *(_OWORD *)&gappfeSysEUDC = *(_OWORD *)v20;
        wcscpy_s(&Dst, 0x105uLL, v4);
        ++dword_1C033B0B8;
        goto LABEL_25;
      }
      PFTOBJ::bUnloadEUDCFont(v13, v4);
    }
    Dst = 0;
    *(_OWORD *)&gappfeSysEUDC = 0LL;
  }
LABEL_25:
  v17 = dword_1C033B0C0;
  if ( (dword_1C033B0C0 & 1) != 0 )
  {
    if ( gSessionId == (unsigned int)RtlGetCurrentServiceSessionId(v7, v6, v8, v9) )
      ApplyFontInfEquivalentChangesOnServicingUpdate();
    AddAllFlEntryWorker(L"\\REGISTRY\\MACHINE\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\FontLink\\SystemLink");
    v17 = dword_1C033B0C0;
  }
  if ( (v17 & 4) != 0 )
  {
    Handle = 0LL;
    v19 = 0LL;
    v24 = 0;
    if ( (int)GetUserEUDCRegistryPath(v3) >= 0 && (unsigned int)bNotIsKeySymbolicLink(v3, &Handle, &v19) && v24 )
      AddAllFlEntryWorker(v3);
    if ( Handle )
      ZwClose(Handle);
    if ( v19 )
      ZwClose(v19);
  }
  vLinkEudcPFEs(0LL);
  EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
  GreReleaseSemaphoreInternal(ghsemEUDC1);
  Win32FreePool(v4);
  Win32FreePool(v3);
  return 1LL;
}
