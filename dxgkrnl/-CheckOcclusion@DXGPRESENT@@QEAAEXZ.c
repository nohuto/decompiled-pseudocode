unsigned __int8 __fastcall DXGPRESENT::CheckOcclusion(DXGPRESENT *this)
{
  int v1; // r8d
  LONG v3; // edx
  int v4; // r8d
  DXGGLOBAL *Global; // rax
  struct tagRECT v7; // [rsp+20h] [rbp-18h] BYREF

  v1 = *((_DWORD *)this + 10);
  v7.left = v1 + *((_DWORD *)this + 6);
  v3 = v1 + *((_DWORD *)this + 8);
  v4 = *((_DWORD *)this + 11);
  v7.right = v3;
  v7.top = v4 + *((_DWORD *)this + 7);
  v7.bottom = v4 + *((_DWORD *)this + 9);
  Global = DXGGLOBAL::GetGlobal();
  if ( DXGGLOBAL::IsWindowVisible(Global, &v7) )
    return 0;
  *((_DWORD *)this + 1) |= 3u;
  return 1;
}
