NTSTATUS __stdcall DriverEntry(_DRIVER_OBJECT *DriverObject, PUNICODE_STRING RegistryPath)
{
  int v2; // eax
  __int64 v3; // rdi
  int inited; // eax
  int v5; // eax

  v2 = wil_InitializeFeatureStaging();
  v3 = v2;
  if ( v2 < 0 )
  {
    WdLogSingleEntry1(2LL, v2);
    ((void (*)(_QWORD, __int64, __int64, const wchar_t *, ...))DxgCoreInterface[86])(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Failed to initialize WIL feature staging, Status=0x%.8x",
      v3,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  else
  {
    inited = VIDMM_GLOBAL::InitGlobals();
    v3 = inited;
    if ( inited < 0 )
    {
      WdLogSingleEntry1(2LL, inited);
      ((void (*)(_QWORD, __int64, __int64, const wchar_t *, ...))DxgCoreInterface[86])(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Failed to initialize VidMm globals, Status=0x%.8x",
        v3,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    else
    {
      v5 = VidSchiInitGlobals();
      v3 = v5;
      if ( v5 >= 0 )
      {
        DxgMmsInitDebug();
        return 0;
      }
      WdLogSingleEntry1(2LL, v5);
      ((void (*)(_QWORD, __int64, __int64, const wchar_t *, ...))DxgCoreInterface[86])(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Failed to initialize VidSch globals, Status=0x%.8x",
        v3,
        0LL,
        0LL,
        0LL,
        0LL);
      VIDMM_GLOBAL::DeInitGlobals();
    }
    wil_UninitializeFeatureStaging();
  }
  return v3;
}
