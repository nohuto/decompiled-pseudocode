bool __fastcall CRemoteAppRenderTarget::IsOfType(__int64 a1, int a2)
{
  unsigned __int64 v2; // rdx
  __int64 v3; // rcx
  bool result; // al

  v2 = (unsigned int)(a2 - 114);
  result = 0;
  if ( (unsigned int)v2 <= 0x20 )
  {
    v3 = 0x120000001LL;
    if ( _bittest64(&v3, v2) )
      return 1;
  }
  return result;
}
