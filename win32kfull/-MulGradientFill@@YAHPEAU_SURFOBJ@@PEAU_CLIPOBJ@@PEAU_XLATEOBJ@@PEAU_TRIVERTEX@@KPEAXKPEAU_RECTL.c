__int64 __fastcall MulGradientFill(
        struct _SURFOBJ *a1,
        struct _CLIPOBJ *a2,
        XLATEOBJ *pxlo,
        TRIVERTEX *pVertex,
        ULONG nVertex,
        void *a6,
        ULONG nMesh,
        struct _RECTL *a8,
        struct _POINTL *a9,
        ULONG ulMode)
{
  TRIVERTEX *v10; // r12
  unsigned int v14; // r14d
  struct Gre::Base::SESSION_GLOBALS *v15; // r13
  int i; // eax
  __int64 v17; // rdi
  __int64 v18; // rcx
  XLATEOBJ *v19; // rsi
  Gre::Base *v20; // rcx
  struct PALETTE *v21; // r11
  __int64 v22; // r12
  FLONG flXlate; // r9d
  int v24; // ecx
  ULONG iUniq; // edx
  ULONG *pulXlate; // r10
  ULONG v27; // r8d
  int inited; // eax
  BOOL (__stdcall *v29)(SURFOBJ *, CLIPOBJ *, XLATEOBJ *, TRIVERTEX *, ULONG, PVOID, ULONG, RECTL *, POINTL *, ULONG); // rcx
  XLATEOBJ *v31; // [rsp+60h] [rbp-A0h] BYREF
  POINTL *pptlDitherOrg; // [rsp+68h] [rbp-98h]
  PVOID pMesh; // [rsp+70h] [rbp-90h]
  TRIVERTEX *v34; // [rsp+78h] [rbp-88h]
  _BYTE v35[56]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v36; // [rsp+B8h] [rbp-48h]
  __int64 v37; // [rsp+C0h] [rbp-40h]
  __int64 v38; // [rsp+C8h] [rbp-38h]
  __int64 v39; // [rsp+D0h] [rbp-30h]
  _BYTE v40[40]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v41; // [rsp+108h] [rbp+8h]
  char v42; // [rsp+110h] [rbp+10h]
  int v43; // [rsp+114h] [rbp+14h]
  SURFOBJ *psoDest; // [rsp+138h] [rbp+38h]
  RECTL *prclExtents; // [rsp+140h] [rbp+40h]

  v10 = pVertex;
  pMesh = a6;
  pptlDitherOrg = a9;
  v34 = pVertex;
  v14 = 1;
  v15 = Gre::Base::Globals((Gre::Base *)a1);
  if ( IsMetaDevBitmapForMirroring(a1) )
  {
    v41 = 0LL;
    v42 = 0;
    v43 = 0;
    MULTISURF::vInit((MULTISURF *)v40, a1, a8);
    v14 = EngGradientFill(psoDest, a2, pxlo, v10, nVertex, pMesh, nMesh, prclExtents, pptlDitherOrg, ulMode);
    MULTISURF::~MULTISURF((MULTISURF *)v40);
  }
  for ( i = MSURF::bFindSurface((MSURF *)v35, a1, a2, a8); i; i = MSURF::bNextSurface((MSURF *)v35) )
  {
    v17 = v37;
    v31 = 0LL;
    v18 = v36;
    if ( *(_DWORD *)(v37 + 72) <= 3u )
    {
      v19 = pxlo;
      if ( *(_DWORD *)(v36 + 24) )
      {
        v20 = *(Gre::Base **)(v36 + 48);
        v21 = (struct PALETTE *)*((_QWORD *)v15 + 750);
        v22 = *((_QWORD *)v15 + 751);
        if ( (*((_DWORD *)v20 + 535) & 0x100) != 0 )
          v21 = DrvRealizeHalftonePalette(v20, 0);
        if ( pxlo )
        {
          flXlate = pxlo[1].flXlate;
          v24 = *(_DWORD *)&pxlo[1].iSrcType;
          iUniq = pxlo[1].iUniq;
        }
        else
        {
          flXlate = 0;
          v24 = 0;
          iUniq = 0;
        }
        if ( pxlo )
        {
          pulXlate = pxlo[2].pulXlate;
          v27 = pxlo[3].iUniq;
        }
        else
        {
          pulXlate = 0LL;
          v27 = 0;
        }
        inited = EXLATEOBJ::bInitXlateObj(
                   (Gre::Base *)&v31,
                   (__int64)pulXlate,
                   v27,
                   v22,
                   *(_QWORD *)(v17 + 104),
                   (__int64)v21,
                   (__int64)v21,
                   flXlate,
                   v24,
                   iUniq,
                   0);
        v17 = v37;
        v18 = v36;
        if ( inited )
          v19 = v31;
        v10 = v34;
      }
    }
    else
    {
      v19 = 0LL;
    }
    if ( (*(_DWORD *)(v17 + 88) & 0x20000) != 0 )
      v29 = *(BOOL (__stdcall **)(SURFOBJ *, CLIPOBJ *, XLATEOBJ *, TRIVERTEX *, ULONG, PVOID, ULONG, RECTL *, POINTL *, ULONG))(*(_QWORD *)(v18 + 56) + 3208LL);
    else
      v29 = EngGradientFill;
    v14 &= OffGradientFill(v29, v39, v17, v38, v19, v10, nVertex, pMesh, nMesh, a8, pptlDitherOrg, ulMode);
    EXLATEOBJ::vAltUnlock((Gre::Base **)&v31);
  }
  return v14;
}
