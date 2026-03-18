/*
 * XREFs of ?GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z @ 0x1C013D690
 * Callers:
 *     GreExtEscape @ 0x1C013D59C (GreExtEscape.c)
 * Callees:
 *     ?pSurfobj@SURFACE@@QEAAPEAU_SURFOBJ@@XZ @ 0x1C00070F4 (-pSurfobj@SURFACE@@QEAAPEAU_SURFOBJ@@XZ.c)
 *     ?bValidSurf@XDCOBJ@@QEAAHXZ @ 0x1C002BB70 (-bValidSurf@XDCOBJ@@QEAAHXZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C003FD30 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x1C008AE30 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00E47F8 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?fBlockExtEscape@@YAHAEAVDCOBJ@@@Z @ 0x1C013DBEC (-fBlockExtEscape@@YAHAEAVDCOBJ@@@Z.c)
 *     ?Escape@PDEVOBJ@@QEAAKPEAU_SURFOBJ@@KKPEAXK1@Z @ 0x1C013DC30 (-Escape@PDEVOBJ@@QEAAKPEAU_SURFOBJ@@KKPEAXK1@Z.c)
 *     ?iCheckPassthroughImage@@YAHAEAVDCOBJ@@AEAVPDEVOBJ@@HHPEAXH2@Z @ 0x1C013DC80 (-iCheckPassthroughImage@@YAHAEAVDCOBJ@@AEAVPDEVOBJ@@HHPEAXH2@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     memset @ 0x1C0160540 (memset.c)
 *     ?DoFontManagement@@YAKAEAVDCOBJ@@KKPEAXK1@Z @ 0x1C027936C (-DoFontManagement@@YAKAEAVDCOBJ@@KKPEAXK1@Z.c)
 *     ?iOpenGLExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z @ 0x1C02797A8 (-iOpenGLExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z.c)
 *     ?iWndObjSetupExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z @ 0x1C0279E28 (-iWndObjSetupExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z.c)
 *     ?hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z @ 0x1C02A4808 (-hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z.c)
 */

