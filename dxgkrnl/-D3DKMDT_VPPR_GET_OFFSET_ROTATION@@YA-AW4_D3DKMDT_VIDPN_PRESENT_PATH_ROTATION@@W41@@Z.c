__int64 __fastcall D3DKMDT_VPPR_GET_OFFSET_ROTATION(unsigned int a1)
{
  if ( a1 - 1 <= 0xF )
    return (unsigned int)((int)(a1 - 1) / 4 + 1);
  return a1;
}
