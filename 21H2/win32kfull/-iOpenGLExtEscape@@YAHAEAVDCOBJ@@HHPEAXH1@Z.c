/*
 * XREFs of ?iOpenGLExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z @ 0x1C02797A8
 * Callers:
 *     ?GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z @ 0x1C013D690 (-GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C001174C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ @ 0x1C002BB4C (-pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C002C61C (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C002C6B0 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C0042DBC (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1C014913C (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C0149194 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ??0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z @ 0x1C015DC78 (--0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z.c)
 *     memmove @ 0x1C0160280 (memmove.c)
 *     ??0DEVLOCKOBJ_WNDOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C027916C (--0DEVLOCKOBJ_WNDOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ??1DEVEXCLUDERECT@@QEAA@XZ @ 0x1C0279220 (--1DEVEXCLUDERECT@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ_WNDOBJ@@QEAA@XZ @ 0x1C02792DC (--1DEVLOCKOBJ_WNDOBJ@@QEAA@XZ.c)
 *     ?LookUpWndobjs@@YAHPEAVDCOBJ@@0PEAPEAUHDC__@@H@Z @ 0x1C02796D8 (-LookUpWndobjs@@YAHPEAVDCOBJ@@0PEAPEAUHDC__@@H@Z.c)
 *     ?vExclude@DEVEXCLUDERECT@@QEAAXAEAVXDCOBJ@@PEAU_RECTL@@@Z @ 0x1C027A254 (-vExclude@DEVEXCLUDERECT@@QEAAXAEAVXDCOBJ@@PEAU_RECTL@@@Z.c)
 *     EngControlSprites @ 0x1C02820F0 (EngControlSprites.c)
 *     ?hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z @ 0x1C02A4808 (-hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z.c)
 *     ?bMakeXlate@EXLATEOBJ@@QEAAHPEBGVXEPALOBJ@@PEAVSURFACE@@KK@Z @ 0x1C02BE5D8 (-bMakeXlate@EXLATEOBJ@@QEAAHPEBGVXEPALOBJ@@PEAVSURFACE@@KK@Z.c)
 */

