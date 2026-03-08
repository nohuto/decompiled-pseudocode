/*
 * XREFs of ?iOpenGLExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z @ 0x1C0279714
 * Callers:
 *     ?GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1AEBUTag@RFONTOBJ@@@Z @ 0x1C02782F8 (-GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1AEBUTag@RFONTOBJ@@@Z.c)
 * Callees:
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C007F50C (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C007FBDC (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C008C1D8 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ @ 0x1C008D3E0 (-pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00D32A0 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ??0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z @ 0x1C012FB90 (--0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z.c)
 *     memmove @ 0x1C0130B80 (memmove.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C0141926 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1C023C124 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??0DEVLOCKOBJ_WNDOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C02777F4 (--0DEVLOCKOBJ_WNDOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ??1DEVEXCLUDERECT@@QEAA@XZ @ 0x1C02778A8 (--1DEVEXCLUDERECT@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ_WNDOBJ@@QEAA@XZ @ 0x1C027790C (--1DEVLOCKOBJ_WNDOBJ@@QEAA@XZ.c)
 *     ?LookUpWndobjs@@YAHPEAVDCOBJ@@0PEAPEAUHDC__@@H@Z @ 0x1C0278F00 (-LookUpWndobjs@@YAHPEAVDCOBJ@@0PEAPEAUHDC__@@H@Z.c)
 *     ?vExclude@DEVEXCLUDERECT@@QEAAXAEAVXDCOBJ@@PEAU_RECTL@@@Z @ 0x1C027A30C (-vExclude@DEVEXCLUDERECT@@QEAAXAEAVXDCOBJ@@PEAU_RECTL@@@Z.c)
 *     EngControlSprites @ 0x1C0285FF0 (EngControlSprites.c)
 *     ?hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z @ 0x1C02B51BC (-hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z.c)
 *     ?bMakeXlate@EXLATEOBJ@@QEAAHPEBGVXEPALOBJ@@PEAVSURFACE@@KK@Z @ 0x1C02DE318 (-bMakeXlate@EXLATEOBJ@@QEAAHPEBGVXEPALOBJ@@PEAVSURFACE@@KK@Z.c)
 */

