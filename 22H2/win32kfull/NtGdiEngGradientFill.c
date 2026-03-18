/*
 * XREFs of NtGdiEngGradientFill @ 0x1C02C9C50
 * Callers:
 *     <none>
 * Callees:
 *     EngGradientFill @ 0x1C0002BB0 (EngGradientFill.c)
 *     W32GetThreadWin32Thread @ 0x1C011E0CC (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C013E01C (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ??0ECLIPOBJTMPBOUNDED@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C013E108 (--0ECLIPOBJTMPBOUNDED@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ??1ECLIPOBJTMPBOUNDED@@QEAA@XZ @ 0x1C0140510 (--1ECLIPOBJTMPBOUNDED@@QEAA@XZ.c)
 *     ?bValid@ECLIPOBJTMPBOUNDED@@QEBA_NXZ @ 0x1C014052C (-bValid@ECLIPOBJTMPBOUNDED@@QEBA_NXZ.c)
 *     Feature_2193942840__private_IsEnabledDeviceUsage @ 0x1C01405A0 (Feature_2193942840__private_IsEnabledDeviceUsage.c)
 *     memmove @ 0x1C0141300 (memmove.c)
 *     ??$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z @ 0x1C02C6D88 (--$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C02C6DC8 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1C02C6F80 (--1UMPDSURFOBJ@@QEAA@XZ.c)
 *     ?CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z @ 0x1C02C7150 (-CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z.c)
 *     ?CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z @ 0x1C02C717C (-CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1C02C71FC (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ?bValidVertexMeshData@@YAHPEAU_TRIVERTEX@@PEAXKKK@Z @ 0x1C02C7EA0 (-bValidVertexMeshData@@YAHPEAU_TRIVERTEX@@PEAXKKK@Z.c)
 */

