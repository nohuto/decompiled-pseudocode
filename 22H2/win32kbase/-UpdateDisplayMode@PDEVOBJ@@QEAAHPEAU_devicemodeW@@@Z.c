/*
 * XREFs of ?UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z @ 0x1C0155C9C
 * Callers:
 *     ?DrvUpdateDisplayModeInPdev@@YAHPEAUHDEV__@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C01623D4 (-DrvUpdateDisplayModeInPdev@@YAHPEAUHDEV__@@PEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 * Callees:
 *     HmgSafeNextObjt @ 0x1C0035C80 (HmgSafeNextObjt.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x1C003F8A0 (--1SURFREF@@QEAA@XZ.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C00421F0 (HmgDecrementShareReferenceCountEx.c)
 *     ?bDeleteSurface@SURFREF@@QEAAHH@Z @ 0x1C004BD9C (-bDeleteSurface@SURFREF@@QEAAHH@Z.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C005FD78 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     ?bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z @ 0x1C0062100 (-bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z.c)
 *     ?sizl@PDEVOBJ@@QEAA?AUtagSIZE@@XZ @ 0x1C00AAD9C (-sizl@PDEVOBJ@@QEAA-AUtagSIZE@@XZ.c)
 *     ?vDisableSurface@PDEVOBJ@@QEAAXE@Z @ 0x1C00BBAF0 (-vDisableSurface@PDEVOBJ@@QEAAXE@Z.c)
 *     ??0SURFREF@@QEAA@PEAVSURFACE@@@Z @ 0x1C00BBBE4 (--0SURFREF@@QEAA@PEAVSURFACE@@@Z.c)
 *     ?vResetSurfacePalette@@YAXPEAUHDEV__@@@Z @ 0x1C00C2A5C (-vResetSurfacePalette@@YAXPEAUHDEV__@@@Z.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D6A00 (memset.c)
 *     memmove @ 0x1C00D6F40 (memmove.c)
 */

__int64 __fastcall PDEVOBJ::UpdateDisplayMode(PDEVOBJ *this, struct _devicemodeW *Src)
{
  unsigned int v3; // ebx
  __int64 v4; // rcx
  unsigned int (__fastcall *v6)(_QWORD, _QWORD, struct _devicemodeW *, __int64, _DWORD *, HSURF *); // rdi
  __int64 v7; // rcx
  struct SURFACE *v8; // r15
  WORD dmSize; // cx
  unsigned int v10; // r14d
  DC *v11; // rdi
  struct SURFACE *v12; // rax
  int v13; // ecx
  unsigned int v14; // ecx
  __int64 v15; // rcx
  __int64 v16; // rax
  HSURF v18; // [rsp+40h] [rbp-C0h] BYREF
  DC *v19; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v20; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v21[40]; // [rsp+58h] [rbp-A8h] BYREF
  _DWORD v22[80]; // [rsp+80h] [rbp-80h] BYREF

  v3 = 0;
  v4 = *(_QWORD *)this;
  v6 = *(unsigned int (__fastcall **)(_QWORD, _QWORD, struct _devicemodeW *, __int64, _DWORD *, HSURF *))(v4 + 2656);
  if ( v6 )
  {
    if ( qword_1C0294818 )
      qword_1C0294818(v4, 1LL);
    memset(v22, 0, sizeof(v22));
    v7 = *(_QWORD *)this;
    v18 = 0LL;
    if ( v6(*(_QWORD *)(v7 + 1768), *(_QWORD *)(v7 + 2568), Src, v7 + 2104, v22, &v18) )
    {
      *(_DWORD *)(*(_QWORD *)this + 2120LL) = v22[4];
      *(_DWORD *)(*(_QWORD *)this + 2124LL) = v22[5];
      *(_DWORD *)(*(_QWORD *)this + 2112LL) = v22[2];
      *(_DWORD *)(*(_QWORD *)this + 2116LL) = v22[3];
      *(_DWORD *)(*(_QWORD *)this + 2144LL) = v22[10];
      *(_DWORD *)(*(_QWORD *)this + 2148LL) = v22[11];
      *(_DWORD *)(*(_QWORD *)this + 2360LL) = v22[64];
      *(_DWORD *)(*(_QWORD *)this + 2364LL) = v22[65];
      *(_DWORD *)(*(_QWORD *)this + 2168LL) = v22[16];
      *(_DWORD *)(*(_QWORD *)this + 2172LL) = v22[17];
      *(_DWORD *)(*(_QWORD *)this + 2516LL) = (((Src->dmDisplayOrientation - 1) & 0xFFFFFFFD) == 0 ? 0x80 : 0) | *(_DWORD *)(*(_QWORD *)this + 2516LL) & 0xFFFFFF7F;
      v8 = *(struct SURFACE **)(*(_QWORD *)this + 2528LL);
      PDEVOBJ::vDisableSurface(this, 0);
      SURFREF::SURFREF((SURFREF *)v21, v8);
      HmgDecrementShareReferenceCountEx((int *)v8, 0LL);
      SURFREF::bDeleteSurface((SURFREF *)v21);
      SURFREF::~SURFREF((SURFREF *)v21);
      PDEVOBJ::bMakeSurface(this, v18);
      dmSize = *(_WORD *)(*(_QWORD *)(*(_QWORD *)this + 2568LL) + 68LL);
      if ( dmSize >= Src->dmSize )
        dmSize = Src->dmSize;
      memmove(*(void **)(*(_QWORD *)this + 2568LL), Src, dmSize);
      v10 = 0;
      v19 = 0LL;
      while ( 1 )
      {
        v10 = HmgSafeNextObjt(v10, 1, &v19);
        if ( !v10 )
          break;
        v11 = v19;
        if ( (*((_DWORD *)v19 + 9) & 0x2000) == 0 )
        {
          v12 = (struct SURFACE *)*((_QWORD *)v19 + 62);
          if ( v12 == v8 )
          {
            DC::pSurface(v19, *(struct SURFACE **)(*(_QWORD *)this + 2528LL));
            *((_QWORD *)v11 + 64) = **(_QWORD **)&PDEVOBJ::sizl(this, &v20);
            *((_DWORD *)v11 + 79) |= 0xFu;
            v12 = (struct SURFACE *)*((_QWORD *)v11 + 62);
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
