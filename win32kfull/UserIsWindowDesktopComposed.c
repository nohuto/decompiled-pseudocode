__int64 __fastcall UserIsWindowDesktopComposed(int a1, _DWORD *a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rax

  v3 = 0;
  v4 = HMValidateHandleNoSecure(a1, 1);
  if ( v4 )
  {
    *a2 = IsWindowDesktopComposed(v4);
    return 1;
  }
  return v3;
}
