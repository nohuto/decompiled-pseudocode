__int64 __fastcall MulAlphaBlend(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _CLIPOBJ *a3,
        struct _XLATEOBJ *a4,
        struct _RECTL *a5,
        struct _RECTL *a6,
        struct _BLENDOBJ *pBlendObj)
{
  unsigned int v7; // edi
  struct _RECTL *v9; // rsi
  struct _RECTL v12; // xmm0
  HDEV hdev; // rax
  BOOL v14; // ebx
  int Surface; // eax
  int v16; // r14d
  Gre::Base *v17; // rcx
  int v18; // esi
  struct Gre::Base::SESSION_GLOBALS *v19; // rax
  __int64 v20; // rbx
  SURFOBJ *v21; // rdx
  struct _XLATEOBJ *v22; // r9
  struct _DISPSURF *v23; // rcx
  __int64 v24; // r8
  PVOID *p_pvScan0; // r10
  __int64 v26; // r15
  Gre::Base *v27; // rcx
  struct Gre::Base::SESSION_GLOBALS *v28; // r11
  HDEV pulXlate; // rsi
  __int64 v30; // r14
  struct PALETTE *v31; // rax
  int v32; // r9d
  __int64 v33; // rcx
  ULONG iUniq; // r10d
  FLONG flXlate; // r8d
  int v36; // edx
  __int64 v37; // rax
  __int64 v38; // rcx
  int inited; // eax
  BOOL (__stdcall *v40)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *); // rcx
  bool v41; // zf
  int v43; // [rsp+60h] [rbp-A0h]
  int v44; // [rsp+64h] [rbp-9Ch]
  BOOL v45; // [rsp+68h] [rbp-98h]
  int v46; // [rsp+6Ch] [rbp-94h]
  Gre::Base *v47; // [rsp+70h] [rbp-90h]
  struct _SURFOBJ *v48; // [rsp+78h] [rbp-88h]
  PVOID *v49; // [rsp+80h] [rbp-80h]
  struct Gre::Base::SESSION_GLOBALS *v50; // [rsp+88h] [rbp-78h]
  Gre::Base *v52; // [rsp+A0h] [rbp-60h] BYREF
  Gre::Base *v53; // [rsp+A8h] [rbp-58h] BYREF
  Gre::Base *v54; // [rsp+B0h] [rbp-50h] BYREF
  Gre::Base *v55; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v56; // [rsp+C0h] [rbp-40h] BYREF
  char v57; // [rsp+C8h] [rbp-38h]
  int v58; // [rsp+CCh] [rbp-34h]
  __int64 v59; // [rsp+D0h] [rbp-30h]
  __int64 v60; // [rsp+D8h] [rbp-28h]
  __int64 v61; // [rsp+E0h] [rbp-20h]
  _BYTE v62[40]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v63; // [rsp+118h] [rbp+18h]
  char v64; // [rsp+120h] [rbp+20h]
  int v65; // [rsp+124h] [rbp+24h]
  SURFOBJ *psoSrc; // [rsp+148h] [rbp+48h]
  RECTL *prclSrc; // [rsp+150h] [rbp+50h]
  _BYTE v68[56]; // [rsp+160h] [rbp+60h] BYREF
  struct _DISPSURF *v69; // [rsp+198h] [rbp+98h]
  int v70[2]; // [rsp+1A0h] [rbp+A0h]
  struct _CLIPOBJ *v71; // [rsp+1A8h] [rbp+A8h]
  int v72[2]; // [rsp+1B0h] [rbp+B0h]
  _BYTE v73[40]; // [rsp+1C0h] [rbp+C0h] BYREF
  __int64 v74; // [rsp+1E8h] [rbp+E8h]
  char v75; // [rsp+1F0h] [rbp+F0h]
  int v76; // [rsp+1F4h] [rbp+F4h]
  SURFOBJ *psoDest; // [rsp+218h] [rbp+118h]
  RECTL *prclDest; // [rsp+220h] [rbp+120h]
  struct _RECTL v79; // [rsp+230h] [rbp+130h] BYREF

  v7 = 0;
  v9 = a6;
  v59 = *(_QWORD *)&pBlendObj[4].BlendFunction.BlendOp;
  v12 = *a6;
  v60 = *(_QWORD *)&pBlendObj[6].BlendFunction.BlendOp;
  v61 = *(_QWORD *)&pBlendObj[2].BlendFunction.BlendOp;
  hdev = a2->hdev;
  v48 = a2;
  v56 = 0LL;
  v57 = 0;
  v58 = 0;
  v79 = v12;
  if ( a2->iType != 1 || !hdev || ((_DWORD)hdev[10] & 0x20000) == 0 )
  {
LABEL_8:
    v45 = 1;
    v14 = IsMetaDevBitmapForMirroring(a1);
    Surface = MSURF::bFindSurface((MSURF *)v68, a1, a3, a5);
    v63 = 0LL;
    v16 = Surface;
    v64 = 0;
    v65 = 0;
    MULTISURF::vInit((MULTISURF *)v62, v48, v9);
    if ( v14 )
    {
      v74 = 0LL;
      v75 = 0;
      v76 = 0;
      MULTISURF::vInit((MULTISURF *)v73, a1, a5);
      v45 = EngAlphaBlend(psoDest, psoSrc, a3, a4, prclDest, prclSrc, pBlendObj);
      v18 = v45;
      MULTISURF::~MULTISURF((MULTISURF *)v73);
    }
    else
    {
      v18 = 1;
    }
    v19 = Gre::Base::Globals(v17);
    v50 = v19;
    if ( !v16 )
    {
LABEL_54:
      MULTISURF::~MULTISURF((MULTISURF *)v62);
      v7 = v18;
      goto LABEL_55;
    }
    while ( 1 )
    {
      v20 = *((_QWORD *)v19 + 751);
      v55 = 0LL;
      v54 = 0LL;
      v53 = 0LL;
      v52 = 0LL;
      if ( !(unsigned int)MULTISURF::bLoadSource((MULTISURF *)v62, (HDEV *)v69) )
        goto LABEL_52;
      v21 = psoSrc;
      v22 = a4;
      v23 = v69;
      v24 = *(_QWORD *)v70;
      p_pvScan0 = &psoSrc[-1].pvScan0;
      v49 = &psoSrc[-1].pvScan0;
      v26 = *(_QWORD *)v70 - 24LL;
      if ( !*((_DWORD *)v69 + 6) )
        goto LABEL_45;
      v27 = (Gre::Base *)*((_QWORD *)v69 + 6);
      v28 = v50;
      pulXlate = (HDEV)p_pvScan0[16];
      v30 = *((_QWORD *)v50 + 750);
      if ( (*((_DWORD *)v27 + 535) & 0x100) != 0 )
      {
        v31 = DrvRealizeHalftonePalette(v27, 0);
        v21 = psoSrc;
        v30 = (__int64)v31;
        v28 = v50;
        p_pvScan0 = v49;
      }
      if ( !pulXlate )
      {
        if ( !a4 )
          goto LABEL_24;
        if ( a4[1].pulXlate )
        {
          pulXlate = (HDEV)a4[1].pulXlate;
          v32 = 0;
LABEL_27:
          v33 = v26;
          if ( ((_DWORD)pulXlate[6] & 0x800) != 0 )
          {
            if ( v30 == *((_QWORD *)v28 + 750) )
              v32 = 0x2000;
            else
              v32 = 0x4000;
          }
          goto LABEL_32;
        }
        if ( (a4->flXlate & 1) != 0 )
        {
LABEL_24:
          if ( v21 == v48 )
            pulXlate = a1[1].hdev;
        }
        else
        {
          v30 = *(_QWORD *)&a4[2].iSrcType;
          if ( !v30 )
            goto LABEL_52;
          if ( *((_DWORD *)p_pvScan0 + 24) == a1->iBitmapFormat )
            pulXlate = a1[1].hdev;
        }
      }
      v32 = 0;
      if ( pulXlate )
        goto LABEL_27;
      v33 = v26;
LABEL_32:
      v26 = v33;
      if ( a4 )
      {
        iUniq = a4[1].iUniq;
        flXlate = a4[1].flXlate;
        v36 = *(_DWORD *)&a4[1].iSrcType;
        v43 = iUniq;
      }
      else
      {
        flXlate = 0;
        v43 = 0;
        v36 = 0;
        iUniq = 0;
      }
      v37 = *((_QWORD *)v28 + 750);
      *(_QWORD *)&v79.left = v33 + 128;
      v38 = *(_QWORD *)(v33 + 128);
      v46 = v36;
      v44 = flXlate;
      if ( a4 )
      {
        inited = EXLATEOBJ::bInitXlateObj(
                   (Gre::Base *)&v55,
                   (__int64)a4[2].pulXlate,
                   a4[3].iUniq,
                   (__int64)pulXlate,
                   v38,
                   v37,
                   v30,
                   flXlate,
                   v36,
                   v43,
                   v32);
      }
      else
      {
        v46 = v36;
        v44 = flXlate;
        inited = EXLATEOBJ::bInitXlateObj(
                   (Gre::Base *)&v55,
                   0LL,
                   0,
                   (__int64)pulXlate,
                   v38,
                   v37,
                   v30,
                   flXlate,
                   v36,
                   iUniq,
                   v32);
      }
      if ( inited )
      {
        v47 = v55;
        if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                             (Gre::Base *)&v54,
                             0LL,
                             0,
                             **(_QWORD **)&v79.left,
                             v20,
                             v30,
                             v30,
                             v44,
                             v46,
                             v43,
                             0) )
        {
          *(_QWORD *)&pBlendObj[4].BlendFunction.BlendOp = v54;
          if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                               (Gre::Base *)&v53,
                               0LL,
                               0,
                               v20,
                               **(_QWORD **)&v79.left,
                               v30,
                               v30,
                               v44,
                               v46,
                               v43,
                               0) )
          {
            v21 = psoSrc;
            *(_QWORD *)&pBlendObj[6].BlendFunction.BlendOp = v53;
            if ( v21 == v48 )
              goto LABEL_44;
            if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                                 (Gre::Base *)&v52,
                                 0LL,
                                 0,
                                 (__int64)v49[16],
                                 v20,
                                 *((_QWORD *)v50 + 750),
                                 v30,
                                 v44,
                                 v46,
                                 v43,
                                 0) )
            {
              v21 = psoSrc;
              *(_QWORD *)&pBlendObj[2].BlendFunction.BlendOp = v52;
LABEL_44:
              p_pvScan0 = v49;
              v22 = (struct _XLATEOBJ *)v47;
              v23 = v69;
              v24 = *(_QWORD *)v70;
LABEL_45:
              if ( (*(_DWORD *)(v24 + 88) & 0x10000) != 0 )
                v40 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *))(*((_QWORD *)v23 + 7) + 3232LL);
              else
                v40 = EngAlphaBlend;
              if ( v21->iType == 1 && p_pvScan0[6] != *(PVOID *)(v26 + 48) )
                v40 = EngAlphaBlend;
              *(_QWORD *)&v79.left = 0LL;
              v18 = OffAlphaBlend(
                      (__int64 (__fastcall *)(__int64, __int64, struct _CLIPOBJ *, __int64, __int128 *, __int128 *, __int64))v40,
                      *(int **)v72,
                      v24,
                      &v79.left,
                      (__int64)v21,
                      v71,
                      (__int64)v22,
                      (__int128 *)&a5->left,
                      (__int128 *)&prclSrc->left,
                      (__int64)pBlendObj) & v45;
              goto LABEL_53;
            }
          }
        }
      }
LABEL_52:
      v18 = 0;
LABEL_53:
      *(_QWORD *)&pBlendObj[4].BlendFunction.BlendOp = v59;
      *(_QWORD *)&pBlendObj[6].BlendFunction.BlendOp = v60;
      *(_QWORD *)&pBlendObj[2].BlendFunction.BlendOp = v61;
      v45 = v18;
      EXLATEOBJ::vAltUnlock(&v52);
      EXLATEOBJ::vAltUnlock(&v53);
      EXLATEOBJ::vAltUnlock(&v54);
      EXLATEOBJ::vAltUnlock(&v55);
      v41 = (unsigned int)MSURF::bNextSurface((MSURF *)v68) == 0;
      v19 = v50;
      if ( v41 )
        goto LABEL_54;
    }
  }
  if ( (unsigned int)MulCopyDeviceToDIB(a2, (struct SURFMEM *)&v56, &v79) )
  {
    if ( !v56 )
    {
      v7 = 1;
      goto LABEL_55;
    }
    v9 = &v79;
    v48 = (struct _SURFOBJ *)(v56 + 24);
    goto LABEL_8;
  }
LABEL_55:
  SURFMEM::~SURFMEM((SURFMEM *)&v56);
  return v7;
}
