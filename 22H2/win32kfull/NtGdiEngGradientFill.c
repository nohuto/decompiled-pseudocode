/*
 * XREFs of NtGdiEngGradientFill @ 0x1C02B27D0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     PALLOCMEM2 @ 0x1C009FDB8 (PALLOCMEM2.c)
 *     EngGradientFill @ 0x1C00CEFD0 (EngGradientFill.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00CF88C (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1C0137A1C (--1UMPDSURFOBJ@@QEAA@XZ.c)
 *     ?CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z @ 0x1C013C0AC (-CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C013D3AC (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ??$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z @ 0x1C013D588 (--$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1C013D5F0 (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ?CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z @ 0x1C013D6F8 (-CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     ??0ECLIPOBJTMPBOUNDED@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C0169988 (--0ECLIPOBJTMPBOUNDED@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ??1ECLIPOBJTMPBOUNDED@@QEAA@XZ @ 0x1C016CE7C (--1ECLIPOBJTMPBOUNDED@@QEAA@XZ.c)
 *     ?bValid@ECLIPOBJTMPBOUNDED@@QEBA_NXZ @ 0x1C016CFAC (-bValid@ECLIPOBJTMPBOUNDED@@QEBA_NXZ.c)
 *     Feature_2932140344__private_IsEnabledDeviceUsage @ 0x1C016D020 (Feature_2932140344__private_IsEnabledDeviceUsage.c)
 *     memmove @ 0x1C016DB40 (memmove.c)
 *     ?bValidVertexMeshData@@YAHPEAU_TRIVERTEX@@PEAXKKK@Z @ 0x1C02B1810 (-bValidVertexMeshData@@YAHPEAU_TRIVERTEX@@PEAXKKK@Z.c)
 */

