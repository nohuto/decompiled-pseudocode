__int64 __fastcall MulTransparentBlt(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _CLIPOBJ *a3,
        struct _XLATEOBJ *a4,
        struct _RECTL *a5,
        struct _RECTL *a6,
        ULONG iTransColor,
        ULONG ulReserved)
{
  unsigned int v8; // edi
  struct _RECTL *v9; // rsi
  HDEV hdev; // rax
  struct _SURFOBJ *v13; // r13
  int v14; // ebx
  struct _RECTL v16; // xmm0
  BOOL v17; // ebx
  int Surface; // eax
  int v19; // r15d
  Gre::Base *v20; // rcx
  SURFOBJ *v21; // r8
  struct _XLATEOBJ *v22; // rsi
  int v23; // ebx
  __int64 v24; // r15
  PVOID *p_pvScan0; // r12
  Gre::Base *v26; // rcx
  HDEV pulXlate; // rsi
  __int64 v28; // rdx
  struct PALETTE *v29; // rax
  int v30; // r8d
  __int64 v31; // rcx
  struct Gre::Base::SESSION_GLOBALS *v32; // rax
  int v33; // r9d
  ULONG iUniq; // r10d
  __int64 v35; // rax
  __int64 v36; // rcx
  ULONG *v37; // r11
  ULONG v38; // r12d
  int inited; // eax
  int v40; // r9d
  unsigned int v41; // eax
  int NearestIndexFromColorref; // eax
  BOOL (__stdcall *v43)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, ULONG, ULONG); // rcx
  BOOL v45; // [rsp+60h] [rbp-A0h]
  struct Gre::Base::SESSION_GLOBALS *v46; // [rsp+68h] [rbp-98h]
  FLONG flXlate; // [rsp+70h] [rbp-90h]
  struct _XLATEOBJ *v49; // [rsp+88h] [rbp-78h] BYREF
  __int64 v50; // [rsp+90h] [rbp-70h] BYREF
  char v51; // [rsp+98h] [rbp-68h]
  int v52; // [rsp+9Ch] [rbp-64h]
  _BYTE v53[40]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v54; // [rsp+C8h] [rbp-38h]
  char v55; // [rsp+D0h] [rbp-30h]
  int v56; // [rsp+D4h] [rbp-2Ch]
  SURFOBJ *psoSrc; // [rsp+F8h] [rbp-8h]
  RECTL *prclSrc; // [rsp+100h] [rbp+0h]
  _BYTE v59[56]; // [rsp+110h] [rbp+10h] BYREF
  struct _DISPSURF *v60; // [rsp+148h] [rbp+48h]
  int v61[2]; // [rsp+150h] [rbp+50h]
  struct _CLIPOBJ *v62; // [rsp+158h] [rbp+58h]
  int v63[2]; // [rsp+160h] [rbp+60h]
  _BYTE v64[40]; // [rsp+170h] [rbp+70h] BYREF
  __int64 v65; // [rsp+198h] [rbp+98h]
  char v66; // [rsp+1A0h] [rbp+A0h]
  int v67; // [rsp+1A4h] [rbp+A4h]
  SURFOBJ *psoDst; // [rsp+1C8h] [rbp+C8h]
  RECTL *prclDst; // [rsp+1D0h] [rbp+D0h]
  struct _RECTL v70; // [rsp+1E0h] [rbp+E0h] BYREF

  v8 = 0;
  v9 = a6;
  hdev = a2->hdev;
  v13 = a2;
  v14 = 1;
  v50 = 0LL;
  v16 = *a6;
  v51 = 0;
  v52 = 0;
  v70 = v16;
  if ( a2->iType != 1 || !hdev || ((_DWORD)hdev[10] & 0x20000) == 0 )
    goto LABEL_7;
  if ( (unsigned int)MulCopyDeviceToDIB(a2, (struct SURFMEM *)&v50, &v70) )
  {
    if ( !v50 )
    {
LABEL_55:
      v8 = v14;
      goto LABEL_56;
    }
    v9 = &v70;
    v13 = (struct _SURFOBJ *)(v50 + 24);
LABEL_7:
    v45 = 1;
    v17 = IsMetaDevBitmapForMirroring(a1);
    Surface = MSURF::bFindSurface((MSURF *)v59, a1, a3, a5);
    v54 = 0LL;
    v55 = 0;
    v56 = 0;
    v19 = Surface;
    MULTISURF::vInit((MULTISURF *)v53, v13, v9);
    if ( v17 )
    {
      v65 = 0LL;
      v66 = 0;
      v67 = 0;
      MULTISURF::vInit((MULTISURF *)v64, a1, a5);
      v45 = EngTransparentBlt(psoDst, psoSrc, a3, a4, prclDst, prclSrc, iTransColor, ulReserved);
      v14 = v45;
      MULTISURF::~MULTISURF((MULTISURF *)v64);
    }
    else
    {
      v14 = 1;
    }
    v46 = Gre::Base::Globals(v20);
    if ( v19 )
    {
      while ( 1 )
      {
        v49 = 0LL;
        if ( !(unsigned int)MULTISURF::bLoadSource((MULTISURF *)v53, (HDEV *)v60) )
          goto LABEL_52;
        v21 = psoSrc;
        v22 = a4;
        v23 = 0;
        v24 = *(_QWORD *)v61 - 24LL;
        p_pvScan0 = &psoSrc[-1].pvScan0;
        *(_QWORD *)&v70.left = (char *)psoSrc - 24;
        if ( *((_DWORD *)v60 + 6) )
          break;
LABEL_42:
        v40 = iTransColor;
        if ( v21 != v13 )
        {
          v41 = ulIndexToRGB(v13[1].hdev, *((_QWORD *)v46 + 750), iTransColor);
          NearestIndexFromColorref = ulGetNearestIndexFromColorref(p_pvScan0[16], *((_QWORD *)v46 + 750), v41, 1LL);
          v21 = psoSrc;
          v40 = NearestIndexFromColorref;
        }
        if ( !v23 )
        {
          if ( (*(_DWORD *)(*(_QWORD *)v61 + 88LL) & 0x8000) != 0 )
            v43 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, ULONG, ULONG))(*((_QWORD *)v60 + 7) + 3256LL);
          else
            v43 = EngTransparentBlt;
          if ( v21->iType == 1 && p_pvScan0[6] != *(PVOID *)(v24 + 48) )
            v43 = EngTransparentBlt;
          *(_QWORD *)&v70.left = 0LL;
          v14 = OffTransparentBlt(
                  (__int64 (__fastcall *)(__int64, __int64, struct _CLIPOBJ *, __int64, __int128 *, __int128 *, int, int))v43,
                  *(int **)v63,
                  *(__int64 *)v61,
                  &v70.left,
                  (__int64)v21,
                  v62,
                  (__int64)v22,
                  (__int128 *)&a5->left,
                  (__int128 *)&prclSrc->left,
                  v40,
                  ulReserved) & v45;
          goto LABEL_53;
        }
LABEL_52:
        v14 = 0;
LABEL_53:
        v45 = v14;
        EXLATEOBJ::vAltUnlock((Gre::Base **)&v49);
        if ( !(unsigned int)MSURF::bNextSurface((MSURF *)v59) )
          goto LABEL_54;
      }
      v26 = (Gre::Base *)*((_QWORD *)v60 + 6);
      pulXlate = (HDEV)p_pvScan0[16];
      v28 = *((_QWORD *)v46 + 750);
      if ( (*((_DWORD *)v26 + 535) & 0x100) != 0 )
      {
        v29 = DrvRealizeHalftonePalette(v26, 0);
        v21 = psoSrc;
        v28 = (__int64)v29;
      }
      if ( !pulXlate )
      {
        if ( !a4 )
          goto LABEL_24;
        if ( a4[1].pulXlate )
        {
          pulXlate = (HDEV)a4[1].pulXlate;
          v30 = 0;
          goto LABEL_27;
        }
        if ( (a4->flXlate & 1) != 0 )
        {
LABEL_24:
          if ( v21 == v13 )
            pulXlate = a1[1].hdev;
        }
        else
        {
          v28 = *(_QWORD *)&a4[2].iSrcType;
          if ( !v28 )
          {
            v23 = 1;
LABEL_41:
            v22 = a4;
            goto LABEL_42;
          }
          if ( *((_DWORD *)p_pvScan0 + 24) == a1->iBitmapFormat )
            pulXlate = a1[1].hdev;
        }
      }
      v30 = 0;
      if ( !pulXlate )
      {
        v32 = v46;
        v31 = v24;
LABEL_32:
        v24 = v31;
        if ( a4 )
        {
          v33 = *(_DWORD *)&a4[1].iSrcType;
          iUniq = a4[1].iUniq;
          flXlate = a4[1].flXlate;
        }
        else
        {
          flXlate = 0;
          v33 = 0;
          iUniq = 0;
        }
        v35 = *((_QWORD *)v32 + 750);
        v36 = *(_QWORD *)(v31 + 128);
        if ( a4 )
        {
          v37 = a4[2].pulXlate;
          v38 = a4[3].iUniq;
        }
        else
        {
          v37 = 0LL;
          v38 = 0;
        }
        inited = EXLATEOBJ::bInitXlateObj(
                   (Gre::Base *)&v49,
                   (__int64)v37,
                   v38,
                   (__int64)pulXlate,
                   v36,
                   v35,
                   v28,
                   flXlate,
                   v33,
                   iUniq,
                   v30);
        v21 = psoSrc;
        p_pvScan0 = *(PVOID **)&v70.left;
        if ( inited )
        {
          v22 = v49;
          goto LABEL_42;
        }
        v23 = 1;
        goto LABEL_41;
      }
LABEL_27:
      v31 = v24;
      v32 = v46;
      if ( ((_DWORD)pulXlate[6] & 0x800) != 0 )
      {
        if ( v28 == *((_QWORD *)v46 + 750) )
          v30 = 0x2000;
        else
          v30 = 0x4000;
      }
      goto LABEL_32;
    }
LABEL_54:
    MULTISURF::~MULTISURF((MULTISURF *)v53);
    goto LABEL_55;
  }
LABEL_56:
  SURFMEM::~SURFMEM((SURFMEM *)&v50);
  return v8;
}
