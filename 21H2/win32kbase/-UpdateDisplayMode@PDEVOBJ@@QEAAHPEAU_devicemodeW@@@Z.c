/*
 * XREFs of ?UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z @ 0x1C016AB74
 * Callers:
 *     ?DrvUpdateDisplayModeInPdev@@YAHPEAUHDEV__@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0171DC0 (-DrvUpdateDisplayModeInPdev@@YAHPEAUHDEV__@@PEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 * Callees:
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C001CA20 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x1C001F08C (--1SURFREF@@QEAA@XZ.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C0021710 (HmgDecrementShareReferenceCountEx.c)
 *     HmgSafeNextObjt @ 0x1C0061900 (HmgSafeNextObjt.c)
 *     ?sizl@PDEVOBJ@@QEAA?AUtagSIZE@@XZ @ 0x1C0071D24 (-sizl@PDEVOBJ@@QEAA-AUtagSIZE@@XZ.c)
 *     ?vResetSurfacePalette@@YAXPEAUHDEV__@@@Z @ 0x1C00C40A4 (-vResetSurfacePalette@@YAXPEAUHDEV__@@@Z.c)
 *     ??0SURFREF@@QEAA@PEAVSURFACE@@@Z @ 0x1C00C9214 (--0SURFREF@@QEAA@PEAVSURFACE@@@Z.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C00CBE2C (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     ?vDisableSurface@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@E@Z @ 0x1C00CE0D0 (-vDisableSurface@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@E@Z.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     memmove @ 0x1C00DE8C0 (memmove.c)
 *     ?bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z @ 0x1C016AE70 (-bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z.c)
 */

__int64 __fastcall PDEVOBJ::UpdateDisplayMode(PDEVOBJ *this, struct _devicemodeW *Src)
{
  __int64 v2; // rbx
  unsigned int v3; // edi
  unsigned int (__fastcall *v6)(_QWORD, _QWORD, struct _devicemodeW *, __int64, _DWORD *, HSURF *); // r14
  struct SURFACE *v7; // r12
  int v8; // eax
  SURFACE *v9; // rcx
  WORD dmSize; // cx
  __int64 v11; // r14
  __int64 Objt; // rax
  __int64 v13; // rbx
  int v14; // edx
  __int64 *v15; // rax
  __int64 v16; // rcx
  unsigned int v17; // edx
  HSURF v19; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v20; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v21[32]; // [rsp+50h] [rbp-B0h] BYREF
  SURFACE *v22; // [rsp+70h] [rbp-90h]
  _DWORD v23[80]; // [rsp+80h] [rbp-80h] BYREF

  v2 = *(_QWORD *)this;
  v3 = 0;
  v6 = *(unsigned int (__fastcall **)(_QWORD, _QWORD, struct _devicemodeW *, __int64, _DWORD *, HSURF *))(*(_QWORD *)this + 2656LL);
  if ( v6 )
  {
    if ( qword_1C029B188 )
    {
      qword_1C029B188(*(_QWORD *)this, 1LL);
      v2 = *(_QWORD *)this;
    }
    memset(v23, 0, sizeof(v23));
    v19 = 0LL;
    if ( v6(*(_QWORD *)(v2 + 1768), *(_QWORD *)(v2 + 2568), Src, v2 + 2104, v23, &v19) )
    {
      *(_DWORD *)(*(_QWORD *)this + 2120LL) = v23[4];
      *(_DWORD *)(*(_QWORD *)this + 2124LL) = v23[5];
      *(_DWORD *)(*(_QWORD *)this + 2112LL) = v23[2];
      *(_DWORD *)(*(_QWORD *)this + 2116LL) = v23[3];
      *(_DWORD *)(*(_QWORD *)this + 2144LL) = v23[10];
      *(_DWORD *)(*(_QWORD *)this + 2148LL) = v23[11];
      *(_DWORD *)(*(_QWORD *)this + 2360LL) = v23[64];
      *(_DWORD *)(*(_QWORD *)this + 2364LL) = v23[65];
      *(_DWORD *)(*(_QWORD *)this + 2168LL) = v23[16];
      *(_DWORD *)(*(_QWORD *)this + 2172LL) = v23[17];
      *(_DWORD *)(*(_QWORD *)this + 2516LL) = (((Src->dmDisplayOrientation - 1) & 0xFFFFFFFD) == 0 ? 0x80 : 0) | *(_DWORD *)(*(_QWORD *)this + 2516LL) & 0xFFFFFF7F;
      v7 = *(struct SURFACE **)(*(_QWORD *)this + 2528LL);
      PDEVOBJ::vDisableSurface(this, 0, 0);
      SURFREF::SURFREF((SURFREF *)v21, v7);
      HmgDecrementShareReferenceCountEx((unsigned int *)v7, 0LL);
      v8 = SURFACE::bDeleteSurface(v22, 0, 0);
      v9 = v22;
      if ( v8 )
        v9 = 0LL;
      v22 = v9;
      SURFREF::~SURFREF((SURFREF *)v21);
      PDEVOBJ::bMakeSurface(this, v19);
      dmSize = *(_WORD *)(*(_QWORD *)(*(_QWORD *)this + 2568LL) + 68LL);
      if ( dmSize >= Src->dmSize )
        dmSize = Src->dmSize;
      memmove(*(void **)(*(_QWORD *)this + 2568LL), Src, dmSize);
      LODWORD(v11) = 0;
      while ( 1 )
      {
        Objt = HmgSafeNextObjt(v11, 1);
        v13 = Objt;
        if ( !Objt )
          break;
        v14 = *(_DWORD *)(Objt + 36);
        v11 = *(_QWORD *)Objt;
        if ( (v14 & 0x2000) == 0 )
        {
          if ( *(struct SURFACE **)(Objt + 496) == v7 )
          {
            DC::pSurface((DC *)Objt, *(struct SURFACE **)(*(_QWORD *)this + 2528LL));
            v15 = (__int64 *)PDEVOBJ::sizl(this, &v20);
            v14 = *(_DWORD *)(v13 + 36);
            v16 = *v15;
            *(_DWORD *)(v13 + 316) |= 0xFu;
            *(_QWORD *)(v13 + 512) = v16;
          }
          if ( (v14 & 0x200) != 0 && _bittest((const signed __int32 *)(*(_QWORD *)(v13 + 496) + 112LL), 9u) )
            v17 = v14 | 0x8000;
          else
            v17 = v14 & 0xFFFF7FFF;
          *(_DWORD *)(v13 + 36) = v17;
        }
      }
      vResetSurfacePalette(*(_QWORD **)this);
      ++gcModeChanges;
      return 1;
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
