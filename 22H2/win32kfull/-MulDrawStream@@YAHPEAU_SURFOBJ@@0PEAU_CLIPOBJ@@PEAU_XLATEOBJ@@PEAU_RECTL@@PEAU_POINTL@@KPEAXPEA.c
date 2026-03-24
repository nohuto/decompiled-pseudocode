/*
 * XREFs of ?MulDrawStream@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@KPEAXPEAU_DSSTATE@@@Z @ 0x1C02A2A10
 * Callers:
 *     <none>
 * Callees:
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0084E50 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C00B565C (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     EngDrawStream @ 0x1C00F8AC0 (EngDrawStream.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     ?DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z @ 0x1C0273274 (-DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z.c)
 *     ??1MULTISURF@@QEAA@XZ @ 0x1C027D9F0 (--1MULTISURF@@QEAA@XZ.c)
 *     ??0MULTISURF@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C02A0CF0 (--0MULTISURF@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ?IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z @ 0x1C02A0EA0 (-IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C02A61C0 (-bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bLoadSource@MULTISURF@@QEAAHPEAU_DISPSURF@@@Z @ 0x1C02A64CC (-bLoadSource@MULTISURF@@QEAAHPEAU_DISPSURF@@@Z.c)
 *     ?bNextSurface@MSURF@@QEAAHXZ @ 0x1C02A6614 (-bNextSurface@MSURF@@QEAAHXZ.c)
 *     OffDrawStream @ 0x1C02C8608 (OffDrawStream.c)
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
  unsigned int v10; // r12d
  HDEV hdev; // rax
  int v13; // r13d
  BOOL v14; // ebx
  struct _SURFOBJ *v15; // rdx
  struct _RECTL *v16; // r8
  int Surface; // r14d
  int Source; // eax
  __int64 v19; // rdx
  __int64 v20; // r8
  int v21; // edi
  struct _SURFOBJ *v22; // r9
  struct _XLATEOBJ *v23; // r14
  struct _DISPSURF *v24; // rcx
  __int64 v25; // rcx
  HDEV pulXlate; // r14
  struct PALETTE *v27; // r13
  struct PALETTE *v28; // rax
  int v29; // r10d
  ULONG iUniq; // edi
  int v31; // r11d
  FLONG flXlate; // r9d
  ULONG v33; // r8d
  ULONG *v34; // rdx
  int v35; // edx
  int v36; // ecx
  int v37; // eax
  int v38; // r8d
  int v39; // edx
  int v40; // ecx
  ULONG v41; // r8d
  int v42; // edx
  FLONG v43; // ecx
  __int64 v44; // r8
  __int64 v45; // rbx
  unsigned int v46; // eax
  int NearestIndexFromColorref; // eax
  __int64 v48; // rax
  __int64 (__fastcall *v49)(__int64, __int64, __int64, __int64, int, int *, unsigned int, _DWORD *, _QWORD *); // r10
  __int64 v50; // rdx
  __int64 v51; // rdx
  __int64 v52; // rdx
  int v54; // [rsp+60h] [rbp-A0h]
  __int64 v55; // [rsp+68h] [rbp-98h]
  __int64 v57; // [rsp+78h] [rbp-88h]
  int v58; // [rsp+80h] [rbp-80h]
  __int64 v60; // [rsp+90h] [rbp-70h] BYREF
  __int64 v61; // [rsp+98h] [rbp-68h] BYREF
  __int64 v62; // [rsp+A0h] [rbp-60h] BYREF
  struct _XLATEOBJ *v63; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v64; // [rsp+B0h] [rbp-50h]
  __int64 v65; // [rsp+B8h] [rbp-48h]
  __int64 v66; // [rsp+C0h] [rbp-40h]
  __int64 v67; // [rsp+C8h] [rbp-38h]
  __int64 v68; // [rsp+D0h] [rbp-30h]
  __int64 v69; // [rsp+D8h] [rbp-28h]
  _BYTE v70[56]; // [rsp+E0h] [rbp-20h] BYREF
  struct _DISPSURF *v71; // [rsp+118h] [rbp+18h]
  int v72[2]; // [rsp+120h] [rbp+20h]
  struct _CLIPOBJ *v73; // [rsp+128h] [rbp+28h]
  int v74[4]; // [rsp+130h] [rbp+30h]
  _BYTE v75[88]; // [rsp+140h] [rbp+40h] BYREF
  int v76[2]; // [rsp+198h] [rbp+98h]
  _BYTE v77[88]; // [rsp+1B0h] [rbp+B0h] BYREF
  __int64 v78; // [rsp+208h] [rbp+108h]

  v10 = 1;
  v65 = (__int64)a6;
  v64 = (__int64)a8;
  v68 = *((_QWORD *)a9 + 5);
  v67 = *((_QWORD *)a9 + 6);
  v69 = *((_QWORD *)a9 + 4);
  v58 = *((_DWORD *)a9 + 1);
  v66 = (__int64)a5;
  if ( a2->iType != 1 || (hdev = a2->hdev) == 0LL || ((_DWORD)hdev[10] & 0x20000) == 0 )
  {
    v54 = 1;
    v13 = 1;
    v14 = IsMetaDevBitmapForMirroring(a1);
    Surface = MSURF::bFindSurface((MSURF *)v70, v15, a3, v16);
    MULTISURF::MULTISURF((MULTISURF *)v75, a2);
    if ( v14 )
    {
      MULTISURF::MULTISURF((MULTISURF *)v77, a1);
      v54 = EngDrawStream(v78, *(__int64 *)v76, (__int64)a3, (__int64)a4, v66, (int *)v65, a7, (_DWORD *)v64, a9);
      v13 = v54;
      MULTISURF::~MULTISURF((MULTISURF *)v77);
    }
    if ( !Surface )
    {
LABEL_86:
      v10 = v13;
      MULTISURF::~MULTISURF((MULTISURF *)v75);
      return v10;
    }
    while ( 1 )
    {
      v63 = 0LL;
      v62 = 0LL;
      v61 = 0LL;
      v60 = 0LL;
      Source = MULTISURF::bLoadSource((MULTISURF *)v75, v71);
      v20 = *(_QWORD *)v72;
      v57 = *(_QWORD *)v72;
      v21 = Source == 0;
      if ( !Source )
        goto LABEL_84;
      v22 = *(struct _SURFOBJ **)v76;
      v23 = a4;
      v24 = v71;
      v19 = *(_QWORD *)v76 - 24LL;
      v55 = *(_QWORD *)v76 - 24LL;
      if ( *((_DWORD *)v71 + 6) == v21 )
        goto LABEL_78;
      v25 = *((_QWORD *)v71 + 6);
      pulXlate = *(HDEV *)(v19 + 128);
      v27 = ppalDefault;
      if ( (*(_DWORD *)(v25 + 2172) & 0x100) != 0 )
      {
        v28 = DrvRealizeHalftonePalette((_QWORD *)v25, 0);
        v22 = *(struct _SURFOBJ **)v76;
        v27 = v28;
        v19 = v55;
      }
      if ( pulXlate )
        goto LABEL_23;
      if ( !a4 )
        goto LABEL_21;
      if ( a4[1].pulXlate )
      {
        pulXlate = (HDEV)a4[1].pulXlate;
      }
      else
      {
        if ( (a4->flXlate & 1) != 0 )
        {
LABEL_21:
          if ( v22 == a2 )
            pulXlate = a1[1].hdev;
LABEL_23:
          if ( v21 )
            goto LABEL_84;
          goto LABEL_24;
        }
        if ( !*(_QWORD *)&a4[2].iSrcType )
        {
          v21 = 1;
          goto LABEL_23;
        }
        v27 = *(struct PALETTE **)&a4[2].iSrcType;
        if ( *(_DWORD *)(v19 + 96) == a1->iBitmapFormat )
          pulXlate = a1[1].hdev;
      }
LABEL_24:
      v29 = 0;
      if ( pulXlate )
      {
        if ( ((_DWORD)pulXlate[6] & 0x800) != 0 )
        {
          v29 = 0x4000;
          if ( v27 == ppalDefault )
            v29 = 0x2000;
        }
      }
      if ( a4 )
        iUniq = a4[1].iUniq;
      else
        iUniq = 0;
      if ( a4 )
        v31 = *(_DWORD *)&a4[1].iSrcType;
      else
        v31 = 0;
      if ( a4 )
        flXlate = a4[1].flXlate;
      else
        flXlate = 0;
      if ( a4 )
        v33 = a4[3].iUniq;
      else
        v33 = 0;
      if ( a4 )
        v34 = a4[2].pulXlate;
      else
        v34 = 0LL;
      if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                           (__int64 *)&v63,
                           (__int64)v34,
                           v33,
                           (__int64)pulXlate,
                           *(_QWORD *)(v57 + 104),
                           (__int64)ppalDefault,
                           (__int64)v27,
                           flXlate,
                           v31,
                           iUniq,
                           v29) )
      {
        v23 = v63;
        v35 = a4 ? a4[1].iUniq : 0;
        v36 = a4 ? *(_DWORD *)&a4[1].iSrcType : 0;
        v37 = a4 ? a4[1].flXlate : 0;
        if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                             &v62,
                             0LL,
                             0,
                             *(_QWORD *)(v57 + 104),
                             (__int64)gppalRGB,
                             (__int64)v27,
                             (__int64)v27,
                             v37,
                             v36,
                             v35,
                             0) )
        {
          *((_QWORD *)a9 + 5) = v62;
          v38 = a4 ? a4[1].iUniq : 0;
          v39 = a4 ? *(_DWORD *)&a4[1].iSrcType : 0;
          v40 = a4 ? a4[1].flXlate : 0;
          if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                               &v61,
                               0LL,
                               0,
                               (__int64)gppalRGB,
                               *(_QWORD *)(v57 + 104),
                               (__int64)v27,
                               (__int64)v27,
                               v40,
                               v39,
                               v38,
                               0) )
          {
            v22 = *(struct _SURFOBJ **)v76;
            *((_QWORD *)a9 + 6) = v61;
            if ( v22 == a2 )
            {
              v20 = v57;
              goto LABEL_77;
            }
            if ( a4 )
              v41 = a4[1].iUniq;
            else
              v41 = 0;
            if ( a4 )
              v42 = *(_DWORD *)&a4[1].iSrcType;
            else
              v42 = 0;
            if ( a4 )
              v43 = a4[1].flXlate;
            else
              v43 = 0;
            if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                                 &v60,
                                 0LL,
                                 0,
                                 *(_QWORD *)(v55 + 128),
                                 (__int64)gppalRGB,
                                 (__int64)ppalDefault,
                                 (__int64)v27,
                                 v43,
                                 v42,
                                 v41,
                                 0) )
            {
              v44 = *((unsigned int *)a9 + 1);
              *((_QWORD *)a9 + 4) = v60;
              v45 = *(_QWORD *)(v55 + 128);
              v46 = ulIndexToRGB(a2[1].hdev, ppalDefault, v44);
              NearestIndexFromColorref = ulGetNearestIndexFromColorref(v45, ppalDefault, v46, 1LL);
              v22 = *(struct _SURFOBJ **)v76;
              v20 = v57;
              *((_DWORD *)a9 + 1) = NearestIndexFromColorref;
LABEL_77:
              v19 = v55;
              v24 = v71;
LABEL_78:
              v48 = *((_QWORD *)v24 + 7);
              v49 = EngDrawStream;
              if ( *(_QWORD *)(v48 + 3408) )
                v49 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, int, int *, unsigned int, _DWORD *, _QWORD *))(v48 + 3408);
              if ( v22->iType == 1 && *(_QWORD *)(v19 + 48) != *(_QWORD *)(v20 + 24) )
                v49 = EngDrawStream;
              v13 = OffDrawStream((int)v49, v74[0], v72[0], (int)v22, v73, (__int64)v23, v66, v65, a7, v64, (__int64)a9) & v54;
              goto LABEL_85;
            }
          }
        }
      }
LABEL_84:
      v13 = 0;
LABEL_85:
      *((_QWORD *)a9 + 6) = v67;
      *((_QWORD *)a9 + 5) = v68;
      *((_QWORD *)a9 + 4) = v69;
      *((_DWORD *)a9 + 1) = v58;
      v54 = v13;
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v60, v19);
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v61, v50);
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v62, v51);
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v63, v52);
      if ( !(unsigned int)MSURF::bNextSurface((MSURF *)v70) )
        goto LABEL_86;
    }
  }
  DbgPrint("MulDrawStream: this should never happen\n", a1);
  return v10;
}
