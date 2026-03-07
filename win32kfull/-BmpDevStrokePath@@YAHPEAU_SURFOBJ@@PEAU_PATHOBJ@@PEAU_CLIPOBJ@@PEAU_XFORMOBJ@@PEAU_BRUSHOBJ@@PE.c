__int64 __fastcall BmpDevStrokePath(
        struct _SURFOBJ *a1,
        PATHOBJ *ppo,
        CLIPOBJ *pco,
        XFORMOBJ *pxo,
        BRUSHOBJ *pbo,
        POINTL *pptlBrushOrg,
        LINEATTRS *plineattrs,
        MIX mix)
{
  unsigned int v12; // esi
  __int64 v13; // rcx
  __int64 HDEV; // rax
  _QWORD *i; // rbx
  __int64 v16; // r9
  __int64 v17; // r9
  __int64 v19; // [rsp+50h] [rbp-48h] BYREF
  __int64 v20; // [rsp+58h] [rbp-40h] BYREF
  struct SURFACE *v21; // [rsp+60h] [rbp-38h] BYREF

  v12 = 0;
  BMPDEVOPEN::BMPDEVOPEN((BMPDEVOPEN *)&v21, a1);
  if ( a1 )
  {
    v12 = EngStrokePath(a1, ppo, pco, pxo, pbo, pptlBrushOrg, plineattrs, mix);
    HDEV = UserGetHDEV(v13);
    if ( HDEV )
    {
      if ( (*(_DWORD *)(HDEV + 40) & 0x20000000) != 0 )
      {
        for ( i = **(_QWORD ***)(HDEV + 1768); i; i = (_QWORD *)*i )
        {
          v16 = i[6];
          v19 = v16;
          if ( v16 )
          {
            if ( (*(_DWORD *)(v16 + 1792) & 0x8000000) != 0 && (*(_DWORD *)(v16 + 2096) & 0x9000) == 0x9000 )
            {
              if ( *(_QWORD *)(*(_QWORD *)(v16 + 1760) + 176LL) )
              {
                MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                  (MARK_ACCDRV_NOTIFICATION *)&v20,
                  (struct PDEVOBJ *)&v19,
                  a1);
                (*(void (__fastcall **)(struct _SURFOBJ *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, POINTL *, LINEATTRS *, MIX))(*(_QWORD *)(v17 + 1760) + 176LL))(
                  a1,
                  ppo,
                  pco,
                  pxo,
                  pbo,
                  pptlBrushOrg,
                  plineattrs,
                  mix);
                if ( v20 )
                  *(_WORD *)(v20 + 78) &= ~0x8000u;
              }
            }
          }
        }
      }
    }
  }
  if ( v21 )
    bBmpMakeOpaque(v21);
  return v12;
}
