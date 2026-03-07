void __fastcall vSpComposite(struct SPRITE *a1, struct _POINTL *a2, struct _SURFOBJ *a3, struct _RECTL *a4)
{
  struct Gre::Base::SESSION_GLOBALS *v7; // rax
  __int64 *v8; // rcx
  struct Gre::Base::SESSION_GLOBALS *v9; // r15
  __int64 v10; // rcx
  int v11; // ecx
  struct REGION *v12; // rbx
  struct REGION *v13; // rdx
  __int64 v14; // rax
  __int64 *v15; // r8
  int v16; // edx
  int v17; // ecx
  __int64 v18; // r14
  unsigned int v19; // ebx
  unsigned __int64 v20; // rcx
  __int64 v21; // rdi
  __int64 v22; // rbx
  __int64 v23; // r15
  __int64 v24; // rdi
  __int64 v25; // rax
  int v26; // edx
  __int64 v27; // rax
  struct _SURFOBJ *v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rdi
  int v31; // ecx
  PVOID *v32; // rbx
  int v33; // eax
  Gre::Base *v34; // rcx
  signed int cEntries; // eax
  struct REGION *v36; // rdi
  struct _SPRITESTATE *v37; // rcx
  int v38; // eax
  __int64 v39; // rax
  __int64 v40; // rax
  struct _XLATEOBJ *XlateObject; // rax
  struct _SURFOBJ *v42; // rdx
  __int64 v43; // rax
  int v44; // ecx
  int v45; // ecx
  int v46; // eax
  int v47; // esi
  __int64 v48; // r14
  BOOL (__stdcall *v49)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, ULONG, ULONG); // rcx
  PVOID v50; // rcx
  __int64 v51; // rdi
  PVOID *v52; // rbx
  int v53; // eax
  __int64 v54; // rdi
  BOOL (__stdcall *v55)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // rcx
  struct _SURFOBJ *v56; // rdx
  int v57; // eax
  int v58; // r14d
  struct _RECTL v59; // xmm6
  __int64 v60; // rax
  __int64 v61; // rbx
  int v62; // ecx
  PVOID *p_pvScan0; // rdi
  int hsurf; // eax
  __int64 v65; // rsi
  BOOL (__stdcall *v66)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *); // rcx
  unsigned int v67; // edx
  struct _SURFOBJ *v68; // rcx
  __int64 *v69; // rbx
  struct _RECTL *v70; // [rsp+38h] [rbp-D0h]
  struct _POINTL *v71; // [rsp+40h] [rbp-C8h]
  __int64 v72; // [rsp+48h] [rbp-C0h]
  struct _XLATEOBJ *v73; // [rsp+78h] [rbp-90h] BYREF
  __int64 *v74; // [rsp+80h] [rbp-88h]
  struct _RECTL *v75; // [rsp+88h] [rbp-80h]
  struct _POINTL v76; // [rsp+90h] [rbp-78h] BYREF
  struct _CLIPOBJ *v77; // [rsp+98h] [rbp-70h]
  struct _POINTL *v78; // [rsp+A0h] [rbp-68h]
  struct REGION *v79; // [rsp+A8h] [rbp-60h] BYREF
  struct REGION *v80; // [rsp+B0h] [rbp-58h] BYREF
  unsigned int v81; // [rsp+B8h] [rbp-50h]
  Gre::Base *v82; // [rsp+C0h] [rbp-48h] BYREF
  Gre::Base *v83; // [rsp+C8h] [rbp-40h] BYREF
  Gre::Base *v84; // [rsp+D0h] [rbp-38h] BYREF
  unsigned __int8 *v85; // [rsp+D8h] [rbp-30h] BYREF
  _QWORD v86[2]; // [rsp+E0h] [rbp-28h] BYREF
  struct REGION *v87; // [rsp+F0h] [rbp-18h] BYREF
  __int64 v88; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v89; // [rsp+100h] [rbp-8h] BYREF
  struct REGION *v90; // [rsp+108h] [rbp+0h]
  __int64 v91[2]; // [rsp+110h] [rbp+8h] BYREF
  __int128 v92; // [rsp+120h] [rbp+18h]
  struct _RECTL v93; // [rsp+138h] [rbp+30h] BYREF
  __int128 v94; // [rsp+148h] [rbp+40h] BYREF
  _BYTE v95[4]; // [rsp+158h] [rbp+50h] BYREF
  __int64 v96; // [rsp+15Ch] [rbp+54h]
  __int64 v97; // [rsp+164h] [rbp+5Ch]
  REGION *v98; // [rsp+190h] [rbp+88h]
  __int64 v99; // [rsp+1A8h] [rbp+A0h]
  int v100; // [rsp+1B0h] [rbp+A8h]
  int v101; // [rsp+1D8h] [rbp+D0h]
  __int64 v102; // [rsp+1E8h] [rbp+E0h]
  int v103; // [rsp+1F0h] [rbp+E8h]

  v75 = a4;
  v78 = a2;
  v7 = Gre::Base::Globals(a1);
  v8 = (__int64 *)*((_QWORD *)a1 + 2);
  v99 = 0LL;
  v9 = v7;
  v100 = 0;
  v102 = 0LL;
  v98 = 0LL;
  v101 = 1;
  v103 = 0;
  v10 = *v8;
  if ( v10
    && (*(_DWORD *)(v10 + 1792) & 0x8000000) != 0
    && (*(_DWORD *)(v10 + 2096) & 0x800) != 0
    && (*(_DWORD *)a1 & 0x100) != 0 )
  {
    goto LABEL_43;
  }
  v11 = *(_DWORD *)a1;
  if ( (*(_DWORD *)a1 & 0x400) != 0 || (v11 & 0xC0) == 0x40 || (v11 & 0x21) != 0x20 )
    goto LABEL_43;
  v77 = 0LL;
  v12 = (struct REGION *)_InterlockedExchange64((volatile __int64 *)a1 + 24, 0LL);
  v90 = v12;
  v80 = 0LL;
  if ( *((_QWORD *)a1 + 23) && v12 )
  {
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v79);
    if ( v79
      && (v88 = *((_QWORD *)a1 + 23),
          v87 = v12,
          RGNOBJ::bMerge((RGNOBJ *)&v79, (struct RGNOBJ *)&v88, (struct RGNOBJ *)&v87, 8u)) )
    {
      v13 = v79;
      v14 = (__int64)v79 + 52;
      if ( !v79 )
        v14 = 28LL;
      if ( *(_DWORD *)v14 == 1 )
      {
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v79);
        goto LABEL_68;
      }
      v80 = v79;
    }
    else
    {
      v13 = v80;
    }
    if ( v13 )
    {
      v97 = 0LL;
      v96 = 0LL;
      v77 = (struct _CLIPOBJ *)v95;
      v98 = 0LL;
      v103 = 0;
      XCLIPOBJ::vSetup((XCLIPOBJ *)v95, v13, (struct ERECTL *)a4, 0);
      goto LABEL_16;
    }
  }
  if ( (*(_DWORD *)a1 & 0x40) != 0 )
  {
    if ( !v12 )
      goto LABEL_43;
    if ( !*((_QWORD *)a1 + 23) )
    {
LABEL_68:
      vSpAddAndCompactDirtyRegion(a1, v12);
      goto LABEL_43;
    }
  }
  v36 = (struct REGION *)*((_QWORD *)a1 + 23);
  if ( !v36 )
    goto LABEL_18;
  v37 = (struct _SPRITESTATE *)*((_QWORD *)a1 + 2);
  v77 = (struct _CLIPOBJ *)v95;
  v38 = bConcurrent(v37);
  ECLIPOBJTMPIFNEEDED::vSetup((ECLIPOBJTMPIFNEEDED *)v95, v38, v36, (struct ERECTL *)a4, 0);
