void __fastcall HFDBASIS32::vSteadyState(HFDBASIS32 *this, int a2)
{
  int v3; // ecx
  int v4; // r8d
  int v5; // edx
  int v6; // ecx
  int v7; // edx
  int v8; // r8d

  *(_DWORD *)this *= 8;
  *((_DWORD *)this + 1) *= 8;
  v3 = a2 - 3;
  v4 = *((_DWORD *)this + 2);
  v5 = *((_DWORD *)this + 3);
  if ( v3 >= 0 )
  {
    v7 = v5 >> v3;
    v8 = v4 >> v3;
  }
  else
  {
    v6 = -v3;
    v7 = v5 << v6;
    v8 = v4 << v6;
  }
  *((_DWORD *)this + 2) = v8;
  *((_DWORD *)this + 3) = v7;
}
