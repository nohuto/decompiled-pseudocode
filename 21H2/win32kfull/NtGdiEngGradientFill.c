/*
 * XREFs of NtGdiEngGradientFill @ 0x1C02B3070
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 *     PALLOCMEM2 @ 0x1C009FE48 (PALLOCMEM2.c)
 *     EngGradientFill @ 0x1C00CF320 (EngGradientFill.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00CFBDC (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1C0137DCC (--1UMPDSURFOBJ@@QEAA@XZ.c)
 *     ?CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z @ 0x1C013C558 (-CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C013D890 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ??$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z @ 0x1C013DA6C (--$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1C013DAD4 (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ?CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z @ 0x1C013DBDC (-CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     Feature_1508323640__private_IsEnabledDeviceUsage @ 0x1C016A12C (Feature_1508323640__private_IsEnabledDeviceUsage.c)
 *     ??0ECLIPOBJTMPBOUNDED@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C016A1E8 (--0ECLIPOBJTMPBOUNDED@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ??1ECLIPOBJTMPBOUNDED@@QEAA@XZ @ 0x1C016D78C (--1ECLIPOBJTMPBOUNDED@@QEAA@XZ.c)
 *     ?bIncrementEngCallRecursionCount@UMPDOBJ@@AEAAEXZ @ 0x1C016D8BC (-bIncrementEngCallRecursionCount@UMPDOBJ@@AEAAEXZ.c)
 *     ?bValid@ECLIPOBJTMPBOUNDED@@QEBA_NXZ @ 0x1C016D8EC (-bValid@ECLIPOBJTMPBOUNDED@@QEBA_NXZ.c)
 *     Feature_2932140344__private_IsEnabledDeviceUsage @ 0x1C016D960 (Feature_2932140344__private_IsEnabledDeviceUsage.c)
 *     memmove @ 0x1C016E4C0 (memmove.c)
 *     ?bValidVertexMeshData@@YAHPEAU_TRIVERTEX@@PEAXKKK@Z @ 0x1C02B1F10 (-bValidVertexMeshData@@YAHPEAU_TRIVERTEX@@PEAXKKK@Z.c)
 *     ?vDecrementEngCallRecursionCount@UMPDOBJ@@AEAAXXZ @ 0x1C02B2070 (-vDecrementEngCallRecursionCount@UMPDOBJ@@AEAAXXZ.c)
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
  struct UMPDOBJ *ThreadCurrentObj; // rsi
  int v14; // ebx
  ULONG nMesh; // r15d
  __int64 v17; // rbx
  struct _TRIVERTEX *v18; // r13
  void *v19; // rax
  void *pMesh; // r12
  const void *v21; // r10
  size_t v22; // r8
  ULONG64 v23; // rcx
  void *v24; // rdx
  CLIPOBJ *v25; // rbx
  XLATEOBJ *v26; // rax
  XLATEOBJ *v27; // rax
  struct _CLIPOBJ *DDIOBJ; // [rsp+58h] [rbp-1D0h]
  SURFOBJ *psoDest; // [rsp+60h] [rbp-1C8h]
  POINTL *pptlDitherOrg; // [rsp+68h] [rbp-1C0h] BYREF
  RECTL *prclExtents; // [rsp+70h] [rbp-1B8h] BYREF
  unsigned int Size; // [rsp+78h] [rbp-1B0h]
  int Size_4; // [rsp+7Ch] [rbp-1ACh]
  __int64 v35; // [rsp+80h] [rbp-1A8h]
  void *Src; // [rsp+88h] [rbp-1A0h]
  __int64 v37; // [rsp+90h] [rbp-198h]
  struct _POINTL v38; // [rsp+98h] [rbp-190h] BYREF
  struct _TRIVERTEX *v39; // [rsp+A0h] [rbp-188h]
  void *v40; // [rsp+A8h] [rbp-180h]
  struct UMPDOBJ *v41; // [rsp+B0h] [rbp-178h]
  struct _CLIPOBJ *v42; // [rsp+B8h] [rbp-170h]
  __int64 v43; // [rsp+C0h] [rbp-168h]
  _QWORD v44[8]; // [rsp+D0h] [rbp-158h] BYREF
  struct _RECTL v45; // [rsp+110h] [rbp-118h] BYREF
  _BYTE v46[168]; // [rsp+120h] [rbp-108h] BYREF
  CLIPOBJ *pco; // [rsp+1C8h] [rbp-60h]

  v37 = a4;
  v35 = a3;
  v42 = a2;
  v43 = a3;
  Src = a6;
  prclExtents = a8;
  pptlDitherOrg = a9;
  v11 = 1;
  Size_4 = 1;
  v45 = 0LL;
  v38 = 0LL;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v41 = ThreadCurrentObj;
  if ( ThreadCurrentObj )
  {
    if ( (unsigned int)Feature_1508323640__private_IsEnabledDeviceUsage() )
    {
      if ( !UMPDOBJ::bIncrementEngCallRecursionCount(ThreadCurrentObj) )
        return 0LL;
    }
    else
    {
      ++*((_DWORD *)ThreadCurrentObj + 105);
    }
  }
  if ( !ThreadCurrentObj )
    return 0LL;
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)v44, a1, (struct _SURFOBJ **)ThreadCurrentObj);
  psoDest = (SURFOBJ *)v44[0];
  if ( ulMode <= 1 )
  {
    v14 = 8;
    nMesh = a7;
    if ( a7 > 0x4E2000 )
      goto LABEL_10;
  }
  else
  {
    if ( ulMode != 2 )
      goto LABEL_10;
    v14 = 12;
    nMesh = a7;
    if ( a7 > 0x341555 )
      goto LABEL_10;
  }
  if ( nMesh && nVertex )
  {
    v17 = nMesh * v14;
    if ( nVertex <= 0x271000 )
    {
      Size = 16 * nVertex;
      v18 = (struct _TRIVERTEX *)PALLOCMEM2(16 * nVertex, 1886221639LL, 0);
      v39 = v18;
      v19 = PALLOCMEM2((unsigned int)v17, 1886221639LL, 0);
      pMesh = v19;
      v40 = v19;
      if ( !psoDest || !v37 || !Src || !v18 || !v19 || !prclExtents || !pptlDitherOrg )
        goto LABEL_37;
      CaptureRECTL(&prclExtents, &v45);
      CapturePOINTL(&pptlDitherOrg, &v38);
      v22 = Size;
      v23 = (ULONG64)v21 + Size;
      if ( v23 < (unsigned __int64)v21 || v23 > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v18, v21, v22);
      v24 = Src;
      if ( (char *)Src + v17 < Src || (unsigned __int64)Src + v17 > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(pMesh, v24, (unsigned int)v17);
      if ( Size_4 && (unsigned int)bValidVertexMeshData(v18, (char *)pMesh, nVertex, nMesh, ulMode) )
      {
        DDIOBJ = UMPDOBJ::GetDDIOBJ(ThreadCurrentObj, a2, &psoDest->sizlBitmap);
        if ( (unsigned int)Feature_2932140344__private_IsEnabledDeviceUsage() )
        {
          ECLIPOBJTMPBOUNDED::ECLIPOBJTMPBOUNDED((ECLIPOBJTMPBOUNDED *)v46, psoDest, DDIOBJ, 0LL);
          if ( !ECLIPOBJTMPBOUNDED::bValid((ECLIPOBJTMPBOUNDED *)v46)
            || (v25 = pco,
                v26 = (XLATEOBJ *)UMPDOBJ::GetDDIOBJ<_XLATEOBJ>((__int64)ThreadCurrentObj, v35),
                !EngGradientFill(psoDest, v25, v26, v18, nVertex, pMesh, nMesh, prclExtents, pptlDitherOrg, ulMode)) )
          {
            v11 = 0;
          }
          ECLIPOBJTMPBOUNDED::~ECLIPOBJTMPBOUNDED((ECLIPOBJTMPBOUNDED *)v46);
        }
        else
        {
          v27 = (XLATEOBJ *)UMPDOBJ::GetDDIOBJ<_XLATEOBJ>((__int64)ThreadCurrentObj, v35);
          v11 = EngGradientFill(psoDest, DDIOBJ, v27, v18, nVertex, pMesh, nMesh, prclExtents, pptlDitherOrg, ulMode);
        }
      }
      else
      {
LABEL_37:
        v11 = 0;
      }
      if ( v18 )
        Win32FreePool(v18);
      if ( pMesh )
        Win32FreePool(pMesh);
      goto LABEL_42;
    }
LABEL_10:
    UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)v44);
    UMPDOBJ::vDecrementEngCallRecursionCount(ThreadCurrentObj);
    return 0LL;
  }
LABEL_42:
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)v44);
  UMPDOBJ::vDecrementEngCallRecursionCount(ThreadCurrentObj);
  return v11;
}
