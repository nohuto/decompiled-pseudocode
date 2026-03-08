/*
 * XREFs of DriverEntry @ 0x1C010D1E8
 * Callers:
 *     GsDriverEntry @ 0x1C010D010 (GsDriverEntry.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001A8E0 (_guard_dispatch_icall_nop.c)
 *     wil_UninitializeFeatureStaging @ 0x1C0085008 (wil_UninitializeFeatureStaging.c)
 *     VidSchiInitGlobals @ 0x1C00B4B00 (VidSchiInitGlobals.c)
 *     ?InitGlobals@VIDMM_GLOBAL@@SAJXZ @ 0x1C00BDE54 (-InitGlobals@VIDMM_GLOBAL@@SAJXZ.c)
 *     ?DxgMmsInitDebug@@YAXXZ @ 0x1C00BE748 (-DxgMmsInitDebug@@YAXXZ.c)
 *     ?DeInitGlobals@VIDMM_GLOBAL@@SAXXZ @ 0x1C00E12CC (-DeInitGlobals@VIDMM_GLOBAL@@SAXXZ.c)
 *     wil_InitializeFeatureStaging @ 0x1C010D078 (wil_InitializeFeatureStaging.c)
 */

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
