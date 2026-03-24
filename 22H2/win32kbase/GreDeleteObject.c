/*
 * XREFs of GreDeleteObject @ 0x1C0039970
 * Callers:
 *     DestroyCacheDC @ 0x1C0008970 (DestroyCacheDC.c)
 *     CleanupGDI @ 0x1C0008ABC (CleanupGDI.c)
 *     ?DestroyFont@@YAXPEAPEAUHFONT__@@@Z @ 0x1C0008E3C (-DestroyFont@@YAXPEAPEAUHFONT__@@@Z.c)
 *     ?DestroyRegion@@YAXPEAPEAUHRGN__@@@Z @ 0x1C0008E64 (-DestroyRegion@@YAXPEAPEAUHRGN__@@@Z.c)
 *     DestroyMonitor @ 0x1C0008F50 (DestroyMonitor.c)
 *     UserSetDCVisRgn @ 0x1C0039D90 (UserSetDCVisRgn.c)
 *     DeleteMaybeSpecialRgn @ 0x1C003ACB0 (DeleteMaybeSpecialRgn.c)
 *     UserValidateCopyRgn @ 0x1C006B740 (UserValidateCopyRgn.c)
 *     ?zzzUpdateUserScreen@@YAJXZ @ 0x1C00C77F4 (-zzzUpdateUserScreen@@YAJXZ.c)
 *     bInitBRUSHOBJ @ 0x1C02972A0 (bInitBRUSHOBJ.c)
 * Callees:
 *     bDeleteSurface @ 0x1C001CE70 (bDeleteSurface.c)
 *     bDeleteBrush @ 0x1C001D7B0 (bDeleteBrush.c)
 *     ?bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ @ 0x1C0032950 (-bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C0035D10 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     bDeletePalette @ 0x1C0074320 (bDeletePalette.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x1C00C9240 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
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
    if ( qword_1C0255258 )
      v9 = qword_1C0255258();
    else
      v9 = -1073741637;
    if ( v9 >= 0 )
    {
      if ( qword_1C0255260 )
        return (BOOL)qword_1C0255260(a1, 0LL);
    }
    return v8;
  }
  if ( v6 != 6 )
    return 0LL;
  return bDeleteBrush(a1, 0, 0);
}
