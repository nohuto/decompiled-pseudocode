/*
 * XREFs of ?iOpenGLExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z @ 0x1C0276D58
 * Callers:
 *     ?GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1AEBUTag@RFONTOBJ@@@Z @ 0x1C0275904 (-GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1AEBUTag@RFONTOBJ@@@Z.c)
 * Callees:
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C001EF80 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C00DA0C8 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ @ 0x1C00E0B4C (-pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C00E0C40 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00FA95C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     ??0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z @ 0x1C013EDE0 (--0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z.c)
 *     memmove @ 0x1C0141300 (memmove.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C014E7F8 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1C02394BC (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??0DEVLOCKOBJ_WNDOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C0274DC8 (--0DEVLOCKOBJ_WNDOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ??1DEVEXCLUDERECT@@QEAA@XZ @ 0x1C0274E7C (--1DEVEXCLUDERECT@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ_WNDOBJ@@QEAA@XZ @ 0x1C0274EE0 (--1DEVLOCKOBJ_WNDOBJ@@QEAA@XZ.c)
 *     ?LookUpWndobjs@@YAHPEAVDCOBJ@@0PEAPEAUHDC__@@H@Z @ 0x1C0276514 (-LookUpWndobjs@@YAHPEAVDCOBJ@@0PEAPEAUHDC__@@H@Z.c)
 *     ?vExclude@DEVEXCLUDERECT@@QEAAXAEAVXDCOBJ@@PEAU_RECTL@@@Z @ 0x1C027797C (-vExclude@DEVEXCLUDERECT@@QEAAXAEAVXDCOBJ@@PEAU_RECTL@@@Z.c)
 *     EngControlSprites @ 0x1C02836E0 (EngControlSprites.c)
 *     ?hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z @ 0x1C02B2CDC (-hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z.c)
 *     ?bMakeXlate@EXLATEOBJ@@QEAAHPEBGVXEPALOBJ@@PEAVSURFACE@@KK@Z @ 0x1C02DC558 (-bMakeXlate@EXLATEOBJ@@QEAAHPEBGVXEPALOBJ@@PEAVSURFACE@@KK@Z.c)
 */