LABEL_16:
  if ( (int)v96 >= (int)v97 || SHIDWORD(v96) >= SHIDWORD(v97) )
  {
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v80);
    if ( v12 )
      goto LABEL_68;
LABEL_43:
    ECLIPOBJTMPIFNEEDED::~ECLIPOBJTMPIFNEEDED((ECLIPOBJTMPIFNEEDED *)v95);
    return;
  }
LABEL_18:
  v15 = (__int64 *)*((_QWORD *)a1 + 2);
  v16 = *(_DWORD *)a1;
  v17 = *((_DWORD *)a1 + 1);
  v18 = *((_QWORD *)a1 + 18);
  if ( (*(_DWORD *)a1 & 8) != 0 )
    v17 = 4;
  v74 = (__int64 *)*((_QWORD *)a1 + 2);
  v19 = v17 & 0xEFFFFFFF;
  v73 = 0LL;
  if ( (v16 & 0x100) == 0 )
    v19 = v17;
  v76.x = a4->left + *((_DWORD *)a1 + 24) - *((_DWORD *)a1 + 28);
  v20 = (unsigned int)(a4->top + *((_DWORD *)a1 + 25) - *((_DWORD *)a1 + 29));
  v76.y = a4->top + *((_DWORD *)a1 + 25) - *((_DWORD *)a1 + 29);
  v21 = v15[4];
  v81 = v19;
  v22 = *((_QWORD *)v9 + 750);
  v23 = *((_QWORD *)v9 + 751);
  v24 = *(_QWORD *)(v21 + 104);
  v86[0] = 0LL;
  if ( *((_DWORD *)a1 + 38) != *((_DWORD *)v15 + 27)
    || *((_DWORD *)a1 + 39) != *((_DWORD *)v15 + 28)
    || (v16 & 0x40) != 0 )
  {
    if ( v18 )
    {
      if ( v24 )
      {
        v25 = *(_QWORD *)(v18 + 120);
        if ( v25 == v18 )
          v26 = *(_DWORD *)(v18 + 32);
        else
          v26 = *(_DWORD *)(v25 + 32);
        v27 = *(_QWORD *)(v24 + 120);
        if ( v27 == v24 )
          v20 = *(unsigned int *)(v24 + 32);
        else
          v20 = *(unsigned int *)(v27 + 32);
        if ( v26 == (_DWORD)v20 )
          goto LABEL_32;
        if ( (unsigned int)EXLATEOBJ::bSearchCache(&v73, v18, v24, v22, v22, 0, 0, 0, 0) )
          goto LABEL_33;
LABEL_81:
        LODWORD(v72) = 0;
        LODWORD(v71) = 0;
        LODWORD(v70) = 0;
        XlateObject = (struct _XLATEOBJ *)CreateXlateObject(0LL, 0, v18, v24, v22, v22, v70, v71, v72, 0);
        v73 = XlateObject;
        if ( !XlateObject )
          goto LABEL_47;
        if ( v18 && v24 && (XlateObject[3].flXlate & 0x200) == 0 )
          EXLATEOBJ::vAddToCache((Gre::Base *)&v73, v18, v24, v22, v22);
        goto LABEL_33;
      }
      if ( (*(_DWORD *)(v18 + 24) & 0x800) == 0 )
        goto LABEL_81;
      v40 = *(_QWORD *)(v22 + 80);
      if ( v40 )
      {
        if ( v40 != *(_QWORD *)(v22 + 72) )
          goto LABEL_81;
      }
    }
    else if ( v24 )
    {
      if ( (*(_DWORD *)(v24 + 24) & 0x800) == 0 )
        goto LABEL_81;
      v39 = *(_QWORD *)(v22 + 80);
      if ( v39 )
      {
        if ( v39 != *(_QWORD *)(v22 + 72) )
          goto LABEL_81;
      }
    }
LABEL_32:
    v73 = (struct _XLATEOBJ *)((char *)Gre::Base::Globals((Gre::Base *)v20) + 6896);
LABEL_33:
    v15 = v74;
  }
  switch ( v81 )
  {
    case 2u:
      v56 = (struct _SURFOBJ *)*((_QWORD *)a1 + 16);
      if ( !v56 || !SURFREFVIEW::bMap((SURFREFVIEW *)v86, v56) )
        goto LABEL_47;
      v93.right = v76.x + a4->right - a4->left;
      v93.bottom = v76.y + a4->bottom - a4->top;
      v84 = 0LL;
      v83 = 0LL;
      v82 = 0LL;
      v93.left = v76.x;
      v93.top = v76.y;
      *(_OWORD *)v91 = 0LL;
      v92 = 0LL;
      if ( !(unsigned int)EXLATEOBJ::bInitXlateObj((Gre::Base *)&v84, 0LL, 0, v18, v23, v22, v22, 0, 0, 0, 0)
        || !(unsigned int)EXLATEOBJ::bInitXlateObj((Gre::Base *)&v83, 0LL, 0, v24, v23, v22, v22, 0, 0, 0, 0)
        || !(unsigned int)EXLATEOBJ::bInitXlateObj((Gre::Base *)&v82, 0LL, 0, v23, v24, v22, v22, 0, 0, 0, 0) )
      {
        goto LABEL_185;
      }
      v57 = *((_DWORD *)a1 + 50);
      v58 = 0;
      v85 = 0LL;
      v59 = 0LL;
      LODWORD(v91[0]) = v57;
      v91[1] = (__int64)v84;
      *(_QWORD *)&v92 = v83;
      *((_QWORD *)&v92 + 1) = v82;
      if ( (*((_DWORD *)a1 + 56) & 0xEFFFFFFF) == 3 && !*((_BYTE *)a1 + 231) && (*(_DWORD *)a1 & 0x40) != 0 )
      {
        GreAcquireSemaphore(v74[16]);
        vSpUpdatePerPixelAlphaFromColorKey(*((struct _SURFOBJ **)a1 + 16), *((_DWORD *)a1 + 51), &v93, &v85);
        v59 = v93;
        v58 = 1;
      }
      v60 = *((_QWORD *)a1 + 16);
      v61 = 0LL;
      if ( v60 )
      {
        v62 = *(_DWORD *)(v60 + 88);
        if ( (v62 & 0x80004000) != 0 && (v62 & 0x200) == 0 )
        {
          v61 = v60 - 24;
          GreLockDisplayDevice(*(_QWORD *)(v60 - 24 + 48));
        }
      }
      p_pvScan0 = 0LL;
      if ( a3 )
      {
        hsurf = (int)a3[1].hsurf;
        if ( (hsurf & 0x80004000) != 0 && (hsurf & 0x200) == 0 )
        {
          p_pvScan0 = &a3[-1].pvScan0;
          GreLockDisplayDevice(a3->hdev);
        }
      }
      v65 = *((_QWORD *)a1 + 16);
      if ( a3->iType != 1 )
        goto LABEL_176;
      if ( bAllowShareAccess(a3)
        && W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
        && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
        && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
         || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
        && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 0x10000) != 0 )
      {
        v66 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *))(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 120LL);
