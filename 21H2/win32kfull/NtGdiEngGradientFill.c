/*
 * XREFs of NtGdiEngGradientFill @ 0x1C02B18D0
 * Callers:
 *     <none>
 * Callees:
 *     EngGradientFill @ 0x1C00093E0 (EngGradientFill.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C0009B28 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1C0123F3C (--1UMPDSURFOBJ@@QEAA@XZ.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C0128EA0 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ?CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z @ 0x1C0129004 (-CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z.c)
 *     ?CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z @ 0x1C0129030 (-CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z.c)
 *     ??$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z @ 0x1C012914C (--$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1C01291B4 (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     memmove @ 0x1C0160280 (memmove.c)
 *     ?bValidVertexMeshData@@YAHPEAU_TRIVERTEX@@PEAXKKK@Z @ 0x1C02B0A10 (-bValidVertexMeshData@@YAHPEAU_TRIVERTEX@@PEAXKKK@Z.c)
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
  unsigned int v11; // edi
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  UMPDOBJ *v14; // rsi
  __int64 result; // rax
  int v16; // ebx
  ULONG nMesh; // r12d
  __int64 v18; // rbx
  __int64 v19; // r13
  struct _TRIVERTEX *v20; // r15
  void *pMesh; // r14
  char *v22; // r10
  void *v23; // rdx
  CLIPOBJ *DDIOBJ; // rbx
  XLATEOBJ *v25; // rax
  unsigned int v26; // ebx
  SURFOBJ *psoDest; // [rsp+50h] [rbp-118h]
  POINTL *pptlDitherOrg; // [rsp+68h] [rbp-100h] BYREF
  RECTL *prclExtents; // [rsp+70h] [rbp-F8h] BYREF
  void *Src; // [rsp+78h] [rbp-F0h]
  struct _TRIVERTEX *v31; // [rsp+80h] [rbp-E8h]
  void *v32; // [rsp+88h] [rbp-E0h]
  struct _CLIPOBJ *v33; // [rsp+90h] [rbp-D8h]
  __int64 v34; // [rsp+98h] [rbp-D0h]
  __int64 v35; // [rsp+A0h] [rbp-C8h]
  struct _POINTL v36; // [rsp+A8h] [rbp-C0h] BYREF
  struct UMPDOBJ *v37; // [rsp+B0h] [rbp-B8h]
  struct _CLIPOBJ *v38; // [rsp+B8h] [rbp-B0h]
  __int64 v39; // [rsp+C0h] [rbp-A8h]
  _QWORD v40[8]; // [rsp+D0h] [rbp-98h] BYREF
  struct _RECTL v41; // [rsp+110h] [rbp-58h] BYREF

  v35 = a4;
  v34 = a3;
  v33 = a2;
  v38 = a2;
  v39 = a3;
  Src = a6;
  prclExtents = a8;
  pptlDitherOrg = a9;
  v41 = 0LL;
  v11 = 0;
  v36 = 0LL;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v14 = ThreadCurrentObj;
  v37 = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
    return 0LL;
  ++*((_DWORD *)ThreadCurrentObj + 105);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)v40, a1, (struct _SURFOBJ **)ThreadCurrentObj);
  psoDest = (SURFOBJ *)v40[0];
  if ( ulMode > 1 )
  {
    if ( ulMode == 2 )
    {
      v16 = 12;
      nMesh = a7;
      if ( a7 > 0x341555 )
        goto LABEL_40;
      goto LABEL_7;
    }
    goto LABEL_13;
  }
  v16 = 8;
  nMesh = a7;
  if ( a7 > 0x4E2000 )
  {
LABEL_13:
    UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)v40);
    --*((_DWORD *)v14 + 105);
    return 0LL;
  }
LABEL_7:
  if ( nMesh && nVertex )
  {
    v18 = nMesh * v16;
    if ( nVertex <= 0x271000 )
    {
      v19 = 16 * nVertex;
      if ( (_DWORD)v19 )
        v20 = (struct _TRIVERTEX *)Win32AllocPool((unsigned int)v19, 1886221639LL);
      else
        v20 = 0LL;
      v31 = v20;
      if ( (_DWORD)v18 )
        pMesh = (void *)Win32AllocPool((unsigned int)v18, 1886221639LL);
      else
        pMesh = 0LL;
      v32 = pMesh;
      if ( !psoDest || !v35 || !Src || !v20 || !pMesh || !prclExtents || !pptlDitherOrg )
        goto LABEL_33;
      CaptureRECTL(&prclExtents, &v41);
      CapturePOINTL(&pptlDitherOrg, &v36);
      if ( &v22[v19] < v22 || (unsigned __int64)&v22[v19] > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v20, v22, (unsigned int)v19);
      v23 = Src;
      if ( (char *)Src + v18 < Src || (unsigned __int64)Src + v18 > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(pMesh, v23, (unsigned int)v18);
      if ( (unsigned int)bValidVertexMeshData(v20, (char *)pMesh, nVertex, nMesh, ulMode) )
      {
        DDIOBJ = UMPDOBJ::GetDDIOBJ(v14, v33, &psoDest->sizlBitmap);
        v25 = (XLATEOBJ *)UMPDOBJ::GetDDIOBJ<_XLATEOBJ>((__int64)v14, v34);
        v26 = EngGradientFill(psoDest, DDIOBJ, v25, v20, nVertex, pMesh, nMesh, prclExtents, pptlDitherOrg, ulMode);
      }
      else
      {
LABEL_33:
        v26 = 0;
      }
      if ( v20 )
        Win32FreePool(v20);
      if ( pMesh )
        Win32FreePool(pMesh);
      UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)v40);
      result = v26;
      goto LABEL_41;
    }
  }
  else
  {
    v11 = 1;
  }
LABEL_40:
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)v40);
  result = v11;
LABEL_41:
  --*((_DWORD *)v14 + 105);
  return result;
}
