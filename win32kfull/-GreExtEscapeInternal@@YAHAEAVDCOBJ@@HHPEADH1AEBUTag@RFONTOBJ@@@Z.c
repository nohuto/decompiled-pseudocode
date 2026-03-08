/*
 * XREFs of ?GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1AEBUTag@RFONTOBJ@@@Z @ 0x1C02782F8
 * Callers:
 *     ?GreExtEscape@@YAHPEAUHDC__@@HHPEADH1W4EntryPoint@RFONTOBJ@@@Z @ 0x1C02781E8 (-GreExtEscape@@YAHPEAUHDC__@@HHPEADH1W4EntryPoint@RFONTOBJ@@@Z.c)
 *     ?GreStartDocInternal@@YAHPEAUHDC__@@PEAU_DOCINFOW@@PEAHHW4EntryPoint@RFONTOBJ@@@Z @ 0x1C0278BE8 (-GreStartDocInternal@@YAHPEAUHDC__@@PEAU_DOCINFOW@@PEAHHW4EntryPoint@RFONTOBJ@@@Z.c)
 * Callees:
 *     ?pSurfobj@SURFACE@@QEAAPEAU_SURFOBJ@@XZ @ 0x1C001B2B0 (-pSurfobj@SURFACE@@QEAAPEAU_SURFOBJ@@XZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x1C00272BC (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C0050D68 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?bValidSurf@XDCOBJ@@QEAAHXZ @ 0x1C007FBAC (-bValidSurf@XDCOBJ@@QEAAHXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00CFF10 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ?bValid@SURFREF@@QEBAHXZ @ 0x1C012F648 (-bValid@SURFREF@@QEBAHXZ.c)
 *     ??0SURFFAKEOBJ@@QEAA@PEAUHDEV__@@PEAUDHPDEV__@@@Z @ 0x1C012FC34 (--0SURFFAKEOBJ@@QEAA@PEAUHDEV__@@PEAUDHPDEV__@@@Z.c)
 *     ??1SURFFAKEOBJ@@QEAA@XZ @ 0x1C012FD24 (--1SURFFAKEOBJ@@QEAA@XZ.c)
 *     ?pSurfobj@SURFREF@@QEAAPEAU_SURFOBJ@@XZ @ 0x1C0267C4C (-pSurfobj@SURFREF@@QEAAPEAU_SURFOBJ@@XZ.c)
 *     ?DoFontManagement@@YAKAEAVDCOBJ@@KKPEAXK1AEBUTag@RFONTOBJ@@@Z @ 0x1C027798C (-DoFontManagement@@YAKAEAVDCOBJ@@KKPEAXK1AEBUTag@RFONTOBJ@@@Z.c)
 *     ?fBlockExtEscape@@YAHAEAVDCOBJ@@@Z @ 0x1C0279378 (-fBlockExtEscape@@YAHAEAVDCOBJ@@@Z.c)
 *     ?iCheckPassthroughImage@@YAHAEAVDCOBJ@@AEAVPDEVOBJ@@HHPEAXH2@Z @ 0x1C02793C8 (-iCheckPassthroughImage@@YAHAEAVDCOBJ@@AEAVPDEVOBJ@@HHPEAXH2@Z.c)
 *     ?iOpenGLExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z @ 0x1C0279714 (-iOpenGLExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z.c)
 *     ?iWndObjSetupExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z @ 0x1C0279D88 (-iWndObjSetupExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z.c)
 *     ?hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z @ 0x1C02B51BC (-hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z.c)
 *     ?Escape@PDEVOBJ@@QEAAKPEAU_SURFOBJ@@KKPEAXK1@Z @ 0x1C02E2F44 (-Escape@PDEVOBJ@@QEAAKPEAU_SURFOBJ@@KKPEAXK1@Z.c)
 */

