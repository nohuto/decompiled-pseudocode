void __fastcall BLTRECORD::vOrder(BLTRECORD *this, struct ERECTL *a2)
{
  int v2; // eax
  int v3; // r8d
  int v4; // eax
  int v5; // r8d

  v2 = *(_DWORD *)a2;
  v3 = *((_DWORD *)a2 + 2);
  if ( *(_DWORD *)a2 > v3 )
  {
    *(_DWORD *)a2 = v3;
    *((_DWORD *)a2 + 2) = v2;
    *((_DWORD *)this + 53) ^= 8u;
  }
  v4 = *((_DWORD *)a2 + 1);
  v5 = *((_DWORD *)a2 + 3);
  if ( v4 > v5 )
  {
    *((_DWORD *)a2 + 1) = v5;
    *((_DWORD *)a2 + 3) = v4;
    *((_DWORD *)this + 53) ^= 0x10u;
  }
}
