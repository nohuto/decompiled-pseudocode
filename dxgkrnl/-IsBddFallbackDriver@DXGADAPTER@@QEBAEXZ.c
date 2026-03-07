bool __fastcall DXGADAPTER::IsBddFallbackDriver(DXGADAPTER *this)
{
  int v1; // eax

  v1 = *((_DWORD *)this + 109);
  return (v1 & 0x20) != 0 && (v1 & 4) != 0;
}
