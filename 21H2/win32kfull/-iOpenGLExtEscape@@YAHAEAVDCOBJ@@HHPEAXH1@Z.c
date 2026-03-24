/*
 * XREFs of ?iOpenGLExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z @ 0x1C027BC58
 * Callers:
 *     ?GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z @ 0x1C00A8FFC (-GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C009032C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     PALLOCMEM2 @ 0x1C009FE48 (PALLOCMEM2.c)
 *     ?pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ @ 0x1C00ABABC (-pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C00ACD0C (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C00B30BC (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C00B59BC (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1C0156FE8 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C0157040 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     ??0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z @ 0x1C016B2A4 (--0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z.c)
 *     memmove @ 0x1C016E4C0 (memmove.c)
 *     ??0DEVLOCKOBJ_WNDOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C027B5C0 (--0DEVLOCKOBJ_WNDOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ??1DEVEXCLUDERECT@@QEAA@XZ @ 0x1C027B674 (--1DEVEXCLUDERECT@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ_WNDOBJ@@QEAA@XZ @ 0x1C027B734 (--1DEVLOCKOBJ_WNDOBJ@@QEAA@XZ.c)
 *     ?LookUpWndobjs@@YAHPEAVDCOBJ@@0PEAPEAUHDC__@@H@Z @ 0x1C027BB94 (-LookUpWndobjs@@YAHPEAVDCOBJ@@0PEAPEAUHDC__@@H@Z.c)
 *     ?vExclude@DEVEXCLUDERECT@@QEAAXAEAVXDCOBJ@@PEAU_RECTL@@@Z @ 0x1C027C6E4 (-vExclude@DEVEXCLUDERECT@@QEAAXAEAVXDCOBJ@@PEAU_RECTL@@@Z.c)
 *     EngControlSprites @ 0x1C02855F0 (EngControlSprites.c)
 *     ?hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z @ 0x1C02A6DE0 (-hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z.c)
 *     ?bMakeXlate@EXLATEOBJ@@QEAAHPEBGVXEPALOBJ@@PEAVSURFACE@@KK@Z @ 0x1C02BFC38 (-bMakeXlate@EXLATEOBJ@@QEAAHPEBGVXEPALOBJ@@PEAVSURFACE@@KK@Z.c)
 */

