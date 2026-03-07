unsigned __int8 __fastcall DXGADAPTER::IsDxgmms2(DXGADAPTER *this)
{
  unsigned __int8 result; // al

  if ( *((int *)this + 638) >= 0x2000 )
    return 1;
  result = 0;
  if ( *((_BYTE *)this + 2852) )
    return 1;
  return result;
}