__int64 __fastcall NtGdiEngGradientFill(
        struct _SURFOBJ *a1,
        struct _CLIPOBJ *a2,
        __int64 a3,
        __int64 a4,
        ULONG nVertex,
        void *a6,
        ULONG a7,
        RECTL *a8,
        POINTL *a9,
        ULONG ulMode)
{
  unsigned int v11; // r14d
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  UMPDOBJ *v14; // rdi
  __int64 result; // rax
  int v16; // ebx
  ULONG nMesh; // r15d
  bool v18; // cc
  __int64 v19; // rbx
  struct _TRIVERTEX *v20; // r13
  void *v21; // rax
  void *pMesh; // r12
  const void *v23; // r10
  size_t v24; // r8
  ULONG64 v25; // rcx
  void *v26; // rdx
  CLIPOBJ *v27; // rbx
  XLATEOBJ *v28; // rax
  XLATEOBJ *v29; // rax
  struct _CLIPOBJ *DDIOBJ; // [rsp+58h] [rbp-1D0h]
  SURFOBJ *psoDest; // [rsp+60h] [rbp-1C8h]
  POINTL *pptlDitherOrg; // [rsp+68h] [rbp-1C0h] BYREF
  RECTL *prclExtents; // [rsp+70h] [rbp-1B8h] BYREF
  unsigned int Size; // [rsp+78h] [rbp-1B0h]
  int Size_4; // [rsp+7Ch] [rbp-1ACh]
  __int64 v37; // [rsp+80h] [rbp-1A8h]
  void *Src; // [rsp+88h] [rbp-1A0h]
  __int64 v39; // [rsp+90h] [rbp-198h]
  struct _POINTL v40; // [rsp+98h] [rbp-190h] BYREF
  struct _TRIVERTEX *v41; // [rsp+A0h] [rbp-188h]
  void *v42; // [rsp+A8h] [rbp-180h]
  struct UMPDOBJ *v43; // [rsp+B0h] [rbp-178h]
  struct _CLIPOBJ *v44; // [rsp+B8h] [rbp-170h]
  __int64 v45; // [rsp+C0h] [rbp-168h]
  _QWORD v46[8]; // [rsp+D0h] [rbp-158h] BYREF
  struct _RECTL v47; // [rsp+110h] [rbp-118h] BYREF
  _BYTE v48[168]; // [rsp+120h] [rbp-108h] BYREF
  CLIPOBJ *pco; // [rsp+1C8h] [rbp-60h]

  v39 = a4;
  v37 = a3;
  v44 = a2;
  v45 = a3;
  Src = a6;
  prclExtents = a8;
  pptlDitherOrg = a9;
  v11 = 1;
  Size_4 = 1;
  v47 = 0LL;
  v40 = 0LL;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v14 = ThreadCurrentObj;
  v43 = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
    return 0LL;
  ++*((_DWORD *)ThreadCurrentObj + 105);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)v46, a1, (struct _SURFOBJ **)ThreadCurrentObj);
  psoDest = (SURFOBJ *)v46[0];
  if ( ulMode <= 1 )
  {
    v16 = 8;
    nMesh = a7;
    v18 = a7 <= 0x4E2000;
  }
  else
  {
    if ( ulMode != 2 )
    {
LABEL_9:
      UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)v46);
      --*((_DWORD *)v14 + 105);
      return 0LL;
    }
    v16 = 12;
    nMesh = a7;
    v18 = a7 <= 0x341555;
  }
  if ( !v18 )
    goto LABEL_9;
  if ( nMesh && nVertex )
  {
    v19 = nMesh * v16;
    if ( nVertex > 0x271000 )
      goto LABEL_9;
    Size = 16 * nVertex;
    v20 = (struct _TRIVERTEX *)PALLOCMEM2(16 * nVertex, 1886221639LL, 0);
    v41 = v20;
    v21 = PALLOCMEM2((unsigned int)v19, 1886221639LL, 0);
    pMesh = v21;
    v42 = v21;
    if ( !psoDest || !v39 || !Src || !v20 || !v21 || !prclExtents || !pptlDitherOrg )
      goto LABEL_34;
    CaptureRECTL(&prclExtents, &v47);
    CapturePOINTL(&pptlDitherOrg, &v40);
    v24 = Size;
    v25 = (ULONG64)v23 + Size;
    if ( v25 < (unsigned __int64)v23 || v25 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v20, v23, v24);
    v26 = Src;
    if ( (char *)Src + v19 < Src || (unsigned __int64)Src + v19 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(pMesh, v26, (unsigned int)v19);
    if ( Size_4 && (unsigned int)bValidVertexMeshData(v20, (char *)pMesh, nVertex, nMesh, ulMode) )
    {
      DDIOBJ = UMPDOBJ::GetDDIOBJ(v14, a2, &psoDest->sizlBitmap);
      if ( (unsigned int)Feature_2932140344__private_IsEnabledDeviceUsage() )
      {
        ECLIPOBJTMPBOUNDED::ECLIPOBJTMPBOUNDED((ECLIPOBJTMPBOUNDED *)v48, psoDest, DDIOBJ, 0LL);
        if ( !ECLIPOBJTMPBOUNDED::bValid((ECLIPOBJTMPBOUNDED *)v48)
          || (v27 = pco,
              v28 = (XLATEOBJ *)UMPDOBJ::GetDDIOBJ<_XLATEOBJ>((__int64)v14, v37),
              !EngGradientFill(psoDest, v27, v28, v20, nVertex, pMesh, nMesh, prclExtents, pptlDitherOrg, ulMode)) )
        {
          v11 = 0;
        }
        ECLIPOBJTMPBOUNDED::~ECLIPOBJTMPBOUNDED((ECLIPOBJTMPBOUNDED *)v48);
      }
      else
      {
        v29 = (XLATEOBJ *)UMPDOBJ::GetDDIOBJ<_XLATEOBJ>((__int64)v14, v37);
        v11 = EngGradientFill(psoDest, DDIOBJ, v29, v20, nVertex, pMesh, nMesh, prclExtents, pptlDitherOrg, ulMode);
      }
    }
    else
    {
LABEL_34:
      v11 = 0;
    }
    if ( v20 )
      Win32FreePool(v20);
    if ( pMesh )
      Win32FreePool(pMesh);
  }
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)v46);
  result = v11;
  --*((_DWORD *)v14 + 105);
  return result;
}
