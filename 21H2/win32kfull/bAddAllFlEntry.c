/*
 * XREFs of bAddAllFlEntry @ 0x1C015E414
 * Callers:
 *     GreEnableEUDC @ 0x1C00991AC (GreEnableEUDC.c)
 *     ?bInitializeEUDCInternal@@YAHXZ @ 0x1C00EF8F4 (-bInitializeEUDCInternal@@YAHXZ.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C001174C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z @ 0x1C0011B90 (-bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z.c)
 *     ?bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEAGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@H@Z @ 0x1C0013268 (-bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEAGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@H@Z.c)
 *     ?pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEBGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z @ 0x1C0013CF0 (-pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEBGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z.c)
 *     ?bAppendSysDirectory@@YAHPEAGPEBGI@Z @ 0x1C0014850 (-bAppendSysDirectory@@YAHPEAGPEBGI@Z.c)
 *     ??1?$AutoResource@$1?Win32FreePool@@YAXPEAX@Z@@QEAA@XZ @ 0x1C0014A8C (--1-$AutoResource@$1-Win32FreePool@@YAXPEAX@Z@@QEAA@XZ.c)
 *     ??0MALLOCOBJ@@QEAA@K@Z @ 0x1C0014F34 (--0MALLOCOBJ@@QEAA@K@Z.c)
 *     vLinkEudcPFEs @ 0x1C010E458 (vLinkEudcPFEs.c)
 *     bReadUserSystemEUDCRegistry @ 0x1C01194E4 (bReadUserSystemEUDCRegistry.c)
 *     bNotIsKeySymbolicLink @ 0x1C01195E0 (bNotIsKeySymbolicLink.c)
 *     GetUserEUDCRegistryPath @ 0x1C011968C (GetUserEUDCRegistryPath.c)
 *     AddAllFlEntryWorker @ 0x1C012069C (AddAllFlEntryWorker.c)
 *     ?bComputeQuickLookup@@YAHPEAU_QUICKLOOKUP@@PEAVPFE@@H@Z @ 0x1C013B0A4 (-bComputeQuickLookup@@YAHPEAU_QUICKLOOKUP@@PEAVPFE@@H@Z.c)
 *     ??0UmfdClientSideFileViewMapper@@QEAA@AEAVPFFOBJ@@@Z @ 0x1C029532C (--0UmfdClientSideFileViewMapper@@QEAA@AEAVPFFOBJ@@@Z.c)
 *     ??1UmfdClientSideFileViewMapper@@QEAA@XZ @ 0x1C029539C (--1UmfdClientSideFileViewMapper@@QEAA@XZ.c)
 */

