__int64 __fastcall RedirLineTo(
        struct _SURFOBJ *a1,
        CLIPOBJ *pco,
        BRUSHOBJ *pbo,
        unsigned int x1,
        LONG y1,
        LONG x2,
        LONG y2,
        RECTL *a8,
        MIX a9)
{
  __int64 v13; // rcx
  MIX mix; // r12d
  RECTL *prclBounds; // r13
  __int64 HDEV; // rax
  Gre::Base *v17; // rcx
  __int64 v18; // rbx
  int v19; // eax
  _QWORD *i; // rbx
  __int64 v21; // r9
  __int64 v22; // r9
  unsigned int v23; // ebx
  __int64 v25; // [rsp+58h] [rbp-51h] BYREF
  struct SURFACE *v26; // [rsp+60h] [rbp-49h] BYREF
  __int128 v27; // [rsp+68h] [rbp-41h] BYREF
  __int64 v28; // [rsp+78h] [rbp-31h]
  int v29; // [rsp+80h] [rbp-29h]
  __int64 v30; // [rsp+88h] [rbp-21h] BYREF
  int v31; // [rsp+90h] [rbp-19h]
  int v32; // [rsp+94h] [rbp-15h]
  __int16 v33; // [rsp+98h] [rbp-11h]
  __int64 v34; // [rsp+A0h] [rbp-9h]
  __int64 v35; // [rsp+A8h] [rbp-1h]
  __int64 v36; // [rsp+E8h] [rbp+3Fh] BYREF

  REDIROPEN::REDIROPEN((REDIROPEN *)&v26, a1);
  mix = a9;
  prclBounds = a8;
  if ( a1 )
  {
    if ( ((__int64)a1[1].hsurf & 0x800) != 0 )
    {
      HDEV = UserGetHDEV(v13);
      v18 = HDEV;
      if ( HDEV )
      {
        v31 = 0;
        v32 = 0;
        v35 = 0LL;
        v34 = 0LL;
        v30 = 0LL;
        v19 = *(_DWORD *)(HDEV + 40);
        v33 = 256;
        v27 = 0LL;
        v29 = 1;
        if ( (v19 & 1) != 0 )
        {
          Gre::Base::Globals(v17);
          *(_QWORD *)&v27 = *(_QWORD *)(v18 + 48);
          v28 = v18;
          GreAcquireSemaphore(v27);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v27, 11LL);
        }
        if ( (*(_DWORD *)(v18 + 40) & 0x20000) != 0 )
        {
          for ( i = **(_QWORD ***)(v18 + 1768); i; i = (_QWORD *)*i )
          {
            v21 = i[6];
            v36 = v21;
            if ( v21 )
            {
              if ( (*(_DWORD *)(v21 + 1792) & 0x8000000) != 0 && (*(_DWORD *)(v21 + 2096) & 0x8000) != 0 )
              {
                if ( *(_QWORD *)(*(_QWORD *)(v21 + 1760) + 312LL) )
                {
                  MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                    (MARK_ACCDRV_NOTIFICATION *)&v25,
                    (struct PDEVOBJ *)&v36,
                    a1);
                  (*(void (__fastcall **)(struct _SURFOBJ *, CLIPOBJ *, BRUSHOBJ *, _QWORD, LONG, LONG, LONG, RECTL *, MIX))(*(_QWORD *)(v22 + 1760) + 312LL))(
                    a1,
                    pco,
                    pbo,
                    x1,
                    y1,
                    x2,
                    y2,
                    prclBounds,
                    mix);
                  if ( v25 )
                    *(_WORD *)(v25 + 78) &= ~0x8000u;
                }
              }
            }
          }
        }
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v27);
        if ( v30 )
          DLODCOBJ::vUnlock((DLODCOBJ *)&v30);
      }
    }
  }
  v23 = EngLineTo(a1, pco, pbo, x1, y1, x2, y2, prclBounds, mix);
  if ( v26 )
    bMakeOpaque(v26);
  return v23;
}
