/*
 * XREFs of ?MulDrawStream@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@KPEAXPEAU_DSSTATE@@@Z @ 0x1C02A0EE0
 * Callers:
 *     <none>
 * Callees:
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C002C6B0 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00398B0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     EngDrawStream @ 0x1C00E0180 (EngDrawStream.c)
 *     OffDrawStream @ 0x1C015887C (OffDrawStream.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ??0MULTISURF@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C016EF76 (--0MULTISURF@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ?bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C016FC5C (-bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z @ 0x1C02714F8 (-DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z.c)
 *     ??1MULTISURF@@QEAA@XZ @ 0x1C027BB90 (--1MULTISURF@@QEAA@XZ.c)
 *     ?IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z @ 0x1C029FE80 (-IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?bLoadSource@MULTISURF@@QEAAHPEAU_DISPSURF@@@Z @ 0x1C02A4524 (-bLoadSource@MULTISURF@@QEAAHPEAU_DISPSURF@@@Z.c)
 *     ?bNextSurface@MSURF@@QEAAHXZ @ 0x1C02A4670 (-bNextSurface@MSURF@@QEAAHXZ.c)
 */

__int64 __fastcall MulDrawStream(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _CLIPOBJ *a3,
        struct _XLATEOBJ *a4,
        struct _RECTL *a5,
        struct _POINTL *a6,
        unsigned int a7,
        void *a8,
        struct _DSSTATE *a9)
{
  struct _SURFOBJ *v9; // r12
  unsigned int v10; // ebx
  HDEV hdev; // rax
  int v14; // r15d
  BOOL v15; // ebx
  struct _RECTL *v16; // rdx
  struct _CLIPOBJ *v17; // r8
  int Surface; // r14d
  struct _SURFOBJ *v19; // r9
  struct _XLATEOBJ *v20; // r15
  struct _DISPSURF *v21; // rcx
  __int64 v22; // rsi
  __int64 v23; // rdx
  __int64 v24; // rcx
  ULONG *pulXlate; // r15
  struct PALETTE *v26; // r14
  struct PALETTE *v27; // rax
  bool v28; // zf
  int v29; // edx
  FLONG flXlate; // r12d
  int v31; // r8d
  ULONG iUniq; // r9d
  ULONG *v33; // r10
  ULONG v34; // r11d
  FLONG v35; // eax
  int v36; // ecx
  ULONG v37; // edx
  __int64 *v38; // r12
  FLONG v39; // ecx
  int v40; // edx
  ULONG v41; // r8d
  FLONG v42; // ecx
  int v43; // edx
  ULONG v44; // r8d
  __int64 v45; // r8
  unsigned int v46; // eax
  int NearestIndexFromColorref; // eax
  __int64 (__fastcall *v48)(__int64, __int64, struct _CLIPOBJ *, __int64, __int128 *, __int64 *, int, __int64, __int64); // r10
  __int64 (__fastcall *v49)(__int64, __int64, struct _CLIPOBJ *, __int64, __int128 *, __int64 *, int, __int64, __int64); // rcx
  int v51; // [rsp+60h] [rbp-A0h]
  __int64 v54; // [rsp+78h] [rbp-88h]
  int v55; // [rsp+80h] [rbp-80h]
  __int64 v56; // [rsp+88h] [rbp-78h] BYREF
  __int64 v57; // [rsp+90h] [rbp-70h] BYREF
  __int64 v58; // [rsp+98h] [rbp-68h] BYREF
  struct _XLATEOBJ *v59; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v60; // [rsp+A8h] [rbp-58h]
  __int64 v61; // [rsp+B0h] [rbp-50h]
  __int64 v62; // [rsp+B8h] [rbp-48h]
  __int64 *v63; // [rsp+C0h] [rbp-40h]
  __int64 v64; // [rsp+C8h] [rbp-38h]
  __int64 v65; // [rsp+D0h] [rbp-30h]
  __int64 v66; // [rsp+D8h] [rbp-28h]
  __int64 **v67[7]; // [rsp+E0h] [rbp-20h] BYREF
  struct _DISPSURF *v68; // [rsp+118h] [rbp+18h]
  int v69[2]; // [rsp+120h] [rbp+20h]
  struct _CLIPOBJ *v70; // [rsp+128h] [rbp+28h]
  int v71[2]; // [rsp+130h] [rbp+30h]
  _BYTE v72[88]; // [rsp+140h] [rbp+40h] BYREF
  int v73[2]; // [rsp+198h] [rbp+98h]
  _BYTE v74[88]; // [rsp+1B0h] [rbp+B0h] BYREF
  __int64 v75; // [rsp+208h] [rbp+108h]

