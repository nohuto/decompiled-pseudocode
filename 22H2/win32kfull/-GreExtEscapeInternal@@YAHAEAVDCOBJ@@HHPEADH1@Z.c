/*
 * XREFs of ?GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z @ 0x1C00A8EAC
 * Callers:
 *     GreExtEscape @ 0x1C00A8DB0 (GreExtEscape.c)
 * Callees:
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C008E8E0 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?Escape@PDEVOBJ@@QEAAKPEAU_SURFOBJ@@KKPEAXK1@Z @ 0x1C00A7278 (-Escape@PDEVOBJ@@QEAAKPEAU_SURFOBJ@@KKPEAXK1@Z.c)
 *     ?fBlockExtEscape@@YAHAEAVDCOBJ@@@Z @ 0x1C00A94A0 (-fBlockExtEscape@@YAHAEAVDCOBJ@@@Z.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x1C00A9A2C (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?bValidSurf@XDCOBJ@@QEAAHXZ @ 0x1C00B55C4 (-bValidSurf@XDCOBJ@@QEAAHXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00FD8F4 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?iCheckPassthroughImage@@YAHAEAVDCOBJ@@AEAVPDEVOBJ@@HHPEAXH2@Z @ 0x1C01598F4 (-iCheckPassthroughImage@@YAHAEAVDCOBJ@@AEAVPDEVOBJ@@HHPEAXH2@Z.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     ??0SURFFAKEOBJ@@QEAA@PEAUHDEV__@@PEAUDHPDEV__@@@Z @ 0x1C016AA54 (--0SURFFAKEOBJ@@QEAA@PEAUHDEV__@@PEAUDHPDEV__@@@Z.c)
 *     ??1SURFFAKEOBJ@@QEAA@XZ @ 0x1C016AB40 (--1SURFFAKEOBJ@@QEAA@XZ.c)
 *     ?bValid@SURFREF@@QEBAHXZ @ 0x1C026CC04 (-bValid@SURFREF@@QEBAHXZ.c)
 *     ?pSurfobj@SURFREF@@QEAAPEAU_SURFOBJ@@XZ @ 0x1C026CC30 (-pSurfobj@SURFREF@@QEAAPEAU_SURFOBJ@@XZ.c)
 *     ?DoFontManagement@@YAKAEAVDCOBJ@@KKPEAXK1@Z @ 0x1C027B154 (-DoFontManagement@@YAKAEAVDCOBJ@@KKPEAXK1@Z.c)
 *     ?iOpenGLExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z @ 0x1C027B628 (-iOpenGLExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z.c)
 *     ?iWndObjSetupExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z @ 0x1C027BC88 (-iWndObjSetupExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z.c)
 *     ?hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z @ 0x1C02A67B0 (-hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z.c)
 */

