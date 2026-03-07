void __fastcall DxgkEngGetRedirBitmapSharedHandle(HDC a1, _QWORD *a2)
{
  HWND v3; // rcx
  __int64 v4; // [rsp+30h] [rbp-28h] BYREF
  __int64 *v5[4]; // [rsp+38h] [rbp-20h] BYREF
  __int64 v6; // [rsp+68h] [rbp+10h] BYREF
  int v7; // [rsp+70h] [rbp+18h] BYREF
  __int64 v8; // [rsp+78h] [rbp+20h] BYREF

  MDCOBJA::MDCOBJA((MDCOBJA *)v5, a1);
  *a2 = 0LL;
  if ( v5[0] )
  {
    v3 = (HWND)v5[0][59];
    LODWORD(v6) = 0;
    v8 = 0LL;
    GreGetDxSharedSurface(v3, a2, &v8, &v7, &v6, &v4);
    XDCOBJ::vAltUnlockFast(v5);
  }
}