__int64 __fastcall bAddAllFlEntry(int a1)
{
  WCHAR *v2; // rdi
  unsigned __int16 *v3; // rbx
  HSEMAPHORE v4; // rcx
  __int64 v6; // rax
  int v7; // esi
  bool v8; // si
  PFTOBJ *v9; // rcx
  char v10; // al
  HANDLE Handle; // [rsp+40h] [rbp-19h] BYREF
  HANDLE v12; // [rsp+48h] [rbp-11h] BYREF
  __int64 v13; // [rsp+50h] [rbp-9h] BYREF
  struct PFE *v14[2]; // [rsp+58h] [rbp-1h] BYREF
  _QWORD v15[2]; // [rsp+68h] [rbp+Fh] BYREF
  _QWORD v16[2]; // [rsp+78h] [rbp+1Fh] BYREF
  int v17; // [rsp+88h] [rbp+2Fh]
  unsigned int v18; // [rsp+C8h] [rbp+6Fh] BYREF
  wchar_t *Src; // [rsp+D0h] [rbp+77h] BYREF
  PCWSTR Path; // [rsp+D8h] [rbp+7Fh] BYREF

  MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&Path, 0x208u);
  MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&Src, 0x208u);
  v2 = (WCHAR *)Path;
  if ( !Path )
    goto LABEL_6;
  v3 = Src;
  if ( !Src )
    goto LABEL_6;
  v4 = ghsemEUDC1;
  *Src = 0;
  *v2 = 0;
  GreAcquireSemaphore(v4);
  if ( gcEUDCCount > 0 )
  {
    EngSetLastError(0xA7u);
LABEL_5:
    EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
    GreReleaseSemaphoreInternal(ghsemEUDC1);
LABEL_6:
    AutoResource<&void Win32FreePool(void *)>::~AutoResource<&void Win32FreePool(void *)>((__int64 *)&Src);
    AutoResource<&void Win32FreePool(void *)>::~AutoResource<&void Win32FreePool(void *)>((__int64 *)&Path);
    return 0LL;
  }
  if ( a1 && *(_OWORD *)&gappfeSysEUDC == 0LL && (unsigned int)bReadUserSystemEUDCRegistry(v2) )
  {
    *(_OWORD *)v14 = 0LL;
    if ( !(unsigned int)bAppendSysDirectory(v3, v2) )
      goto LABEL_5;
    Handle = gpPFTPublic;
    v13 = ghsemPublicPFT;
    GreAcquireSemaphore(ghsemPublicPFT);
    v6 = -1LL;
    do
      ++v6;
    while ( v3[v6] );
    if ( PUBLIC_PFTOBJ::pPFFGet((PUBLIC_PFTOBJ *)&Handle, v3, (int)v6 + 1, 1, 0LL, 0, 0LL, 1) )
    {
      v7 = 0;
    }
    else
    {
      v15[0] = v14;
      v15[1] = 0LL;
      v18 = 0;
      v12 = 0LL;
      v7 = PUBLIC_PFTOBJ::bLoadAFont(
             (PUBLIC_PFTOBJ *)&Handle,
             v3,
             &v18,
             8u,
             (struct PFF **)&v12,
             (struct _EUDCLOAD *)v15,
             0);
    }
    SEMOBJ::vUnlock((SEMOBJ *)&v13);
    if ( v7 )
    {
      if ( (unsigned int)bComputeQuickLookup((struct _QUICKLOOKUP *)&gqlEUDC, v14[0], 1) )
        goto LABEL_35;
      v8 = 0;
      v15[0] = *(_QWORD *)v14[0];
      UmfdClientSideFileViewMapper::UmfdClientSideFileViewMapper(
        (UmfdClientSideFileViewMapper *)v16,
        (struct PFFOBJ *)v15);
      if ( v17 == *(_DWORD *)(v16[0] + 36LL) )
        v8 = (unsigned int)bComputeQuickLookup((struct _QUICKLOOKUP *)&gqlEUDC, v14[0], 1) != 0;
      UmfdClientSideFileViewMapper::~UmfdClientSideFileViewMapper((UmfdClientSideFileViewMapper *)v16);
      if ( v8 )
      {
LABEL_35:
        *(_OWORD *)&gappfeSysEUDC = *(_OWORD *)v14;
        wcscpy_s(&Dst, 0x105uLL, v3);
        ++dword_1C0336378;
        goto LABEL_23;
      }
      PFTOBJ::bUnloadEUDCFont(v9, v3);
    }
    Dst = 0;
    *(_OWORD *)&gappfeSysEUDC = 0LL;
  }
LABEL_23:
  v10 = dword_1C0336380;
  if ( (dword_1C0336380 & 1) != 0 )
  {
    AddAllFlEntryWorker(
      L"\\REGISTRY\\MACHINE\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\FontLink\\SystemLink",
      0);
    v10 = dword_1C0336380;
  }
  if ( (v10 & 4) != 0 )
  {
    Handle = 0LL;
    v12 = 0LL;
    v18 = 0;
    if ( (int)GetUserEUDCRegistryPath(v2) >= 0 && bNotIsKeySymbolicLink(v2, &Handle, &v12) && v18 )
      AddAllFlEntryWorker(v2, 1);
    if ( Handle )
      ZwClose(Handle);
    if ( v12 )
      ZwClose(v12);
  }
  vLinkEudcPFEs(0LL);
  EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
  GreReleaseSemaphoreInternal(ghsemEUDC1);
  AutoResource<&void Win32FreePool(void *)>::~AutoResource<&void Win32FreePool(void *)>((__int64 *)&Src);
  AutoResource<&void Win32FreePool(void *)>::~AutoResource<&void Win32FreePool(void *)>((__int64 *)&Path);
  return 1LL;
}