__int64 __fastcall GreExtEscapeInternal(
        struct DCOBJ *a1,
        unsigned int a2,
        unsigned int a3,
        char *a4,
        unsigned int a5,
        char *a6)
{
  char *v6; // rsi
  __int64 v10; // rcx
  HDEV v11; // rbx
  __int64 v12; // r8
  int v13; // r15d
  __int64 v15; // rcx
  __int64 v16; // rax
  unsigned int v17; // ebx
  __int64 v18; // rdx
  __int64 v19; // rax
  int v20; // edx
  __int64 v21; // r8
  struct _SURFOBJ *v22; // r15
  HDEV v23; // rcx
  HDEV DeviceHdev; // rax
  HDEV v25; // r8
  int v26; // ecx
  __int64 v27; // rax
  unsigned int v28; // eax
  int v29; // [rsp+40h] [rbp-3E8h]
  HDEV v30; // [rsp+50h] [rbp-3D8h] BYREF
  unsigned __int16 v31; // [rsp+58h] [rbp-3D0h]
  int v32; // [rsp+5Ch] [rbp-3CCh]
  int v33; // [rsp+60h] [rbp-3C8h]
  __int64 v34; // [rsp+68h] [rbp-3C0h] BYREF
  int v35; // [rsp+74h] [rbp-3B4h]
  struct _RECTL v36; // [rsp+80h] [rbp-3A8h] BYREF
  _BYTE v37[112]; // [rsp+90h] [rbp-398h] BYREF
  __int128 v38; // [rsp+100h] [rbp-328h] BYREF
  __int128 v39; // [rsp+110h] [rbp-318h]
  _BYTE v40[704]; // [rsp+120h] [rbp-308h] BYREF

  v6 = a4;
  v10 = *(_QWORD *)a1;
  v11 = *(HDEV *)(v10 + 48);
  v30 = v11;
  if ( !*((_DWORD *)v11 + 3) && a2 != 4354 )
    return 0LL;
  v12 = *((unsigned int *)v11 + 646);
  v13 = 0;
  v29 = 0;
  if ( a2 == 8 )
  {
    if ( a3 < 4 )
      return 0LL;
    v29 = *(_DWORD *)a4;
    v32 = *(_DWORD *)a4;
    v13 = v32;
    if ( (unsigned int)(v32 - 4352) <= 1 && (v12 & 8) != 0 )
      return 0LL;
LABEL_15:
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v37);
    DEVLOCKOBJ::vLockNoDrawing((DEVLOCKOBJ *)v37, a1);
    if ( !(unsigned int)fBlockExtEscape(a1) )
    {
      v15 = *(_QWORD *)a1;
      if ( *(_DWORD *)(*(_QWORD *)a1 + 32LL) )
      {
        if ( (*(_DWORD *)(*(_QWORD *)(v15 + 48) + 40LL) & 0x80u) != 0 )
        {
          v18 = *(_QWORD *)(v15 + 496);
          if ( v18 && *(_QWORD *)(v18 + 40) != *((_QWORD *)v11 + 221) )
            goto LABEL_20;
        }
        else
        {
          v16 = *(_QWORD *)(v15 + 496);
          if ( !v16 || *(_WORD *)(v16 + 100) != 3 )
            goto LABEL_20;
        }
      }
      v38 = 0LL;
      v39 = 0LL;
      v34 = 0LL;
      v35 = 0;
      if ( a2 != 25 )
      {
LABEL_33:
        if ( a2 - 256 <= 0x2FE || a2 == 8 && (unsigned int)(v13 - 256) <= 0x2FE )
        {
          v28 = DoFontManagement(a1, a2, a3, v6, a5, a6);
        }
        else if ( a2 - 4119 <= 1 || a2 == 8 && (unsigned int)(v13 - 4119) <= 1 )
        {
          v28 = iCheckPassthroughImage(a1, (struct PDEVOBJ *)&v30, a2, a3, v6, a5, a6);
        }
        else
        {
          if ( (unsigned int)XDCOBJ::bValidSurf(a1) && !a6 )
            ++*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 496LL) + 92LL);
          v22 = SURFACE::pSurfobj(*(SURFACE **)(*(_QWORD *)a1 + 496LL));
          if ( ((_DWORD)v11[10] & 0x20000) != 0 && a2 == 8 && (unsigned int)(v29 - 4352) <= 1 )
          {
            v23 = *(HDEV *)(v21 + 48);
            v36 = *(struct _RECTL *)(v21 + 1032);
            DeviceHdev = hdevFindDeviceHdev(v23, &v36, 0LL);
            v25 = DeviceHdev;
            if ( DeviceHdev )
            {
              if ( *(_QWORD *)(*(_QWORD *)a1 + 496LL) == *((_QWORD *)v11 + 316) )
                v22 = SURFACE::pSurfobj(*((SURFACE **)DeviceHdev + 316));
              v11 = v25;
              v30 = v25;
            }
          }
          if ( !*((_QWORD *)v11 + 357) )
            goto LABEL_20;
          if ( !v22 )
          {
            memset(v40, 0, 0x2B8uLL);
            v22 = SURFACE::pSurfobj((SURFACE *)v40);
            v22->dhpdev = *(DHPDEV *)(*(_QWORD *)a1 + 24LL);
            v22->hdev = *(HDEV *)(*(_QWORD *)a1 + 48LL);
            v22->iType = 1;
            if ( a2 == 17 && a3 >= 2 )
            {
              v31 = *(_WORD *)v6;
              *(_DWORD *)(*(_QWORD *)a1 + 2092LL) = v31;
              PDEVOBJ::Escape((PDEVOBJ *)&v30, v22, 0x11u, a3, v6, a5, a6);
LABEL_54:
              DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v37);
              return 1LL;
            }
            if ( a2 == 33 && a3 >= 2 )
            {
              v26 = *(unsigned __int16 *)v6;
              v33 = v26;
              v27 = *(_QWORD *)a1;
              if ( v26 )
                *(_DWORD *)(v27 + 36) |= 0x400u;
              else
                *(_DWORD *)(v27 + 36) &= ~0x400u;
              goto LABEL_54;
            }
          }
          v28 = PDEVOBJ::Escape((PDEVOBJ *)&v30, v22, a2, a3, v6, a5, a6);
        }
        v17 = v28;
        goto LABEL_21;
      }
      if ( *((int *)v11 + 448) >= 0 )
      {
LABEL_28:
        v19 = *(_QWORD *)(v15 + 496);
        if ( v19 && (*(_DWORD *)(v19 + 112) & 0x2000000) != 0 && (a3 == 20 || *((int *)v11 + 448) < 0) )
        {
          v20 = *(_DWORD *)(v15 + 2108);
          *(_DWORD *)v6 -= *(_DWORD *)(v15 + 2104);
          *((_DWORD *)v6 + 1) -= v20;
        }
        goto LABEL_33;
      }
      EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v34, a1, 516);
      if ( a3 == 20 )
      {
        v38 = *(_OWORD *)v6;
        LODWORD(v39) = *((_DWORD *)v6 + 4);
        *((_QWORD *)&v39 + 1) = &v34;
        v6 = (char *)&v38;
        a3 = 32;
        v15 = *(_QWORD *)a1;
        goto LABEL_28;
      }
    }
LABEL_20:
    v17 = 0;
LABEL_21:
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v37);
    return v17;
  }
  if ( a2 - 4352 <= 1 )
  {
    if ( (v12 & 8) != 0 || *(_DWORD *)(v10 + 32) )
      return 0LL;
    return iOpenGLExtEscape(a1, a2, a3, a4, a5, a6);
  }
  else
  {
    if ( a2 != 4354 )
    {
      if ( a2 == 3075 || a2 == 4124 && !(unsigned int)UserUnsafeIsCurrentProcessDwm(v10, 4354LL, v12) )
        return 0LL;
      goto LABEL_15;
    }
    if ( *(_DWORD *)(v10 + 32) )
      return 0LL;
    return iWndObjSetupExtEscape(a1, 0x1102u, a3, a4, a5, a6);
  }
}