LABEL_179:
        OffAlphaBlend(
          (__int64 (__fastcall *)(__int64, __int64, struct _CLIPOBJ *, __int64, __int128 *, __int128 *, __int64))v66,
          (int *)v78,
          (__int64)a3,
          (int *)a1 + 34,
          v65,
          v77,
          (__int64)v73,
          (__int128 *)&v75->left,
          (__int128 *)&v93.left,
          (__int64)v91);
        if ( p_pvScan0 )
          GreUnlockDisplayDevice(p_pvScan0[6]);
        if ( v61 )
          GreUnlockDisplayDevice(*(_QWORD *)(v61 + 48));
        if ( v58 )
        {
          v67 = *((_DWORD *)a1 + 51);
          v68 = (struct _SURFOBJ *)*((_QWORD *)a1 + 16);
          v93 = v59;
          vSpDeletePerPixelAlphaFromColorKey(v68, v67, &v93, v85);
          v69 = v74;
          EtwTraceGreLockReleaseSemaphore(L"pState->hsemState");
          GreReleaseSemaphoreInternal(v69[16]);
        }
LABEL_185:
        EXLATEOBJ::vAltUnlock(&v82);
        EXLATEOBJ::vAltUnlock(&v83);
        EXLATEOBJ::vAltUnlock(&v84);
        goto LABEL_47;
      }
      if ( a3->iType != 1
        || !bAllowShareAccess(a3)
        || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
        || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
        || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
        && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108) )
      {
LABEL_176:
        if ( ((__int64)a3[1].hsurf & 0x10000) != 0 )
        {
          v66 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *))*((_QWORD *)a3->hdev + 169);
          goto LABEL_179;
        }
      }
      v66 = EngAlphaBlend;
      goto LABEL_179;
    case 4u:
      v28 = (struct _SURFOBJ *)*((_QWORD *)a1 + 16);
      if ( !v28 || !SURFREFVIEW::bMap((SURFREFVIEW *)v86, v28) )
        goto LABEL_47;
      v29 = *((_QWORD *)a1 + 16);
      v30 = 0LL;
      if ( v29 )
      {
        v31 = *(_DWORD *)(v29 + 88);
        if ( (v31 & 0x80004000) != 0 && (v31 & 0x200) == 0 )
        {
          v30 = v29 - 24;
          GreLockDisplayDevice(*(_QWORD *)(v29 - 24 + 48));
        }
      }
      v32 = 0LL;
      if ( a3 )
      {
        v33 = (int)a3[1].hsurf;
        if ( (v33 & 0x80004000) != 0 && (v33 & 0x200) == 0 )
        {
          v32 = &a3[-1].pvScan0;
          GreLockDisplayDevice(a3->hdev);
        }
      }
      INVOKEOFFCOPYBITS(v78, a3, (struct _POINTL *)a1 + 17, *((struct _SURFOBJ **)a1 + 16), v77, v73, v75, &v76);
      goto LABEL_44;
    case 1u:
      v42 = (struct _SURFOBJ *)*((_QWORD *)a1 + 16);
      if ( !v42 || !SURFREFVIEW::bMap((SURFREFVIEW *)v86, v42) )
        goto LABEL_47;
      v30 = 0LL;
      v43 = *((_QWORD *)a1 + 16);
      DWORD2(v94) = v76.x + a4->right - a4->left;
      v44 = a4->bottom - a4->top;
      *(struct _POINTL *)&v94 = v76;
      HIDWORD(v94) = v76.y + v44;
      if ( v43 )
      {
        v45 = *(_DWORD *)(v43 + 88);
        if ( (v45 & 0x80004000) != 0 && (v45 & 0x200) == 0 )
        {
          v30 = v43 - 24;
          GreLockDisplayDevice(*(_QWORD *)(v43 - 24 + 48));
        }
      }
      v32 = 0LL;
      if ( a3 )
      {
        v46 = (int)a3[1].hsurf;
        if ( (v46 & 0x80004000) != 0 && (v46 & 0x200) == 0 )
        {
          v32 = &a3[-1].pvScan0;
          GreLockDisplayDevice(a3->hdev);
        }
      }
      v47 = *((_DWORD *)a1 + 51);
      v48 = *((_QWORD *)a1 + 16);
      if ( a3->iType != 1 )
        goto LABEL_114;
      if ( bAllowShareAccess(a3)
        && W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
        && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
        && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
         || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
        && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 0x8000) != 0 )
      {
        v49 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, ULONG, ULONG))(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 112LL);
