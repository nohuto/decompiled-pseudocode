__int64 __fastcall IsAnyCharsetDbcs(__int64 a1)
{
  int v1; // r9d
  unsigned __int8 v2; // al
  __int64 v3; // rax
  _BYTE *v4; // rcx
  _BYTE *v5; // r8

  v1 = 323;
  v2 = *(_BYTE *)(a1 + 44) + 0x80;
  if ( v2 <= 8u && _bittest(&v1, v2) )
    return 1LL;
  v3 = *(int *)(a1 + 40);
  if ( (_DWORD)v3 )
  {
    v4 = (_BYTE *)(v3 + a1);
    v5 = v4 + 16;
    while ( v4 < v5 )
    {
      if ( (unsigned __int8)(*v4 + 0x80) <= 8u && _bittest(&v1, (unsigned __int8)(*v4 + 0x80)) )
        return 1LL;
      if ( *v4 == 1 )
        return 0LL;
      ++v4;
    }
  }
  return 0LL;
}
