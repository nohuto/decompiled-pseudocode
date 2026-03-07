void __fastcall DEVEXCLUDERECT::~DEVEXCLUDERECT(DEVEXCLUDERECT *this)
{
  int v2; // r8d
  struct SURFACE *v3; // [rsp+30h] [rbp+8h] BYREF
  struct SURFACE *v4; // [rsp+38h] [rbp+10h] BYREF

  if ( *(_DWORD *)this )
  {
    REDIRDEVDCOPEN::REDIRDEVDCOPEN((REDIRDEVDCOPEN *)&v4, *((struct XDCOBJ **)this + 4));
    BMPDEVDCOPEN::BMPDEVDCOPEN((BMPDEVDCOPEN *)&v3, *((struct XDCOBJ **)this + 4));
    GreUnTearDownSprites(*((HDEV *)this + 1), (struct _RECTL *)this + 1, v2);
    if ( v3 )
      bBmpMakeOpaque(v3);
    if ( v4 )
      bMakeOpaque(v4);
  }
}