LABEL_117:
        OffTransparentBlt(
          (__int64 (__fastcall *)(__int64, __int64, struct _CLIPOBJ *, __int64, __int128 *, __int128 *, int, int))v49,
          (int *)v78,
          (__int64)a3,
          (int *)a1 + 34,
          v48,
          v77,
          (__int64)v73,
          (__int128 *)&v75->left,
          &v94,
          v47,
          0);
LABEL_44:
        if ( v32 )
          GreUnlockDisplayDevice(v32[6]);
        if ( !v30 )
          goto LABEL_47;
        v50 = *(PVOID *)(v30 + 48);
        goto LABEL_144;
      }
      if ( a3->iType != 1
        || !bAllowShareAccess(a3)
        || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
        || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
        || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
        && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108) )
      {
LABEL_114:
        if ( ((__int64)a3[1].hsurf & 0x8000) != 0 )
        {
          v49 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, ULONG, ULONG))*((_QWORD *)a3->hdev + 168);
          goto LABEL_117;
        }
      }
      v49 = EngTransparentBlt;
      goto LABEL_117;
    case 0x1000000u:
      vSpDrawCursor(a1, v78, a3, a4, &v76);
      goto LABEL_47;
  }
  v51 = *v15;
  v52 = 0LL;
  if ( a3 )
  {
    v53 = (int)a3[1].hsurf;
    if ( (v53 & 0x80004000) != 0 && (v53 & 0x200) == 0 )
    {
      v52 = &a3[-1].pvScan0;
      GreLockDisplayDevice(a3->hdev);
    }
  }
  v54 = v51 + 1536;
  v89 = 0LL;
  if ( a3->iType == 1 )
  {
    if ( bAllowShareAccess(a3)
      && W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
      && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
      && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
       || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
      && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 1) != 0 )
    {
      v55 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 72LL);
      goto LABEL_142;
    }
    if ( a3->iType == 1
      && bAllowShareAccess(a3)
      && W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
      && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
      && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
       || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108)) )
    {
      goto LABEL_141;
    }
  }
  if ( ((__int64)a3[1].hsurf & 1) == 0 )
