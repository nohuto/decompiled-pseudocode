/*
 * XREFs of ?vCleanupRedirectionSurface@@YAXPEAVSURFACE@@_N@Z @ 0x1C016F53C
 * Callers:
 *     pProcessDfbSurfacesInternal @ 0x1C0061CD0 (pProcessDfbSurfacesInternal.c)
 *     ?DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z @ 0x1C01708D4 (-DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z.c)
 * Callees:
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C001CA20 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x1C001F08C (--1SURFREF@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C0063C24 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ?GetFirstLSurf@SURFACE@@QEAAPEAVSFMLOGICALSURFACE@@XZ @ 0x1C00AC930 (-GetFirstLSurf@SURFACE@@QEAAPEAVSFMLOGICALSURFACE@@XZ.c)
 *     IsvSpDwmMigrateLSurfShapeReferenceSupported @ 0x1C00C5D84 (IsvSpDwmMigrateLSurfShapeReferenceSupported.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

void __fastcall vCleanupRedirectionSurface(HSURF *this, char a2)
{
  char v4; // si
  __int64 v5; // rdi
  struct SFMLOGICALSURFACE *FirstLSurf; // rax
  int v7; // eax
  SURFACE *v8; // rcx
  HSURF v9; // [rsp+20h] [rbp-68h]
  _BYTE v10[32]; // [rsp+50h] [rbp-38h] BYREF
  SURFACE *v11; // [rsp+70h] [rbp-18h]

  if ( (int)IsvSpDwmMigrateLSurfShapeReferenceSupported() >= 0 && qword_1C029B040 && (int)qword_1C029B040() >= 0 )
  {
    SURFREF::SURFREF((SURFREF *)v10, this[4]);
    if ( v11 )
    {
      v4 = 0;
      v5 = 0LL;
      while ( 1 )
      {
        FirstLSurf = SURFACE::GetFirstLSurf((SURFACE *)this);
        if ( !FirstLSurf )
          break;
        if ( !v5 )
          v5 = *((_QWORD *)FirstLSurf + 33);
        v4 = 1;
        if ( qword_1C029B028 )
          ((void (__fastcall *)(HSURF, struct SFMLOGICALSURFACE *, _QWORD))qword_1C029B028)(this[6], FirstLSurf, 0LL);
      }
      if ( qword_1C029B048 )
        qword_1C029B048(v5);
      v7 = SURFACE::bDeleteSurface(v11, 0, 0);
      v8 = v11;
      if ( v7 )
        v8 = 0LL;
      v11 = v8;
      if ( a2 && !v4 && !byte_1C029E444 )
      {
        v9 = this[6];
        byte_1C029E444 = 1;
        DbgkWerCaptureLiveKernelDump(L"win32kfull.sys", 400LL, 20LL, this, v9, 0LL, 0LL, 0LL, 0);
      }
    }
    SURFREF::~SURFREF((SURFREF *)v10);
  }
}