_BOOL8 __fastcall NtGdiEngGradientFill(
        struct _SURFOBJ *a1,
        struct _CLIPOBJ *a2,
        __int64 a3,
        __int64 a4,
        unsigned int nVertex,
        void *a6,
        ULONG a7,
        RECTL *a8,
        POINTL *a9,
        ULONG ulMode)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  UMPDOBJ *ThreadCurrentObj; // rax
  _DWORD *v13; // rdi
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // esi
  unsigned int nMesh; // r12d
  bool v18; // cc
  __int64 v20; // rsi
  __int64 v21; // r13
  TRIVERTEX *v22; // r15
  void *pMesh; // r14
  char *v24; // r10
  void *v25; // rdx
  SURFOBJ *v26; // r13
  BOOL v27; // esi
  struct _CLIPOBJ *DDIOBJ; // rsi
  XLATEOBJ *v29; // rax
  XLATEOBJ *v30; // rax
  POINTL *pptlDitherOrg; // [rsp+60h] [rbp-1C8h] BYREF
  RECTL *prclExtents; // [rsp+68h] [rbp-1C0h] BYREF
  __int64 v33; // [rsp+70h] [rbp-1B8h]
  UMPDOBJ *v34; // [rsp+78h] [rbp-1B0h]
  void *Src; // [rsp+80h] [rbp-1A8h]
  SURFOBJ *psoDest; // [rsp+88h] [rbp-1A0h]
  TRIVERTEX *v37; // [rsp+90h] [rbp-198h]
  void *v38; // [rsp+98h] [rbp-190h]
  struct _CLIPOBJ *v39; // [rsp+A0h] [rbp-188h]
  __int64 v40; // [rsp+A8h] [rbp-180h]
  struct _POINTL v41; // [rsp+B0h] [rbp-178h] BYREF
  __int64 v42; // [rsp+B8h] [rbp-170h]
  struct _CLIPOBJ *v43; // [rsp+C0h] [rbp-168h]
  __int64 v44; // [rsp+C8h] [rbp-160h]
  char *v45; // [rsp+D0h] [rbp-158h]
  _QWORD v46[8]; // [rsp+E0h] [rbp-148h] BYREF
  struct _RECTL v47; // [rsp+120h] [rbp-108h] BYREF
  _BYTE v48[160]; // [rsp+130h] [rbp-F8h] BYREF
  CLIPOBJ *pco; // [rsp+1D0h] [rbp-58h]

  v40 = a4;
  v33 = a3;
  v39 = a2;
  v43 = a2;
  v44 = a3;
  Src = a6;
  prclExtents = a8;
  pptlDitherOrg = a9;
  v47 = 0LL;
  v41 = 0LL;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v34 = ThreadCurrentObj;
  v13 = (_DWORD *)((char *)ThreadCurrentObj + 436);
  if ( ThreadCurrentObj )
    ++*v13;
  v45 = (char *)ThreadCurrentObj + 436;
  if ( !ThreadCurrentObj )
    return 0LL;
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)v46, a1, (struct _SURFOBJ **)ThreadCurrentObj);
  psoDest = (SURFOBJ *)v46[0];
  v42 = v46[0];
  if ( ulMode < 2 )
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
      --*v13;
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
    v20 = nMesh * v16;
    if ( nVertex > 0x271000 )
      goto LABEL_9;
    v21 = 16 * nVertex;
    if ( (_DWORD)v21 )
      v22 = (TRIVERTEX *)Win32AllocPool((unsigned int)v21, 1886221639LL, v14, v15);
    else
      v22 = 0LL;
    v37 = v22;
    if ( (_DWORD)v20 )
      pMesh = (void *)Win32AllocPool((unsigned int)v20, 1886221639LL, v14, v15);
    else
      pMesh = 0LL;
    v38 = pMesh;
    if ( psoDest && v40 && Src && v22 && pMesh && prclExtents && pptlDitherOrg )
    {
      CaptureRECTL(&prclExtents, &v47);
      CapturePOINTL(&pptlDitherOrg, &v41);
      if ( &v24[v21] < v24 || (unsigned __int64)&v24[v21] > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v22, v24, (unsigned int)v21);
      v25 = Src;
      if ( (char *)Src + v20 < Src || (unsigned __int64)Src + v20 > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(pMesh, v25, (unsigned int)v20);
      v26 = psoDest;
      v27 = bValidVertexMeshData(v22, (char *)pMesh, nVertex, nMesh, ulMode) != 0;
      if ( v27 )
      {
        DDIOBJ = UMPDOBJ::GetDDIOBJ(v34, v39, &v26->sizlBitmap);
        if ( (unsigned int)Feature_2193942840__private_IsEnabledDeviceUsage() )
        {
          ECLIPOBJTMPBOUNDED::ECLIPOBJTMPBOUNDED((ECLIPOBJTMPBOUNDED *)v48, v26, DDIOBJ, 0LL);
          v27 = 0;
          if ( ECLIPOBJTMPBOUNDED::bValid((ECLIPOBJTMPBOUNDED *)v48) )
          {
            v29 = (XLATEOBJ *)UMPDOBJ::GetDDIOBJ<_XLATEOBJ>((__int64)v34, v33);
            if ( EngGradientFill(v26, pco, v29, v22, nVertex, pMesh, nMesh, prclExtents, pptlDitherOrg, ulMode) )
              v27 = 1;
          }
          ECLIPOBJTMPBOUNDED::~ECLIPOBJTMPBOUNDED((ECLIPOBJTMPBOUNDED *)v48);
        }
        else
        {
          v30 = (XLATEOBJ *)UMPDOBJ::GetDDIOBJ<_XLATEOBJ>((__int64)v34, v33);
          v27 = EngGradientFill(v26, DDIOBJ, v30, v22, nVertex, pMesh, nMesh, prclExtents, pptlDitherOrg, ulMode);
        }
      }
    }
    else
    {
      v27 = 0;
    }
    if ( v22 )
      Win32FreePool(v22);
    if ( pMesh )
      Win32FreePool(pMesh);
    UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)v46);
    --*v13;
    return v27;
  }
  else
  {
    UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)v46);
    --*v13;
    return 1LL;
  }
}
