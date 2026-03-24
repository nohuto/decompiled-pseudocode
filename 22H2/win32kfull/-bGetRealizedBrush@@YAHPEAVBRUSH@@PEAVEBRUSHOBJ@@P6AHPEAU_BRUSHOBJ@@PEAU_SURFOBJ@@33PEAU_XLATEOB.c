/*
 * XREFs of ?bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOBJ@@K@Z@Z @ 0x1C00CF9EC
 * Callers:
 *     ?pvGetEngRbrush@@YAPEAXPEAU_BRUSHOBJ@@@Z @ 0x1C00CECC8 (-pvGetEngRbrush@@YAPEAXPEAU_BRUSHOBJ@@@Z.c)
 *     ?BRUSHOBJ_pvGetRbrushUMPD@@YAPEAXPEAU_BRUSHOBJ@@@Z @ 0x1C026CAC4 (-BRUSHOBJ_pvGetRbrushUMPD@@YAPEAXPEAU_BRUSHOBJ@@@Z.c)
 *     BRUSHOBJ_pvGetRbrush @ 0x1C026CDB0 (BRUSHOBJ_pvGetRbrush.c)
 * Callees:
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C0019BA8 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ?pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ @ 0x1C001A850 (-pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ.c)
 *     ??1NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0082D64 (--1NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x1C0082F38 (--1SURFREF@@QEAA@XZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0084E50 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ??0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@H@Z @ 0x1C009F2E8 (--0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@H@Z.c)
 *     PALLOCMEM2 @ 0x1C009FDB8 (PALLOCMEM2.c)
 *     ?bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z @ 0x1C0111F38 (-bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C016DB10 (_guard_dispatch_icall_nop.c)
 *     HT_CreateHalftoneBrush @ 0x1C0260D58 (HT_CreateHalftoneBrush.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C026C9D0 (--0SURFREF@@QEAA@XZ.c)
 *     ??1EXLATEOBJ@@QEAA@XZ @ 0x1C026C9F4 (--1EXLATEOBJ@@QEAA@XZ.c)
 *     ??1NEEDGRELOCK@@QEAA@XZ @ 0x1C026CA0C (--1NEEDGRELOCK@@QEAA@XZ.c)
 *     ?bIsCMYKColor@EBRUSHOBJ@@QEBAHXZ @ 0x1C026CBE0 (-bIsCMYKColor@EBRUSHOBJ@@QEBAHXZ.c)
 *     ?vAltCheckLock@SURFREF@@QEAAXPEAUHSURF__@@@Z @ 0x1C026CC4C (-vAltCheckLock@SURFREF@@QEAAXPEAUHSURF__@@@Z.c)
 *     ?vAltLock@SURFREF@@QEAAXPEAUHSURF__@@@Z @ 0x1C026CC7C (-vAltLock@SURFREF@@QEAAXPEAUHSURF__@@@Z.c)
 *     EngDitherColor @ 0x1C0288210 (EngDitherColor.c)
 *     ?bMakeXlate@EXLATEOBJ@@QEAAHPEBGVXEPALOBJ@@PEAVSURFACE@@KK@Z @ 0x1C02BEFF8 (-bMakeXlate@EXLATEOBJ@@QEAAHPEBGVXEPALOBJ@@PEAVSURFACE@@KK@Z.c)
 *     ?pCreateXlate@@YAPEAVXLATE@@K@Z @ 0x1C02BF31C (-pCreateXlate@@YAPEAVXLATE@@K@Z.c)
 *     ?vCheckForICM@XLATE@@QEAAXPEAXK@Z @ 0x1C02BF3B0 (-vCheckForICM@XLATE@@QEAAXPEAXK@Z.c)
 *     ?vCheckForTrivial@XLATE@@QEAAXXZ @ 0x1C02BF44C (-vCheckForTrivial@XLATE@@QEAAXXZ.c)
 *     ??1HTSEMOBJ@@QEAA@XZ @ 0x1C02C0838 (--1HTSEMOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall bGetRealizedBrush(
        struct BRUSH *a1,
        struct EBRUSHOBJ *a2,
        __int64 (__fastcall *a3)(struct _BRUSHOBJ *a1, struct _SURFOBJ *a2, struct _SURFOBJ *a3, struct _SURFOBJ *a4, struct _XLATEOBJ *a5, unsigned int a6))
{
  unsigned int v3; // r15d
  struct _SURFOBJ *v8; // rdi
  struct _SURFOBJ *v9; // r12
  __int64 v10; // rax
  int v11; // edx
  __int64 v12; // rax
  __int64 v13; // rbx
  FLONG NearestIndexFromColorref; // r12d
  FLONG v15; // r15d
  XLATEOBJ *v16; // r14
  FLONG v17; // eax
  HDEV v18; // rax
  __int64 v19; // rcx
  HDEV v20; // rcx
  __int64 v21; // rdx
  ULONG v22; // eax
  ULONG v23; // eax
  int IsSemaphoreOwnedOrSharedByCurrentThread; // eax
  int v25; // edx
  HPALETTE *v26; // r14
  int v27; // edx
  HDEV v28; // rax
  int v29; // ecx
  char v30; // cl
  int v31; // edx
  int v32; // edx
  int v33; // edx
  int v34; // edx
  int v35; // edx
  char v36; // cl
  __int128 *v37; // rax
  __int64 v38; // xmm1_8
  size_t HalftoneBrush; // rcx
  __int64 v40; // rax
  void *v41; // rbx
  __int64 v42; // rbx
  __int64 v43; // rdx
  int v44; // eax
  int v45; // r8d
  HSURF v46; // r15
  int v47; // r14d
  void *v48; // rdx
  int v49; // eax
  HBITMAP IcmDIB; // rax
  bool v51; // zf
  __int64 v52; // rdx
  __int64 v53; // r10
  int v54; // eax
  struct PALETTE *v55; // r9
  int inited; // eax
  int v57; // r8d
  unsigned int v58; // r8d
  __int64 v59; // rdx
  __int64 v60; // rdx
  __int64 v61; // [rsp+60h] [rbp-A0h] BYREF
  HDEV hdev; // [rsp+68h] [rbp-98h] BYREF
  struct XLATE *Xlate; // [rsp+70h] [rbp-90h] BYREF
  int v64; // [rsp+78h] [rbp-88h] BYREF
  __int64 v65; // [rsp+80h] [rbp-80h] BYREF
  char v66; // [rsp+88h] [rbp-78h]
  int v67; // [rsp+8Ch] [rbp-74h]
  char v68[8]; // [rsp+90h] [rbp-70h] BYREF
  struct _SURFOBJ *v69; // [rsp+98h] [rbp-68h] BYREF
  char v70[8]; // [rsp+A0h] [rbp-60h] BYREF
  int v71; // [rsp+A8h] [rbp-58h] BYREF
  int v72; // [rsp+ACh] [rbp-54h]
  int v73; // [rsp+B0h] [rbp-50h]
  int v74; // [rsp+B4h] [rbp-4Ch]
  __int64 v75; // [rsp+B8h] [rbp-48h]
  int v76; // [rsp+C0h] [rbp-40h]
  int v77; // [rsp+C4h] [rbp-3Ch]
  _DWORD v78[2]; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v79; // [rsp+D0h] [rbp-30h]
  struct _SURFOBJ **v80; // [rsp+D8h] [rbp-28h]
  _BYTE v81[32]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v82; // [rsp+100h] [rbp+0h]
  char v83[8]; // [rsp+108h] [rbp+8h] BYREF
  __int128 v84; // [rsp+110h] [rbp+10h] BYREF
  __int64 v85; // [rsp+120h] [rbp+20h]

  v3 = *((_DWORD *)a1 + 20);
  LODWORD(v61) = v3;
  if ( v3 == 12 )
    return 0LL;
  v8 = 0LL;
  v9 = 0LL;
  SURFREF::SURFREF((SURFREF *)v81);
  v10 = *((_QWORD *)a2 + 10);
  v65 = 0LL;
  v66 = 0;
  v67 = 0;
  hdev = *(HDEV *)(v10 + 48);
  Xlate = 0LL;
  if ( ((_DWORD)hdev[10] & 1) == 0 || (v11 = 1, a3 != EngRealizeBrush) )
    v11 = 0;
  NEEDDYNAMICMODECHANGESHARELOCK::NEEDDYNAMICMODECHANGESHARELOCK((NEEDDYNAMICMODECHANGESHARELOCK *)v70, v11);
  NEEDGRELOCK::vLock((NEEDGRELOCK *)v83, (struct PDEVOBJ *)&hdev);
  v12 = *((unsigned int *)a1 + 20);
  if ( (unsigned int)v12 < 6 )
  {
    SURFREF::vAltCheckLock((SURFREF *)v81, *((HSURF *)hdev + v12 + 182));
    if ( !v82 )
      goto LABEL_134;
    v69 = (struct _SURFOBJ *)(v82 + 24);
    Xlate = pCreateXlate(2u);
    v13 = (__int64)Xlate;
    if ( !Xlate )
      goto LABEL_134;
    NearestIndexFromColorref = *((_DWORD *)a2 + 13);
    if ( (unsigned int)EBRUSHOBJ::bIsCMYKColor(a2) )
    {
      v15 = *((_DWORD *)a2 + 6);
      *(_DWORD *)(v13 + 84) = NearestIndexFromColorref;
      *(_DWORD *)(v13 + 88) = v15;
      XLATE::vCheckForICM((XLATE *)v13, *((void **)a2 + 8), *((_DWORD *)a2 + 18));
      v16 = (XLATEOBJ *)v13;
    }
    else
    {
      NearestIndexFromColorref = ulGetNearestIndexFromColorref(
                                   *((_QWORD *)a2 + 11),
                                   *((_QWORD *)a2 + 12),
                                   NearestIndexFromColorref,
                                   1LL);
      v17 = ulGetNearestIndexFromColorref(*((_QWORD *)a2 + 11), *((_QWORD *)a2 + 12), *((unsigned int *)a2 + 6), 1LL);
      v15 = v17;
      if ( *(_DWORD *)(*((_QWORD *)a2 + 10) + 96LL) == 1
        && *(_DWORD *)(*((_QWORD *)a2 + 11) + 28LL)
        && *((_DWORD *)a2 + 13) != *((_DWORD *)a2 + 6)
        && NearestIndexFromColorref == v17 )
      {
        v15 = 1 - NearestIndexFromColorref;
      }
      *(_DWORD *)(v13 + 84) = NearestIndexFromColorref;
      *(_DWORD *)(v13 + 88) = v15;
      v16 = (XLATEOBJ *)v13;
      XLATE::vCheckForICM((XLATE *)v13, *((void **)a2 + 8), *((_DWORD *)a2 + 18));
      XLATE::vCheckForTrivial((XLATE *)v13);
    }
    *(_QWORD *)(v13 + 40) = ppalMono;
    *(_QWORD *)(v13 + 48) = *((_QWORD *)a2 + 11);
    *(_QWORD *)(v13 + 56) = *((_QWORD *)a2 + 12);
    v16[3].flXlate |= 0x100u;
    v16[1].flXlate = NearestIndexFromColorref;
    v9 = v69;
    *(_DWORD *)&v16[1].iSrcType = v15;
LABEL_126:
    v3 = v61;
    goto LABEL_127;
  }
  if ( (unsigned int)v12 >= 0xC )
  {
    v44 = *((_DWORD *)a2 + 18);
    v45 = 1;
    v46 = (HSURF)*((_QWORD *)a1 + 3);
    v47 = 0;
    if ( (v44 & 1) != 0 )
    {
      v48 = (void *)*((_QWORD *)a2 + 8);
      if ( v48 )
      {
        v49 = *((_DWORD *)a1 + 10);
        if ( (v49 & 0x80u) != 0 )
        {
          if ( !*((_DWORD *)a1 + 21) )
          {
            IcmDIB = BRUSH::hFindIcmDIB(a1, v48);
            if ( IcmDIB )
            {
              v46 = (HSURF)IcmDIB;
              v47 = 1;
            }
          }
LABEL_97:
          SURFREF::vAltLock((SURFREF *)v81, v46);
          v52 = v82;
          if ( !v82 )
            goto LABEL_134;
          v53 = *((_QWORD *)a2 + 10);
          v54 = *((_DWORD *)a1 + 10);
          v55 = *(struct PALETTE **)(v82 + 128);
          if ( (v54 & 0x1000) != 0 )
          {
            inited = EXLATEOBJ::bMakeXlate(
                       &Xlate,
                       *((_QWORD *)v55 + 14),
                       *((_QWORD *)a2 + 12),
                       *((_QWORD *)a2 + 10),
                       *((_DWORD *)v55 + 15),
                       *((_DWORD *)v55 + 7));
LABEL_124:
            if ( !inited )
              goto LABEL_134;
            v16 = (XLATEOBJ *)Xlate;
            goto LABEL_126;
          }
          if ( (v54 & 0x2000) != 0 )
          {
            if ( *(_DWORD *)(v82 + 96) != *(_DWORD *)(v53 + 96) )
              goto LABEL_134;
            v16 = xloIdent;
            v3 = v61;
            goto LABEL_128;
          }
          if ( (*(_WORD *)(v82 + 100) || *(_QWORD *)(v82 + 24)) && *(HDEV *)(v82 + 48) != hdev )
            goto LABEL_134;
          if ( !v55 )
          {
            v57 = *(_DWORD *)(v82 + 96);
            if ( v57 == *((_DWORD *)hdev + 527) )
            {
              if ( ((_DWORD)hdev[543] & 0x100) == 0 )
              {
                v55 = (struct PALETTE *)*((_QWORD *)hdev + 226);
                goto LABEL_117;
              }
            }
            else
            {
              if ( v57 == *((_DWORD *)a2 + 19) )
              {
                v55 = (struct PALETTE *)*((_QWORD *)a2 + 13);
                goto LABEL_117;
              }
              if ( v57 == 3 )
              {
                if ( ((_DWORD)hdev[543] & 0x100) == 0 )
                {
                  v55 = ppalDefaultSurface8bpp;
                  goto LABEL_117;
                }
              }
              else if ( ((_DWORD)hdev[10] & 0x20000) == 0 )
              {
                goto LABEL_134;
              }
            }
            v55 = 0LL;
          }
LABEL_117:
          if ( v47 )
            v58 = *((_DWORD *)a2 + 18);
          else
            v58 = 0;
          if ( v47 )
            v59 = *((_QWORD *)a2 + 8);
          else
            v59 = 0LL;
          inited = EXLATEOBJ::bInitXlateObj(
                     (__int64 *)&Xlate,
                     v59,
                     v58,
                     (__int64)v55,
                     *(_QWORD *)(v53 + 128),
                     *((_QWORD *)a2 + 12),
                     *((_QWORD *)a2 + 12),
                     *((_DWORD *)a2 + 12),
                     *((_DWORD *)a2 + 13),
                     0xFFFFFF,
                     0);
          goto LABEL_124;
        }
        v51 = (v49 & 0x20000) == 0;
        goto LABEL_95;
      }
      if ( (unsigned int)EBRUSHOBJ::bIsCMYKColor(a2) )
        goto LABEL_97;
    }
    else if ( (v44 & 4) == 0 )
    {
      v51 = (v44 & 2) == 0;
LABEL_95:
      if ( v51 )
        goto LABEL_97;
    }
    v47 = v45;
    goto LABEL_97;
  }
  if ( (unsigned int)EBRUSHOBJ::bIsCMYKColor(a2) )
    goto LABEL_134;
  if ( (*((_DWORD *)a2 + 6) & 0x1000000) != 0 )
    *((_DWORD *)a2 + 6) = rgbFromColorref(*((_QWORD *)a2 + 11), *((_QWORD *)a2 + 12));
  v18 = hdev;
  if ( ((_DWORD)hdev[456] & 0x200000) != 0 && a3 != EngRealizeBrush )
  {
    if ( (unsigned int)a3(
                         (struct _BRUSHOBJ *)a2,
                         (struct _SURFOBJ *)((*((_QWORD *)a2 + 10) + 24LL) & -(__int64)(*((_QWORD *)a2 + 10) != 0LL)),
                         0LL,
                         0LL,
                         0LL,
                         *((_DWORD *)a2 + 6) | 0x80000000) )
    {
      LODWORD(v8) = 1;
      goto LABEL_134;
    }
    v18 = hdev;
  }
  v19 = *((_QWORD *)a2 + 10);
  v74 = 0;
  v77 = 0;
  if ( *(_DWORD *)(v19 + 96) == 1 )
    v71 = 1;
  else
    v71 = *((_DWORD *)v18 + 527);
  if ( !*((_WORD *)v18 + 1056) )
    goto LABEL_134;
  if ( !*((_WORD *)v18 + 1057) )
    goto LABEL_134;
  v72 = *((unsigned __int16 *)v18 + 1056);
  v73 = *((unsigned __int16 *)v18 + 1057);
  v75 = 0LL;
  v76 = 1;
  if ( !SURFMEM::bCreateDIB((SURFMEM *)&v65, (struct _DEVBITMAPINFO *)&v71, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
    goto LABEL_134;
  v20 = hdev;
  v21 = (unsigned int)(*(_DWORD *)(*((_QWORD *)a2 + 10) + 96LL) == 1) + 1;
  if ( *((_QWORD *)hdev + 349) )
  {
    if ( ((_DWORD)hdev[10] & 0x8000) == 0 )
      v20 = (HDEV)*((_QWORD *)hdev + 225);
    v22 = (*((__int64 (__fastcall **)(HDEV, __int64, _QWORD, _QWORD))hdev + 349))(
            v20,
            v21,
            *((unsigned int *)a2 + 6),
            *(_QWORD *)(v65 + 72));
  }
  else
  {
    v22 = EngDitherColor(hdev, v21, *((_DWORD *)a2 + 6), *(ULONG **)(v65 + 72));
  }
  v23 = v22 - 1;
  if ( !v23 )
  {
    v16 = xloIdent;
    goto LABEL_127;
  }
  if ( v23 != 1 )
    goto LABEL_134;
  if ( a3 != EngRealizeBrush
    || (IsSemaphoreOwnedOrSharedByCurrentThread = GreIsSemaphoreOwnedOrSharedByCurrentThread(ghsemDynamicModeChange),
        v25 = 1,
        IsSemaphoreOwnedOrSharedByCurrentThread) )
  {
    v25 = 0;
  }
  NEEDDYNAMICMODECHANGESHARELOCK::NEEDDYNAMICMODECHANGESHARELOCK((NEEDDYNAMICMODECHANGESHARELOCK *)v68, v25);
  if ( a3 == EngRealizeBrush )
  {
    v64 = 1;
    GreAcquireSemaphore(ghsemHT);
  }
  else
  {
    v64 = 0;
  }
  if ( !PDEVOBJ::pDevHTInfo((PDEVOBJ *)&hdev) && !(unsigned int)PDEVOBJ::bEnableHalftone((PDEVOBJ *)&hdev, 0LL) )
    goto LABEL_72;
  v26 = (HPALETTE *)PDEVOBJ::pDevHTInfo((PDEVOBJ *)&hdev);
  v27 = *((_DWORD *)a2 + 18);
  LODWORD(v69) = *((_DWORD *)a2 + 6);
  v80 = &v69;
  v28 = hdev;
  LODWORD(v61) = 0;
  v79 = 1LL;
  v78[0] = 262400;
  v29 = *((_DWORD *)hdev + 595) >> 7;
  v78[1] = 255;
  v30 = ~(_BYTE)v29 & 2;
  LOBYTE(v61) = v30;
  if ( (v27 & 4) != 0 || (v27 & 0x20) == 0 && (v27 & 3) != 0 )
    LOBYTE(v61) = v30 | 0x10;
  if ( *((unsigned __int16 *)v26 + 4) != v72 || *((unsigned __int16 *)v26 + 5) != v73 )
  {
    SURFACE::bDeleteSurface(v65, 0LL, 0LL);
    v72 = *((unsigned __int16 *)v26 + 4);
    v73 = *((unsigned __int16 *)v26 + 5);
    if ( !SURFMEM::bCreateDIB((SURFMEM *)&v65, (struct _DEVBITMAPINFO *)&v71, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
      goto LABEL_72;
    v28 = hdev;
  }
  v31 = *((_DWORD *)v28 + 594);
  if ( v31 )
  {
    v32 = v31 - 2;
    if ( v32 )
    {
      v33 = v32 - 1;
      if ( v33 )
      {
        v34 = v33 - 1;
        if ( v34 )
        {
          v35 = v34 - 1;
          if ( v35 )
          {
            if ( v35 != 2 )
              goto LABEL_72;
            BYTE1(v61) = 6;
          }
          else
          {
            BYTE1(v61) = -3;
          }
        }
        else
        {
          BYTE1(v61) = -2;
        }
      }
      else
      {
        BYTE1(v61) = -1;
      }
    }
    else
    {
      BYTE1(v61) = 2;
    }
  }
  else
  {
    BYTE1(v61) = 1;
  }
  v36 = *((_BYTE *)v28 + 2368);
  v37 = (__int128 *)*((_QWORD *)a2 + 7);
  BYTE3(v61) = v36;
  BYTE2(v61) = 4;
  v84 = *v37;
  v38 = *((_QWORD *)v37 + 2);
  WORD5(v84) = 10000;
  v85 = v38;
  *(_DWORD *)((char *)&v84 + 6) = 655370000;
  HalftoneBrush = (unsigned int)HT_CreateHalftoneBrush((_DWORD)v26, (unsigned int)&v84, (unsigned int)v78, v61, 0LL);
  v40 = v65;
  if ( (int)HalftoneBrush > *(_DWORD *)(v65 + 64) )
  {
    v41 = PALLOCMEM2(HalftoneBrush, 1835167815LL, 1);
    if ( v41 )
    {
      SURFACE::bDeleteSurface(v65, 0LL, 0LL);
      if ( !SURFMEM::bCreateDIB((SURFMEM *)&v65, (struct _DEVBITMAPINFO *)&v71, v41, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
      {
        Win32FreePool(v41);
        goto LABEL_72;
      }
      *(_BYTE *)(v65 + 688) = 1;
      v40 = v65;
      goto LABEL_74;
    }
LABEL_72:
    HTSEMOBJ::~HTSEMOBJ((HTSEMOBJ *)&v64);
    NEEDDYNAMICMODECHANGESHARELOCK::~NEEDDYNAMICMODECHANGESHARELOCK((NEEDDYNAMICMODECHANGESHARELOCK *)v68);
    goto LABEL_134;
  }
LABEL_74:
  if ( (int)HT_CreateHalftoneBrush((_DWORD)v26, (unsigned int)&v84, (unsigned int)v78, v61, *(_QWORD *)(v40 + 72)) <= 0 )
    goto LABEL_72;
  if ( ((_DWORD)hdev[10] & 0x200) != 0 )
  {
    v16 = xloIdent;
  }
  else
  {
    EPALOBJ::EPALOBJ((EPALOBJ *)&v61, *v26);
    v42 = v61;
    if ( !(unsigned int)EXLATEOBJ::bInitXlateObj(
                          (__int64 *)&Xlate,
                          *((_QWORD *)a2 + 8),
                          *((_DWORD *)a2 + 18),
                          v61,
                          *(_QWORD *)(*((_QWORD *)a2 + 10) + 128LL),
                          *((_QWORD *)a2 + 12),
                          *((_QWORD *)a2 + 12),
                          *((_DWORD *)a2 + 12),
                          *((_DWORD *)a2 + 13),
                          0xFFFFFF,
                          0) )
    {
      if ( v42 )
        DEC_SHARE_REF_CNT(v42, v43);
      goto LABEL_72;
    }
    v16 = (XLATEOBJ *)Xlate;
    if ( v42 )
      DEC_SHARE_REF_CNT(v42, v43);
  }
  HTSEMOBJ::~HTSEMOBJ((HTSEMOBJ *)&v64);
  NEEDDYNAMICMODECHANGESHARELOCK::~NEEDDYNAMICMODECHANGESHARELOCK((NEEDDYNAMICMODECHANGESHARELOCK *)v68);
LABEL_127:
  v52 = v82;
LABEL_128:
  if ( v52 )
  {
    v8 = (struct _SURFOBJ *)(v52 + 24);
LABEL_133:
    LODWORD(v8) = a3(
                    (struct _BRUSHOBJ *)a2,
                    (struct _SURFOBJ *)((*((_QWORD *)a2 + 10) + 24LL) & -(__int64)(*((_QWORD *)a2 + 10) != 0LL)),
                    v8,
                    v9,
                    v16,
                    v3);
    goto LABEL_134;
  }
  if ( v65 )
  {
    v8 = (struct _SURFOBJ *)(v65 + 24);
    goto LABEL_133;
  }
  if ( a3 != EngRealizeBrush )
    goto LABEL_133;
LABEL_134:
  NEEDGRELOCK::~NEEDGRELOCK((NEEDGRELOCK *)v83);
  NEEDDYNAMICMODECHANGESHARELOCK::~NEEDDYNAMICMODECHANGESHARELOCK((NEEDDYNAMICMODECHANGESHARELOCK *)v70);
  SURFMEM::~SURFMEM((SURFMEM *)&v65);
  EXLATEOBJ::~EXLATEOBJ((EXLATEOBJ *)&Xlate);
  SURFREF::~SURFREF((SURFREF *)v81, v60);
  return (unsigned int)v8;
}
