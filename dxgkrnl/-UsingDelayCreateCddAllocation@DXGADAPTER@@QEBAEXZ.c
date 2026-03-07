unsigned __int8 __fastcall DXGADAPTER::UsingDelayCreateCddAllocation(DXGADAPTER *this)
{
  unsigned __int8 v2; // al
  char v3; // dl

  v2 = DXGADAPTER::UsingSetTimingsFromVidPn(this);
  v3 = 0;
  if ( v2 || (*((_DWORD *)this + 109) & 0x100) != 0 )
    return 1;
  return v3;
}