__int64 __fastcall GreExtEscapeInternal(
        struct DCOBJ *this,
        unsigned int a2,
        unsigned int a3,
        char *a4,
        unsigned int a5,
        char *a6)
{
  char *v6; // r14
  __int64 v10; // rcx
  HDEV v11; // rbx
  unsigned int v12; // edi
  __int64 v13; // r8
  int v14; // r15d
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  int v19; // ecx
  __int64 v20; // r8
  __int64 v21; // r15
  struct _SURFOBJ *v22; // rdx
  HDEV DeviceHdev; // r8
  __int64 v24; // rdx
  struct _SURFOBJ *v25; // rdx
  int v26; // ecx
  __int64 v27; // rax
  unsigned int v28; // ebx
  unsigned int v29; // eax
  int v30; // [rsp+48h] [rbp-190h]
  HDEV v31; // [rsp+50h] [rbp-188h] BYREF
  unsigned __int16 v32; // [rsp+58h] [rbp-180h]
  int v33; // [rsp+5Ch] [rbp-17Ch]
  int v34; // [rsp+60h] [rbp-178h]
  __int64 v35; // [rsp+68h] [rbp-170h] BYREF
  int v36; // [rsp+74h] [rbp-164h]
  struct _RECTL v37; // [rsp+80h] [rbp-158h] BYREF
  _BYTE v38[112]; // [rsp+90h] [rbp-148h] BYREF
  _BYTE v39[112]; // [rsp+100h] [rbp-D8h] BYREF
  __int128 v40; // [rsp+170h] [rbp-68h] BYREF
  __int128 v41; // [rsp+180h] [rbp-58h]

  v6 = a4;
  v10 = *(_QWORD *)this;
  v11 = *(HDEV *)(v10 + 48);
  v31 = v11;
  v12 = 0;
  if ( !*((_DWORD *)v11 + 3) && a2 != 4354 )
    return 0LL;
  v13 = *((unsigned int *)v11 + 652);
  v14 = 0;
  v30 = 0;
  if ( a2 == 8 )
  {
    if ( a3 < 4 )
      return 0LL;
    v30 = *(_DWORD *)a4;
    v33 = *(_DWORD *)a4;
    v14 = v33;
    if ( (unsigned int)(v33 - 4352) <= 1 && (v13 & 8) != 0 )
      return 0LL;
LABEL_15:
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v38);
    DEVLOCKOBJ::vLockNoDrawing((DEVLOCKOBJ *)v38, this);
    if ( !(unsigned int)fBlockExtEscape(this) )
    {
      v16 = *(_QWORD *)this;
      if ( *(_DWORD *)(*(_QWORD *)this + 32LL) )
      {
        v17 = *(_QWORD *)(v16 + 496);
        if ( (*(_DWORD *)(*(_QWORD *)(v16 + 48) + 40LL) & 0x80u) != 0 )
        {
          if ( v17 && *(_QWORD *)(v17 + 40) != *((_QWORD *)v11 + 225) )
            goto LABEL_71;
        }
        else if ( !v17 || *(_WORD *)(v17 + 100) != 3 )
        {
          goto LABEL_71;
        }
      }
      v40 = 0LL;
      v41 = 0LL;
      v35 = 0LL;
      v36 = 0;
      if ( a2 != 25 )
      {
LABEL_32:
        if ( a2 - 256 <= 0x2FE || a2 == 8 && (unsigned int)(v14 - 256) <= 0x2FE )
        {
          v29 = DoFontManagement(this, a2, a3, v6, a5, a6);
        }
        else
        {
          if ( a2 - 4119 > 1 && (a2 != 8 || (unsigned int)(v14 - 4119) > 1) )
          {
            if ( (unsigned int)XDCOBJ::bValidSurf(this) && !a6 )
              ++*(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 496LL) + 92LL);
            v20 = *(_QWORD *)this;
            v21 = (*(_QWORD *)(*(_QWORD *)this + 496LL) + 24LL) & -(__int64)(*(_QWORD *)(*(_QWORD *)this + 496LL) != 0LL);
            v22 = (struct _SURFOBJ *)v21;
            if ( ((_DWORD)v11[10] & 0x20000) != 0 && a2 == 8 && (v30 == 4353 || v30 == 4352) )
            {
              v37 = *(struct _RECTL *)(v20 + 1032);
              DeviceHdev = hdevFindDeviceHdev(*(HDEV *)(v20 + 48), &v37, 0LL);
              v22 = (struct _SURFOBJ *)v21;
              if ( DeviceHdev )
              {
                if ( *(_QWORD *)(*(_QWORD *)this + 496LL) == *((_QWORD *)v11 + 319) )
                {
                  v24 = *((_QWORD *)DeviceHdev + 319);
                  if ( v24 )
                    v22 = (struct _SURFOBJ *)(v24 + 24);
                  else
                    v22 = 0LL;
                }
                v11 = DeviceHdev;
                v31 = DeviceHdev;
              }
            }
            if ( !*((_QWORD *)v11 + 360) )
              goto LABEL_71;
            if ( v22 )
            {
              v28 = PDEVOBJ::Escape((PDEVOBJ *)&v31, v22, a2, a3, v6, a5, a6);
            }
            else
            {
              SURFFAKEOBJ::SURFFAKEOBJ(
                (SURFFAKEOBJ *)v39,
                *(HDEV *)(*(_QWORD *)this + 48LL),
                *(struct DHPDEV__ **)(*(_QWORD *)this + 24LL));
              if ( !(unsigned int)SURFREF::bValid((SURFREF *)v39) )
              {
                SURFFAKEOBJ::~SURFFAKEOBJ((SURFFAKEOBJ *)v39);
                goto LABEL_71;
              }
              v25 = SURFREF::pSurfobj((SURFREF *)v39);
              if ( a2 == 17 && a3 >= 2 )
              {
                v32 = *(_WORD *)v6;
                *(_DWORD *)(*(_QWORD *)this + 2100LL) = v32;
                PDEVOBJ::Escape((PDEVOBJ *)&v31, v25, 0x11u, a3, v6, a5, a6);
                SURFFAKEOBJ::~SURFFAKEOBJ((SURFFAKEOBJ *)v39);
                DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v38);
                return 1LL;
              }
              if ( a2 == 33 && a3 >= 2 )
              {
                v26 = *(unsigned __int16 *)v6;
                v34 = v26;
                v27 = *(_QWORD *)this;
                if ( v26 )
                  *(_DWORD *)(v27 + 36) |= 0x400u;
                else
                  *(_DWORD *)(v27 + 36) &= ~0x400u;
                v28 = 1;
              }
              else
              {
                v28 = PDEVOBJ::Escape((PDEVOBJ *)&v31, v25, a2, a3, v6, a5, a6);
              }
              SURFFAKEOBJ::~SURFFAKEOBJ((SURFFAKEOBJ *)v39);
            }
            DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v38);
            return v28;
          }
          v29 = iCheckPassthroughImage(this, (struct PDEVOBJ *)&v31, a2, a3, v6, a5, a6);
        }
        v12 = v29;
        goto LABEL_71;
      }
      if ( *((int *)v11 + 456) >= 0 )
      {
LABEL_27:
        v18 = *(_QWORD *)(v16 + 496);
        if ( v18 && (*(_DWORD *)(v18 + 112) & 0x2000000) != 0 && (a3 == 20 || *((int *)v11 + 456) < 0) )
        {
          v19 = *(_DWORD *)(v16 + 2116);
          *(_DWORD *)v6 -= *(_DWORD *)(v16 + 2112);
          *((_DWORD *)v6 + 1) -= v19;
        }
        goto LABEL_32;
      }
      EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v35, this, 0x204u);
      if ( a3 == 20 )
      {
        v40 = *(_OWORD *)v6;
        LODWORD(v41) = *((_DWORD *)v6 + 4);
        *((_QWORD *)&v41 + 1) = &v35;
        v6 = (char *)&v40;
        a3 = 32;
        v16 = *(_QWORD *)this;
        goto LABEL_27;
      }
    }
LABEL_71:
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v38);
    return v12;
  }
  if ( a2 - 4352 <= 1 )
  {
    if ( (v13 & 8) != 0 || *(_DWORD *)(v10 + 32) )
      return 0LL;
    return iOpenGLExtEscape(this, a2, a3, a4, a5, a6);
  }
  else
  {
    if ( a2 != 4354 )
    {
      if ( a2 == 3075 || a2 == 4124 && !(unsigned int)UserUnsafeIsCurrentProcessDwm(v10, 4354LL, v13) )
        return 0LL;
      goto LABEL_15;
    }
    if ( *(_DWORD *)(v10 + 32) )
      return 0LL;
    return iWndObjSetupExtEscape(this, 0x1102u, a3, a4, a5, a6);
  }
}
