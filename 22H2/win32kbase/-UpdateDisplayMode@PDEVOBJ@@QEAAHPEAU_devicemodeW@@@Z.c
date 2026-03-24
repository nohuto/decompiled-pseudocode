/*
 * XREFs of ?UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z @ 0x1C013DEC4
 * Callers:
 *     ?DrvUpdateDisplayModeInPdev@@YAHPEAUHDEV__@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0145058 (-DrvUpdateDisplayModeInPdev@@YAHPEAUHDEV__@@PEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 * Callees:
 *     HmgSafeNextObjt @ 0x1C000EF80 (HmgSafeNextObjt.c)
 *     ?sizl@PDEVOBJ@@QEAA?AUtagSIZE@@XZ @ 0x1C002193C (-sizl@PDEVOBJ@@QEAA-AUtagSIZE@@XZ.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C0021968 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x1C002CB94 (--1SURFREF@@QEAA@XZ.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C002F680 (HmgDecrementShareReferenceCountEx.c)
 *     ?vDisableSurface@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@E@Z @ 0x1C00A8C50 (-vDisableSurface@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@E@Z.c)
 *     ??0SURFREF@@QEAA@PEAVSURFACE@@@Z @ 0x1C00A8D9C (--0SURFREF@@QEAA@PEAVSURFACE@@@Z.c)
 *     ?vResetSurfacePalette@@YAXPEAUHDEV__@@@Z @ 0x1C00B4E5C (-vResetSurfacePalette@@YAXPEAUHDEV__@@@Z.c)
 *     __security_check_cookie @ 0x1C00C5400 (__security_check_cookie.c)
 *     ?bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00C920C (-bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00CF8C0 (memset.c)
 *     memmove @ 0x1C00CF9C0 (memmove.c)
 *     ?bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z @ 0x1C013E1D0 (-bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z.c)
 */

__int64 __fastcall PDEVOBJ::UpdateDisplayMode(PDEVOBJ *this, struct _devicemodeW *Src)
{
  __int64 v2; // rdi
  unsigned int v3; // ebx
  unsigned int (__fastcall *v6)(_QWORD, _QWORD, struct _devicemodeW *, __int64, _DWORD *, HSURF *); // r14
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rax
  struct SURFACE *v16; // r12
  WORD dmSize; // cx
  __int64 v18; // r14
  __int64 Objt; // rax
  __int64 v20; // rdi
  int v21; // edx
  __int64 *v22; // rax
  __int64 v23; // rcx
  unsigned int v24; // edx
  HSURF v26; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v27; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v28[48]; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD v29[80]; // [rsp+80h] [rbp-80h] BYREF

  v2 = *(_QWORD *)this;
  v3 = 0;
  v6 = *(unsigned int (__fastcall **)(_QWORD, _QWORD, struct _devicemodeW *, __int64, _DWORD *, HSURF *))(*(_QWORD *)this + 2680LL);
  if ( v6 )
  {
    if ( qword_1C0255408 )
    {
      qword_1C0255408(v2, 1LL);
      v2 = *(_QWORD *)this;
    }
    memset(v29, 0, sizeof(v29));
    v26 = 0LL;
    if ( v6(*(_QWORD *)(v2 + 1800), *(_QWORD *)(v2 + 2592), Src, v2 + 2136, v29, &v26) )
    {
      *(_DWORD *)(*(_QWORD *)this + 2152LL) = v29[4];
      *(_DWORD *)(*(_QWORD *)this + 2156LL) = v29[5];
      *(_DWORD *)(*(_QWORD *)this + 2144LL) = v29[2];
      *(_DWORD *)(*(_QWORD *)this + 2148LL) = v29[3];
      *(_DWORD *)(*(_QWORD *)this + 2176LL) = v29[10];
      *(_DWORD *)(*(_QWORD *)this + 2180LL) = v29[11];
      *(_DWORD *)(*(_QWORD *)this + 2392LL) = v29[64];
      *(_DWORD *)(*(_QWORD *)this + 2396LL) = v29[65];
      *(_DWORD *)(*(_QWORD *)this + 2200LL) = v29[16];
      *(_DWORD *)(*(_QWORD *)this + 2204LL) = v29[17];
      *(_DWORD *)(*(_QWORD *)this + 2548LL) = (((Src->dmDisplayOrientation - 1) & 0xFFFFFFFD) == 0 ? 0x80 : 0) | *(_DWORD *)(*(_QWORD *)this + 2548LL) & 0xFFFFFF7F;
      v16 = *(struct SURFACE **)(*(_QWORD *)this + 2552LL);
      PDEVOBJ::vDisableSurface(this, 0, 0);
      SURFREF::SURFREF((SURFREF *)v28, v16);
      HmgDecrementShareReferenceCountEx((__int64)v16, 0LL);
      SURFREF::bDeleteSurface((__int64)v28, 0);
      SURFREF::~SURFREF((SURFREF *)v28);
      PDEVOBJ::bMakeSurface(this, v26);
      dmSize = *(_WORD *)(*(_QWORD *)(*(_QWORD *)this + 2592LL) + 68LL);
      if ( dmSize >= Src->dmSize )
        dmSize = Src->dmSize;
      memmove(*(void **)(*(_QWORD *)this + 2592LL), Src, dmSize);
      LODWORD(v18) = 0;
      while ( 1 )
      {
        Objt = HmgSafeNextObjt(v18, 1);
        v20 = Objt;
        if ( !Objt )
          break;
        v21 = *(_DWORD *)(Objt + 36);
        v18 = *(_QWORD *)Objt;
        if ( (v21 & 0x2000) == 0 )
        {
          if ( *(struct SURFACE **)(Objt + 496) == v16 )
          {
            DC::pSurface((DC *)Objt, *(struct SURFACE **)(*(_QWORD *)this + 2552LL));
            v22 = (__int64 *)PDEVOBJ::sizl(this, &v27);
            v21 = *(_DWORD *)(v20 + 36);
            v23 = *v22;
            *(_DWORD *)(v20 + 316) |= 0xFu;
            *(_QWORD *)(v20 + 512) = v23;
          }
          if ( (v21 & 0x200) != 0 && (*(_DWORD *)(*(_QWORD *)(v20 + 496) + 112LL) & 0x200) != 0 )
            v24 = v21 | 0x8000;
          else
            v24 = v21 & 0xFFFF7FFF;
          *(_DWORD *)(v20 + 36) = v24;
        }
      }
      vResetSurfacePalette(*(_QWORD **)this);
      ++gcModeChanges;
      return 1;
    }
    else
    {
      v11 = WdLogNewEntry5_WdWarning(v9, v8, v10);
      *(_QWORD *)(v11 + 24) = 0LL;
      WdLogEvent5_WdWarning(v11);
      v15 = WdLogNewEntry5_WdWarning(v13, v12, v14);
      WdLogEvent5_WdWarning(v15);
    }
  }
  else
  {
    v7 = WdLogNewEntry5_WdEvent(this);
    *(_QWORD *)(v7 + 24) = 0LL;
    WdLogEvent5_WdEvent(v7);
  }
  return v3;
}
