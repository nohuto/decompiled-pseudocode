__int64 __fastcall GreAddLogicalSurfaceToDirtyQueue(Gre::Base *a1, ULONG a2, UINT_PTR a3)
{
  struct Gre::Base::SESSION_GLOBALS *v6; // rsi
  SFMLOGICALSURFACE *v7; // rbx
  unsigned int v8; // ebx
  SFMLOGICALSURFACE *v10; // [rsp+20h] [rbp-E0h] BYREF
  int v11; // [rsp+28h] [rbp-D8h]
  _BYTE v12[8]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v13[8]; // [rsp+38h] [rbp-C8h] BYREF
  struct _D3DKMT_PRESENTHISTORYTOKEN v14; // [rsp+40h] [rbp-C0h] BYREF

  v6 = Gre::Base::Globals(a1);
  memset_0(&v14, 0, sizeof(v14));
  v14.Model = D3DKMT_PM_REDIRECTED_GDI_SYSMEM;
  v14.Token.GdiSysMem.dwDirtyFlags = a2;
  v14.Token.Flip.FenceValue = (UINT64)a1;
  v14.Token.Flip.dxgContext = a3;
  PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)v13, (struct _EX_PUSH_LOCK *)(*((_QWORD *)v6 + 809) + 32LL));
  v10 = 0LL;
  v11 = 0;
  SFMLOGICALSURFACEREF::LockLogicalSurfaceObj((SFMLOGICALSURFACEREF *)&v10, (HLSURF)a1);
  v7 = v10;
  if ( v10 )
  {
    PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)v12, (SFMLOGICALSURFACE *)((char *)v10 + 256));
    EtwGdiSysMemToken(
      (unsigned __int8)-__CFSHR__(*((_DWORD *)v7 + 61), 2),
      a2,
      v14.Token.Flip.FenceValue,
      v14.Token.Flip.dxgContext);
    if ( __CFSHR__(*((_DWORD *)v7 + 61), 2) )
    {
      v8 = SfmTokenArray::AddNotificationToken(*((SfmTokenArray **)v6 + 809), &v14);
      if ( !v8 )
        SfmSignalTokenEvent();
    }
    else
    {
      v8 = SfmTokenArray::AddNotificationToken((SFMLOGICALSURFACE *)((char *)v7 + 216), &v14);
    }
    PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v12);
  }
  else
  {
    v8 = -1073741816;
  }
  SFMLOGICALSURFACEREF::~SFMLOGICALSURFACEREF(&v10);
  PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v13);
  return v8;
}
