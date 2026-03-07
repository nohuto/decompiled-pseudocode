__int64 __fastcall BmpDevDrawStream(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _CLIPOBJ *a3,
        struct _XLATEOBJ *a4,
        struct _RECTL *a5,
        struct _POINTL *a6,
        unsigned int a7,
        _DWORD *a8,
        struct _DSSTATE *a9)
{
  unsigned int v13; // ebp
  HDEV hdev; // rax
  __int64 (__fastcall *v15)(__int64, __int64, __int64, __int64, int, int *, unsigned int, _DWORD *, struct _DSSTATE *); // r10
  __int64 v16; // rcx
  __int64 v17; // rax
  struct _DISPSURF *i; // rdi
  __int64 v19; // rsi
  struct _SURFOBJ *DevBitmap; // rax
  __int64 v21; // r11
  __int64 v23; // [rsp+50h] [rbp-48h] BYREF
  __int64 v24; // [rsp+58h] [rbp-40h] BYREF
  struct SURFACE *v25; // [rsp+60h] [rbp-38h] BYREF
  struct SURFACE *v26; // [rsp+68h] [rbp-30h] BYREF

  v13 = 0;
  BMPDEVOPEN::BMPDEVOPEN((BMPDEVOPEN *)&v26, a1);
  BMPDEVOPEN::BMPDEVOPEN((BMPDEVOPEN *)&v25, a2);
  if ( a1 )
  {
    hdev = a1->hdev;
    v15 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64, int, int *, unsigned int, _DWORD *, struct _DSSTATE *))EngDrawStream;
    if ( *((_QWORD *)hdev + 423) )
      v15 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64, int, int *, unsigned int, _DWORD *, struct _DSSTATE *))*((_QWORD *)hdev + 423);
    if ( SLODWORD(a1[1].hsurf) >= 0 && (((_DWORD)hdev[10] & 0x20000) == 0 || a1->iType != 3) )
      v15 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64, int, int *, unsigned int, _DWORD *, struct _DSSTATE *))EngDrawStream;
    v13 = v15((__int64)a1, (__int64)a2, (__int64)a3, (__int64)a4, (int)a5, (int *)a6, a7, a8, a9);
    v17 = UserGetHDEV(v16);
    if ( v17 )
    {
      if ( (*(_DWORD *)(v17 + 40) & 0x20000000) != 0 )
      {
        for ( i = **(struct _DISPSURF ***)(v17 + 1768); i; i = *(struct _DISPSURF **)i )
        {
          v19 = *((_QWORD *)i + 6);
          v23 = v19;
          if ( v19 )
          {
            if ( (*(_DWORD *)(v19 + 1792) & 0x8000000) != 0 && (*(_DWORD *)(v19 + 2096) & 0x9000) == 0x9000 )
            {
              if ( *(_QWORD *)(*(_QWORD *)(v19 + 1760) + 784LL) )
              {
                MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                  (MARK_ACCDRV_NOTIFICATION *)&v24,
                  (struct PDEVOBJ *)&v23,
                  a1);
                GetDevBitmap(i, a2);
                DevBitmap = GetDevBitmap(i, a1);
                (*(void (__fastcall **)(struct _SURFOBJ *, __int64, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, unsigned int, _DWORD *, struct _DSSTATE *))(*(_QWORD *)(v19 + 1760) + 784LL))(
                  DevBitmap,
                  v21,
                  a3,
                  a4,
                  a5,
                  a6,
                  a7,
                  a8,
                  a9);
                if ( v24 )
                  *(_WORD *)(v24 + 78) &= ~0x8000u;
              }
            }
          }
        }
      }
    }
  }
  if ( v25 )
    bBmpMakeOpaque(v25);
  if ( v26 )
    bBmpMakeOpaque(v26);
  return v13;
}
