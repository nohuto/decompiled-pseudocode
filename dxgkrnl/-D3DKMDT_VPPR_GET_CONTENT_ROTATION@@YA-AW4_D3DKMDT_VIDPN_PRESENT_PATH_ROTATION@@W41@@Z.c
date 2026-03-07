__int64 __fastcall D3DKMDT_VPPR_GET_CONTENT_ROTATION(unsigned int a1)
{
  int v2; // eax
  int v3; // r8d
  int v4; // r9d

  if ( a1 - 5 <= 0xB )
  {
    v2 = D3DKMDT_VPPR_GET_OFFSET_ROTATION(a1);
    return (unsigned int)((v3 + v2 - 2) % v4 + 1);
  }
  return a1;
}
