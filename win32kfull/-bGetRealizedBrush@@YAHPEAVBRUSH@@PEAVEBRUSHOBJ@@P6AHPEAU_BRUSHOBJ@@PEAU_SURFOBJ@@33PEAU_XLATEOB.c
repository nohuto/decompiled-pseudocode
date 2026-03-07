__int64 __fastcall bGetRealizedBrush(
        struct BRUSH *a1,
        struct EBRUSHOBJ *a2,
        __int64 (__fastcall *a3)(struct _BRUSHOBJ *a1, struct _SURFOBJ *a2, struct _SURFOBJ *a3, struct _SURFOBJ *a4, struct _XLATEOBJ *a5, unsigned int a6))
{
  __int64 (__fastcall *v3)(struct _BRUSHOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _XLATEOBJ *, unsigned int); // r12
  struct Gre::Base::SESSION_GLOBALS *v6; // r13
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rbx
  unsigned int v10; // r15d
  char v11; // dl
  __int64 v12; // rdx
  unsigned int v13; // eax
  __int64 v14; // rax
  __int64 v15; // rbx
  struct XLATE *v16; // rdi
  unsigned int NearestIndexFromColorref; // r13d
  unsigned int v18; // r12d
  unsigned int v19; // eax
  struct XLATE *v20; // r15
  HDEV v21; // rax
  __int64 v22; // rcx
  HDEV v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rdx
  ULONG *v26; // r9
  ULONG v27; // eax
  ULONG v28; // eax
  Gre::Base *v29; // rcx
  struct Gre::Base::SESSION_GLOBALS *v30; // rax
  int v31; // edx
  HPALETTE *v32; // rdi
  HDEV v33; // rax
  int v34; // r8d
  int v35; // ecx
  int v36; // edx
  int v37; // edx
  int v38; // edx
  int v39; // edx
  int v40; // edx
  char v41; // cl
  __int128 *v42; // rax
  __int64 v43; // xmm1_8
  unsigned int HalftoneBrush; // eax
  int v45; // edx
  void *v46; // rbx
  __int64 v48; // rbx
  int v49; // eax
  int v50; // r12d
  HSURF v51; // rbx
  void *v52; // rdx
  int v53; // eax
  HBITMAP IcmDIB; // rax
  bool v55; // zf
  __int64 v56; // r10
  int v57; // eax
  __int64 v58; // r9
  int inited; // eax
  int v60; // edx
  int v61; // r8d
  __int64 v62; // rdx
  __int64 v63; // rax
  bool v64; // cf
  unsigned int v65; // ebx
  char v66; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v67[7]; // [rsp+61h] [rbp-9Fh] BYREF
  __int64 v68; // [rsp+68h] [rbp-98h] BYREF
  HDEV hdev; // [rsp+70h] [rbp-90h] BYREF
  int v70; // [rsp+78h] [rbp-88h] BYREF
  struct XLATE *Xlate; // [rsp+80h] [rbp-80h] BYREF
  SURFACE *v72; // [rsp+88h] [rbp-78h] BYREF
  char v73; // [rsp+90h] [rbp-70h]
  int v74; // [rsp+94h] [rbp-6Ch]
  __int64 v75; // [rsp+98h] [rbp-68h] BYREF
  struct Gre::Base::SESSION_GLOBALS *v76; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v77; // [rsp+A8h] [rbp-58h]
  int v78; // [rsp+B0h] [rbp-50h]
  char v79[8]; // [rsp+B8h] [rbp-48h] BYREF
  int v80; // [rsp+C0h] [rbp-40h] BYREF
  int v81; // [rsp+C4h] [rbp-3Ch]
  int v82; // [rsp+C8h] [rbp-38h]
  int v83; // [rsp+CCh] [rbp-34h]
  __int64 v84; // [rsp+D0h] [rbp-30h]
  int v85; // [rsp+D8h] [rbp-28h]
  int v86; // [rsp+DCh] [rbp-24h]
  _DWORD v87[2]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v88; // [rsp+E8h] [rbp-18h]
  struct Gre::Base::SESSION_GLOBALS **v89; // [rsp+F0h] [rbp-10h]
  int (*v90)(struct _BRUSHOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _XLATEOBJ *, unsigned int); // [rsp+F8h] [rbp-8h]
  __int128 v91; // [rsp+100h] [rbp+0h] BYREF
  __int64 v92; // [rsp+110h] [rbp+10h]

  v3 = a3;
  v90 = (int (*)(struct _BRUSHOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _XLATEOBJ *, unsigned int))a3;
  v6 = Gre::Base::Globals(a1);
  v76 = v6;
  v78 = *((_DWORD *)a1 + 20);
  if ( v78 == 12 )
    return 0LL;
  v7 = *((_QWORD *)a2 + 10);
  v8 = 0LL;
  v72 = 0LL;
  v9 = 0LL;
  v73 = 0;
  v74 = 0;
  v10 = 1;
  hdev = *(HDEV *)(v7 + 48);
  v77 = 0LL;
  v75 = 0LL;
  LODWORD(v7) = hdev[10];
  Xlate = 0LL;
  if ( (v7 & 1) == 0 || (v11 = 1, v3 != EngRealizeBrush) )
    v11 = 0;
  NEEDDYNAMICMODECHANGESHARELOCK::NEEDDYNAMICMODECHANGESHARELOCK((NEEDDYNAMICMODECHANGESHARELOCK *)v67, v11);
  NEEDGRELOCK::vLock((NEEDGRELOCK *)v79, (struct PDEVOBJ *)&hdev);
  v13 = *((_DWORD *)a1 + 20);
  if ( v13 < 6 )
  {
    LOBYTE(v12) = 5;
    v14 = HmgShareLockCheck(*((_QWORD *)hdev + v13 + 181), v12);
    v75 = v14;
    v15 = v14;
    if ( v14 )
    {
      v77 = (v14 + 24) & ((unsigned __int128)-(__int128)(unsigned __int64)v14 >> 64);
      Xlate = pCreateXlate(2u);
      v16 = Xlate;
      if ( Xlate )
      {
        NearestIndexFromColorref = *((_DWORD *)a2 + 13);
        if ( (unsigned int)EBRUSHOBJ::bIsCMYKColor(a2) )
        {
          v18 = *((_DWORD *)a2 + 6);
          *((_DWORD *)v16 + 21) = NearestIndexFromColorref;
          *((_DWORD *)v16 + 22) = v18;
          XLATE::vCheckForICM(v16, *((void **)a2 + 8), *((_DWORD *)a2 + 18));
        }
        else
        {
          NearestIndexFromColorref = ulGetNearestIndexFromColorref(
                                       *((_QWORD *)a2 + 11),
                                       *((_QWORD *)a2 + 12),
                                       NearestIndexFromColorref,
                                       1LL);
          v19 = ulGetNearestIndexFromColorref(
                  *((_QWORD *)a2 + 11),
                  *((_QWORD *)a2 + 12),
                  *((unsigned int *)a2 + 6),
                  1LL);
          v18 = v19;
          if ( *(_DWORD *)(*((_QWORD *)a2 + 10) + 96LL) == 1
            && *(_DWORD *)(*((_QWORD *)a2 + 11) + 28LL)
            && *((_DWORD *)a2 + 13) != *((_DWORD *)a2 + 6)
            && NearestIndexFromColorref == v19 )
          {
            v18 = 1 - NearestIndexFromColorref;
          }
          *((_DWORD *)v16 + 21) = NearestIndexFromColorref;
          *((_DWORD *)v16 + 22) = v18;
          XLATE::vCheckForICM(v16, *((void **)a2 + 8), *((_DWORD *)a2 + 18));
          XLATE::vCheckForTrivial(v16);
        }
        v20 = v16;
        *((_QWORD *)v16 + 5) = *((_QWORD *)v76 + 754);
        *((_QWORD *)v16 + 6) = *((_QWORD *)a2 + 11);
        *((_QWORD *)v16 + 7) = *((_QWORD *)a2 + 12);
        *((_DWORD *)v16 + 19) |= 0x100u;
        *((_DWORD *)v16 + 7) = NearestIndexFromColorref;
        *((_DWORD *)v16 + 8) = v18;
        goto LABEL_125;
      }
    }
LABEL_130:
    NEEDGRELOCK::~NEEDGRELOCK((NEEDGRELOCK *)v79);
    NEEDDYNAMICMODECHANGESHARELOCK::~NEEDDYNAMICMODECHANGESHARELOCK((NEEDDYNAMICMODECHANGESHARELOCK *)v67);
    SURFMEM::~SURFMEM((SURFMEM *)&v72);
    EXLATEOBJ::~EXLATEOBJ((EXLATEOBJ *)&Xlate);
    EPALOBJ::~EPALOBJ((EPALOBJ *)&v75);
    return 0LL;
  }
  if ( v13 < 0xC )
  {
    if ( (unsigned int)EBRUSHOBJ::bIsCMYKColor(a2) )
      goto LABEL_73;
    if ( (*((_DWORD *)a2 + 6) & 0x1000000) != 0 )
      *((_DWORD *)a2 + 6) = rgbFromColorref(*((_QWORD *)a2 + 11), *((_QWORD *)a2 + 12));
    v21 = hdev;
    if ( ((_DWORD)hdev[448] & 0x200000) != 0 && v3 != EngRealizeBrush )
    {
      if ( (unsigned int)v3(
                           (struct _BRUSHOBJ *)a2,
                           (struct _SURFOBJ *)((*((_QWORD *)a2 + 10) + 24LL) & -(__int64)(*((_QWORD *)a2 + 10) != 0LL)),
                           0LL,
                           0LL,
                           0LL,
                           *((_DWORD *)a2 + 6) | 0x80000000) )
      {
LABEL_74:
        NEEDGRELOCK::~NEEDGRELOCK((NEEDGRELOCK *)v79);
        NEEDDYNAMICMODECHANGESHARELOCK::~NEEDDYNAMICMODECHANGESHARELOCK((NEEDDYNAMICMODECHANGESHARELOCK *)v67);
        SURFMEM::~SURFMEM((SURFMEM *)&v72);
        EXLATEOBJ::~EXLATEOBJ((EXLATEOBJ *)&Xlate);
        EPALOBJ::~EPALOBJ((EPALOBJ *)&v75);
        return v10;
      }
      v21 = hdev;
    }
    v22 = *((_QWORD *)a2 + 10);
    v83 = 0;
    v86 = 0;
    v80 = *(_DWORD *)(v22 + 96) == 1 ? 1 : *((_DWORD *)v21 + 519);
    if ( !*((_WORD *)v21 + 1040) )
      goto LABEL_73;
    if ( !*((_WORD *)v21 + 1041) )
      goto LABEL_73;
    v81 = *((unsigned __int16 *)v21 + 1040);
    v82 = *((unsigned __int16 *)v21 + 1041);
    v84 = 0LL;
    v85 = 1;
    if ( !SURFMEM::bCreateDIB((SURFMEM *)&v72, (struct _DEVBITMAPINFO *)&v80, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
      goto LABEL_73;
    v23 = hdev;
    v24 = *((unsigned int *)a2 + 6);
    v25 = (unsigned int)(*(_DWORD *)(*((_QWORD *)a2 + 10) + 96LL) == 1) + 1;
    v26 = (ULONG *)*((_QWORD *)v72 + 9);
    if ( *((_QWORD *)hdev + 346) )
    {
      if ( ((_DWORD)hdev[10] & 0x8000) == 0 )
        v23 = (HDEV)*((_QWORD *)hdev + 221);
      v27 = (*((__int64 (__fastcall **)(HDEV, __int64, __int64, ULONG *))hdev + 346))(v23, v25, v24, v26);
    }
    else
    {
      v27 = EngDitherColor(hdev, v25, v24, v26);
    }
    v28 = v27 - 1;
    if ( !v28 )
    {
      v20 = (struct Gre::Base::SESSION_GLOBALS *)((char *)v6 + 6896);
      goto LABEL_127;
    }
    if ( v28 != 1 )
    {
LABEL_73:
      v10 = 0;
      goto LABEL_74;
    }
    if ( (unsigned int)Feature_3892654395__private_IsEnabledDeviceUsage()
      && v3 == EngRealizeBrush
      && !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread(*((_QWORD *)v6 + 10)) )
    {
      LOBYTE(v9) = 1;
    }
    NEEDDYNAMICMODECHANGESHARELOCK::NEEDDYNAMICMODECHANGESHARELOCK((NEEDDYNAMICMODECHANGESHARELOCK *)&v66, v9);
    if ( v3 == EngRealizeBrush )
    {
      v70 = 1;
      v30 = Gre::Base::Globals(v29);
      GreAcquireSemaphore(*((_QWORD *)v30 + 17));
    }
    else
    {
      v70 = 0;
    }
    if ( PDEVOBJ::pDevHTInfo((PDEVOBJ *)&hdev) || (unsigned int)PDEVOBJ::bEnableHalftone((PDEVOBJ *)&hdev, 0LL) )
    {
      v32 = (HPALETTE *)PDEVOBJ::pDevHTInfo((PDEVOBJ *)&hdev);
      LODWORD(v76) = *((_DWORD *)a2 + 6);
      v89 = &v76;
      v33 = hdev;
      LODWORD(v68) = 0;
      v88 = 1LL;
      v87[0] = 262400;
      v34 = (_DWORD)hdev[587] & 0x100;
      v87[1] = 255;
      v35 = *((_DWORD *)a2 + 18);
      LODWORD(v68) = v34 == 0 ? 2 : 0;
      if ( (v35 & 4) != 0 || (v35 & 0x20) == 0 && (v35 & 3) != 0 )
        LOBYTE(v68) = v34 != 0 ? 16 : 18;
      if ( *((unsigned __int16 *)v32 + 4) != v81 || *((unsigned __int16 *)v32 + 5) != v82 )
      {
        LOBYTE(v31) = v34 == 0 ? 2 : 0;
        SURFACE::bDeleteSurface(v72, v31);
        v81 = *((unsigned __int16 *)v32 + 4);
        v82 = *((unsigned __int16 *)v32 + 5);
        if ( !SURFMEM::bCreateDIB((SURFMEM *)&v72, (struct _DEVBITMAPINFO *)&v80, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
          goto LABEL_72;
        v33 = hdev;
      }
      v36 = *((_DWORD *)v33 + 586);
      if ( v36 )
      {
        v37 = v36 - 2;
        if ( v37 )
        {
          v38 = v37 - 1;
          if ( v38 )
          {
            v39 = v38 - 1;
            if ( v39 )
            {
              v40 = v39 - 1;
              if ( v40 )
              {
                if ( v40 != 2 )
                  goto LABEL_72;
                BYTE1(v68) = 6;
              }
              else
              {
                BYTE1(v68) = -3;
              }
            }
            else
            {
              BYTE1(v68) = -2;
            }
          }
          else
          {
            BYTE1(v68) = -1;
          }
        }
        else
        {
          BYTE1(v68) = 2;
        }
      }
      else
      {
        BYTE1(v68) = 1;
      }
      v41 = *((_BYTE *)v33 + 2336);
      v42 = (__int128 *)*((_QWORD *)a2 + 7);
      BYTE2(v68) = 4;
      BYTE3(v68) = v41;
      v91 = *v42;
      v43 = *((_QWORD *)v42 + 2);
      WORD5(v91) = 10000;
      v92 = v43;
      *(_DWORD *)((char *)&v91 + 6) = 655370000;
      if ( (unsigned int)Feature_3892654395__private_IsEnabledDeviceUsage() )
      {
        HalftoneBrush = HT_CreateHalftoneBrush((_DWORD)v32, (unsigned int)&v91, (unsigned int)v87, v68, 0LL);
        if ( (signed int)HalftoneBrush > *((_DWORD *)v72 + 16) )
        {
          v46 = (void *)PALLOCMEM(HalftoneBrush, 1835167815LL);
          if ( !v46 )
            goto LABEL_72;
          SURFACE::bDeleteSurface(v72, v45);
          if ( !SURFMEM::bCreateDIB((SURFMEM *)&v72, (struct _DEVBITMAPINFO *)&v80, v46, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
          {
            Win32FreePool(v46);
            goto LABEL_72;
          }
          *((_BYTE *)v72 + 688) = 1;
        }
      }
      if ( (int)HT_CreateHalftoneBrush((_DWORD)v32, (unsigned int)&v91, (unsigned int)v87, v68, *((_QWORD *)v72 + 9)) > 0 )
      {
        if ( ((_DWORD)hdev[10] & 0x200) != 0 )
        {
          v20 = (struct Gre::Base::SESSION_GLOBALS *)((char *)v6 + 6896);
        }
        else
        {
          EPALOBJ::EPALOBJ((EPALOBJ *)&v68, *v32);
          v48 = v68;
          if ( !(unsigned int)EXLATEOBJ::bInitXlateObj(
                                (Gre::Base *)&Xlate,
                                *((_QWORD *)a2 + 8),
                                *((_DWORD *)a2 + 18),
                                v68,
                                *(_QWORD *)(*((_QWORD *)a2 + 10) + 128LL),
                                *((_QWORD *)a2 + 12),
                                *((_QWORD *)a2 + 12),
                                *((_DWORD *)a2 + 12),
                                *((_DWORD *)a2 + 13),
                                0xFFFFFF,
                                0) )
          {
            if ( v48 )
              DEC_SHARE_REF_CNT(v48);
            goto LABEL_72;
          }
          v20 = Xlate;
          if ( v48 )
            DEC_SHARE_REF_CNT(v48);
        }
        HTSEMOBJ::~HTSEMOBJ((HTSEMOBJ *)&v70);
        NEEDDYNAMICMODECHANGESHARELOCK::~NEEDDYNAMICMODECHANGESHARELOCK((NEEDDYNAMICMODECHANGESHARELOCK *)&v66);
        v9 = 0LL;
        goto LABEL_127;
      }
    }
LABEL_72:
    HTSEMOBJ::~HTSEMOBJ((HTSEMOBJ *)&v70);
    NEEDDYNAMICMODECHANGESHARELOCK::~NEEDDYNAMICMODECHANGESHARELOCK((NEEDDYNAMICMODECHANGESHARELOCK *)&v66);
    goto LABEL_73;
  }
  v49 = *((_DWORD *)a2 + 18);
  v50 = 0;
  v51 = (HSURF)*((_QWORD *)a1 + 3);
  if ( (v49 & 1) == 0 )
  {
    if ( (v49 & 4) != 0 )
      goto LABEL_98;
    v55 = (v49 & 2) == 0;
LABEL_97:
    if ( v55 )
      goto LABEL_99;
    goto LABEL_98;
  }
  v52 = (void *)*((_QWORD *)a2 + 8);
  if ( !v52 )
  {
    if ( (unsigned int)EBRUSHOBJ::bIsCMYKColor(a2) )
      goto LABEL_99;
    goto LABEL_98;
  }
  v53 = *((_DWORD *)a1 + 10);
  if ( (v53 & 0x80u) == 0 )
  {
    v55 = (v53 & 0x20000) == 0;
    goto LABEL_97;
  }
  if ( !*((_DWORD *)a1 + 21) )
  {
    IcmDIB = BRUSH::hFindIcmDIB(a1, v52);
    if ( IcmDIB )
    {
      v51 = (HSURF)IcmDIB;
LABEL_98:
      v50 = 1;
    }
  }
LABEL_99:
  SURFREF::vAltLock((SURFREF *)&v75, v51);
  v15 = v75;
  if ( !v75 )
    goto LABEL_130;
  v56 = *((_QWORD *)a2 + 10);
  v57 = *((_DWORD *)a1 + 10);
  v58 = *(_QWORD *)(v75 + 128);
  if ( (v57 & 0x1000) != 0 )
  {
    inited = EXLATEOBJ::bMakeXlate(
               &Xlate,
               *(_QWORD *)(v58 + 112),
               *((_QWORD *)a2 + 12),
               *((_QWORD *)a2 + 10),
               *(_DWORD *)(v58 + 60),
               *(_DWORD *)(v58 + 28));
LABEL_123:
    if ( !inited )
      goto LABEL_130;
    v20 = Xlate;
    goto LABEL_125;
  }
  if ( (v57 & 0x2000) == 0 )
  {
    if ( (*(_WORD *)(v75 + 100) || *(_QWORD *)(v75 + 24)) && *(HDEV *)(v75 + 48) != hdev )
      goto LABEL_130;
    if ( v58 )
      goto LABEL_119;
    v60 = *(_DWORD *)(v75 + 96);
    if ( v60 == *((_DWORD *)hdev + 519) )
    {
      if ( ((_DWORD)hdev[535] & 0x100) == 0 )
      {
        v58 = *((_QWORD *)hdev + 222);
LABEL_119:
        if ( v50 )
        {
          v61 = *((_DWORD *)a2 + 18);
          v62 = *((_QWORD *)a2 + 8);
        }
        else
        {
          v61 = 0;
          v62 = 0LL;
        }
        inited = EXLATEOBJ::bInitXlateObj(
                   (Gre::Base *)&Xlate,
                   v62,
                   v61,
                   v58,
                   *(_QWORD *)(v56 + 128),
                   *((_QWORD *)a2 + 12),
                   *((_QWORD *)a2 + 12),
                   *((_DWORD *)a2 + 12),
                   *((_DWORD *)a2 + 13),
                   0xFFFFFF,
                   0);
        goto LABEL_123;
      }
    }
    else
    {
      if ( v60 == *((_DWORD *)a2 + 19) )
      {
        v58 = *((_QWORD *)a2 + 13);
        goto LABEL_119;
      }
      if ( v60 == 3 )
      {
        if ( ((_DWORD)hdev[535] & 0x100) == 0 )
        {
          v58 = *((_QWORD *)v6 + 752);
          goto LABEL_119;
        }
      }
      else if ( ((_DWORD)hdev[10] & 0x20000) == 0 )
      {
        goto LABEL_130;
      }
    }
    v58 = 0LL;
    goto LABEL_119;
  }
  if ( *(_DWORD *)(v75 + 96) != *(_DWORD *)(v56 + 96) )
    goto LABEL_130;
  v20 = (struct Gre::Base::SESSION_GLOBALS *)((char *)v6 + 6896);
LABEL_125:
  if ( v15 )
  {
    v63 = v15 + 24;
    v64 = v15 != 0;
    v9 = v77;
    goto LABEL_133;
  }
  v9 = v77;
  v3 = (__int64 (__fastcall *)(struct _BRUSHOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _XLATEOBJ *, unsigned int))v90;
LABEL_127:
  if ( v72 )
  {
    v63 = (__int64)v72 + 24;
    v64 = v72 != 0LL;
LABEL_133:
    v8 = v63 & -(__int64)v64;
    goto LABEL_134;
  }
  if ( v3 == EngRealizeBrush )
    goto LABEL_130;
LABEL_134:
  v65 = ((__int64 (__fastcall *)(struct EBRUSHOBJ *, __int64, __int64, __int64, struct XLATE *, int))v90)(
          a2,
          (*((_QWORD *)a2 + 10) + 24LL) & -(__int64)(*((_QWORD *)a2 + 10) != 0LL),
          v8,
          v9,
          v20,
          v78);
  NEEDGRELOCK::~NEEDGRELOCK((NEEDGRELOCK *)v79);
  NEEDDYNAMICMODECHANGESHARELOCK::~NEEDDYNAMICMODECHANGESHARELOCK((NEEDDYNAMICMODECHANGESHARELOCK *)v67);
  SURFMEM::~SURFMEM((SURFMEM *)&v72);
  EXLATEOBJ::~EXLATEOBJ((EXLATEOBJ *)&Xlate);
  EPALOBJ::~EPALOBJ((EPALOBJ *)&v75);
  return v65;
}