__int64 __fastcall iOpenGLExtEscape(struct DCOBJ *a1, int a2, unsigned int a3, void *a4, int a5, void *a6)
{
  unsigned int v7; // r14d
  __int64 v8; // rax
  XLATEOBJ *v10; // r13
  __int64 v11; // rdx
  __int64 v12; // r8
  HDEV DeviceHdev; // rdx
  WNDOBJ *v14; // rbx
  size_t v15; // rax
  HDC *v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // r9
  int v19; // ecx
  int v20; // edx
  __int64 v21; // r8
  unsigned int v22; // ecx
  unsigned int v23; // eax
  _WORD *v24; // rdx
  ULONG v25; // ecx
  __int64 v26; // rax
  struct REGION *v27; // rax
  struct REGION *v28; // rax
  HDEV v29; // [rsp+30h] [rbp-728h] BYREF
  XLATEOBJ *v30; // [rsp+38h] [rbp-720h] BYREF
  unsigned int v31; // [rsp+40h] [rbp-718h]
  int v32; // [rsp+44h] [rbp-714h]
  unsigned __int64 v33; // [rsp+48h] [rbp-710h]
  int v34; // [rsp+50h] [rbp-708h]
  struct SURFACE *v35; // [rsp+58h] [rbp-700h]
  void *Src; // [rsp+60h] [rbp-6F8h]
  HDEV *Parameter; // [rsp+68h] [rbp-6F0h] BYREF
  char *v38; // [rsp+70h] [rbp-6E8h]
  int v39; // [rsp+78h] [rbp-6E0h]
  unsigned int v40; // [rsp+7Ch] [rbp-6DCh]
  void *v41; // [rsp+80h] [rbp-6D8h]
  void *v42; // [rsp+88h] [rbp-6D0h]
  int v43; // [rsp+90h] [rbp-6C8h]
  unsigned int v44; // [rsp+94h] [rbp-6C4h]
  void *v45; // [rsp+98h] [rbp-6C0h]
  struct _RECTL v46; // [rsp+A0h] [rbp-6B8h] BYREF
  _BYTE v47[112]; // [rsp+B0h] [rbp-6A8h] BYREF
  WNDOBJ *pwo; // [rsp+120h] [rbp-638h]
  __int64 v49; // [rsp+130h] [rbp-628h] BYREF
  int v50; // [rsp+138h] [rbp-620h]
  int v51; // [rsp+13Ch] [rbp-61Ch]
  _DWORD v52[8]; // [rsp+140h] [rbp-618h] BYREF
  __int64 v53; // [rsp+160h] [rbp-5F8h]
  char v54[768]; // [rsp+170h] [rbp-5E8h] BYREF
  char v55; // [rsp+470h] [rbp-2E8h] BYREF
  _BYTE v56[4]; // [rsp+510h] [rbp-248h] BYREF
  struct _RECTL v57; // [rsp+514h] [rbp-244h] BYREF

  Src = a4;
  v31 = a3;
  LODWORD(v33) = a2;
  v45 = a6;
  v7 = 0;
  v34 = 0;
  v32 = 0;
  `vector constructor iterator'(v54, 48LL, 16LL, (void (__fastcall *)(char *))DCOBJ::DCOBJ);
  v8 = *(_QWORD *)a1;
  if ( !*(_QWORD *)(*(_QWORD *)a1 + 496LL) )
  {
    EngSetLastError(6u);
LABEL_3:
    `vector destructor iterator'(v54, 48LL, 16LL, (void (__fastcall *)(char *))DCOBJ::~DCOBJ);
    return 0LL;
  }
  v30 = 0LL;
  v10 = 0LL;
  v29 = *(HDEV *)(v8 + 48);
  DEVLOCKOBJ_WNDOBJ::DEVLOCKOBJ_WNDOBJ((DEVLOCKOBJ_WNDOBJ *)v47, a1);
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 36LL) & 0x4000) != 0 || (v47[24] & 1) == 0 && !(unsigned int)XDCOBJ::bFullScreen(a1) )
    goto LABEL_5;
  v35 = XDCOBJ::pSurfaceEff(a1);
  if ( ((_DWORD)v29[10] & 0x20000) != 0 )
  {
    v46 = *(struct _RECTL *)(v12 + 1032);
    DeviceHdev = hdevFindDeviceHdev(*(HDEV *)(v12 + 48), &v46, (struct EWNDOBJ *)pwo);
    if ( DeviceHdev )
    {
      if ( *(_QWORD *)(*(_QWORD *)a1 + 496LL) == *((_QWORD *)v29 + 319) )
        v35 = (struct SURFACE *)*((_QWORD *)DeviceHdev + 319);
      v29 = DeviceHdev;
    }
  }
  if ( !*((_QWORD *)v29 + 360) || ((_DWORD)v29[10] & 0x8000) != 0 )
  {
LABEL_5:
    DEVLOCKOBJ_WNDOBJ::~DEVLOCKOBJ_WNDOBJ((DEVLOCKOBJ_WNDOBJ *)v47);
    EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v30, v11);
    goto LABEL_3;
  }
  *(_QWORD *)&v46.left = ghsemSprite;
  GreAcquireSemaphore(ghsemSprite);
  v14 = 0LL;
  v49 = 0LL;
  v53 = 0LL;
  v52[0] = 0;
  v41 = 0LL;
  v44 = 0;
  Parameter = &v29;
  if ( v35 )
    v38 = (char *)v35 + 24;
  else
    v38 = 0LL;
  v39 = v33;
  v40 = v31;
  v43 = a5;
  v42 = v45;
  if ( (_DWORD)v33 != 4352 )
  {
    v41 = Src;
    if ( KeExpandKernelStackAndCallout(iOpenGLExtEscapeHelper, &Parameter, 0x11800uLL) >= 0 )
      v7 = v44;
    goto LABEL_25;
  }
  v15 = (int)v31;
  v33 = (int)v31;
  if ( (unsigned __int64)(int)v31 >= 0x18 )
  {
    if ( (unsigned __int64)(int)v31 > 0x98 )
    {
      v16 = (HDC *)PALLOCMEM2((int)v31, 1818718023LL, 0);
      if ( !v16 )
      {
        EngSetLastError(8u);
        goto LABEL_25;
      }
      v15 = v33;
    }
    else
    {
      v16 = (HDC *)&v55;
    }
    memmove(v16, Src, v15);
    if ( (*((_DWORD *)v16 + 1) & 4) != 0 )
    {
      v18 = *((unsigned int *)v16 + 2);
      if ( (unsigned int)v18 > 0x10 || v31 < (unsigned __int64)(8 * v18 + 24) )
      {
        v25 = 8;
        goto LABEL_46;
      }
      v32 = LookUpWndobjs(a1, (struct DCOBJ *)v54, v16 + 3, v18);
      if ( v32 < 0 )
        goto LABEL_64;
    }
    v19 = *((_DWORD *)v16 + 1);
    if ( (v19 & 2) != 0 )
    {
      v20 = *((_DWORD *)v29 + 527);
      if ( (unsigned int)(v20 - 2) > 1 )
      {
        v10 = xloIdent;
      }
      else
      {
        v21 = *(_QWORD *)(*(_QWORD *)a1 + 88LL);
        if ( v21 )
        {
          v22 = 16;
          if ( v20 != 2 )
            v22 = 256;
          v23 = 0;
          v24 = v56;
          do
            *v24++ = v23++;
          while ( v23 < v22 );
          if ( (unsigned int)EXLATEOBJ::bMakeXlate(&v30, v56, v21, v35, v22, v22) )
            v10 = v30;
        }
        if ( !v10 )
          v10 = xloIdent;
        v19 = *((_DWORD *)v16 + 1);
      }
    }
    v16[2] = (HDC)v10;
    if ( (v19 & 4) != 0 )
      goto LABEL_57;
    if ( (v19 & 1) == 0 )
    {
      v16[1] = 0LL;
      goto LABEL_57;
    }
    if ( pwo && (pwo[3].coClient.rclBounds.bottom & 0x8000000) == 0 )
    {
      v26 = *(_QWORD *)(*(_QWORD *)&pwo[3].coClient.iUniq + 32LL);
      if ( v26 == *(_QWORD *)(*(_QWORD *)a1 + 496LL)
        || *(_QWORD *)(*(_QWORD *)(v26 + 48) + 24LL) == *(_QWORD *)(*(_QWORD *)a1 + 48LL) )
      {
        v16[1] = (HDC)pwo;
LABEL_57:
        if ( pwo )
        {
          if ( (pwo[3].coClient.rclBounds.bottom & 0x80u) == 0 )
          {
            v14 = pwo;
            EngControlSprites(pwo, 1u);
          }
        }
        else
        {
          v27 = XDCOBJ::prgnEffRao((DC **)a1);
          v49 = *((_QWORD *)v27 + 12);
          v50 = *((_DWORD *)v27 + 26);
          v51 = *((_DWORD *)v27 + 27);
          v28 = XDCOBJ::prgnEffRao((DC **)a1);
          ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v56, v28, (struct ERECTL *)&v49, 0);
          DEVEXCLUDERECT::vExclude((DEVEXCLUDERECT *)v52, a1, &v57);
        }
        ++*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 496LL) + 92LL);
        v41 = v16;
        if ( KeExpandKernelStackAndCallout(iOpenGLExtEscapeHelper, &Parameter, 0x11800uLL) >= 0 )
        {
          v7 = v44;
          if ( (*((_DWORD *)v16 + 1) & 4) != 0 )
            v7 = (v32 << 16) | (unsigned __int16)v44;
        }
      }
LABEL_64:
      if ( v33 > 0x98 )
        Win32FreePool(v16);
      goto LABEL_25;
    }
    v25 = 6;
LABEL_46:
    EngSetLastError(v25);
    goto LABEL_64;
  }
  EngSetLastError(0x57u);
LABEL_25:
  DEVEXCLUDERECT::~DEVEXCLUDERECT((DEVEXCLUDERECT *)v52);
  if ( v14 )
    EngControlSprites(v14, 2u);
  SEMOBJ::vUnlock((SEMOBJ *)&v46);
  DEVLOCKOBJ_WNDOBJ::~DEVLOCKOBJ_WNDOBJ((DEVLOCKOBJ_WNDOBJ *)v47);
  EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v30, v17);
  `vector destructor iterator'(v54, 48LL, 16LL, (void (__fastcall *)(char *))DCOBJ::~DCOBJ);
  return v7;
}
