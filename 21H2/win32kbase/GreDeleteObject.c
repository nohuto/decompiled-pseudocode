/*
 * XREFs of GreDeleteObject @ 0x1C0038500
 * Callers:
 *     DestroyCacheDC @ 0x1C00074F0 (DestroyCacheDC.c)
 *     CleanupGDI @ 0x1C000763C (CleanupGDI.c)
 *     ?DestroyFont@@YAXPEAPEAUHFONT__@@@Z @ 0x1C00079BC (-DestroyFont@@YAXPEAPEAUHFONT__@@@Z.c)
 *     ?DestroyRegion@@YAXPEAPEAUHRGN__@@@Z @ 0x1C00079E4 (-DestroyRegion@@YAXPEAPEAUHRGN__@@@Z.c)
 *     DestroyMonitor @ 0x1C0007AD0 (DestroyMonitor.c)
 *     UserSetDCVisRgn @ 0x1C0038920 (UserSetDCVisRgn.c)
 *     DeleteMaybeSpecialRgn @ 0x1C0039840 (DeleteMaybeSpecialRgn.c)
 *     UserValidateCopyRgn @ 0x1C006AC90 (UserValidateCopyRgn.c)
 *     ?zzzUpdateUserScreen@@YAJXZ @ 0x1C00C7464 (-zzzUpdateUserScreen@@YAJXZ.c)
 *     bInitBRUSHOBJ @ 0x1C02982A0 (bInitBRUSHOBJ.c)
 * Callees:
 *     bDeleteSurface @ 0x1C001BA00 (bDeleteSurface.c)
 *     bDeleteBrush @ 0x1C001C340 (bDeleteBrush.c)
 *     ?bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ @ 0x1C00314E0 (-bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C00348A0 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     bDeletePalette @ 0x1C0082990 (bDeletePalette.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x1C00C8F50 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GreDeleteObject(struct HOBJ__ *a1)
{
  unsigned int v2; // ecx
  unsigned int v3; // ecx
  unsigned int v4; // ecx
  unsigned int v5; // ecx
  unsigned int v6; // ecx
  BOOL v8; // ebx
  int v9; // eax
  struct HOBJ__ *v10[9]; // [rsp+20h] [rbp-48h] BYREF

  if ( ((unsigned int)a1 & 0x800000) != 0 )
    return 1LL;
  v2 = (((unsigned int)a1 >> 16) & 0x1F) - 1;
  if ( !v2 )
    return 0LL;
  v3 = v2 - 3;
  if ( !v3 )
  {
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v10, (HRGN)a1, 0, 0);
    v8 = 0;
    if ( v10[0] && !*((_DWORD *)v10[0] + 8) )
      v8 = RGNOBJAPI::bDeleteRGNOBJAPI(v10) != 0;
    RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v10);
    return v8;
  }
  v4 = v3 - 1;
  if ( !v4 )
    return bDeleteSurface((__int64)a1);
  v5 = v4 - 3;
  if ( !v5 )
    return bDeletePalette(a1, 0LL, 0LL);
  v6 = v5 - 2;
  if ( !v6 )
  {
    v8 = 0;
    if ( qword_1C0256258 )
      v9 = qword_1C0256258();
    else
      v9 = -1073741637;
    if ( v9 >= 0 )
    {
      if ( qword_1C0256260 )
        return (BOOL)qword_1C0256260(a1, 0LL);
    }
    return v8;
  }
  if ( v6 != 6 )
    return 0LL;
  return bDeleteBrush(a1, 0, 0);
}