__int64 __fastcall iOpenGLExtEscape(struct DCOBJ *a1, int a2, unsigned int a3, void *a4, int a5, void *a6)
{
  __int64 v6; // rsi
  unsigned int v8; // r14d
  __int64 v9; // rcx
  Gre::Base *v11; // rcx
  __int64 v12; // r9
  HDEV v13; // rcx
  HDEV DeviceHdev; // r8
  __int64 v15; // r8
  __int64 v16; // r9
  WNDOBJ *v17; // rbx
  size_t v18; // rax
  ULONG v19; // ecx
  HDC *v20; // rsi
  __int64 v21; // r9
  Gre::Base *v22; // rcx
  ULONG v23; // ecx
  __int64 v24; // r8
  unsigned int v25; // ecx
  unsigned int v26; // eax
  _WORD *v27; // rdx
  int Xlate; // eax
  int v29; // eax
  __int64 v30; // rcx
  struct REGION *v31; // rax
  struct REGION *v32; // rax
  HDEV v33; // [rsp+30h] [rbp-738h] BYREF
  Gre::Base *v34; // [rsp+38h] [rbp-730h] BYREF
  int v35; // [rsp+40h] [rbp-728h]
  unsigned __int64 v36; // [rsp+48h] [rbp-720h]
  unsigned int v37; // [rsp+50h] [rbp-718h]
  struct SURFACE *v38; // [rsp+58h] [rbp-710h]
  struct Gre::Base::SESSION_GLOBALS *v39; // [rsp+60h] [rbp-708h]
  void *Src; // [rsp+68h] [rbp-700h]
  HDEV *Parameter; // [rsp+70h] [rbp-6F8h] BYREF
  char *v42; // [rsp+78h] [rbp-6F0h]
  int v43; // [rsp+80h] [rbp-6E8h]
  int v44; // [rsp+84h] [rbp-6E4h]
  void *v45; // [rsp+88h] [rbp-6E0h]
  void *v46; // [rsp+90h] [rbp-6D8h]
  int v47; // [rsp+98h] [rbp-6D0h]
  unsigned int v48; // [rsp+9Ch] [rbp-6CCh]
  void *v49; // [rsp+A0h] [rbp-6C8h]
  struct _RECTL v50; // [rsp+B0h] [rbp-6B8h] BYREF
  _BYTE v51[112]; // [rsp+C0h] [rbp-6A8h] BYREF
  WNDOBJ *pwo; // [rsp+130h] [rbp-638h]
  __int64 v53; // [rsp+140h] [rbp-628h] BYREF
  int v54; // [rsp+148h] [rbp-620h]
  int v55; // [rsp+14Ch] [rbp-61Ch]
  _DWORD v56[8]; // [rsp+150h] [rbp-618h] BYREF
  __int64 v57; // [rsp+170h] [rbp-5F8h]
  char v58[768]; // [rsp+180h] [rbp-5E8h] BYREF
  char v59; // [rsp+480h] [rbp-2E8h] BYREF
  _BYTE v60[4]; // [rsp+520h] [rbp-248h] BYREF
  struct _RECTL v61; // [rsp+524h] [rbp-244h] BYREF

  Src = a4;
  v6 = a3;
  v37 = a3;
  LODWORD(v36) = a2;
  v49 = a6;
  v8 = 0;
  v35 = 0;
  `vector constructor iterator'(v58, 48LL, 16LL, (void (__fastcall *)(char *))DCOBJ::DCOBJ);
  v9 = *(_QWORD *)a1;
  if ( !*(_QWORD *)(*(_QWORD *)a1 + 496LL) )
  {
    EngSetLastError(6u);
LABEL_3:
    `vector destructor iterator'(v58, 48LL, 16LL, (void (__fastcall *)(char *))DCOBJ::~DCOBJ);
    return 0LL;
  }
  v34 = 0LL;
  v33 = *(HDEV *)(v9 + 48);
  DEVLOCKOBJ_WNDOBJ::DEVLOCKOBJ_WNDOBJ((DEVLOCKOBJ_WNDOBJ *)v51, a1);
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 36LL) & 0x4000) != 0 || (v51[24] & 1) == 0 && !(unsigned int)XDCOBJ::bFullScreen(a1) )
    goto LABEL_5;
  v38 = XDCOBJ::pSurfaceEff(a1);
  if ( ((_DWORD)v33[10] & 0x20000) != 0 )
  {
    v13 = *(HDEV *)(v12 + 48);
    v50 = *(struct _RECTL *)(v12 + 1032);
    DeviceHdev = hdevFindDeviceHdev(v13, &v50, (struct EWNDOBJ *)((unsigned __int64)pwo & -(__int64)(pwo != 0LL)));
    if ( DeviceHdev )
    {
      v11 = (Gre::Base *)*((_QWORD *)v33 + 316);
      if ( *(Gre::Base **)(*(_QWORD *)a1 + 496LL) == v11 )
        v38 = (struct SURFACE *)*((_QWORD *)DeviceHdev + 316);
      v33 = DeviceHdev;
    }
  }
  if ( !*((_QWORD *)v33 + 357) || ((_DWORD)v33[10] & 0x8000) != 0 )
  {
LABEL_5:
    DEVLOCKOBJ_WNDOBJ::~DEVLOCKOBJ_WNDOBJ((DEVLOCKOBJ_WNDOBJ *)v51);
    EXLATEOBJ::vAltUnlock(&v34);
    goto LABEL_3;
  }
  v39 = Gre::Base::Globals(v11);
  *(_QWORD *)&v50.left = *((_QWORD *)v39 + 14);
  GreAcquireSemaphore(*(_QWORD *)&v50.left);
  v17 = 0LL;
  v53 = 0LL;
  v57 = 0LL;
  v56[0] = 0;
  v45 = 0LL;
  v48 = 0;
  Parameter = &v33;
  if ( v38 )
    v42 = (char *)v38 + 24;
  else
    v42 = 0LL;
  v43 = v36;
  v44 = v6;
  v47 = a5;
  v46 = v49;
  if ( (_DWORD)v36 != 4352 )
  {
    v45 = Src;
    if ( KeExpandKernelStackAndCallout(iOpenGLExtEscapeHelper, &Parameter, 0x11800uLL) >= 0 )
      v8 = v48;
    goto LABEL_71;
  }
  v18 = (int)v6;
  v36 = (int)v6;
  if ( (unsigned __int64)(int)v6 >= 0x18 )
  {
    if ( (unsigned __int64)(int)v6 > 0x98 )
    {
      if ( (_DWORD)v6 )
      {
        v20 = (HDC *)Win32AllocPool(v6, 1818718023LL, v15, v16);
        v18 = v36;
      }
      else
      {
        v20 = 0LL;
      }
      if ( !v20 )
      {
        v19 = 8;
        goto LABEL_21;
      }
    }
    else
    {
      v20 = (HDC *)&v59;
    }
    memmove(v20, Src, v18);
    if ( (*((_DWORD *)v20 + 1) & 4) != 0 )
    {
      v21 = *((unsigned int *)v20 + 2);
      if ( (unsigned int)v21 > 0x10 || v37 < (unsigned __int64)(8 * v21 + 24) )
      {
        v23 = 8;
        goto LABEL_38;
      }
      v35 = LookUpWndobjs(a1, (struct DCOBJ *)v58, v20 + 3, v21);
      if ( v35 < 0 )
        goto LABEL_67;
    }
    if ( (*((_DWORD *)v20 + 1) & 2) != 0 )
    {
      if ( *((_DWORD *)v33 + 519) != 2 && *((_DWORD *)v33 + 519) != 3 )
        goto LABEL_31;
      v24 = *(_QWORD *)(*(_QWORD *)a1 + 88LL);
      if ( v24 )
      {
        v25 = 16;
        if ( *((_DWORD *)v33 + 519) != 2 )
          v25 = 256;
        v26 = 0;
        v27 = v60;
        do
          *v27++ = v26++;
        while ( v26 < v25 );
        Xlate = EXLATEOBJ::bMakeXlate(&v34, v60, v24, v38, v25, v25);
        v22 = 0LL;
        if ( Xlate )
          v22 = v34;
      }
      else
      {
        v22 = 0LL;
      }
      if ( !v22 )
LABEL_31:
        v22 = (struct Gre::Base::SESSION_GLOBALS *)((char *)v39 + 6896);
    }
    else
    {
      v22 = 0LL;
    }
    v20[2] = (HDC)v22;
    v29 = *((_DWORD *)v20 + 1);
    if ( (v29 & 4) != 0 )
      goto LABEL_60;
    if ( (v29 & 1) == 0 )
    {
      v20[1] = 0LL;
      goto LABEL_60;
    }
    if ( pwo && (pwo[3].coClient.rclBounds.bottom & 0x8000000) == 0 )
    {
      v30 = *(_QWORD *)(*(_QWORD *)&pwo[3].coClient.iUniq + 32LL);
      if ( v30 == *(_QWORD *)(*(_QWORD *)a1 + 496LL)
        || *(_QWORD *)(*(_QWORD *)(v30 + 48) + 24LL) == *(_QWORD *)(*(_QWORD *)a1 + 48LL) )
      {
        v20[1] = (HDC)pwo;
LABEL_60:
        if ( pwo )
        {
          if ( (pwo[3].coClient.rclBounds.bottom & 0x80u) == 0 )
          {
            v17 = pwo;
            EngControlSprites(pwo, 1u);
          }
        }
        else
        {
          v31 = XDCOBJ::prgnEffRao((DC **)a1);
          v53 = *((_QWORD *)v31 + 7);
          v54 = *((_DWORD *)v31 + 16);
          v55 = *((_DWORD *)v31 + 17);
          v32 = XDCOBJ::prgnEffRao((DC **)a1);
          ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v60, v32, (struct ERECTL *)&v53, 0);
          DEVEXCLUDERECT::vExclude((DEVEXCLUDERECT *)v56, a1, &v61);
        }
        ++*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 496LL) + 92LL);
        v45 = v20;
        if ( KeExpandKernelStackAndCallout(iOpenGLExtEscapeHelper, &Parameter, 0x11800uLL) >= 0 )
        {
          v8 = v48;
          if ( (*((_DWORD *)v20 + 1) & 4) != 0 )
            v8 = (v35 << 16) | (unsigned __int16)v48;
        }
      }
LABEL_67:
      if ( v36 > 0x98 )
        Win32FreePool(v20);
      goto LABEL_71;
    }
    v23 = 6;
LABEL_38:
    EngSetLastError(v23);
    goto LABEL_67;
  }
  v19 = 87;
LABEL_21:
  EngSetLastError(v19);
LABEL_71:
  DEVEXCLUDERECT::~DEVEXCLUDERECT((DEVEXCLUDERECT *)v56);
  if ( v17 )
    EngControlSprites(v17, 2u);
  SEMOBJ::vUnlock((SEMOBJ *)&v50);
  DEVLOCKOBJ_WNDOBJ::~DEVLOCKOBJ_WNDOBJ((DEVLOCKOBJ_WNDOBJ *)v51);
  EXLATEOBJ::vAltUnlock(&v34);
  `vector destructor iterator'(v58, 48LL, 16LL, (void (__fastcall *)(char *))DCOBJ::~DCOBJ);
  return v8;
}
