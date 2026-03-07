unsigned __int8 __fastcall DXGADAPTER::IsLegacyDisplayStateSynchronization(DXGADAPTER *this)
{
  char v1; // bl

  v1 = 0;
  if ( *((int *)this + 638) < 8960 && (!*((_BYTE *)this + 2869) || !DXGADAPTER::UsingSetTimingsFromVidPn(this)) )
    return 1;
  return v1;
}
