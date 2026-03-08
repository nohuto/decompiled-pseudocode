/*
 * XREFs of ?UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z @ 0x1C01828EC
 * Callers:
 *     ?DrvUpdateDisplayModeInPdev@@YAHPEAUHDEV__@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C018F15C (-DrvUpdateDisplayModeInPdev@@YAHPEAUHDEV__@@PEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 * Callees:
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C001A878 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     ?bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z @ 0x1C00274B0 (-bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z.c)
 *     ?bDeleteSurface@SURFREF@@QEAAHH@Z @ 0x1C0029684 (-bDeleteSurface@SURFREF@@QEAAHH@Z.c)
 *     ?vDisableSurface@PDEVOBJ@@QEAAXE@Z @ 0x1C002B5B0 (-vDisableSurface@PDEVOBJ@@QEAAXE@Z.c)
 *     HmgIncrementShareReferenceCount @ 0x1C0046970 (HmgIncrementShareReferenceCount.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C00483B0 (HmgDecrementShareReferenceCountEx.c)
 *     HmgSafeNextObjt @ 0x1C006EFB0 (HmgSafeNextObjt.c)
 *     ?sizl@PDEVOBJ@@QEAA?AUtagSIZE@@XZ @ 0x1C00BAADC (-sizl@PDEVOBJ@@QEAA-AUtagSIZE@@XZ.c)
 *     ?vResetSurfacePalette@@YAXPEAUHDEV__@@@Z @ 0x1C00D16A0 (-vResetSurfacePalette@@YAXPEAUHDEV__@@@Z.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00E1980 (memset.c)
 *     memmove @ 0x1C00E1EC0 (memmove.c)
 */

__int64 __fastcall PDEVOBJ::UpdateDisplayMode(PDEVOBJ *this, struct _devicemodeW *Src)
{
  unsigned int v3; // ebx
  __int64 v4; // rcx
  unsigned int (__fastcall *v6)(_QWORD, _QWORD, struct _devicemodeW *, __int64, _DWORD *, HSURF *); // r14
  __int64 v7; // rcx
  DC *v8; // r14
  WORD dmSize; // cx
  unsigned int v10; // r15d
  DC *v11; // rdi
  DC *v12; // rax
  int v13; // ecx
  unsigned int v14; // ecx
  __int64 v15; // rcx
  __int64 v16; // rax
  DC *v18; // [rsp+40h] [rbp-C0h] BYREF
  HSURF v19; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v20; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD v21[80]; // [rsp+60h] [rbp-A0h] BYREF

  v3 = 0;
  v4 = *(_QWORD *)this;
  v6 = *(unsigned int (__fastcall **)(_QWORD, _QWORD, struct _devicemodeW *, __int64, _DWORD *, HSURF *))(v4 + 2656);
  if ( v6 )
  {
    if ( qword_1C02D5988 )
      qword_1C02D5988(v4, 1LL);
    memset(v21, 0, sizeof(v21));
    v7 = *(_QWORD *)this;
    v19 = 0LL;
    if ( v6(*(_QWORD *)(v7 + 1768), *(_QWORD *)(v7 + 2568), Src, v7 + 2104, v21, &v19) )
    {
      *(_DWORD *)(*(_QWORD *)this + 2120LL) = v21[4];
      *(_DWORD *)(*(_QWORD *)this + 2124LL) = v21[5];
      *(_DWORD *)(*(_QWORD *)this + 2112LL) = v21[2];
      *(_DWORD *)(*(_QWORD *)this + 2116LL) = v21[3];
      *(_DWORD *)(*(_QWORD *)this + 2144LL) = v21[10];
      *(_DWORD *)(*(_QWORD *)this + 2148LL) = v21[11];
      *(_DWORD *)(*(_QWORD *)this + 2360LL) = v21[64];
      *(_DWORD *)(*(_QWORD *)this + 2364LL) = v21[65];
      *(_DWORD *)(*(_QWORD *)this + 2168LL) = v21[16];
      *(_DWORD *)(*(_QWORD *)this + 2172LL) = v21[17];
      *(_DWORD *)(*(_QWORD *)this + 2516LL) = (((Src->dmDisplayOrientation - 1) & 0xFFFFFFFD) == 0 ? 0x80 : 0) | *(_DWORD *)(*(_QWORD *)this + 2516LL) & 0xFFFFFF7F;
      v8 = *(DC **)(*(_QWORD *)this + 2528LL);
      PDEVOBJ::vDisableSurface(this, 0);
      if ( v8 )
      {
        v18 = v8;
        HmgIncrementShareReferenceCount((int *)v8);
      }
      HmgDecrementShareReferenceCountEx((int *)v8, 0LL);
      SURFREF::bDeleteSurface((SURFREF *)&v18);
      if ( v18 )
        HmgDecrementShareReferenceCountEx((int *)v18, 0LL);
      PDEVOBJ::bMakeSurface(this, v19);
      dmSize = *(_WORD *)(*(_QWORD *)(*(_QWORD *)this + 2568LL) + 68LL);
      if ( dmSize >= Src->dmSize )
        dmSize = Src->dmSize;
      memmove(*(void **)(*(_QWORD *)this + 2568LL), Src, dmSize);
      v10 = 0;
      v18 = 0LL;
      while ( 1 )
      {
        v10 = HmgSafeNextObjt(v10, 1, &v18);
        if ( !v10 )
          break;
        v11 = v18;
        if ( (*((_DWORD *)v18 + 9) & 0x2000) == 0 )
        {
          v12 = (DC *)*((_QWORD *)v18 + 62);
          if ( v12 == v8 )
          {
            DC::pSurface(v18, *(struct SURFACE **)(*(_QWORD *)this + 2528LL));
            *((_QWORD *)v11 + 64) = **(_QWORD **)&PDEVOBJ::sizl(this, &v20);
            *((_DWORD *)v11 + 79) |= 0xFu;
            v12 = (DC *)*((_QWORD *)v11 + 62);
          }
          v13 = *((_DWORD *)v11 + 9);
          if ( (v13 & 0x200) != 0 && (*((_DWORD *)v12 + 28) & 0x200) != 0 )
            v14 = v13 | 0x8000;
          else
            v14 = v13 & 0xFFFF7FFF;
          *((_DWORD *)v11 + 9) = v14;
        }
      }
      vResetSurfacePalette(*(_QWORD **)this);
      v16 = SGDGetSessionState(v15);
      v3 = 1;
      ++*(_DWORD *)(*(_QWORD *)(v16 + 24) + 3816LL);
    }
    else
    {
      WdLogSingleEntry1(3LL, 0LL);
      WdLogSingleEntry0(3LL);
    }
  }
  else
  {
    WdLogSingleEntry1(4LL, 0LL);
  }
  return v3;
}