__int64 __fastcall iOpenGLExtEscape(struct DCOBJ *a1, int a2, int a3, void *a4, int a5, void *a6)
{
  unsigned __int64 v6; // r13
  unsigned int v9; // r15d
  __int64 v10; // rcx
  Gre::Base *v12; // rcx
  __int64 v13; // r9
  HDEV v14; // rcx
  HDEV DeviceHdev; // r8
  __int64 v16; // r8
  __int64 v17; // r9
  WNDOBJ *v18; // rbx
  size_t v19; // rax
  ULONG v20; // ecx
  HDC *v21; // r14
  __int64 v22; // r9
  Gre::Base *v23; // rcx
  ULONG v24; // ecx
  __int64 v25; // r8
  unsigned int v26; // ecx
  unsigned int v27; // eax
  _WORD *v28; // rdx
  int Xlate; // eax
  int v30; // eax
  __int64 v31; // rcx
  struct REGION *v32; // rax
  struct REGION *v33; // rax
  HDEV v34; // [rsp+30h] [rbp-508h] BYREF
  Gre::Base *v35; // [rsp+38h] [rbp-500h] BYREF
  int v36; // [rsp+40h] [rbp-4F8h]
  struct SURFACE *v37; // [rsp+48h] [rbp-4F0h]
  struct Gre::Base::SESSION_GLOBALS *v38; // [rsp+50h] [rbp-4E8h]
  void *Src; // [rsp+58h] [rbp-4E0h]
  HDEV *Parameter; // [rsp+60h] [rbp-4D8h] BYREF
  char *v41; // [rsp+68h] [rbp-4D0h]
  int v42; // [rsp+70h] [rbp-4C8h]
  int v43; // [rsp+74h] [rbp-4C4h]
  void *v44; // [rsp+78h] [rbp-4C0h]
  void *v45; // [rsp+80h] [rbp-4B8h]
  int v46; // [rsp+88h] [rbp-4B0h]
  unsigned int v47; // [rsp+8Ch] [rbp-4ACh]
  void *v48; // [rsp+90h] [rbp-4A8h]
  struct _RECTL v49; // [rsp+A0h] [rbp-498h] BYREF
  _BYTE v50[80]; // [rsp+B0h] [rbp-488h] BYREF
  WNDOBJ *pwo; // [rsp+100h] [rbp-438h]
  __int64 v52; // [rsp+110h] [rbp-428h] BYREF
  int v53; // [rsp+118h] [rbp-420h]
  int v54; // [rsp+11Ch] [rbp-41Ch]
  _DWORD v55[8]; // [rsp+120h] [rbp-418h] BYREF
  __int64 v56; // [rsp+140h] [rbp-3F8h]
  char v57[256]; // [rsp+150h] [rbp-3E8h] BYREF
  char v58; // [rsp+250h] [rbp-2E8h] BYREF
  _BYTE v59[4]; // [rsp+2F0h] [rbp-248h] BYREF
  struct _RECTL v60; // [rsp+2F4h] [rbp-244h] BYREF

  Src = a4;
  v6 = a3;
  v48 = a6;
  v9 = 0;
  v36 = 0;
  `vector constructor iterator'(v57, 16LL, 16LL, (void (__fastcall *)(char *))DCOBJ::DCOBJ);
  v10 = *(_QWORD *)a1;
  if ( !*(_QWORD *)(*(_QWORD *)a1 + 496LL) )
  {
    EngSetLastError(6u);
LABEL_3:
    `vector destructor iterator'(v57, 16LL, 16LL, (void (__fastcall *)(char *))DCOBJ::~DCOBJ);
    return 0LL;
  }
  v35 = 0LL;
  v34 = *(HDEV *)(v10 + 48);
  DEVLOCKOBJ_WNDOBJ::DEVLOCKOBJ_WNDOBJ((DEVLOCKOBJ_WNDOBJ *)v50, a1);
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 36LL) & 0x4000) != 0 || (v50[24] & 1) == 0 && !(unsigned int)XDCOBJ::bFullScreen(a1) )
    goto LABEL_5;
  v37 = XDCOBJ::pSurfaceEff(a1);
  if ( ((_DWORD)v34[10] & 0x20000) != 0 )
  {
    v14 = *(HDEV *)(v13 + 48);
    v49 = *(struct _RECTL *)(v13 + 1032);
    DeviceHdev = hdevFindDeviceHdev(v14, &v49, (struct EWNDOBJ *)((unsigned __int64)pwo & -(__int64)(pwo != 0LL)));
    if ( DeviceHdev )
    {
      v12 = (Gre::Base *)*((_QWORD *)v34 + 316);
      if ( *(Gre::Base **)(*(_QWORD *)a1 + 496LL) == v12 )
        v37 = (struct SURFACE *)*((_QWORD *)DeviceHdev + 316);
      v34 = DeviceHdev;
    }
  }
  if ( !*((_QWORD *)v34 + 357) || ((_DWORD)v34[10] & 0x8000) != 0 )
  {
LABEL_5:
    DEVLOCKOBJ_WNDOBJ::~DEVLOCKOBJ_WNDOBJ((DEVLOCKOBJ_WNDOBJ *)v50);
    EXLATEOBJ::vAltUnlock(&v35);
    goto LABEL_3;
  }
  v38 = Gre::Base::Globals(v12);
  *(_QWORD *)&v49.left = *((_QWORD *)v38 + 14);
  GreAcquireSemaphore(*(_QWORD *)&v49.left);
  v18 = 0LL;
  v52 = 0LL;
  v56 = 0LL;
  v55[0] = 0;
  v44 = 0LL;
  v47 = 0;
  Parameter = &v34;
  if ( v37 )
    v41 = (char *)v37 + 24;
  else
    v41 = 0LL;
  v42 = a2;
  v43 = v6;
  v46 = a5;
  v45 = v48;
  if ( a2 != 4352 )
  {
    v44 = Src;
    if ( KeExpandKernelStackAndCallout(iOpenGLExtEscapeHelper, &Parameter, 0x11800uLL) >= 0 )
      v9 = v47;
    goto LABEL_68;
  }
  v19 = v6;
  if ( v6 >= 0x18 )
  {
    if ( v6 > 0x98 )
    {
      v21 = (HDC *)Win32AllocPool((unsigned int)v6, 1818718023LL, v16, v17);
      v19 = v6;
      if ( !v21 )
      {
        v20 = 8;
        goto LABEL_21;
      }
    }
    else
    {
      v21 = (HDC *)&v58;
    }
    memmove(v21, Src, v19);
    if ( (*((_DWORD *)v21 + 1) & 4) != 0 )
    {
      v22 = *((unsigned int *)v21 + 2);
      if ( (unsigned int)v22 > 0x10 || (unsigned int)v6 < (unsigned __int64)(8 * v22 + 24) )
      {
        v24 = 8;
        goto LABEL_35;
      }
      v36 = LookUpWndobjs(a1, (struct DCOBJ *)v57, v21 + 3, v22);
      if ( v36 < 0 )
        goto LABEL_64;
    }
    if ( (*((_DWORD *)v21 + 1) & 2) != 0 )
    {
      if ( *((_DWORD *)v34 + 519) != 2 && *((_DWORD *)v34 + 519) != 3 )
        goto LABEL_31;
      v25 = *(_QWORD *)(*(_QWORD *)a1 + 88LL);
      if ( v25 )
      {
        v26 = 16;
        if ( *((_DWORD *)v34 + 519) != 2 )
          v26 = 256;
        v27 = 0;
        v28 = v59;
        do
          *v28++ = v27++;
        while ( v27 < v26 );
        Xlate = EXLATEOBJ::bMakeXlate(&v35, v59, v25, v37, v26, v26);
        v23 = 0LL;
        if ( Xlate )
          v23 = v35;
      }
      else
      {
        v23 = 0LL;
      }
      if ( !v23 )
LABEL_31:
        v23 = (struct Gre::Base::SESSION_GLOBALS *)((char *)v38 + 6896);
    }
    else
    {
      v23 = 0LL;
    }
    v21[2] = (HDC)v23;
    v30 = *((_DWORD *)v21 + 1);
    if ( (v30 & 4) != 0 )
      goto LABEL_57;
    if ( (v30 & 1) == 0 )
    {
      v21[1] = 0LL;
      goto LABEL_57;
    }
    if ( pwo && (pwo[3].coClient.rclBounds.bottom & 0x8000000) == 0 )
    {
      v31 = *(_QWORD *)(*(_QWORD *)&pwo[3].coClient.iUniq + 32LL);
      if ( v31 == *(_QWORD *)(*(_QWORD *)a1 + 496LL)
        || *(_QWORD *)(*(_QWORD *)(v31 + 48) + 24LL) == *(_QWORD *)(*(_QWORD *)a1 + 48LL) )
      {
        v21[1] = (HDC)pwo;
LABEL_57:
        if ( pwo )
        {
          if ( (pwo[3].coClient.rclBounds.bottom & 0x80u) == 0 )
          {
            v18 = pwo;
            EngControlSprites(pwo, 1u);
          }
        }
        else
        {
          v32 = XDCOBJ::prgnEffRao((DC **)a1);
          v52 = *((_QWORD *)v32 + 7);
          v53 = *((_DWORD *)v32 + 16);
          v54 = *((_DWORD *)v32 + 17);
          v33 = XDCOBJ::prgnEffRao((DC **)a1);
          ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v59, v33, (struct ERECTL *)&v52, 0);
          DEVEXCLUDERECT::vExclude((DEVEXCLUDERECT *)v55, a1, &v60);
        }
        ++*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 496LL) + 92LL);
        v44 = v21;
        if ( KeExpandKernelStackAndCallout(iOpenGLExtEscapeHelper, &Parameter, 0x11800uLL) >= 0 )
        {
          v9 = v47;
          if ( (*((_DWORD *)v21 + 1) & 4) != 0 )
            v9 = (v36 << 16) | (unsigned __int16)v47;
        }
      }
LABEL_64:
      if ( v6 > 0x98 )
        Win32FreePool(v21);
      goto LABEL_68;
    }
    v24 = 6;
LABEL_35:
    EngSetLastError(v24);
    goto LABEL_64;
  }
  v20 = 87;
LABEL_21:
  EngSetLastError(v20);
LABEL_68:
  DEVEXCLUDERECT::~DEVEXCLUDERECT((DEVEXCLUDERECT *)v55);
  if ( v18 )
    EngControlSprites(v18, 2u);
  SEMOBJ::vUnlock((SEMOBJ *)&v49);
  DEVLOCKOBJ_WNDOBJ::~DEVLOCKOBJ_WNDOBJ((DEVLOCKOBJ_WNDOBJ *)v50);
  EXLATEOBJ::vAltUnlock(&v35);
  `vector destructor iterator'(v57, 16LL, 16LL, (void (__fastcall *)(char *))DCOBJ::~DCOBJ);
  return v9;
}