LABEL_141:
    v55 = EngBitBlt;
  else
    v55 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))*((_QWORD *)a3->hdev + 163);
LABEL_142:
  OffBitBlt(
    (__int64 (__fastcall *)(__int64, __int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, __int64 *, __int64, __int64, __int64 *, int))v55,
    (int *)v78,
    (__int64)a3,
    0LL,
    0LL,
    0LL,
    0LL,
    0LL,
    &v75->left,
    0LL,
    0LL,
    v54,
    &v89,
    23130);
  if ( v52 )
  {
    v50 = v52[6];
LABEL_144:
    GreUnlockDisplayDevice(v50);
  }
LABEL_47:
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v80);
  if ( v90 )
    vSpAddAndCompactDirtyRegion(a1, v90);
  SURFREFVIEW::bUnMap((SURFREFVIEW *)v86);
  if ( v73 )
  {
    cEntries = v73[1].cEntries;
    if ( cEntries >= 0 )
    {
      _InterlockedDecrement((volatile signed __int32 *)Gre::Base::Globals(v34) + 8 * (int)v73[1].cEntries + 1658);
    }
    else if ( cEntries == -1 )
    {
      FreeThreadBufferWithTag(v73);
    }
  }
  if ( v103 )
    REGION::vDeleteREGION(v98);
}
