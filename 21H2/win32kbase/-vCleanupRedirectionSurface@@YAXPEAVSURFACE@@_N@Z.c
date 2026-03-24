/*
 * XREFs of ?vCleanupRedirectionSurface@@YAXPEAVSURFACE@@_N@Z @ 0x1C013F758
 * Callers:
 *     pProcessDfbSurfacesInternal @ 0x1C00BE530 (pProcessDfbSurfacesInternal.c)
 *     ?DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z @ 0x1C0143930 (-DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z.c)
 * Callees:
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C001C608 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x1C002B724 (--1SURFREF@@QEAA@XZ.c)
 *     ?GetFirstLSurf@SURFACE@@QEAAPEAVSFMLOGICALSURFACE@@XZ @ 0x1C009B320 (-GetFirstLSurf@SURFACE@@QEAAPEAVSFMLOGICALSURFACE@@XZ.c)
 *     IsvSpDwmMigrateLSurfShapeReferenceSupported @ 0x1C00B7CE8 (IsvSpDwmMigrateLSurfShapeReferenceSupported.c)
 *     ?bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00C8F1C (-bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

void __fastcall vCleanupRedirectionSurface(HSURF *this, char a2)
{
  int v4; // eax
  char v5; // si
  __int64 v6; // rdi
  struct SFMLOGICALSURFACE *FirstLSurf; // rax
  HSURF v8; // [rsp+20h] [rbp-68h]
  _BYTE v9[32]; // [rsp+50h] [rbp-38h] BYREF
  __int64 v10; // [rsp+70h] [rbp-18h]

  if ( (int)IsvSpDwmMigrateLSurfShapeReferenceSupported() >= 0 )
  {
    v4 = qword_1C02562C0 ? qword_1C02562C0() : -1073741637;
    if ( v4 >= 0 )
    {
      SURFREF::SURFREF((SURFREF *)v9, this[4]);
      if ( v10 )
      {
        v5 = 0;
        v6 = 0LL;
        while ( 1 )
        {
          FirstLSurf = SURFACE::GetFirstLSurf((SURFACE *)this);
          if ( !FirstLSurf )
            break;
          if ( !v6 )
            v6 = *((_QWORD *)FirstLSurf + 33);
          v5 = 1;
          if ( qword_1C02562A8 )
            ((void (__fastcall *)(HSURF, struct SFMLOGICALSURFACE *, _QWORD))qword_1C02562A8)(this[6], FirstLSurf, 0LL);
        }
        if ( qword_1C02562C8 )
          qword_1C02562C8(v6);
        SURFREF::bDeleteSurface((__int64)v9, 0);
        if ( a2 && !v5 && !byte_1C02594CC )
        {
          v8 = this[6];
          byte_1C02594CC = 1;
          DbgkWerCaptureLiveKernelDump(L"win32kfull.sys", 400LL, 20LL, this, v8, 0LL, 0LL, 0LL, 0);
        }
      }
      SURFREF::~SURFREF((SURFREF *)v9);
    }
  }
}
