/*
 * XREFs of ?MulAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z @ 0x1C02A00C0
 * Callers:
 *     <none>
 * Callees:
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C002C6B0 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     EngAlphaBlend @ 0x1C002D3E0 (EngAlphaBlend.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00398B0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     OffAlphaBlend @ 0x1C00D76B8 (OffAlphaBlend.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ?bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C016FC5C (-bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z @ 0x1C02714F8 (-DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z.c)
 *     ??1MULTISURF@@QEAA@XZ @ 0x1C027BB90 (--1MULTISURF@@QEAA@XZ.c)
 *     ?IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z @ 0x1C029FE80 (-IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?MulCopyDeviceToDIB@@YAHPEAU_SURFOBJ@@PEAVSURFMEM@@PEAU_RECTL@@@Z @ 0x1C02A0698 (-MulCopyDeviceToDIB@@YAHPEAU_SURFOBJ@@PEAVSURFMEM@@PEAU_RECTL@@@Z.c)
 *     ?bLoadSource@MULTISURF@@QEAAHPEAU_DISPSURF@@@Z @ 0x1C02A4524 (-bLoadSource@MULTISURF@@QEAAHPEAU_DISPSURF@@@Z.c)
 *     ?bNextSurface@MSURF@@QEAAHXZ @ 0x1C02A4670 (-bNextSurface@MSURF@@QEAAHXZ.c)
 *     ?vInit@MULTISURF@@AEAAXPEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C02A4BAC (-vInit@MULTISURF@@AEAAXPEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 */

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
  int v17; // esi
  SURFOBJ *v18; // rdx
  struct _XLATEOBJ *v19; // r9
  struct _DISPSURF *v20; // rcx
  __int64 v21; // r8
  PVOID *p_pvScan0; // r10
  __int64 v23; // r15
  __int64 v24; // rcx
  HDEV pulXlate; // r14
  struct PALETTE *v26; // rsi
  struct PALETTE *v27; // rax
  __int64 v28; // rcx
  int v29; // edx
  FLONG flXlate; // r9d
  ULONG iUniq; // r10d
  int v32; // r8d
  __int64 v33; // rcx
  int inited; // eax
  BOOL (__stdcall *v35)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *); // rcx
  int v37; // [rsp+60h] [rbp-A0h]
  int v38; // [rsp+64h] [rbp-9Ch]
  BOOL v39; // [rsp+68h] [rbp-98h]
  int v40; // [rsp+6Ch] [rbp-94h]
  __int64 v41; // [rsp+70h] [rbp-90h]
  struct _SURFOBJ *v42; // [rsp+78h] [rbp-88h]
  PVOID *v43; // [rsp+80h] [rbp-80h]
  __int64 v45; // [rsp+98h] [rbp-68h] BYREF
  __int64 v46; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v47; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v48; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v49; // [rsp+B8h] [rbp-48h] BYREF
  char v50; // [rsp+C0h] [rbp-40h]
  int v51; // [rsp+C4h] [rbp-3Ch]
  __int64 v52; // [rsp+C8h] [rbp-38h]
  __int64 v53; // [rsp+D0h] [rbp-30h]
  __int64 v54; // [rsp+D8h] [rbp-28h]
  _BYTE v55[40]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v56; // [rsp+108h] [rbp+8h]
  char v57; // [rsp+110h] [rbp+10h]
  int v58; // [rsp+114h] [rbp+14h]
  SURFOBJ *psoSrc; // [rsp+138h] [rbp+38h]
  RECTL *prclSrc; // [rsp+140h] [rbp+40h]
  __int64 **v61[7]; // [rsp+150h] [rbp+50h] BYREF
  struct _DISPSURF *v62; // [rsp+188h] [rbp+88h]
  int v63[2]; // [rsp+190h] [rbp+90h]
  struct _CLIPOBJ *v64; // [rsp+198h] [rbp+98h]
  int v65[2]; // [rsp+1A0h] [rbp+A0h]
  _BYTE v66[40]; // [rsp+1B0h] [rbp+B0h] BYREF
  __int64 v67; // [rsp+1D8h] [rbp+D8h]
  char v68; // [rsp+1E0h] [rbp+E0h]
  int v69; // [rsp+1E4h] [rbp+E4h]
  SURFOBJ *psoDest; // [rsp+208h] [rbp+108h]
  RECTL *prclDest; // [rsp+210h] [rbp+110h]
  struct _RECTL v72; // [rsp+220h] [rbp+120h] BYREF

  v7 = 0;
  v9 = a6;
  v52 = *(_QWORD *)&pBlendObj[4].BlendFunction.BlendOp;
  v12 = *a6;
  v53 = *(_QWORD *)&pBlendObj[6].BlendFunction.BlendOp;
  v54 = *(_QWORD *)&pBlendObj[2].BlendFunction.BlendOp;
  hdev = a2->hdev;
  v42 = a2;
  v49 = 0LL;
  v50 = 0;
  v51 = 0;
  v72 = v12;
  if ( a2->iType != 1 || !hdev || ((_DWORD)hdev[10] & 0x20000) == 0 )
  {
LABEL_8:
    v39 = 1;
    v14 = IsMetaDevBitmapForMirroring(a1);
    Surface = MSURF::bFindSurface(v61, a1, a3, a5);
    v56 = 0LL;
    v16 = Surface;
    v57 = 0;
    v58 = 0;
    MULTISURF::vInit((MULTISURF *)v55, v42, v9);
    if ( v14 )
    {
      v67 = 0LL;
      v68 = 0;
      v69 = 0;
      MULTISURF::vInit((MULTISURF *)v66, a1, a5);
      v39 = EngAlphaBlend(psoDest, psoSrc, a3, a4, prclDest, prclSrc, pBlendObj);
      v17 = v39;
      MULTISURF::~MULTISURF((MULTISURF *)v66);
    }
    else
    {
      v17 = 1;
    }
    if ( !v16 )
    {
LABEL_53:
      v7 = v17;
      MULTISURF::~MULTISURF((MULTISURF *)v55);
      goto LABEL_54;
    }
    while ( 1 )
    {
      v48 = 0LL;
      v47 = 0LL;
      v46 = 0LL;
      v45 = 0LL;
      if ( !(unsigned int)MULTISURF::bLoadSource((MULTISURF *)v55, v62) )
        goto LABEL_51;
      v18 = psoSrc;
      v19 = a4;
      v20 = v62;
      v21 = *(_QWORD *)v63;
      p_pvScan0 = &psoSrc[-1].pvScan0;
      v43 = &psoSrc[-1].pvScan0;
      v23 = *(_QWORD *)v63 - 24LL;
      if ( !*((_DWORD *)v62 + 6) )
        goto LABEL_44;
      v24 = *((_QWORD *)v62 + 6);
      pulXlate = (HDEV)p_pvScan0[16];
      v26 = ppalDefault;
      if ( (*(_DWORD *)(v24 + 2140) & 0x100) != 0 )
      {
        v27 = DrvRealizeHalftonePalette((_QWORD *)v24, 0);
        v18 = psoSrc;
        v26 = v27;
        p_pvScan0 = v43;
      }
      v28 = v23;
      if ( !pulXlate )
      {
        if ( !a4 )
          goto LABEL_25;
        if ( a4[1].pulXlate )
        {
          pulXlate = (HDEV)a4[1].pulXlate;
LABEL_28:
          v29 = 0;
          if ( ((_DWORD)pulXlate[6] & 0x800) != 0 )
          {
            v29 = 0x4000;
            if ( v26 == ppalDefault )
              v29 = 0x2000;
          }
          goto LABEL_31;
        }
        if ( (a4->flXlate & 1) != 0 )
        {
LABEL_25:
          v28 = v23;
          if ( v18 == v42 )
            pulXlate = a1[1].hdev;
        }
        else
        {
          v26 = *(struct PALETTE **)&a4[2].iSrcType;
          if ( !v26 )
            goto LABEL_51;
          if ( *((_DWORD *)p_pvScan0 + 24) == a1->iBitmapFormat )
            pulXlate = a1[1].hdev;
          v28 = v23;
        }
      }
      v29 = 0;
      if ( pulXlate )
        goto LABEL_28;
LABEL_31:
      v23 = v28;
      if ( a4 )
      {
        flXlate = a4[1].flXlate;
        iUniq = a4[1].iUniq;
        v32 = *(_DWORD *)&a4[1].iSrcType;
        v38 = flXlate;
      }
      else
      {
        iUniq = 0;
        v38 = 0;
        v32 = 0;
        flXlate = 0;
      }
      *(_QWORD *)&v72.left = v28 + 128;
      v33 = *(_QWORD *)(v28 + 128);
      v40 = v32;
      v37 = iUniq;
      if ( a4 )
      {
        inited = EXLATEOBJ::bInitXlateObj(
                   &v48,
                   (__int64)a4[2].pulXlate,
                   a4[3].iUniq,
                   (__int64)pulXlate,
                   v33,
                   (__int64)ppalDefault,
                   (__int64)v26,
                   flXlate,
                   v32,
                   iUniq,
                   v29);
      }
      else
      {
        v40 = v32;
        v38 = flXlate;
        inited = EXLATEOBJ::bInitXlateObj(
                   &v48,
                   0LL,
                   0,
                   (__int64)pulXlate,
                   v33,
                   (__int64)ppalDefault,
                   (__int64)v26,
                   flXlate,
                   v32,
                   iUniq,
                   v29);
      }
      if ( inited )
      {
        v41 = v48;
        if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                             &v47,
                             0LL,
                             0,
                             **(_QWORD **)&v72.left,
                             (__int64)gppalRGB,
                             (__int64)v26,
                             (__int64)v26,
                             v38,
                             v40,
                             v37,
                             0) )
        {
          *(_QWORD *)&pBlendObj[4].BlendFunction.BlendOp = v47;
          if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                               &v46,
                               0LL,
                               0,
                               (__int64)gppalRGB,
                               **(_QWORD **)&v72.left,
                               (__int64)v26,
                               (__int64)v26,
                               v38,
                               v40,
                               v37,
                               0) )
          {
            v18 = psoSrc;
            *(_QWORD *)&pBlendObj[6].BlendFunction.BlendOp = v46;
            if ( v18 == v42 )
              goto LABEL_43;
            if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                                 &v45,
                                 0LL,
                                 0,
                                 (__int64)v43[16],
                                 (__int64)gppalRGB,
                                 (__int64)ppalDefault,
                                 (__int64)v26,
                                 v38,
                                 v40,
                                 v37,
                                 0) )
            {
              v18 = psoSrc;
              *(_QWORD *)&pBlendObj[2].BlendFunction.BlendOp = v45;
LABEL_43:
              p_pvScan0 = v43;
              v19 = (struct _XLATEOBJ *)v41;
              v20 = v62;
              v21 = *(_QWORD *)v63;
LABEL_44:
              if ( (*(_DWORD *)(v21 + 88) & 0x10000) != 0 )
                v35 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *))(*((_QWORD *)v20 + 7) + 3232LL);
              else
                v35 = EngAlphaBlend;
              if ( v18->iType == 1 && p_pvScan0[6] != *(PVOID *)(v23 + 48) )
                v35 = EngAlphaBlend;
              v17 = OffAlphaBlend(
                      (__int64 (__fastcall *)(__int64, __int64, struct _CLIPOBJ *, __int64, __int128 *, __int128 *, __int64))v35,
                      *(LONG **)v65,
                      v21,
                      (int *)&gptlZero,
                      (__int64)v18,
                      v64,
                      (__int64)v19,
                      (__int128 *)&a5->left,
                      (__int128 *)&prclSrc->left,
                      (__int64)pBlendObj) & v39;
              goto LABEL_52;
            }
          }
        }
      }
LABEL_51:
      v17 = 0;
LABEL_52:
      *(_QWORD *)&pBlendObj[4].BlendFunction.BlendOp = v52;
      *(_QWORD *)&pBlendObj[6].BlendFunction.BlendOp = v53;
      *(_QWORD *)&pBlendObj[2].BlendFunction.BlendOp = v54;
      v39 = v17;
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v45);
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v46);
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v47);
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v48);
      if ( !(unsigned int)MSURF::bNextSurface((MSURF *)v61) )
        goto LABEL_53;
    }
  }
  if ( (unsigned int)MulCopyDeviceToDIB(a2, (struct SURFMEM *)&v49, &v72) )
  {
    if ( !v49 )
    {
      v7 = 1;
      goto LABEL_54;
    }
    v9 = &v72;
    v42 = (struct _SURFOBJ *)(v49 + 24);
    goto LABEL_8;
  }
LABEL_54:
  SURFMEM::~SURFMEM((SURFMEM *)&v49);
  return v7;
}