  v9 = a1;
  v10 = 1;
  v61 = (__int64)a6;
  v60 = (__int64)a8;
  v65 = *((_QWORD *)a9 + 5);
  v64 = *((_QWORD *)a9 + 6);
  v66 = *((_QWORD *)a9 + 4);
  v55 = *((_DWORD *)a9 + 1);
  v62 = (__int64)a5;
  if ( a2->iType != 1 || (hdev = a2->hdev) == 0LL || ((_DWORD)hdev[10] & 0x20000) == 0 )
  {
    v51 = 1;
    v14 = 1;
    v15 = IsMetaDevBitmapForMirroring(a1);
    Surface = MSURF::bFindSurface(v67, v9, v17, v16);
    MULTISURF::MULTISURF((MULTISURF *)v72, a2);
    if ( v15 )
    {
      MULTISURF::MULTISURF((MULTISURF *)v74, v9);
      v51 = EngDrawStream(v75, *(__int64 *)v73, (__int64)a3, (__int64)a4, v62, (int *)v61, a7, (_DWORD *)v60, a9);
      v14 = v51;
      MULTISURF::~MULTISURF((MULTISURF *)v74);
    }
    if ( !Surface )
    {
LABEL_57:
      v10 = v14;
      MULTISURF::~MULTISURF((MULTISURF *)v72);
      return v10;
    }
    while ( 1 )
    {
      v59 = 0LL;
      v58 = 0LL;
      v57 = 0LL;
      v56 = 0LL;
      if ( !(unsigned int)MULTISURF::bLoadSource((MULTISURF *)v72, v68) )
        goto LABEL_55;
      v19 = *(struct _SURFOBJ **)v73;
      v20 = a4;
      v21 = v68;
      v22 = *(_QWORD *)v69 - 24LL;
      v23 = *(_QWORD *)v73 - 24LL;
      v54 = *(_QWORD *)v73 - 24LL;
      if ( !*((_DWORD *)v68 + 6) )
        goto LABEL_48;
      v24 = *((_QWORD *)v68 + 6);
      pulXlate = *(ULONG **)(v23 + 128);
      v26 = ppalDefault;
      if ( (*(_DWORD *)(v24 + 2140) & 0x100) != 0 )
      {
        v27 = DrvRealizeHalftonePalette((_QWORD *)v24, 0);
        v19 = *(struct _SURFOBJ **)v73;
        v26 = v27;
        v23 = v54;
      }
      if ( pulXlate )
        goto LABEL_22;
      if ( !a4 )
        goto LABEL_19;
      if ( !a4[1].pulXlate )
        break;
      pulXlate = a4[1].pulXlate;
LABEL_23:
      v29 = 0;
      if ( (pulXlate[6] & 0x800) != 0 )
      {
        v29 = 0x4000;
        if ( v26 == ppalDefault )
          v29 = 0x2000;
      }
LABEL_26:
      if ( a4 )
      {
        flXlate = a4[1].flXlate;
        v31 = *(_DWORD *)&a4[1].iSrcType;
        iUniq = a4[1].iUniq;
      }
      else
      {
        flXlate = 0;
        v31 = 0;
        iUniq = 0;
      }
      v63 = (__int64 *)(v22 + 128);
      if ( a4 )
      {
        v33 = a4[2].pulXlate;
        v34 = a4[3].iUniq;
      }
      else
      {
        v33 = 0LL;
        v34 = 0;
      }
      if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                           (__int64 *)&v59,
                           (__int64)v33,
                           v34,
                           (__int64)pulXlate,
                           *(_QWORD *)(v22 + 128),
                           (__int64)ppalDefault,
                           (__int64)v26,
                           flXlate,
                           v31,
                           iUniq,
                           v29) )
      {
        v20 = v59;
        if ( a4 )
        {
          v35 = a4[1].flXlate;
          v36 = *(_DWORD *)&a4[1].iSrcType;
          v37 = a4[1].iUniq;
        }
        else
        {
          v35 = 0;
          v36 = 0;
          v37 = 0;
        }
        v38 = v63;
        if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                             &v58,
                             0LL,
                             0,
                             *v63,
                             (__int64)gppalRGB,
                             (__int64)v26,
                             (__int64)v26,
                             v35,
                             v36,
                             v37,
                             0) )
        {
          *((_QWORD *)a9 + 5) = v58;
          if ( a4 )
          {
            v39 = a4[1].flXlate;
            v40 = *(_DWORD *)&a4[1].iSrcType;
            v41 = a4[1].iUniq;
          }
          else
          {
            v39 = 0;
            v40 = 0;
            v41 = 0;
          }
          if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                               &v57,
                               0LL,
                               0,
                               (__int64)gppalRGB,
                               *v38,
                               (__int64)v26,
                               (__int64)v26,
                               v39,
                               v40,
                               v41,
                               0) )
          {
            v19 = *(struct _SURFOBJ **)v73;
            *((_QWORD *)a9 + 6) = v57;
            if ( v19 == a2 )
              goto LABEL_47;
            if ( a4 )
            {
              v42 = a4[1].flXlate;
              v43 = *(_DWORD *)&a4[1].iSrcType;
              v44 = a4[1].iUniq;
            }
            else
            {
              v42 = 0;
              v43 = 0;
              v44 = 0;
            }
            if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                                 &v56,
                                 0LL,
                                 0,
                                 *(_QWORD *)(v54 + 128),
                                 (__int64)gppalRGB,
                                 (__int64)ppalDefault,
                                 (__int64)v26,
                                 v42,
                                 v43,
                                 v44,
                                 0) )
            {
              v45 = *((unsigned int *)a9 + 1);
              *((_QWORD *)a9 + 4) = v56;
              v46 = ulIndexToRGB(a2[1].hdev, ppalDefault, v45);
              NearestIndexFromColorref = ulGetNearestIndexFromColorref(*(_QWORD *)(v54 + 128), ppalDefault, v46, 1LL);
              v19 = *(struct _SURFOBJ **)v73;
              *((_DWORD *)a9 + 1) = NearestIndexFromColorref;
LABEL_47:
              v23 = v54;
              v9 = a1;
              v21 = v68;
LABEL_48:
              v48 = (__int64 (__fastcall *)(__int64, __int64, struct _CLIPOBJ *, __int64, __int128 *, __int64 *, int, __int64, __int64))EngDrawStream;
              v49 = *(__int64 (__fastcall **)(__int64, __int64, struct _CLIPOBJ *, __int64, __int128 *, __int64 *, int, __int64, __int64))(*((_QWORD *)v21 + 7) + 3384LL);
              if ( v49 )
                v48 = v49;
              if ( v19->iType == 1 && *(_QWORD *)(v23 + 48) != *(_QWORD *)(v22 + 48) )
                v48 = (__int64 (__fastcall *)(__int64, __int64, struct _CLIPOBJ *, __int64, __int128 *, __int64 *, int, __int64, __int64))EngDrawStream;
              v14 = OffDrawStream(
                      v48,
                      *(LONG **)v71,
                      *(__int64 *)v69,
                      (__int64)v19,
                      v70,
                      (__int64)v20,
                      (__int128 *)v62,
                      (__int64 *)v61,
                      a7,
                      v60,
                      (__int64)a9) & v51;
              goto LABEL_56;
            }
          }
        }
      }
      v9 = a1;
LABEL_55:
      v14 = 0;
LABEL_56:
      *((_QWORD *)a9 + 6) = v64;
      *((_QWORD *)a9 + 5) = v65;
      *((_QWORD *)a9 + 4) = v66;
      *((_DWORD *)a9 + 1) = v55;
      v51 = v14;
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v56);
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v57);
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v58);
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v59);
      if ( !(unsigned int)MSURF::bNextSurface((MSURF *)v67) )
        goto LABEL_57;
    }
    if ( (a4->flXlate & 1) != 0 )
    {
LABEL_19:
      v28 = v19 == a2;
    }
    else
    {
      v26 = *(struct PALETTE **)&a4[2].iSrcType;
      if ( !v26 )
        goto LABEL_55;
      v28 = *(_DWORD *)(v23 + 96) == v9->iBitmapFormat;
    }
    if ( v28 )
      pulXlate = (ULONG *)v9[1].hdev;
LABEL_22:
    v29 = 0;
    if ( !pulXlate )
      goto LABEL_26;
    goto LABEL_23;
  }
  DbgPrint("MulDrawStream: this should never happen\n");
  return v10;
}
