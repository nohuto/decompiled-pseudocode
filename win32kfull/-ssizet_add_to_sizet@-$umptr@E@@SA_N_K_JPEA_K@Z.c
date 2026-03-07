char __fastcall umptr<unsigned char>::ssizet_add_to_sizet(unsigned __int64 a1, __int64 a2)
{
  __int64 *v2; // r10
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0LL;
  if ( a1 > 0x7FFFFFFFFFFFFFFFLL || (int)LongLongAdd(a1, a2, &v4) < 0 || v4 < 0 )
    return 0;
  *v2 = v4;
  return 1;
}
