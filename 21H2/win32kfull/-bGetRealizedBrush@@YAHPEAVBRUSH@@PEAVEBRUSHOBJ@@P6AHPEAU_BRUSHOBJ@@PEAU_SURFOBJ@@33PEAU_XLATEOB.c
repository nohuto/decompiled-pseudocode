/*
 * XREFs of ?bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOBJ@@K@Z@Z @ 0x1C0009E08
 * Callers:
 *     ?pvGetEngRbrush@@YAPEAXPEAU_BRUSHOBJ@@@Z @ 0x1C0008B10 (-pvGetEngRbrush@@YAPEAXPEAU_BRUSHOBJ@@@Z.c)
 *     ?BRUSHOBJ_pvGetRbrushUMPD@@YAPEAXPEAU_BRUSHOBJ@@@Z @ 0x1C026AE24 (-BRUSHOBJ_pvGetRbrushUMPD@@YAPEAXPEAU_BRUSHOBJ@@@Z.c)
 *     BRUSHOBJ_pvGetRbrush @ 0x1C026B0E0 (BRUSHOBJ_pvGetRbrush.c)
 * Callees:
 *     ??0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@_N@Z @ 0x1C000B438 (--0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@_N@Z.c)
 *     PALLOCMEM @ 0x1C0012128 (PALLOCMEM.c)
 *     ??1NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0027858 (--1NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x1C0027A2C (--1SURFREF@@QEAA@XZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00398B0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C00921F8 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ?pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ @ 0x1C0092E30 (-pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ.c)
 *     ?bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z @ 0x1C0096C18 (-bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ?Feature_4093980987__private_IsEnabled@@YAHXZ @ 0x1C015D41C (-Feature_4093980987__private_IsEnabled@@YAHXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 *     HT_CreateHalftoneBrush @ 0x1C025DF88 (HT_CreateHalftoneBrush.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C026AD30 (--0SURFREF@@QEAA@XZ.c)
 *     ??1EXLATEOBJ@@QEAA@XZ @ 0x1C026AD54 (--1EXLATEOBJ@@QEAA@XZ.c)
 *     ??1NEEDGRELOCK@@QEAA@XZ @ 0x1C026AD6C (--1NEEDGRELOCK@@QEAA@XZ.c)
 *     ?bIsCMYKColor@EBRUSHOBJ@@QEBAHXZ @ 0x1C026AF40 (-bIsCMYKColor@EBRUSHOBJ@@QEBAHXZ.c)
 *     ?vAltCheckLock@SURFREF@@QEAAXPEAUHSURF__@@@Z @ 0x1C026AF7C (-vAltCheckLock@SURFREF@@QEAAXPEAUHSURF__@@@Z.c)
 *     ?vAltLock@SURFREF@@QEAAXPEAUHSURF__@@@Z @ 0x1C026AFAC (-vAltLock@SURFREF@@QEAAXPEAUHSURF__@@@Z.c)
 *     EngDitherColor @ 0x1C0285400 (EngDitherColor.c)
 *     ?bMakeXlate@EXLATEOBJ@@QEAAHPEBGVXEPALOBJ@@PEAVSURFACE@@KK@Z @ 0x1C02BE5D8 (-bMakeXlate@EXLATEOBJ@@QEAAHPEBGVXEPALOBJ@@PEAVSURFACE@@KK@Z.c)
 *     ?pCreateXlate@@YAPEAVXLATE@@K@Z @ 0x1C02BE8FC (-pCreateXlate@@YAPEAVXLATE@@K@Z.c)
 *     ?vCheckForICM@XLATE@@QEAAXPEAXK@Z @ 0x1C02BE990 (-vCheckForICM@XLATE@@QEAAXPEAXK@Z.c)
 *     ?vCheckForTrivial@XLATE@@QEAAXXZ @ 0x1C02BEA2C (-vCheckForTrivial@XLATE@@QEAAXXZ.c)
 *     ??1HTSEMOBJ@@QEAA@XZ @ 0x1C02BFE18 (--1HTSEMOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall bGetRealizedBrush(
        struct BRUSH *a1,
        struct EBRUSHOBJ *a2,
        int (*a3)(struct _BRUSHOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _XLATEOBJ *, unsigned int))
{
  int v3; // r15d
  __int64 v8; // rdi
  __int64 v9; // r12
  __int64 v10; // rax
  bool v11; // dl
  __int64 v12; // rax
  struct XLATE *v13; // rbx
  unsigned int NearestIndexFromColorref; // r12d
  unsigned int v15; // r15d
  unsigned int v16; // eax
  XLATEOBJ *v17; // r14
  HDEV v18; // rax
  __int64 v19; // rcx
  HDEV v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rdx
  ULONG *v23; // r9
  ULONG v24; // eax
  ULONG v25; // eax
  bool v26; // bl
  HPALETTE *v27; // r14
  HDEV v28; // rax
  int v29; // r8d
  int v30; // ecx
  int v31; // edx
  int v32; // edx
  int v33; // edx
  int v34; // edx
  int v35; // edx
  char v36; // cl
  __int128 *v37; // rax
  __int64 v38; // xmm1_8
  unsigned int HalftoneBrush; // eax
  void *v40; // rbx
  __int64 v41; // rbx
  int v42; // eax
  int v43; // r8d
  HSURF v44; // r15
  int v45; // r14d
  void *v46; // rdx
  int v47; // eax
  HBITMAP IcmDIB; // rax
  bool v49; // zf
  __int64 v50; // rdx
  __int64 v51; // r10
  int v52; // eax
  struct PALETTE *v53; // r9
  int inited; // eax
  int v55; // r8d
  __int64 v56; // r8
  __int64 v57; // rdx
  _BYTE v58[8]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v59; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v60[8]; // [rsp+70h] [rbp-90h] BYREF
  HDEV hdev; // [rsp+78h] [rbp-88h] BYREF
  struct XLATE *Xlate; // [rsp+80h] [rbp-80h] BYREF
  int v63; // [rsp+88h] [rbp-78h] BYREF
  __int64 v64; // [rsp+90h] [rbp-70h] BYREF
  char v65; // [rsp+98h] [rbp-68h]
  int v66; // [rsp+9Ch] [rbp-64h]
  __int64 v67; // [rsp+A0h] [rbp-60h] BYREF
  int v68; // [rsp+A8h] [rbp-58h] BYREF
  int v69; // [rsp+ACh] [rbp-54h]
  int v70; // [rsp+B0h] [rbp-50h]
  int v71; // [rsp+B4h] [rbp-4Ch]
  __int64 v72; // [rsp+B8h] [rbp-48h]
  int v73; // [rsp+C0h] [rbp-40h]
  int v74; // [rsp+C4h] [rbp-3Ch]
  _DWORD v75[2]; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v76; // [rsp+D0h] [rbp-30h]
  __int64 *v77; // [rsp+D8h] [rbp-28h]
  _BYTE v78[32]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v79; // [rsp+100h] [rbp+0h]
  _BYTE v80[8]; // [rsp+108h] [rbp+8h] BYREF
  __int128 v81; // [rsp+110h] [rbp+10h] BYREF
  __int64 v82; // [rsp+120h] [rbp+20h]

  v3 = *((_DWORD *)a1 + 20);
  LODWORD(v59) = v3;
  if ( v3 == 12 )
    return 0LL;
  v8 = 0LL;
  v9 = 0LL;
  SURFREF::SURFREF((SURFREF *)v78);
  v10 = *((_QWORD *)a2 + 10);
  v64 = 0LL;
  v65 = 0;
  v66 = 0;
  hdev = *(HDEV *)(v10 + 48);
  Xlate = 0LL;
  if ( ((_DWORD)hdev[10] & 1) == 0 || (v11 = 1, a3 != EngRealizeBrush) )
    v11 = 0;
  NEEDDYNAMICMODECHANGESHARELOCK::NEEDDYNAMICMODECHANGESHARELOCK((NEEDDYNAMICMODECHANGESHARELOCK *)v60, v11);
  NEEDGRELOCK::vLock((NEEDGRELOCK *)v80, (struct PDEVOBJ *)&hdev);
  v12 = *((unsigned int *)a1 + 20);
  if ( (unsigned int)v12 < 6 )
  {
    SURFREF::vAltCheckLock((SURFREF *)v78, *((HSURF *)hdev + v12 + 181));
    if ( !v79 )
      goto LABEL_132;
    v67 = v79 + 24;
    Xlate = pCreateXlate(2u);
    v13 = Xlate;
    if ( !Xlate )
      goto LABEL_132;
    NearestIndexFromColorref = *((_DWORD *)a2 + 13);
    if ( (unsigned int)EBRUSHOBJ::bIsCMYKColor(a2) )
    {
      v15 = *((_DWORD *)a2 + 6);
      *((_DWORD *)v13 + 21) = NearestIndexFromColorref;
      *((_DWORD *)v13 + 22) = v15;
      XLATE::vCheckForICM(v13, *((void **)a2 + 8), *((_DWORD *)a2 + 18));
    }
    else
    {
      NearestIndexFromColorref = ulGetNearestIndexFromColorref(
                                   *((_QWORD *)a2 + 11),
                                   *((_QWORD *)a2 + 12),
                                   NearestIndexFromColorref,
                                   1LL);
      v16 = ulGetNearestIndexFromColorref(*((_QWORD *)a2 + 11), *((_QWORD *)a2 + 12), *((unsigned int *)a2 + 6), 1LL);
      v15 = v16;
      if ( *(_DWORD *)(*((_QWORD *)a2 + 10) + 96LL) == 1
        && *(_DWORD *)(*((_QWORD *)a2 + 11) + 28LL)
        && *((_DWORD *)a2 + 13) != *((_DWORD *)a2 + 6)
        && NearestIndexFromColorref == v16 )
      {
        v15 = 1 - NearestIndexFromColorref;
      }
      *((_DWORD *)v13 + 21) = NearestIndexFromColorref;
      *((_DWORD *)v13 + 22) = v15;
      XLATE::vCheckForICM(v13, *((void **)a2 + 8), *((_DWORD *)a2 + 18));
      XLATE::vCheckForTrivial(v13);
    }
    v17 = (XLATEOBJ *)v13;
    *((_QWORD *)v13 + 5) = ppalMono;
    *((_QWORD *)v13 + 6) = *((_QWORD *)a2 + 11);
    *((_QWORD *)v13 + 7) = *((_QWORD *)a2 + 12);
    *((_DWORD *)v13 + 19) |= 0x100u;
    *((_DWORD *)v13 + 7) = NearestIndexFromColorref;
    v9 = v67;
    *((_DWORD *)v13 + 8) = v15;
LABEL_124:
    v3 = v59;
    goto LABEL_125;
  }
  if ( (unsigned int)v12 >= 0xC )
  {
    v42 = *((_DWORD *)a2 + 18);
    v43 = 1;
    v44 = (HSURF)*((_QWORD *)a1 + 3);
    v45 = 0;
    if ( (v42 & 1) != 0 )
    {
      v46 = (void *)*((_QWORD *)a2 + 8);
      if ( v46 )
      {
        v47 = *((_DWORD *)a1 + 10);
        if ( (v47 & 0x80u) != 0 )
        {
          if ( !*((_DWORD *)a1 + 21) )
          {
            IcmDIB = BRUSH::hFindIcmDIB(a1, v46);
            if ( IcmDIB )
            {
              v44 = (HSURF)IcmDIB;
              v45 = 1;
            }
          }
LABEL_98:
          SURFREF::vAltLock((SURFREF *)v78, v44);
          v50 = v79;
          if ( !v79 )
            goto LABEL_132;
          v51 = *((_QWORD *)a2 + 10);
          v52 = *((_DWORD *)a1 + 10);
          v53 = *(struct PALETTE **)(v79 + 128);
          if ( (v52 & 0x1000) != 0 )
          {
            inited = EXLATEOBJ::bMakeXlate(
                       &Xlate,
                       *((_QWORD *)v53 + 14),
                       *((_QWORD *)a2 + 12),
                       *((_QWORD *)a2 + 10),
                       *((_DWORD *)v53 + 15),
                       *((_DWORD *)v53 + 7));
LABEL_122:
            if ( !inited )
              goto LABEL_132;
            v17 = (XLATEOBJ *)Xlate;
            goto LABEL_124;
          }
          if ( (v52 & 0x2000) != 0 )
          {
            if ( *(_DWORD *)(v79 + 96) != *(_DWORD *)(v51 + 96) )
              goto LABEL_132;
            v17 = xloIdent;
            v3 = v59;
            goto LABEL_126;
          }
          if ( (*(_WORD *)(v79 + 100) || *(_QWORD *)(v79 + 24)) && *(HDEV *)(v79 + 48) != hdev )
            goto LABEL_132;
          if ( !v53 )
          {
            v55 = *(_DWORD *)(v79 + 96);
            if ( v55 == *((_DWORD *)hdev + 519) )
            {
              if ( ((_DWORD)hdev[535] & 0x100) == 0 )
              {
                v53 = (struct PALETTE *)*((_QWORD *)hdev + 222);
                goto LABEL_118;
              }
            }
            else
            {
              if ( v55 == *((_DWORD *)a2 + 19) )
              {
                v53 = (struct PALETTE *)*((_QWORD *)a2 + 13);
                goto LABEL_118;
              }
              if ( v55 == 3 )
              {
                if ( ((_DWORD)hdev[535] & 0x100) == 0 )
                {
                  v53 = ppalDefaultSurface8bpp;
                  goto LABEL_118;
                }
              }
              else if ( ((_DWORD)hdev[10] & 0x20000) == 0 )
              {
                goto LABEL_132;
              }
            }
            v53 = 0LL;
          }
LABEL_118:
          if ( v45 )
          {
            v56 = *((unsigned int *)a2 + 18);
            v57 = *((_QWORD *)a2 + 8);
          }
          else
          {
            v56 = 0LL;
            v57 = 0LL;
          }
          inited = EXLATEOBJ::bInitXlateObj(
                     &Xlate,
                     v57,
                     v56,
                     v53,
                     *(_QWORD *)(v51 + 128),
                     *((_QWORD *)a2 + 12),
                     *((_QWORD *)a2 + 12),
                     *((_DWORD *)a2 + 12),
                     *((_DWORD *)a2 + 13),
                     0xFFFFFF,
                     0);
          goto LABEL_122;
        }
        v49 = (v47 & 0x20000) == 0;
        goto LABEL_96;
      }
      if ( (unsigned int)EBRUSHOBJ::bIsCMYKColor(a2) )
        goto LABEL_98;
    }
    else if ( (v42 & 4) == 0 )
    {
      v49 = (v42 & 2) == 0;
LABEL_96:
      if ( v49 )
        goto LABEL_98;
    }
    v45 = v43;
    goto LABEL_98;
  }
  if ( (unsigned int)EBRUSHOBJ::bIsCMYKColor(a2) )
    goto LABEL_132;
  if ( (*((_DWORD *)a2 + 6) & 0x1000000) != 0 )
    *((_DWORD *)a2 + 6) = rgbFromColorref(*((_QWORD *)a2 + 11), *((_QWORD *)a2 + 12));
  v18 = hdev;
  if ( ((_DWORD)hdev[448] & 0x200000) != 0 && a3 != EngRealizeBrush )
  {
    if ( ((unsigned int (__fastcall *)(struct EBRUSHOBJ *, __int64, _QWORD, _QWORD, _QWORD, unsigned int))a3)(
           a2,
           (*((_QWORD *)a2 + 10) + 24LL) & -(__int64)(*((_QWORD *)a2 + 10) != 0LL),
           0LL,
           0LL,
           0LL,
           *((_DWORD *)a2 + 6) | 0x80000000) )
    {
      LODWORD(v8) = 1;
      goto LABEL_132;
    }
    v18 = hdev;
  }
  v19 = *((_QWORD *)a2 + 10);
  v71 = 0;
  v74 = 0;
  if ( *(_DWORD *)(v19 + 96) == 1 )
    v68 = 1;
  else
    v68 = *((_DWORD *)v18 + 519);
  if ( !*((_WORD *)v18 + 1040) )
    goto LABEL_132;
  if ( !*((_WORD *)v18 + 1041) )
    goto LABEL_132;
  v69 = *((unsigned __int16 *)v18 + 1040);
  v70 = *((unsigned __int16 *)v18 + 1041);
  v72 = 0LL;
  v73 = 1;
  if ( !SURFMEM::bCreateDIB((SURFMEM *)&v64, (struct _DEVBITMAPINFO *)&v68, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
    goto LABEL_132;
  v20 = hdev;
  v21 = *((unsigned int *)a2 + 6);
  v22 = (unsigned int)(*(_DWORD *)(*((_QWORD *)a2 + 10) + 96LL) == 1) + 1;
  v23 = *(ULONG **)(v64 + 72);
  if ( *((_QWORD *)hdev + 346) )
  {
    if ( ((_DWORD)hdev[10] & 0x8000) == 0 )
      v20 = (HDEV)*((_QWORD *)hdev + 221);
    v24 = (*((__int64 (__fastcall **)(HDEV, __int64, __int64, ULONG *))hdev + 346))(v20, v22, v21, v23);
  }
  else
  {
    v24 = EngDitherColor(hdev, v22, v21, v23);
  }
  v25 = v24 - 1;
  if ( !v25 )
  {
    v17 = xloIdent;
    goto LABEL_125;
  }
  if ( v25 != 1 )
    goto LABEL_132;
  v26 = 0;
  if ( (unsigned int)Feature_4093980987__private_IsEnabled() && a3 == EngRealizeBrush )
    v26 = (unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread(ghsemDynamicModeChange) == 0;
  NEEDDYNAMICMODECHANGESHARELOCK::NEEDDYNAMICMODECHANGESHARELOCK((NEEDDYNAMICMODECHANGESHARELOCK *)v58, v26);
  if ( a3 == EngRealizeBrush )
  {
    v63 = 1;
    GreAcquireSemaphore(ghsemHT);
  }
  else
  {
    v63 = 0;
  }
  if ( !PDEVOBJ::pDevHTInfo((PDEVOBJ *)&hdev) && !(unsigned int)PDEVOBJ::bEnableHalftone((PDEVOBJ *)&hdev, 0LL) )
    goto LABEL_73;
  v27 = (HPALETTE *)PDEVOBJ::pDevHTInfo((PDEVOBJ *)&hdev);
  LODWORD(v67) = *((_DWORD *)a2 + 6);
  v77 = &v67;
  v28 = hdev;
  LODWORD(v59) = 0;
  v76 = 1LL;
  v75[0] = 262400;
  v29 = (_DWORD)hdev[587] & 0x100;
  v75[1] = 255;
  v30 = *((_DWORD *)a2 + 18);
  LODWORD(v59) = v29 == 0 ? 2 : 0;
  if ( (v30 & 4) != 0 || (v30 & 0x20) == 0 && (v30 & 3) != 0 )
    LOBYTE(v59) = v29 != 0 ? 16 : 18;
  if ( *((unsigned __int16 *)v27 + 4) != v69 || *((unsigned __int16 *)v27 + 5) != v70 )
  {
    SURFACE::bDeleteSurface(v64, 0LL, 0LL);
    v69 = *((unsigned __int16 *)v27 + 4);
    v70 = *((unsigned __int16 *)v27 + 5);
    if ( !SURFMEM::bCreateDIB((SURFMEM *)&v64, (struct _DEVBITMAPINFO *)&v68, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
      goto LABEL_73;
    v28 = hdev;
  }
  v31 = *((_DWORD *)v28 + 586);
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
              goto LABEL_73;
            BYTE1(v59) = 6;
          }
          else
          {
            BYTE1(v59) = -3;
          }
        }
        else
        {
          BYTE1(v59) = -2;
        }
      }
      else
      {
        BYTE1(v59) = -1;
      }
    }
    else
    {
      BYTE1(v59) = 2;
    }
  }
  else
  {
    BYTE1(v59) = 1;
  }
  v36 = *((_BYTE *)v28 + 2336);
  v37 = (__int128 *)*((_QWORD *)a2 + 7);
  BYTE2(v59) = 4;
  BYTE3(v59) = v36;
  v81 = *v37;
  v38 = *((_QWORD *)v37 + 2);
  WORD5(v81) = 10000;
  v82 = v38;
  *(_DWORD *)((char *)&v81 + 6) = 655370000;
  if ( (unsigned int)Feature_4093980987__private_IsEnabled() )
  {
    HalftoneBrush = HT_CreateHalftoneBrush((_DWORD)v27, (unsigned int)&v81, (unsigned int)v75, v59, 0LL);
    if ( (signed int)HalftoneBrush > *(_DWORD *)(v64 + 64) )
    {
      v40 = (void *)PALLOCMEM(HalftoneBrush, 1835167815LL);
      if ( v40 )
      {
        SURFACE::bDeleteSurface(v64, 0LL, 0LL);
        if ( !SURFMEM::bCreateDIB((SURFMEM *)&v64, (struct _DEVBITMAPINFO *)&v68, v40, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
        {
          Win32FreePool(v40);
          goto LABEL_73;
        }
        *(_BYTE *)(v64 + 688) = 1;
        goto LABEL_75;
      }
LABEL_73:
      HTSEMOBJ::~HTSEMOBJ((HTSEMOBJ *)&v63);
      NEEDDYNAMICMODECHANGESHARELOCK::~NEEDDYNAMICMODECHANGESHARELOCK((NEEDDYNAMICMODECHANGESHARELOCK *)v58);
      goto LABEL_132;
    }
  }
LABEL_75:
  if ( (int)HT_CreateHalftoneBrush((_DWORD)v27, (unsigned int)&v81, (unsigned int)v75, v59, *(_QWORD *)(v64 + 72)) <= 0 )
    goto LABEL_73;
  if ( ((_DWORD)hdev[10] & 0x200) != 0 )
  {
    v17 = xloIdent;
  }
  else
  {
    EPALOBJ::EPALOBJ((EPALOBJ *)&v59, *v27);
    v41 = v59;
    if ( !(unsigned int)EXLATEOBJ::bInitXlateObj(
                          &Xlate,
                          *((_QWORD *)a2 + 8),
                          *((unsigned int *)a2 + 18),
                          v59,
                          *(_QWORD *)(*((_QWORD *)a2 + 10) + 128LL),
                          *((_QWORD *)a2 + 12),
                          *((_QWORD *)a2 + 12),
                          *((_DWORD *)a2 + 12),
                          *((_DWORD *)a2 + 13),
                          0xFFFFFF,
                          0) )
    {
      if ( v41 )
        DEC_SHARE_REF_CNT(v41);
      goto LABEL_73;
    }
    v17 = (XLATEOBJ *)Xlate;
    if ( v41 )
      DEC_SHARE_REF_CNT(v41);
  }
  HTSEMOBJ::~HTSEMOBJ((HTSEMOBJ *)&v63);
  NEEDDYNAMICMODECHANGESHARELOCK::~NEEDDYNAMICMODECHANGESHARELOCK((NEEDDYNAMICMODECHANGESHARELOCK *)v58);
LABEL_125:
  v50 = v79;
LABEL_126:
  if ( v50 )
  {
    v8 = v50 + 24;
LABEL_131:
    LODWORD(v8) = ((__int64 (__fastcall *)(struct EBRUSHOBJ *, __int64, __int64, __int64, XLATEOBJ *, int))a3)(
                    a2,
                    (*((_QWORD *)a2 + 10) + 24LL) & -(__int64)(*((_QWORD *)a2 + 10) != 0LL),
                    v8,
                    v9,
                    v17,
                    v3);
    goto LABEL_132;
  }
  if ( v64 )
  {
    v8 = v64 + 24;
    goto LABEL_131;
  }
  if ( a3 != EngRealizeBrush )
    goto LABEL_131;
LABEL_132:
  NEEDGRELOCK::~NEEDGRELOCK((NEEDGRELOCK *)v80);
  NEEDDYNAMICMODECHANGESHARELOCK::~NEEDDYNAMICMODECHANGESHARELOCK((NEEDDYNAMICMODECHANGESHARELOCK *)v60);
  SURFMEM::~SURFMEM((SURFMEM *)&v64);
  EXLATEOBJ::~EXLATEOBJ((EXLATEOBJ *)&Xlate);
  SURFREF::~SURFREF((SURFREF *)v78);
  return (unsigned int)v8;
}