__int64 __fastcall GreExtEscapeInternal(
        struct DCOBJ *a1,
        unsigned int a2,
        unsigned int a3,
        char *a4,
        unsigned int a5,
        char *a6,
        const struct RFONTOBJ::Tag *a7)
{
  char *v7; // r14
  __int64 v11; // rcx
  HDEV v12; // rbx
  unsigned int v13; // edi
  __int64 v14; // r8
  int v15; // r13d
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  bool v20; // zf
  __int64 v21; // rcx
  __int64 v22; // rax
  int v23; // edx
  __int64 v24; // r8
  struct _SURFOBJ *v25; // r13
  HDEV v26; // rcx
  HDEV DeviceHdev; // r8
  struct _SURFOBJ *v28; // rdx
  int v29; // ecx
  __int64 v30; // rax
  unsigned int v31; // ebx
  unsigned int v32; // eax
  int v33; // [rsp+48h] [rbp-150h]
  HDEV v34; // [rsp+50h] [rbp-148h] BYREF
  unsigned __int16 v35; // [rsp+58h] [rbp-140h]
  int v36; // [rsp+5Ch] [rbp-13Ch]
  int v37; // [rsp+60h] [rbp-138h]
  struct _RECTL v38; // [rsp+70h] [rbp-128h] BYREF
  __int64 v39; // [rsp+80h] [rbp-118h] BYREF
  int v40; // [rsp+8Ch] [rbp-10Ch]
  _BYTE v41[80]; // [rsp+90h] [rbp-108h] BYREF
  _BYTE v42[80]; // [rsp+E0h] [rbp-B8h] BYREF
  __int128 v43; // [rsp+130h] [rbp-68h] BYREF
  __int128 v44; // [rsp+140h] [rbp-58h]

  v7 = a4;
  *(_QWORD *)&v38.left = a7;
  v11 = *(_QWORD *)a1;
  v12 = *(HDEV *)(v11 + 48);
  v34 = v12;
  v13 = 0;
  if ( !*((_DWORD *)v12 + 3) && a2 != 4354 )
    return 0LL;
  v14 = *((unsigned int *)v12 + 646);
  v15 = 0;
  v33 = 0;
  if ( a2 == 8 )
  {
    if ( a3 < 4 )
      return 0LL;
    v33 = *(_DWORD *)a4;
    v36 = *(_DWORD *)a4;
    v15 = v36;
    if ( (unsigned int)(v36 - 4352) <= 1 && (v14 & 8) != 0 )
      return 0LL;
LABEL_15:
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v41);
    DEVLOCKOBJ::vLockNoDrawing((DEVLOCKOBJ *)v41, a1);
    if ( (unsigned int)fBlockExtEscape(a1) )
      goto LABEL_68;
    v17 = *(_QWORD *)a1;
    if ( *(_DWORD *)(*(_QWORD *)a1 + 32LL) )
    {
      v18 = *(_QWORD *)(v17 + 48);
      v19 = *(_QWORD *)(v17 + 496);
      if ( (*(_DWORD *)(v18 + 40) & 0x80u) == 0 )
      {
        if ( !v19 )
          goto LABEL_68;
        v20 = *(_WORD *)(v19 + 100) == 3;
        goto LABEL_22;
      }
      if ( v19 )
      {
        v20 = *(_QWORD *)(v19 + 40) == *((_QWORD *)v12 + 221);
LABEL_22:
        if ( !v20 )
          goto LABEL_68;
      }
    }
    v43 = 0LL;
    v44 = 0LL;
    v39 = 0LL;
    v40 = 0;
    if ( a2 != 25 )
      goto LABEL_32;
    if ( *((int *)v12 + 448) >= 0 )
    {
LABEL_27:
      v21 = *(_QWORD *)a1;
      v22 = *(_QWORD *)(*(_QWORD *)a1 + 496LL);
      if ( v22 && (*(_DWORD *)(v22 + 112) & 0x2000000) != 0 && (a3 == 20 || *((int *)v12 + 448) < 0) )
      {
        v23 = *(_DWORD *)(v21 + 2108);
        *(_DWORD *)v7 -= *(_DWORD *)(v21 + 2104);
        *((_DWORD *)v7 + 1) -= v23;
      }
LABEL_32:
      if ( a2 - 256 <= 0x2FE || a2 == 8 && (unsigned int)(v15 - 256) <= 0x2FE )
      {
        v32 = DoFontManagement(a1, a2, a3, (unsigned __int16 *)v7, a5, a6, *(const struct RFONTOBJ::Tag **)&v38.left);
      }
      else
      {
        if ( a2 - 4119 > 1 && (a2 != 8 || (unsigned int)(v15 - 4119) > 1) )
        {
          if ( (unsigned int)XDCOBJ::bValidSurf(a1) && !a6 )
            ++*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 496LL) + 92LL);
          v25 = SURFACE::pSurfobj(*(SURFACE **)(*(_QWORD *)a1 + 496LL));
          if ( ((_DWORD)v12[10] & 0x20000) != 0 && a2 == 8 && (unsigned int)(v33 - 4352) <= 1 )
          {
            v26 = *(HDEV *)(v24 + 48);
            v38 = *(struct _RECTL *)(v24 + 1032);
            DeviceHdev = hdevFindDeviceHdev(v26, &v38, 0LL);
            if ( DeviceHdev )
            {
              if ( *(_QWORD *)(*(_QWORD *)a1 + 496LL) == *((_QWORD *)v12 + 316) )
                v25 = SURFACE::pSurfobj(*((SURFACE **)DeviceHdev + 316));
              v12 = DeviceHdev;
              v34 = DeviceHdev;
            }
          }
          if ( !*((_QWORD *)v12 + 357) )
            goto LABEL_68;
          if ( v25 )
          {
            v31 = PDEVOBJ::Escape((PDEVOBJ *)&v34, v25, a2, a3, v7, a5, a6);
          }
          else
          {
            SURFFAKEOBJ::SURFFAKEOBJ(
              (SURFFAKEOBJ *)v42,
              *(HDEV *)(*(_QWORD *)a1 + 48LL),
              *(struct DHPDEV__ **)(*(_QWORD *)a1 + 24LL));
            if ( !SURFREF::bValid((SURFREF *)v42) )
            {
              SURFFAKEOBJ::~SURFFAKEOBJ((SURFFAKEOBJ *)v42);
              goto LABEL_68;
            }
            v28 = SURFREF::pSurfobj((SURFREF *)v42);
            if ( a2 == 17 && a3 >= 2 )
            {
              v35 = *(_WORD *)v7;
              *(_DWORD *)(*(_QWORD *)a1 + 2092LL) = v35;
              PDEVOBJ::Escape((PDEVOBJ *)&v34, v28, 0x11u, a3, v7, a5, a6);
              SURFFAKEOBJ::~SURFFAKEOBJ((SURFFAKEOBJ *)v42);
              DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v41);
              return 1LL;
            }
            if ( a2 == 33 && a3 >= 2 )
            {
              v29 = *(unsigned __int16 *)v7;
              v37 = v29;
              v30 = *(_QWORD *)a1;
              if ( v29 )
                *(_DWORD *)(v30 + 36) |= 0x400u;
              else
                *(_DWORD *)(v30 + 36) &= ~0x400u;
              v31 = 1;
            }
            else
            {
              v31 = PDEVOBJ::Escape((PDEVOBJ *)&v34, v28, a2, a3, v7, a5, a6);
            }
            SURFFAKEOBJ::~SURFFAKEOBJ((SURFFAKEOBJ *)v42);
          }
          DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v41);
          return v31;
        }
        v32 = iCheckPassthroughImage(a1, (struct PDEVOBJ *)&v34, a2, a3, v7, a5, a6);
      }
      v13 = v32;
      goto LABEL_68;
    }
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v39, a1, 516);
    if ( a3 == 20 )
    {
      v43 = *(_OWORD *)v7;
      LODWORD(v44) = *((_DWORD *)v7 + 4);
      *((_QWORD *)&v44 + 1) = &v39;
      v7 = (char *)&v43;
      a3 = 32;
      goto LABEL_27;
    }
LABEL_68:
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v41);
    return v13;
  }
  if ( a2 - 4352 <= 1 )
  {
    if ( (v14 & 8) != 0 || *(_DWORD *)(v11 + 32) )
      return 0LL;
    return iOpenGLExtEscape(a1, a2, a3, a4, a5, a6);
  }
  else
  {
    if ( a2 != 4354 )
    {
      if ( a2 == 3075 || a2 == 4124 && !(unsigned int)UserUnsafeIsCurrentProcessDwm(v11, 4354LL, v14) )
        return 0LL;
      goto LABEL_15;
    }
    if ( *(_DWORD *)(v11 + 32) )
      return 0LL;
    return iWndObjSetupExtEscape(a1, 0x1102u, a3, a4, a5, a6);
  }
}
