__int64 __fastcall CSecondaryD2DBitmap::Initialize(CSecondaryD2DBitmap *this)
{
  int v1; // ebx
  int v2; // r11d
  int v3; // eax
  int v4; // r10d
  _DWORD *v5; // rdx

  v1 = *((_DWORD *)this + 62);
  v2 = *((_DWORD *)this + 64);
  v3 = *((_DWORD *)this + 63);
  v4 = *((_DWORD *)this + 65);
  if ( v1 >= v2 || v3 >= v4 )
  {
    **((_DWORD **)this + 33) = 0;
  }
  else
  {
    v5 = (_DWORD *)*((_QWORD *)this + 33);
    *v5 = 2;
    v5[7] = v1;
    v5[3] = v3;
    v5[8] = v2;
    v5[4] = 16;
    v5[1] = v1;
    v5[2] = v2;
    v5[6] = 16;
    v5[5] = v4;
  }
  CD2DResourceManager::AddResource(*((CD2DResourceManager **)this + 3), this);
  return 0LL;
}
