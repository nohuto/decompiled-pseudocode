__int64 __fastcall RedirStretchBltROP(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        CLIPOBJ *pco,
        XLATEOBJ *pxlo,
        COLORADJUSTMENT *pca,
        POINTL *pptlHTOrg,
        RECTL *prclDest,
        RECTL *prclSrc,
        POINTL *pptlMask,
        ULONG iMode,
        BRUSHOBJ *pbo,
        DWORD rop4)
{
  __int64 v17; // rcx
  struct _DISPSURF *i; // rdi
  __int64 HDEV; // rax
  Gre::Base *v20; // rcx
  __int64 v21; // rbx
  int v22; // eax
  __int64 v23; // rsi
  struct _SURFOBJ *DevBitmap; // rbx
  struct _SURFOBJ *v25; // rax
  __int64 v26; // r11
  unsigned int v27; // ebx
  __int64 v29; // [rsp+78h] [rbp-69h] BYREF
  struct SURFACE *v30; // [rsp+80h] [rbp-61h] BYREF
  struct SURFACE *v31; // [rsp+88h] [rbp-59h] BYREF
  struct SURFACE *v32; // [rsp+90h] [rbp-51h] BYREF
  __int128 v33; // [rsp+98h] [rbp-49h] BYREF
  __int64 v34; // [rsp+A8h] [rbp-39h]
  int v35; // [rsp+B0h] [rbp-31h]
  _QWORD v36[2]; // [rsp+B8h] [rbp-29h] BYREF
  __int16 v37; // [rsp+C8h] [rbp-19h]
  __int64 v38; // [rsp+D0h] [rbp-11h]
  __int64 v39; // [rsp+D8h] [rbp-9h]
  __int64 v40; // [rsp+118h] [rbp+37h] BYREF

  REDIROPEN::REDIROPEN((REDIROPEN *)&v32, a1);
  REDIROPEN::REDIROPEN((REDIROPEN *)&v31, a2);
  REDIROPEN::REDIROPEN((REDIROPEN *)&v30, a3);
  i = 0LL;
  if ( a1 )
  {
    if ( ((__int64)a1[1].hsurf & 0x800) != 0 )
    {
      HDEV = UserGetHDEV(v17);
      v21 = HDEV;
      if ( HDEV )
      {
        v22 = *(_DWORD *)(HDEV + 40);
        v33 = 0LL;
        v36[1] = 0LL;
        v37 = 256;
        v39 = 0LL;
        v38 = 0LL;
        v36[0] = 0LL;
        v35 = 1;
        if ( (v22 & 1) != 0 )
        {
          Gre::Base::Globals(v20);
          *(_QWORD *)&v33 = *(_QWORD *)(v21 + 48);
          v34 = v21;
          GreAcquireSemaphore(v33);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v33, 11LL);
        }
        if ( (*(_DWORD *)(v21 + 40) & 0x20000) != 0 )
        {
          for ( i = **(struct _DISPSURF ***)(v21 + 1768); i; i = *(struct _DISPSURF **)i )
          {
            v23 = *((_QWORD *)i + 6);
            v40 = v23;
            if ( v23
              && (*(_DWORD *)(v23 + 1792) & 0x8000000) != 0
              && (*(_DWORD *)(v23 + 2096) & 0x8000) != 0
              && *(_QWORD *)(*(_QWORD *)(v23 + 1760) + 616LL) )
            {
              MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                (MARK_ACCDRV_NOTIFICATION *)&v29,
                (struct PDEVOBJ *)&v40,
                a1);
              DevBitmap = GetDevBitmap(i, a3);
              GetDevBitmap(i, a2);
              v25 = GetDevBitmap(i, a1);
              (*(void (__fastcall **)(struct _SURFOBJ *, __int64, struct _SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG, BRUSHOBJ *, DWORD))(*(_QWORD *)(v23 + 1760) + 616LL))(
                v25,
                v26,
                DevBitmap,
                pco,
                pxlo,
                pca,
                pptlHTOrg,
                prclDest,
                prclSrc,
                pptlMask,
                iMode,
                pbo,
                rop4);
              if ( v29 )
                *(_WORD *)(v29 + 78) &= ~0x8000u;
            }
          }
        }
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v33);
        if ( (struct _DISPSURF *)v36[0] != i )
          DLODCOBJ::vUnlock((DLODCOBJ *)v36);
      }
    }
  }
  v27 = EngStretchBltROP(a1, a2, a3, pco, pxlo, pca, pptlHTOrg, prclDest, prclSrc, pptlMask, iMode, pbo, rop4);
  if ( v30 )
    bMakeOpaque(v30);
  if ( v31 )
    bMakeOpaque(v31);
  if ( v32 )
    bMakeOpaque(v32);
  return v27;
}
