void SetWindowArrangementHotKeys(void)
{
  _DWORD *v0; // rbx
  __int64 v1; // rdi

  v0 = &unk_1C030FB54;
  v1 = 8LL;
  do
  {
    _RegisterHotKey(
      0LL,
      (void (*)(unsigned __int64, __int64))lambda_543ccbf82fb17ad955b7b487bb59a6ad_::_lambda_invoker_cdecl_,
      (unsigned int)*(v0 - 1),
      *v0 | 0x4000,
      v0[1],
      0LL);
    v0 += 10;
    --v1;
  }
  while ( v1 );
}
