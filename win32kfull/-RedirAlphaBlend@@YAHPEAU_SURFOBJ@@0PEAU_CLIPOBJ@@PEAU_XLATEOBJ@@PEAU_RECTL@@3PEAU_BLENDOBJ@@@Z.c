__int64 __fastcall RedirAlphaBlend(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        CLIPOBJ *pco,
        XLATEOBJ *pxlo,
        RECTL *prclDest,
        RECTL *prclSrc,
        BLENDOBJ *a7)
{
  __int64 v11; // rcx
  BLENDOBJ *pBlendObj; // r13
  __int64 HDEV; // rax
  Gre::Base *v14; // rcx
  __int64 v15; // rbx
  int v16; // eax
  struct _DISPSURF *i; // rbx
  __int64 v18; // rdi
  struct _SURFOBJ *DevBitmap; // rax
  __int64 v20; // r11
  unsigned int v21; // ebx
  __int64 v23; // [rsp+48h] [rbp-51h] BYREF
  struct SURFACE *v24; // [rsp+50h] [rbp-49h] BYREF
  struct SURFACE *v25; // [rsp+58h] [rbp-41h] BYREF
  __int128 v26; // [rsp+68h] [rbp-31h] BYREF
  __int64 v27; // [rsp+78h] [rbp-21h]
  int v28; // [rsp+80h] [rbp-19h]
  __int64 v29; // [rsp+88h] [rbp-11h] BYREF
  int v30; // [rsp+90h] [rbp-9h]
  int v31; // [rsp+94h] [rbp-5h]
  __int16 v32; // [rsp+98h] [rbp-1h]
  __int64 v33; // [rsp+A0h] [rbp+7h]
  __int64 v34; // [rsp+A8h] [rbp+Fh]
  __int64 v35; // [rsp+E8h] [rbp+4Fh] BYREF

  REDIROPEN::REDIROPEN((REDIROPEN *)&v25, a1);
  REDIROPEN::REDIROPEN((REDIROPEN *)&v24, a2);
  pBlendObj = a7;
  if ( a1 )
  {
    if ( ((__int64)a1[1].hsurf & 0x800) != 0 )
    {
      HDEV = UserGetHDEV(v11);
      v15 = HDEV;
      if ( HDEV )
      {
        v30 = 0;
        v31 = 0;
        v34 = 0LL;
        v33 = 0LL;
        v29 = 0LL;
        v16 = *(_DWORD *)(HDEV + 40);
        v32 = 256;
        v26 = 0LL;
        v28 = 1;
        if ( (v16 & 1) != 0 )
        {
          Gre::Base::Globals(v14);
          *(_QWORD *)&v26 = *(_QWORD *)(v15 + 48);
          v27 = v15;
          GreAcquireSemaphore(v26);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v26, 11LL);
        }
        if ( (*(_DWORD *)(v15 + 40) & 0x20000) != 0 )
        {
          for ( i = **(struct _DISPSURF ***)(v15 + 1768); i; i = *(struct _DISPSURF **)i )
          {
            v18 = *((_QWORD *)i + 6);
            v35 = v18;
            if ( v18 )
            {
              if ( (*(_DWORD *)(v18 + 1792) & 0x8000000) != 0 && (*(_DWORD *)(v18 + 2096) & 0x8000) != 0 )
              {
                if ( *(_QWORD *)(*(_QWORD *)(v18 + 1760) + 632LL) )
                {
                  MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                    (MARK_ACCDRV_NOTIFICATION *)&v23,
                    (struct PDEVOBJ *)&v35,
                    a1);
                  GetDevBitmap(i, a2);
                  DevBitmap = GetDevBitmap(i, a1);
                  (*(void (__fastcall **)(struct _SURFOBJ *, __int64, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *))(*(_QWORD *)(v18 + 1760) + 632LL))(
                    DevBitmap,
                    v20,
                    pco,
                    pxlo,
                    prclDest,
                    prclSrc,
                    pBlendObj);
                  if ( v23 )
                    *(_WORD *)(v23 + 78) &= ~0x8000u;
                }
              }
            }
          }
        }
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v26);
        if ( v29 )
          DLODCOBJ::vUnlock((DLODCOBJ *)&v29);
      }
    }
  }
  v21 = EngAlphaBlend(a1, a2, pco, pxlo, prclDest, prclSrc, pBlendObj);
  if ( v24 )
    bMakeOpaque(v24);
  if ( v25 )
    bMakeOpaque(v25);
  return v21;
}
