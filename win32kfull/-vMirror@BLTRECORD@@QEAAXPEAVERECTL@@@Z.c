void __fastcall BLTRECORD::vMirror(BLTRECORD *this, struct ERECTL *a2)
{
  int v2; // r8d
  int v3; // ecx

  if ( (*((_DWORD *)this + 53) & 8) != 0 )
  {
    v2 = *(_DWORD *)a2;
    *(_DWORD *)a2 = *((_DWORD *)a2 + 2);
    *((_DWORD *)a2 + 2) = v2;
  }
  if ( (*((_DWORD *)this + 53) & 0x10) != 0 )
  {
    v3 = *((_DWORD *)a2 + 1);
    *((_DWORD *)a2 + 1) = *((_DWORD *)a2 + 3);
    *((_DWORD *)a2 + 3) = v3;
  }
}
