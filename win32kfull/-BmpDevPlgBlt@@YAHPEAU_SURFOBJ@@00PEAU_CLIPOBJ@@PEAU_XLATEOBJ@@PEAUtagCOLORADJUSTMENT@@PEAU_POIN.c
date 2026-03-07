__int64 __fastcall BmpDevPlgBlt(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _CLIPOBJ *a4,
        struct _XLATEOBJ *a5,
        struct tagCOLORADJUSTMENT *a6,
        struct _POINTL *a7,
        struct _POINTFIX *a8,
        struct _RECTL *a9,
        struct _POINTL *a10,
        unsigned int a11)
{
  unsigned int v15; // r14d
  unsigned int v16; // eax
  __int64 v17; // rcx
  __int64 HDEV; // rax
  struct _DISPSURF *v19; // rdi
  __int64 v20; // rbp
  struct _SURFOBJ *DevBitmap; // rbx
  struct _SURFOBJ *v22; // rax
  __int64 v23; // r11
  __int64 v25; // [rsp+60h] [rbp-58h] BYREF
  __int64 v26; // [rsp+68h] [rbp-50h] BYREF
  struct SURFACE *v27; // [rsp+70h] [rbp-48h] BYREF
  struct SURFACE *v28; // [rsp+78h] [rbp-40h] BYREF
  struct SURFACE *v29; // [rsp+80h] [rbp-38h] BYREF
  unsigned int v30; // [rsp+C0h] [rbp+8h]

  v15 = 0;
  BMPDEVOPEN::BMPDEVOPEN((BMPDEVOPEN *)&v29, a1);
  BMPDEVOPEN::BMPDEVOPEN((BMPDEVOPEN *)&v28, a2);
  BMPDEVOPEN::BMPDEVOPEN((BMPDEVOPEN *)&v27, a3);
  if ( a1 )
  {
    v16 = ((__int64)a1[1].hsurf & 4) != 0
        ? (*((__int64 (__fastcall **)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct tagCOLORADJUSTMENT *, struct _POINTL *, struct _POINTFIX *, struct _RECTL *, struct _POINTL *, unsigned int))a1->hdev
           + 403))(
            a1,
            a2,
            a3,
            a4,
            a5,
            a6,
            a7,
            a8,
            a9,
            a10,
            a11)
        : ((__int64 (__fastcall *)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct tagCOLORADJUSTMENT *, struct _POINTL *, struct _POINTFIX *, struct _RECTL *, struct _POINTL *, unsigned int))EngPlgBlt)(
            a1,
            a2,
            a3,
            a4,
            a5,
            a6,
            a7,
            a8,
            a9,
            a10,
            a11);
    v15 = v16;
    v30 = v16;
    HDEV = UserGetHDEV(v17);
    if ( HDEV )
    {
      if ( (*(_DWORD *)(HDEV + 40) & 0x20000000) != 0 )
      {
        v19 = **(struct _DISPSURF ***)(HDEV + 1768);
        if ( v19 )
        {
          do
          {
            v20 = *((_QWORD *)v19 + 6);
            v25 = v20;
            if ( v20 )
            {
              if ( (*(_DWORD *)(v20 + 1792) & 0x8000000) != 0 && (*(_DWORD *)(v20 + 2096) & 0x9000) == 0x9000 )
              {
                if ( *(_QWORD *)(*(_QWORD *)(v20 + 1760) + 624LL) )
                {
                  MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                    (MARK_ACCDRV_NOTIFICATION *)&v26,
                    (struct PDEVOBJ *)&v25,
                    a1);
                  DevBitmap = GetDevBitmap(v19, a3);
                  GetDevBitmap(v19, a2);
                  v22 = GetDevBitmap(v19, a1);
                  (*(void (__fastcall **)(struct _SURFOBJ *, __int64, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct tagCOLORADJUSTMENT *, struct _POINTL *, struct _POINTFIX *, struct _RECTL *, struct _POINTL *, unsigned int))(*(_QWORD *)(v20 + 1760) + 624LL))(
                    v22,
                    v23,
                    DevBitmap,
                    a4,
                    a5,
                    a6,
                    a7,
                    a8,
                    a9,
                    a10,
                    a11);
                  if ( v26 )
                    *(_WORD *)(v26 + 78) &= ~0x8000u;
                }
              }
            }
            v19 = *(struct _DISPSURF **)v19;
          }
          while ( v19 );
          v15 = v30;
        }
      }
    }
  }
  if ( v27 )
    bBmpMakeOpaque(v27);
  if ( v28 )
    bBmpMakeOpaque(v28);
  if ( v29 )
    bBmpMakeOpaque(v29);
  return v15;
}
