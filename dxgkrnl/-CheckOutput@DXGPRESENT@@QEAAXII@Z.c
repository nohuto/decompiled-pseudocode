void __fastcall DXGPRESENT::CheckOutput(DXGPRESENT *this, int a2, int a3)
{
  if ( (*((_DWORD *)this + 18) & 0x10000) != 0 && (*((_DWORD *)this + 108) != a2 || *((_DWORD *)this + 109) != a3) )
  {
    *((_DWORD *)this + 1) |= 0x100u;
    *((_DWORD *)this + 108) = a2;
    *((_DWORD *)this + 109) = a3;
  }
}