__int64 __fastcall iOpenGLExtEscape(struct DCOBJ *a1, int a2, unsigned int a3, void *a4, int a5, void *a6)
{
  unsigned int v7; // r14d
  __int64 v8; // rax
  XLATEOBJ *v10; // r13
  __int64 v11; // r8
  HDEV v12; // rcx
  HDEV DeviceHdev; // r8
  WNDOBJ *v14; // rbx
  size_t v15; // rax
  HDC *v16; // rsi
  __int64 v17; // r9
  int v18; // ecx
  int v19; // edx
  __int64 v20; // r8
  unsigned int v21; // ecx
  unsigned int v22; // eax
  _WORD *v23; // rdx
  ULONG v24; // ecx
  __int64 v25; // rcx
  struct REGION *v26; // rax
  struct REGION *v27; // rax
  HDEV v28; // [rsp+30h] [rbp-728h] BYREF
  XLATEOBJ *v29; // [rsp+38h] [rbp-720h] BYREF
  unsigned int v30; // [rsp+40h] [rbp-718h]
  int v31; // [rsp+44h] [rbp-714h]
  unsigned __int64 v32; // [rsp+48h] [rbp-710h]
  int v33; // [rsp+50h] [rbp-708h]
  struct SURFACE *v34; // [rsp+58h] [rbp-700h]
  void *Src; // [rsp+60h] [rbp-6F8h]
  HDEV *Parameter; // [rsp+68h] [rbp-6F0h] BYREF
  char *v37; // [rsp+70h] [rbp-6E8h]
  int v38; // [rsp+78h] [rbp-6E0h]
  unsigned int v39; // [rsp+7Ch] [rbp-6DCh]
  void *v40; // [rsp+80h] [rbp-6D8h]
  void *v41; // [rsp+88h] [rbp-6D0h]
  int v42; // [rsp+90h] [rbp-6C8h]
  unsigned int v43; // [rsp+94h] [rbp-6C4h]
  void *v44; // [rsp+98h] [rbp-6C0h]
  struct _RECTL v45; // [rsp+A0h] [rbp-6B8h] BYREF
  _BYTE v46[112]; // [rsp+B0h] [rbp-6A8h] BYREF
  WNDOBJ *pwo; // [rsp+120h] [rbp-638h]
  __int64 v48; // [rsp+130h] [rbp-628h] BYREF
  int v49; // [rsp+138h] [rbp-620h]
  int v50; // [rsp+13Ch] [rbp-61Ch]
  _DWORD v51[8]; // [rsp+140h] [rbp-618h] BYREF
  __int64 v52; // [rsp+160h] [rbp-5F8h]
  char v53[768]; // [rsp+170h] [rbp-5E8h] BYREF
  char v54; // [rsp+470h] [rbp-2E8h] BYREF
  _BYTE v55[4]; // [rsp+510h] [rbp-248h] BYREF
  struct _RECTL v56; // [rsp+514h] [rbp-244h] BYREF

  Src = a4;
  v30 = a3;
  LODWORD(v32) = a2;
  v44 = a6;
  v7 = 0;
  v33 = 0;
  v31 = 0;
  `vector constructor iterator'(v53, 48LL, 16LL, (void (__fastcall *)(char *))DCOBJ::DCOBJ);
  v8 = *(_QWORD *)a1;
  if ( !*(_QWORD *)(*(_QWORD *)a1 + 496LL) )
  {
    EngSetLastError(6u);
LABEL_3:
    `vector destructor iterator'(v53, 48LL, 16LL, (void (__fastcall *)(char *))DCOBJ::~DCOBJ);
    return 0LL;
  }
  v29 = 0LL;
  v10 = 0LL;
  v28 = *(HDEV *)(v8 + 48);
  DEVLOCKOBJ_WNDOBJ::DEVLOCKOBJ_WNDOBJ((DEVLOCKOBJ_WNDOBJ *)v46, a1);
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 36LL) & 0x4000) != 0 || (v46[24] & 1) == 0 && !(unsigned int)XDCOBJ::bFullScreen(a1) )
    goto LABEL_5;
  v34 = XDCOBJ::pSurfaceEff(a1);
  if ( ((_DWORD)v28[10] & 0x20000) != 0 )
  {
    v12 = *(HDEV *)(v11 + 48);
    v45 = *(struct _RECTL *)(v11 + 1032);
    DeviceHdev = hdevFindDeviceHdev(v12, &v45, (struct EWNDOBJ *)pwo);
    if ( DeviceHdev )
    {
      if ( *(_QWORD *)(*(_QWORD *)a1 + 496LL) == *((_QWORD *)v28 + 316) )
        v34 = (struct SURFACE *)*((_QWORD *)DeviceHdev + 316);
      v28 = DeviceHdev;
    }
  }
  if ( !*((_QWORD *)v28 + 357) || ((_DWORD)v28[10] & 0x8000) != 0 )
  {
LABEL_5:
    DEVLOCKOBJ_WNDOBJ::~DEVLOCKOBJ_WNDOBJ((DEVLOCKOBJ_WNDOBJ *)v46);
    EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v29);
    goto LABEL_3;
  }
  *(_QWORD *)&v45.left = ghsemSprite;
  GreAcquireSemaphore(ghsemSprite);
  v14 = 0LL;
  v48 = 0LL;
  v52 = 0LL;
  v51[0] = 0;
  v40 = 0LL;
  v43 = 0;
  Parameter = &v28;
  if ( v34 )
    v37 = (char *)v34 + 24;
  else
    v37 = 0LL;
  v38 = v32;
  v39 = v30;
  v42 = a5;
  v41 = v44;
  if ( (_DWORD)v32 != 4352 )
  {
    v40 = Src;
    if ( KeExpandKernelStackAndCallout(iOpenGLExtEscapeHelper, &Parameter, 0x11800uLL) >= 0 )
      v7 = v43;
    goto LABEL_44;
  }
  v15 = (int)v30;
  v32 = (int)v30;
  if ( (unsigned __int64)(int)v30 >= 0x18 )
  {
    if ( (unsigned __int64)(int)v30 > 0x98 )
    {
      if ( v30 )
      {
        v16 = (HDC *)Win32AllocPool(v30, 1818718023LL);
        v15 = v32;
      }
      else
      {
        v16 = 0LL;
      }
      if ( !v16 )
      {
        EngSetLastError(8u);
        goto LABEL_44;
      }
    }
    else
    {
      v16 = (HDC *)&v54;
    }
    memmove(v16, Src, v15);
    if ( (*((_DWORD *)v16 + 1) & 4) != 0 )
    {
      v17 = *((unsigned int *)v16 + 2);
      if ( (unsigned int)v17 > 0x10 || v30 < (unsigned __int64)(8 * v17 + 24) )
      {
        v24 = 8;
        goto LABEL_48;
      }
      v31 = LookUpWndobjs(a1, (struct DCOBJ *)v53, v16 + 3, v17);
      if ( v31 < 0 )
        goto LABEL_66;
    }
    v18 = *((_DWORD *)v16 + 1);
    if ( (v18 & 2) != 0 )
    {
      v19 = *((_DWORD *)v28 + 519);
      if ( (unsigned int)(v19 - 2) > 1 )
      {
        v10 = xloIdent;
      }
      else
      {
        v20 = *(_QWORD *)(*(_QWORD *)a1 + 88LL);
        if ( v20 )
        {
          v21 = 16;
          if ( v19 != 2 )
            v21 = 256;
          v22 = 0;
          v23 = v55;
          do
            *v23++ = v22++;
          while ( v22 < v21 );
          if ( (unsigned int)EXLATEOBJ::bMakeXlate(&v29, v55, v20, v34, v21, v21) )
            v10 = v29;
        }
        if ( !v10 )
          v10 = xloIdent;
        v18 = *((_DWORD *)v16 + 1);
      }
    }
    v16[2] = (HDC)v10;
    if ( (v18 & 4) != 0 )
      goto LABEL_59;
    if ( (v18 & 1) == 0 )
    {
      v16[1] = 0LL;
      goto LABEL_59;
    }
    if ( pwo && (pwo[3].coClient.rclBounds.bottom & 0x8000000) == 0 )
    {
      v25 = *(_QWORD *)(*(_QWORD *)&pwo[3].coClient.iUniq + 32LL);
      if ( v25 == *(_QWORD *)(*(_QWORD *)a1 + 496LL)
        || *(_QWORD *)(*(_QWORD *)(v25 + 48) + 24LL) == *(_QWORD *)(*(_QWORD *)a1 + 48LL) )
      {
        v16[1] = (HDC)pwo;
LABEL_59:
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
          v26 = XDCOBJ::prgnEffRao((DC **)a1);
          v48 = *((_QWORD *)v26 + 12);
          v49 = *((_DWORD *)v26 + 26);
          v50 = *((_DWORD *)v26 + 27);
          v27 = XDCOBJ::prgnEffRao((DC **)a1);
          ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v55, v27, (struct ERECTL *)&v48, 0);
          DEVEXCLUDERECT::vExclude((DEVEXCLUDERECT *)v51, a1, &v56);
        }
        ++*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 496LL) + 92LL);
        v40 = v16;
        if ( KeExpandKernelStackAndCallout(iOpenGLExtEscapeHelper, &Parameter, 0x11800uLL) >= 0 )
        {
          v7 = v43;
          if ( (*((_DWORD *)v16 + 1) & 4) != 0 )
            v7 = (v31 << 16) | (unsigned __int16)v43;
        }
      }
LABEL_66:
      if ( v32 > 0x98 )
        Win32FreePool(v16);
      goto LABEL_44;
    }
    v24 = 6;
LABEL_48:
    EngSetLastError(v24);
    goto LABEL_66;
  }
  EngSetLastError(0x57u);
LABEL_44:
  DEVEXCLUDERECT::~DEVEXCLUDERECT((DEVEXCLUDERECT *)v51);
  if ( v14 )
    EngControlSprites(v14, 2u);
  SEMOBJ::vUnlock((SEMOBJ *)&v45);
  DEVLOCKOBJ_WNDOBJ::~DEVLOCKOBJ_WNDOBJ((DEVLOCKOBJ_WNDOBJ *)v46);
  EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v29);
  `vector destructor iterator'(v53, 48LL, 16LL, (void (__fastcall *)(char *))DCOBJ::~DCOBJ);
  return v7;
}
