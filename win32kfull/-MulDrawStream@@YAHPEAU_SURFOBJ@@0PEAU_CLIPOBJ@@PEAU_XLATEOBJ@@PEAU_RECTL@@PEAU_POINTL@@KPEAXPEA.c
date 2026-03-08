/*
 * XREFs of ?MulDrawStream@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@KPEAXPEAU_DSSTATE@@@Z @ 0x1C02B1A60
 * Callers:
 *     <none>
 * Callees:
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C007F50C (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00834C0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     EngDrawStream @ 0x1C00CC220 (EngDrawStream.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ??0MULTISURF@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C014E250 (--0MULTISURF@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ?IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z @ 0x1C014E322 (-IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C014EFE2 (-bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bLoadSource@MULTISURF@@QEAAHPEAU_DISPSURF@@@Z @ 0x1C014F30A (-bLoadSource@MULTISURF@@QEAAHPEAU_DISPSURF@@@Z.c)
 *     ?bNextSurface@MSURF@@QEAAHXZ @ 0x1C014F364 (-bNextSurface@MSURF@@QEAAHXZ.c)
 *     ?DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z @ 0x1C026E880 (-DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z.c)
 *     ??1MULTISURF@@QEAA@XZ @ 0x1C027C420 (--1MULTISURF@@QEAA@XZ.c)
 *     OffDrawStream @ 0x1C02EA1FC (OffDrawStream.c)
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
  HDEV hdev; // rcx
  unsigned int v14; // r15d
  BOOL v15; // ebx
  struct _RECTL *v16; // r8
  int Surface; // r14d
  Gre::Base *v18; // rcx
  struct Gre::Base::SESSION_GLOBALS *v19; // rdi
  __int64 v20; // rbx
  struct _SURFOBJ *v21; // r9
  struct _XLATEOBJ *v22; // r14
  struct _DISPSURF *v23; // rax
  __int64 v24; // r15
  __int64 v25; // rdx
  Gre::Base *v26; // rcx
  ULONG *pulXlate; // r14
  __int64 v28; // rdi
  struct PALETTE *v29; // rax
  int v30; // edx
  bool v31; // zf
  __int64 v32; // rcx
  struct Gre::Base::SESSION_GLOBALS *v33; // rax
  FLONG flXlate; // r12d
  int v35; // r8d
  ULONG iUniq; // r9d
  __int64 v37; // rax
  __int64 v38; // rcx
  ULONG *v39; // r10
  ULONG v40; // r11d
  FLONG v41; // eax
  int v42; // ecx
  ULONG v43; // edx
  __int64 *v44; // r12
  FLONG v45; // ecx
  int v46; // edx
  ULONG v47; // r8d
  FLONG v48; // ecx
  int v49; // edx
  ULONG v50; // r8d
  int inited; // eax
  __int64 v52; // r8
  unsigned int v53; // eax
  int NearestIndexFromColorref; // eax
  __int64 (__fastcall *v55)(__int64, __int64, __int64, __int64, int, int *, unsigned int, _DWORD *, _QWORD *); // r10
  struct Gre::Base::SESSION_GLOBALS *v56; // [rsp+60h] [rbp-A0h]
  int v57; // [rsp+68h] [rbp-98h]
  __int64 v60; // [rsp+80h] [rbp-80h]
  int v61; // [rsp+88h] [rbp-78h]
  Gre::Base *v62; // [rsp+90h] [rbp-70h] BYREF
  Gre::Base *v63; // [rsp+98h] [rbp-68h] BYREF
  Gre::Base *v64; // [rsp+A0h] [rbp-60h] BYREF
  struct _XLATEOBJ *v65; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v66; // [rsp+B0h] [rbp-50h]
  __int64 v67; // [rsp+B8h] [rbp-48h]
  __int64 v68; // [rsp+C0h] [rbp-40h]
  __int64 *v69; // [rsp+C8h] [rbp-38h]
  __int64 v70; // [rsp+D0h] [rbp-30h]
  __int64 v71; // [rsp+D8h] [rbp-28h]
  __int64 v72; // [rsp+E0h] [rbp-20h]
  _BYTE v73[56]; // [rsp+F0h] [rbp-10h] BYREF
  struct _DISPSURF *v74; // [rsp+128h] [rbp+28h]
  int v75[2]; // [rsp+130h] [rbp+30h]
  struct _CLIPOBJ *v76; // [rsp+138h] [rbp+38h]
  int v77[4]; // [rsp+140h] [rbp+40h]
  _BYTE v78[88]; // [rsp+150h] [rbp+50h] BYREF
  int v79[2]; // [rsp+1A8h] [rbp+A8h]
  _BYTE v80[88]; // [rsp+1C0h] [rbp+C0h] BYREF
  __int64 v81; // [rsp+218h] [rbp+118h]

  v9 = a1;
  v67 = (__int64)a6;
  v66 = (__int64)a8;
  v71 = *((_QWORD *)a9 + 5);
  v70 = *((_QWORD *)a9 + 6);
  v72 = *((_QWORD *)a9 + 4);
  v61 = *((_DWORD *)a9 + 1);
  v68 = (__int64)a5;
  if ( a2->iType == 1 )
  {
    hdev = a2->hdev;
    if ( hdev )
    {
      if ( ((_DWORD)hdev[10] & 0x20000) != 0 )
      {
        DbgPrint("MulDrawStream: this should never happen\n");
        return 1LL;
      }
    }
  }
  v57 = 1;
  v14 = 1;
  v15 = IsMetaDevBitmapForMirroring(v9);
  Surface = MSURF::bFindSurface((MSURF *)v73, v9, a3, v16);
  MULTISURF::MULTISURF((MULTISURF *)v78, a2);
  if ( v15 )
  {
    MULTISURF::MULTISURF((MULTISURF *)v80, v9);
    v57 = EngDrawStream(v81, *(__int64 *)v79, (__int64)a3, (__int64)a4, v68, (int *)v67, a7, (_DWORD *)v66, a9);
    v14 = v57;
    MULTISURF::~MULTISURF((MULTISURF *)v80);
  }
  v56 = Gre::Base::Globals(v18);
  v19 = v56;
  if ( Surface )
  {
    do
    {
      v65 = 0LL;
      v64 = 0LL;
      v63 = 0LL;
      v62 = 0LL;
      v20 = *((_QWORD *)v19 + 751);
      if ( !(unsigned int)MULTISURF::bLoadSource((MULTISURF *)v78, (HDEV *)v74) )
        goto LABEL_60;
      v21 = *(struct _SURFOBJ **)v79;
      v22 = a4;
      v23 = v74;
      v24 = *(_QWORD *)v75 - 24LL;
      v25 = *(_QWORD *)v79 - 24LL;
      v60 = *(_QWORD *)v79 - 24LL;
      if ( !*((_DWORD *)v74 + 6) )
        goto LABEL_51;
      v26 = (Gre::Base *)*((_QWORD *)v74 + 6);
      pulXlate = *(ULONG **)(v25 + 128);
      v28 = *((_QWORD *)v19 + 750);
      if ( (*((_DWORD *)v26 + 535) & 0x100) != 0 )
      {
        v29 = DrvRealizeHalftonePalette(v26, 0);
        v21 = *(struct _SURFOBJ **)v79;
        v28 = (__int64)v29;
        v25 = v60;
      }
      if ( !pulXlate )
      {
        if ( !a4 )
          goto LABEL_19;
        if ( a4[1].pulXlate )
        {
          pulXlate = a4[1].pulXlate;
          v30 = 0;
LABEL_23:
          v32 = v24;
          v33 = v56;
          if ( (pulXlate[6] & 0x800) != 0 )
          {
            if ( v28 == *((_QWORD *)v56 + 750) )
              v30 = 0x2000;
            else
              v30 = 0x4000;
          }
          goto LABEL_28;
        }
        if ( (a4->flXlate & 1) != 0 )
        {
LABEL_19:
          v31 = v21 == a2;
        }
        else
        {
          v28 = *(_QWORD *)&a4[2].iSrcType;
          if ( !v28 )
            goto LABEL_59;
          v31 = *(_DWORD *)(v25 + 96) == v9->iBitmapFormat;
        }
        if ( v31 )
          pulXlate = (ULONG *)v9[1].hdev;
      }
      v30 = 0;
      if ( pulXlate )
        goto LABEL_23;
      v33 = v56;
      v32 = v24;
LABEL_28:
      v24 = v32;
      if ( a4 )
      {
        flXlate = a4[1].flXlate;
        v35 = *(_DWORD *)&a4[1].iSrcType;
        iUniq = a4[1].iUniq;
      }
      else
      {
        flXlate = 0;
        v35 = 0;
        iUniq = 0;
      }
      v37 = *((_QWORD *)v33 + 750);
      v69 = (__int64 *)(v32 + 128);
      v38 = *(_QWORD *)(v32 + 128);
      if ( a4 )
      {
        v39 = a4[2].pulXlate;
        v40 = a4[3].iUniq;
      }
      else
      {
        v39 = 0LL;
        v40 = 0;
      }
      if ( !(unsigned int)EXLATEOBJ::bInitXlateObj(
                            (Gre::Base *)&v65,
                            (__int64)v39,
                            v40,
                            (__int64)pulXlate,
                            v38,
                            v37,
                            v28,
                            flXlate,
                            v35,
                            iUniq,
                            v30) )
        goto LABEL_58;
      v22 = v65;
      if ( a4 )
      {
        v41 = a4[1].flXlate;
        v42 = *(_DWORD *)&a4[1].iSrcType;
        v43 = a4[1].iUniq;
      }
      else
      {
        v41 = 0;
        v42 = 0;
        v43 = 0;
      }
      v44 = v69;
      if ( !(unsigned int)EXLATEOBJ::bInitXlateObj((Gre::Base *)&v64, 0LL, 0, *v69, v20, v28, v28, v41, v42, v43, 0)
        || ((*((_QWORD *)a9 + 5) = v64, !a4)
          ? (v45 = 0, v46 = 0, v47 = 0)
          : (v45 = a4[1].flXlate, v46 = *(_DWORD *)&a4[1].iSrcType, v47 = a4[1].iUniq),
            !(unsigned int)EXLATEOBJ::bInitXlateObj((Gre::Base *)&v63, 0LL, 0, v20, *v44, v28, v28, v45, v46, v47, 0)) )
      {
LABEL_58:
        v9 = a1;
LABEL_59:
        v19 = v56;
        goto LABEL_60;
      }
      v21 = *(struct _SURFOBJ **)v79;
      *((_QWORD *)a9 + 6) = v63;
      if ( v21 == a2 )
      {
        v19 = v56;
        goto LABEL_50;
      }
      if ( a4 )
      {
        v48 = a4[1].flXlate;
        v49 = *(_DWORD *)&a4[1].iSrcType;
        v50 = a4[1].iUniq;
      }
      else
      {
        v48 = 0;
        v49 = 0;
        v50 = 0;
      }
      inited = EXLATEOBJ::bInitXlateObj(
                 (Gre::Base *)&v62,
                 0LL,
                 0,
                 *(_QWORD *)(v60 + 128),
                 v20,
                 *((_QWORD *)v56 + 750),
                 v28,
                 v48,
                 v49,
                 v50,
                 0);
      v19 = v56;
      if ( inited )
      {
        v52 = *((unsigned int *)a9 + 1);
        *((_QWORD *)a9 + 4) = v62;
        v53 = ulIndexToRGB(a2[1].hdev, *((_QWORD *)v56 + 750), v52);
        NearestIndexFromColorref = ulGetNearestIndexFromColorref(
                                     *(_QWORD *)(v60 + 128),
                                     *((_QWORD *)v56 + 750),
                                     v53,
                                     1LL);
        v21 = *(struct _SURFOBJ **)v79;
        *((_DWORD *)a9 + 1) = NearestIndexFromColorref;
LABEL_50:
        v25 = v60;
        v9 = a1;
        v23 = v74;
LABEL_51:
        v55 = EngDrawStream;
        if ( *(_QWORD *)(*((_QWORD *)v23 + 7) + 3384LL) )
          LODWORD(v55) = *(_QWORD *)(*((_QWORD *)v23 + 7) + 3384LL);
        if ( v21->iType == 1 && *(_QWORD *)(v25 + 48) != *(_QWORD *)(v24 + 48) )
          v55 = EngDrawStream;
        v14 = OffDrawStream((int)v55, v77[0], v75[0], (int)v21, v76, (__int64)v22, v68, v67, a7, v66, (__int64)a9) & v57;
        goto LABEL_61;
      }
      v9 = a1;
LABEL_60:
      v14 = 0;
LABEL_61:
      *((_QWORD *)a9 + 6) = v70;
      *((_QWORD *)a9 + 5) = v71;
      *((_QWORD *)a9 + 4) = v72;
      *((_DWORD *)a9 + 1) = v61;
      v57 = v14;
      EXLATEOBJ::vAltUnlock(&v62);
      EXLATEOBJ::vAltUnlock(&v63);
      EXLATEOBJ::vAltUnlock(&v64);
      EXLATEOBJ::vAltUnlock((Gre::Base **)&v65);
    }
    while ( (unsigned int)MSURF::bNextSurface((MSURF *)v73) );
  }
  MULTISURF::~MULTISURF((MULTISURF *)v78);
  return v14;
}
