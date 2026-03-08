/*
 * XREFs of ?vCleanupRedirectionSurface@@YAXPEAVSURFACE@@_N@Z @ 0x1C0186AB8
 * Callers:
 *     pProcessDfbSurfacesInternal @ 0x1C01878E0 (pProcessDfbSurfacesInternal.c)
 *     ?DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z @ 0x1C018D6F8 (-DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z.c)
 * Callees:
 *     ?bDeleteSurface@SURFREF@@QEAAHH@Z @ 0x1C0029684 (-bDeleteSurface@SURFREF@@QEAAHH@Z.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C00483B0 (HmgDecrementShareReferenceCountEx.c)
 *     HmgShareLockCheck @ 0x1C0049E60 (HmgShareLockCheck.c)
 *     ?GetFirstLSurf@SURFACE@@QEAAPEAVSFMLOGICALSURFACE@@XZ @ 0x1C00B8650 (-GetFirstLSurf@SURFACE@@QEAAPEAVSFMLOGICALSURFACE@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 *     IsvSpDwmMigrateLSurfShapeReferenceSupported @ 0x1C027165C (IsvSpDwmMigrateLSurfShapeReferenceSupported.c)
 */

void __fastcall vCleanupRedirectionSurface(struct SURFACE *this, char a2)
{
  char v4; // si
  __int64 v5; // rdi
  struct SFMLOGICALSURFACE *FirstLSurf; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  int *v9; // [rsp+70h] [rbp+18h] BYREF

  if ( (int)IsvSpDwmMigrateLSurfShapeReferenceSupported() >= 0 )
  {
    if ( qword_1C02D5840 )
    {
      if ( (int)qword_1C02D5840() >= 0 )
      {
        v9 = (int *)HmgShareLockCheck(*((_QWORD *)this + 4), 5);
        if ( v9 )
        {
          v4 = 0;
          v5 = 0LL;
          while ( 1 )
          {
            FirstLSurf = SURFACE::GetFirstLSurf(this);
            if ( !FirstLSurf )
              break;
            if ( !v5 )
              v5 = *((_QWORD *)FirstLSurf + 33);
            v4 = 1;
            if ( qword_1C02D5828 )
              ((void (__fastcall *)(_QWORD, struct SFMLOGICALSURFACE *, _QWORD))qword_1C02D5828)(
                *((_QWORD *)this + 6),
                FirstLSurf,
                0LL);
          }
          if ( qword_1C02D5848 )
            qword_1C02D5848(v5);
          SURFREF::bDeleteSurface((SURFREF *)&v9);
          v8 = *(_QWORD *)(SGDGetSessionState(v7) + 24);
          if ( a2 && !v4 && !*(_BYTE *)(v8 + 6488) )
          {
            *(_BYTE *)(v8 + 6488) = 1;
            DbgkWerCaptureLiveKernelDump(L"win32kfull.sys", 400LL, 20LL, this, *((_QWORD *)this + 6), 0LL, 0LL, 0LL, 0);
          }
          if ( v9 )
            HmgDecrementShareReferenceCountEx(v9, 0LL);
        }
      }
    }
  }
}
