char __fastcall umptr<_POINTL>::ssizet_add_to_sizet(unsigned __int64 a1, unsigned __int64 a2, __int64 *a3)
{
  __int64 v3; // r9
  unsigned __int64 v4; // rcx

  if ( a1 > 0x7FFFFFFFFFFFFFFFLL )
    return 0;
  v3 = a1 + a2;
  v4 = a1 >> 63;
  if ( (_DWORD)v4 == a2 >> 63 && (_DWORD)v4 != (unsigned __int64)v3 >> 63 )
    return 0;
  if ( v3 < 0 )
    return 0;
  *a3 = v3;
  return 1;
}
