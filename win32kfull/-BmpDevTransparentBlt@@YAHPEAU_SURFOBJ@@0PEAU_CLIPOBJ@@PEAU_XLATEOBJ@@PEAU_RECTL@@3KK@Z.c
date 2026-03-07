__int64 __fastcall BmpDevTransparentBlt(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _CLIPOBJ *a3,
        struct _XLATEOBJ *a4,
        struct _RECTL *a5,
        struct _RECTL *a6,
        unsigned int a7,
        unsigned int a8)
{
  unsigned int v12; // ebp
  BOOL (__stdcall *v13)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, ULONG, ULONG); // rax
  __int64 v14; // rcx
  __int64 HDEV; // rax
  struct _DISPSURF *i; // rbx
  __int64 v17; // rdi
  struct _SURFOBJ *DevBitmap; // rax
  __int64 v19; // r11
  __int64 v21; // [rsp+50h] [rbp-48h] BYREF
  __int64 v22; // [rsp+58h] [rbp-40h] BYREF
  struct SURFACE *v23; // [rsp+60h] [rbp-38h] BYREF
  struct SURFACE *v24; // [rsp+68h] [rbp-30h] BYREF

  v12 = 0;
  BMPDEVOPEN::BMPDEVOPEN((BMPDEVOPEN *)&v24, a1);
  BMPDEVOPEN::BMPDEVOPEN((BMPDEVOPEN *)&v23, a2);
  if ( a1 )
  {
    v13 = ((__int64)a1[1].hsurf & 0x8000) != 0
        ? (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, ULONG, ULONG))*((_QWORD *)a1->hdev + 407)
        : EngTransparentBlt;
    v12 = ((__int64 (__fastcall *)(struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _RECTL *, unsigned int, unsigned int))v13)(
            a1,
            a2,
            a3,
            a4,
            a5,
            a6,
            a7,
            a8);
    HDEV = UserGetHDEV(v14);
    if ( HDEV )
    {
      if ( (*(_DWORD *)(HDEV + 40) & 0x20000000) != 0 )
      {
        for ( i = **(struct _DISPSURF ***)(HDEV + 1768); i; i = *(struct _DISPSURF **)i )
        {
          v17 = *((_QWORD *)i + 6);
          v21 = v17;
          if ( v17 )
          {
            if ( (*(_DWORD *)(v17 + 1792) & 0x8000000) != 0 && (*(_DWORD *)(v17 + 2096) & 0x9000) == 0x9000 )
            {
              if ( *(_QWORD *)(*(_QWORD *)(v17 + 1760) + 656LL) )
              {
                MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                  (MARK_ACCDRV_NOTIFICATION *)&v22,
                  (struct PDEVOBJ *)&v21,
                  a1);
                GetDevBitmap(i, a2);
                DevBitmap = GetDevBitmap(i, a1);
                (*(void (__fastcall **)(struct _SURFOBJ *, __int64, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _RECTL *, unsigned int, unsigned int))(*(_QWORD *)(v17 + 1760) + 656LL))(
                  DevBitmap,
                  v19,
                  a3,
                  a4,
                  a5,
                  a6,
                  a7,
                  a8);
                if ( v22 )
                  *(_WORD *)(v22 + 78) &= ~0x8000u;
              }
            }
          }
        }
      }
    }
  }
  if ( v23 )
    bBmpMakeOpaque(v23);
  if ( v24 )
    bBmpMakeOpaque(v24);
  return v12;
}
