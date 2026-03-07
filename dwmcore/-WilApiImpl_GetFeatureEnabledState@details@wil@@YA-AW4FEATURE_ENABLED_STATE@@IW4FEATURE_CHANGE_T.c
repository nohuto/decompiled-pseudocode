__int64 __fastcall wil::details::WilApiImpl_GetFeatureEnabledState(
        wil::details *this,
        unsigned int a2,
        __int64 a3,
        int *a4)
{
  char IsFeatureConfigured; // al
  unsigned int v5; // ecx
  __int64 v7; // [rsp+20h] [rbp-38h]
  __int128 v8; // [rsp+30h] [rbp-28h] BYREF
  __int64 v9; // [rsp+40h] [rbp-18h]

  v7 = a3;
  v8 = 0LL;
  LOBYTE(a3) = (a2 & 0xFFFFFF7F) - 2 <= 1;
  v9 = 0LL;
  IsFeatureConfigured = wil::details::IsFeatureConfigured(&v8, (unsigned int)this, a3, (a2 >> 7) & 1, v7);
  v5 = 0;
  if ( IsFeatureConfigured )
    v5 = v8;
  if ( (_DWORD)v9 )
    v5 |= 0x80u;
  if ( HIDWORD(v9) )
    v5 |= 0x40u;
  return v5;
}
