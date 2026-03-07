__int64 __fastcall bAddAllFlEntry(int a1)
{
  __int64 v2; // rcx
  WCHAR *v3; // rdi
  unsigned __int16 *v4; // rbx
  __int64 v5; // rsi
  unsigned int v7; // r8d
  Gre::Base *v9; // rcx
  __int64 v10; // rax
  int v11; // r14d
  bool v12; // r13
  PFTOBJ *v13; // rcx
  __int64 v14; // r15
  unsigned int v15; // r12d
  __int64 i; // r14
  HANDLE Handle; // [rsp+40h] [rbp-39h] BYREF
  HANDLE v18; // [rsp+48h] [rbp-31h] BYREF
  struct PFE *v19[2]; // [rsp+50h] [rbp-29h] BYREF
  _QWORD v20[2]; // [rsp+60h] [rbp-19h] BYREF
  _QWORD v21[2]; // [rsp+70h] [rbp-9h] BYREF
  __int64 v22; // [rsp+80h] [rbp+7h] BYREF
  unsigned int v23; // [rsp+90h] [rbp+17h]
  unsigned int v24; // [rsp+E8h] [rbp+6Fh] BYREF
  wchar_t *Src; // [rsp+F0h] [rbp+77h] BYREF
  PCWSTR Path; // [rsp+F8h] [rbp+7Fh] BYREF

  MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&Path, 0x208u);
  MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&Src, 0x208u);
  v3 = (WCHAR *)Path;
  if ( !Path )
    goto LABEL_21;
  v4 = Src;
  if ( !Src )
    goto LABEL_21;
  *Src = 0;
  *v3 = 0;
  v5 = *(_QWORD *)(SGDGetSessionState(v2) + 32);
  GreAcquireSemaphore(*(_QWORD *)(v5 + 13272));
  if ( IsConcurrentEUDCOperationInProgress((struct Gre::Full::SESSION_GLOBALS *)v5) )
    goto LABEL_20;
  if ( !a1 || *(_QWORD *)(v5 + 13320) || *(_QWORD *)(v5 + 13328) || !(unsigned int)bReadUserSystemEUDCRegistry(v3) )
    goto LABEL_5;
  *(_OWORD *)v19 = 0LL;
  if ( !(unsigned int)bAppendSysDirectory(v4, v3, v7) )
  {
LABEL_20:
    EtwTraceGreLockReleaseSemaphore(L"GreFullGlobals.hsemEUDC1");
    GreReleaseSemaphoreInternal(*(_QWORD *)(v5 + 13272));
LABEL_21:
    AutoResource<&void Win32FreePool(void *)>::~AutoResource<&void Win32FreePool(void *)>(&Src);
    AutoResource<&void Win32FreePool(void *)>::~AutoResource<&void Win32FreePool(void *)>(&Path);
    return 0LL;
  }
  v21[0] = *(_QWORD *)(v5 + 20272);
  Handle = (HANDLE)*((_QWORD *)Gre::Base::Globals(v9) + 6);
  GreAcquireSemaphore(Handle);
  v10 = -1LL;
  do
    ++v10;
  while ( v4[v10] );
  if ( PUBLIC_PFTOBJ::pPFFGet((PUBLIC_PFTOBJ *)v21, v4, (int)v10 + 1, 1u, 0LL, 0, 0LL, 1) )
  {
    v11 = 0;
  }
  else
  {
    v20[0] = v19;
    v20[1] = 0LL;
    v24 = 0;
    v18 = 0LL;
    v11 = PUBLIC_PFTOBJ::bLoadAFont((PUBLIC_PFTOBJ *)v21, v4, &v24, 8u, (struct PFF **)&v18, (struct _EUDCLOAD *)v20, 0);
  }
  SEMOBJ::vUnlock((SEMOBJ *)&Handle);
  if ( v11 )
  {
    if ( (unsigned int)bComputeQuickLookup((struct _QUICKLOOKUP *)(v5 + 13864), v19[0], 1) )
      goto LABEL_38;
    v12 = 0;
    v20[0] = *(_QWORD *)v19[0];
    UmfdClientSideFileViewMapper::UmfdClientSideFileViewMapper(
      (UmfdClientSideFileViewMapper *)&v22,
      (struct PFFOBJ *)v20);
    v14 = v22;
    v15 = v23;
    if ( v23 == *(_DWORD *)(v22 + 36) )
      v12 = (unsigned int)bComputeQuickLookup((struct _QUICKLOOKUP *)(v5 + 13864), v19[0], 1) != 0;
    for ( i = 0LL; (unsigned int)i < v15; i = (unsigned int)(i + 1) )
    {
      if ( (unsigned int)i >= *(_DWORD *)(v14 + 36) )
        break;
      EngUnmapFontFileFD(*(_QWORD *)(*(_QWORD *)(v14 + 200) + 8 * i));
    }
    if ( v12 )
    {
LABEL_38:
      *(_OWORD *)(v5 + 13320) = *(_OWORD *)v19;
      wcscpy_s((wchar_t *)(v5 + 13336), 0x105uLL, v4);
      ++*(_DWORD *)(v5 + 13896);
      goto LABEL_5;
    }
    PFTOBJ::bUnloadEUDCFont(v13, v4);
  }
  *(_OWORD *)(v5 + 13320) = 0LL;
  *(_WORD *)(v5 + 13336) = 0;
LABEL_5:
  if ( (*(_DWORD *)(v5 + 13312) & 1) != 0 )
    AddAllFlEntryWorker(L"\\REGISTRY\\MACHINE\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\FontLink\\SystemLink");
  if ( (*(_DWORD *)(v5 + 13312) & 4) != 0 )
  {
    Handle = 0LL;
    v18 = 0LL;
    v24 = 0;
    if ( (int)GetUserEUDCRegistryPath(v3) >= 0 && (unsigned int)bNotIsKeySymbolicLink(v3, &Handle, &v18) && v24 )
      AddAllFlEntryWorker(v3);
    if ( Handle )
      ZwClose(Handle);
    if ( v18 )
      ZwClose(v18);
    vLinkEudcPFEs(0LL);
  }
  EtwTraceGreLockReleaseSemaphore(L"GreFullGlobals.hsemEUDC1");
  GreReleaseSemaphoreInternal(*(_QWORD *)(v5 + 13272));
  AutoResource<&void Win32FreePool(void *)>::~AutoResource<&void Win32FreePool(void *)>(&Src);
  AutoResource<&void Win32FreePool(void *)>::~AutoResource<&void Win32FreePool(void *)>(&Path);
  return 1LL;
}
