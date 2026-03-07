__int64 __fastcall NtGdiEngGradientFill(
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
  unsigned int v11; // r15d
  struct _W32THREAD *ThreadWin32Thread; // rax
  UMPDOBJ *ThreadCurrentObj; // rax
  _DWORD *v14; // rdi
  __int64 v15; // r8
  __int64 v16; // r9
  int v17; // r13d
  unsigned int nMesh; // r12d
  bool v19; // cc
  __int64 v21; // r13
  TRIVERTEX *v22; // r14
  void *pMesh; // rsi
  const void *v24; // r10
  ULONG64 v25; // rcx
  void *v26; // rdx
  XLATEOBJ *v27; // rax
  CLIPOBJ *v28; // r10
  unsigned int Size; // [rsp+54h] [rbp-124h]
  SURFOBJ *psoDest; // [rsp+68h] [rbp-110h]
  POINTL *pptlDitherOrg; // [rsp+70h] [rbp-108h] BYREF
  RECTL *prclExtents; // [rsp+78h] [rbp-100h] BYREF
  void *Src; // [rsp+80h] [rbp-F8h]
  TRIVERTEX *v34; // [rsp+88h] [rbp-F0h]
  void *v35; // [rsp+90h] [rbp-E8h]
  struct _CLIPOBJ *v36; // [rsp+98h] [rbp-E0h]
  __int64 v37; // [rsp+A0h] [rbp-D8h]
  UMPDOBJ *v38; // [rsp+A8h] [rbp-D0h]
  __int64 v39; // [rsp+B0h] [rbp-C8h]
  struct _POINTL v40; // [rsp+B8h] [rbp-C0h] BYREF
  struct _CLIPOBJ *v41; // [rsp+C0h] [rbp-B8h]
  __int64 v42; // [rsp+C8h] [rbp-B0h]
  char *v43; // [rsp+D0h] [rbp-A8h]
  _QWORD v44[8]; // [rsp+E0h] [rbp-98h] BYREF
  struct _RECTL v45; // [rsp+120h] [rbp-58h] BYREF

  v39 = a4;
  v37 = a3;
  v36 = a2;
  v41 = a2;
  v42 = a3;
  Src = a6;
  prclExtents = a8;
  pptlDitherOrg = a9;
  v11 = 1;
  v45 = 0LL;
  v40 = 0LL;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v38 = ThreadCurrentObj;
  v14 = (_DWORD *)((char *)ThreadCurrentObj + 420);
  if ( ThreadCurrentObj )
    ++*v14;
  v43 = (char *)ThreadCurrentObj + 420;
  if ( !ThreadCurrentObj )
    return 0LL;
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)v44, a1, (struct _SURFOBJ **)ThreadCurrentObj);
  psoDest = (SURFOBJ *)v44[0];
  if ( ulMode < 2 )
  {
    v17 = 8;
    nMesh = a7;
    v19 = a7 <= 0x4E2000;
  }
  else
  {
    if ( ulMode != 2 )
    {
LABEL_9:
      UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)v44);
      --*v14;
      return 0LL;
    }
    v17 = 12;
    nMesh = a7;
    v19 = a7 <= 0x341555;
  }
  if ( !v19 )
    goto LABEL_9;
  if ( nMesh && nVertex )
  {
    v21 = nMesh * v17;
    if ( nVertex > 0x271000 )
      goto LABEL_9;
    Size = 16 * nVertex;
    if ( 16 * nVertex )
      v22 = (TRIVERTEX *)Win32AllocPool(16 * nVertex, 1886221639LL, v15, v16);
    else
      v22 = 0LL;
    v34 = v22;
    if ( (_DWORD)v21 )
      pMesh = (void *)Win32AllocPool((unsigned int)v21, 1886221639LL, v15, v16);
    else
      pMesh = 0LL;
    v35 = pMesh;
    if ( psoDest && v39 && Src && v22 && pMesh && prclExtents && pptlDitherOrg )
    {
      CaptureRECTL(&prclExtents, &v45);
      CapturePOINTL(&pptlDitherOrg, &v40);
      v25 = (ULONG64)v24 + Size;
      if ( v25 < (unsigned __int64)v24 || v25 > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v22, v24, Size);
      v26 = Src;
      if ( (char *)Src + v21 < Src || (unsigned __int64)Src + v21 > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(pMesh, v26, (unsigned int)v21);
      if ( !(unsigned int)bValidVertexMeshData(v22, (char *)pMesh, nVertex, nMesh, ulMode) )
        v11 = 0;
      if ( v11 )
      {
        UMPDOBJ::GetDDIOBJ(v38, v36, &psoDest->sizlBitmap);
        v27 = (XLATEOBJ *)UMPDOBJ::GetDDIOBJ<_XLATEOBJ>((__int64)v38, v37);
        v11 = EngGradientFill(psoDest, v28, v27, v22, nVertex, pMesh, nMesh, prclExtents, pptlDitherOrg, ulMode);
      }
    }
    else
    {
      v11 = 0;
    }
    if ( v22 )
      Win32FreePool(v22);
    if ( pMesh )
      Win32FreePool(pMesh);
  }
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)v44);
  --*v14;
  return v11;
}
