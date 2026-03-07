__int64 __fastcall BmpDevAlphaBlend(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _CLIPOBJ *a3,
        struct _XLATEOBJ *a4,
        struct _RECTL *a5,
        struct _RECTL *a6,
        struct _BLENDOBJ *a7)
{
  unsigned int v11; // ebp
  BOOL (__stdcall *v12)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *); // rax
  __int64 v13; // rcx
  __int64 HDEV; // rax
  struct _DISPSURF *i; // rbx
  __int64 v16; // rdi
  struct _SURFOBJ *DevBitmap; // rax
  __int64 v18; // r11
  __int64 v20; // [rsp+40h] [rbp-48h] BYREF
  __int64 v21; // [rsp+48h] [rbp-40h] BYREF
  struct SURFACE *v22; // [rsp+50h] [rbp-38h] BYREF
  struct SURFACE *v23; // [rsp+58h] [rbp-30h] BYREF

  v11 = 0;
  BMPDEVOPEN::BMPDEVOPEN((BMPDEVOPEN *)&v23, a1);
  BMPDEVOPEN::BMPDEVOPEN((BMPDEVOPEN *)&v22, a2);
  if ( a1 )
  {
    v12 = ((__int64)a1[1].hsurf & 0x10000) != 0
        ? (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *))*((_QWORD *)a1->hdev + 404)
        : EngAlphaBlend;
    v11 = ((__int64 (__fastcall *)(struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _RECTL *, struct _BLENDOBJ *))v12)(
            a1,
            a2,
            a3,
            a4,
            a5,
            a6,
            a7);
    HDEV = UserGetHDEV(v13);
    if ( HDEV )
    {
      if ( (*(_DWORD *)(HDEV + 40) & 0x20000000) != 0 )
      {
        for ( i = **(struct _DISPSURF ***)(HDEV + 1768); i; i = *(struct _DISPSURF **)i )
        {
          v16 = *((_QWORD *)i + 6);
          v20 = v16;
          if ( v16 )
          {
            if ( (*(_DWORD *)(v16 + 1792) & 0x8000000) != 0 && (*(_DWORD *)(v16 + 2096) & 0x9000) == 0x9000 )
            {
              if ( *(_QWORD *)(*(_QWORD *)(v16 + 1760) + 632LL) )
              {
                MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                  (MARK_ACCDRV_NOTIFICATION *)&v21,
                  (struct PDEVOBJ *)&v20,
                  a1);
                GetDevBitmap(i, a2);
                DevBitmap = GetDevBitmap(i, a1);
                (*(void (__fastcall **)(struct _SURFOBJ *, __int64, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _RECTL *, struct _BLENDOBJ *))(*(_QWORD *)(v16 + 1760) + 632LL))(
                  DevBitmap,
                  v18,
                  a3,
                  a4,
                  a5,
                  a6,
                  a7);
                if ( v21 )
                  *(_WORD *)(v21 + 78) &= ~0x8000u;
              }
            }
          }
        }
      }
    }
  }
  if ( v22 )
    bBmpMakeOpaque(v22);
  if ( v23 )
    bBmpMakeOpaque(v23);
  return v11;
}
