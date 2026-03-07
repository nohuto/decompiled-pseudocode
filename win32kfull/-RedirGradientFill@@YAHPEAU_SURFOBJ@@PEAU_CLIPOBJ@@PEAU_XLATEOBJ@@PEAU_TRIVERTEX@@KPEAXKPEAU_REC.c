__int64 __fastcall RedirGradientFill(
        struct _SURFOBJ *a1,
        CLIPOBJ *pco,
        XLATEOBJ *pxlo,
        TRIVERTEX *pVertex,
        ULONG nVertex,
        PVOID pMesh,
        ULONG nMesh,
        RECTL *prclExtents,
        POINTL *a9,
        ULONG a10)
{
  __int64 v14; // rcx
  ULONG ulMode; // r12d
  POINTL *pptlDitherOrg; // r13
  __int64 HDEV; // rax
  Gre::Base *v18; // rcx
  __int64 v19; // rbx
  int v20; // eax
  _QWORD *i; // rbx
  __int64 v22; // r9
  __int64 v23; // r9
  unsigned int v24; // ebx
  __int64 v26; // [rsp+68h] [rbp-59h] BYREF
  struct SURFACE *v27; // [rsp+70h] [rbp-51h] BYREF
  __int128 v28; // [rsp+78h] [rbp-49h] BYREF
  __int64 v29; // [rsp+88h] [rbp-39h]
  int v30; // [rsp+90h] [rbp-31h]
  __int64 v31; // [rsp+98h] [rbp-29h] BYREF
  int v32; // [rsp+A0h] [rbp-21h]
  int v33; // [rsp+A4h] [rbp-1Dh]
  __int16 v34; // [rsp+A8h] [rbp-19h]
  __int64 v35; // [rsp+B0h] [rbp-11h]
  __int64 v36; // [rsp+B8h] [rbp-9h]
  __int64 v37; // [rsp+F8h] [rbp+37h] BYREF

  REDIROPEN::REDIROPEN((REDIROPEN *)&v27, a1);
  ulMode = a10;
  pptlDitherOrg = a9;
  if ( a1 )
  {
    if ( ((__int64)a1[1].hsurf & 0x800) != 0 )
    {
      HDEV = UserGetHDEV(v14);
      v19 = HDEV;
      if ( HDEV )
      {
        v32 = 0;
        v33 = 0;
        v36 = 0LL;
        v35 = 0LL;
        v31 = 0LL;
        v20 = *(_DWORD *)(HDEV + 40);
        v34 = 256;
        v28 = 0LL;
        v30 = 1;
        if ( (v20 & 1) != 0 )
        {
          Gre::Base::Globals(v18);
          *(_QWORD *)&v28 = *(_QWORD *)(v19 + 48);
          v29 = v19;
          GreAcquireSemaphore(v28);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v28, 11LL);
        }
        if ( (*(_DWORD *)(v19 + 40) & 0x20000) != 0 )
        {
          for ( i = **(_QWORD ***)(v19 + 1768); i; i = (_QWORD *)*i )
          {
            v22 = i[6];
            v37 = v22;
            if ( v22 )
            {
              if ( (*(_DWORD *)(v22 + 1792) & 0x8000000) != 0 && (*(_DWORD *)(v22 + 2096) & 0x8000) != 0 )
              {
                if ( *(_QWORD *)(*(_QWORD *)(v22 + 1760) + 608LL) )
                {
                  MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                    (MARK_ACCDRV_NOTIFICATION *)&v26,
                    (struct PDEVOBJ *)&v37,
                    a1);
                  (*(void (__fastcall **)(struct _SURFOBJ *, CLIPOBJ *, XLATEOBJ *, TRIVERTEX *, ULONG, PVOID, ULONG, RECTL *, POINTL *, ULONG))(*(_QWORD *)(v23 + 1760) + 608LL))(
                    a1,
                    pco,
                    pxlo,
                    pVertex,
                    nVertex,
                    pMesh,
                    nMesh,
                    prclExtents,
                    pptlDitherOrg,
                    ulMode);
                  if ( v26 )
                    *(_WORD *)(v26 + 78) &= ~0x8000u;
                }
              }
            }
          }
        }
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v28);
        if ( v31 )
          DLODCOBJ::vUnlock((DLODCOBJ *)&v31);
      }
    }
  }
  v24 = EngGradientFill(a1, pco, pxlo, pVertex, nVertex, pMesh, nMesh, prclExtents, pptlDitherOrg, ulMode);
  if ( v27 )
    bMakeOpaque(v27);
  return v24;
}
