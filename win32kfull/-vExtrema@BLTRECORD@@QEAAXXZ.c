void __fastcall BLTRECORD::vExtrema(BLTRECORD *this)
{
  int v1; // ebx
  int v2; // edi
  int v3; // r9d
  int v4; // r10d
  int v5; // edx
  int v6; // r8d

  v1 = *((_DWORD *)this + 31);
  v2 = *((_DWORD *)this + 29);
  v3 = *((_DWORD *)this + 30);
  v4 = *((_DWORD *)this + 28);
  v5 = v3 + *((_DWORD *)this + 32) - v4;
  v6 = v1 + *((_DWORD *)this + 33) - v2;
  *((_DWORD *)this + 34) = v5;
  *((_DWORD *)this + 35) = v6;
  *((_DWORD *)this + 54) = (v3 > v4) ^ (v3 <= v5);
  *((_DWORD *)this + 55) = (v1 > v2) ^ (v1 <= v6);
}
