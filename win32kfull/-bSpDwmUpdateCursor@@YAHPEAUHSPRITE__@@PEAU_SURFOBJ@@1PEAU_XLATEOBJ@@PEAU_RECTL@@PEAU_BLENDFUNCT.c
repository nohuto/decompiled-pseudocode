__int64 __fastcall bSpDwmUpdateCursor(
        Gre::Base *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _XLATEOBJ *a4,
        struct _RECTL *a5,
        struct _BLENDFUNCTION *a6)
{
  unsigned int v6; // edi
  struct Gre::Base::SESSION_GLOBALS *v10; // r13
  struct DWMSPRITE *v11; // rbx
  struct SFMLOGICALSURFACE *v12; // rdi
  char v13; // al
  struct _EX_PUSH_LOCK *v14; // rdx
  int updated; // eax
  struct SFMLOGICALSURFACE *v16; // rdx
  __int64 v17; // r9
  __int64 v18; // r9
  struct DWMSPRITE *v20; // [rsp+88h] [rbp-9h] BYREF
  struct SFMLOGICALSURFACE *v21; // [rsp+90h] [rbp-1h] BYREF
  _BYTE v22[8]; // [rsp+98h] [rbp+7h] BYREF
  _BYTE v23[8]; // [rsp+A0h] [rbp+Fh] BYREF
  SFMLOGICALSURFACE *v24[2]; // [rsp+A8h] [rbp+17h] BYREF
  int v25; // [rsp+100h] [rbp+6Fh] BYREF
  int v26; // [rsp+104h] [rbp+73h]

  v26 = HIDWORD(a4);
  v25 = 33488896;
  v6 = 0;
  v20 = 0LL;
  v10 = Gre::Base::Globals(a1);
  DWMALTSPRITEREF::AltLockSpriteObj((DWMALTSPRITEREF *)&v20, (HSPRITE)a1);
  v11 = v20;
  if ( v20 )
  {
    v12 = (struct SFMLOGICALSURFACE *)*((_QWORD *)v20 + 18);
    LODWORD(v20) = 0;
    v21 = v12;
    SFMLOGICALSURFACEREF::SFMLOGICALSURFACEREF((SFMLOGICALSURFACEREF *)v24, v12);
    PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)v23, (struct DWMSPRITE *)((char *)v11 + 88));
    if ( !a3 || (v13 = 1, a2) )
      v13 = 0;
    v14 = (struct SFMLOGICALSURFACE *)((char *)v12 + 256);
    if ( v13 )
    {
      PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)v22, v14);
      *((_DWORD *)v11 + 35) &= ~4u;
      updated = bSpDwmUpdateSpriteShape(
                  *(HDEV *)(*((_QWORD *)v10 + 38) + 176LL),
                  v11,
                  v12,
                  a3,
                  a5,
                  (struct PALETTE *)a3[1].hdev,
                  (unsigned int *)&v20,
                  0LL,
                  &v21);
    }
    else
    {
      PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)v22, v14);
      updated = bSpDwmUpdateMaskCursor(
                  *(HDEV *)(*((_QWORD *)v10 + 38) + 176LL),
                  v11,
                  v12,
                  a2,
                  a3,
                  a5,
                  (unsigned int *)&v20,
                  &v21);
    }
    v6 = updated;
    PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v22);
    PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v23);
    if ( v6 )
    {
      if ( a6 )
        v25 = (int)*a6;
      v6 = GreUpdateSprite(
             *(HDEV *)(*((_QWORD *)v10 + 38) + 176LL),
             0LL,
             *(void **)v11,
             0LL,
             0LL,
             0LL,
             0LL,
             0LL,
             0,
             (struct _BLENDFUNCTION *)&v25,
             0x21200002u,
             0LL,
             0LL,
             1,
             0,
             0);
      PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)v23, (struct DWMSPRITE *)((char *)v11 + 88));
      v16 = (struct SFMLOGICALSURFACE *)*((_QWORD *)v11 + 18);
      v17 = *((_QWORD *)v16 + 23);
      if ( v17 )
        v18 = *(_QWORD *)(v17 + 8);
      else
        v18 = 0LL;
      bSpDwmNotifyDirty(*(HSPRITE *)v11, v16, (unsigned int)v20, v18);
      PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v23);
    }
    SFMLOGICALSURFACEREF::~SFMLOGICALSURFACEREF(v24);
    if ( v11 )
      DEC_SHARE_REF_CNT(v11);
  }
  return v6;
}
