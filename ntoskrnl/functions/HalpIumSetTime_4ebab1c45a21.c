__int64 __fastcall HalpIumSetTime(__int128 *a1)
{
  __int128 v2; // [rsp+30h] [rbp-38h] BYREF

  if ( !qword_140C621F0 )
    return 0x8000000000000003uLL;
  v2 = *a1;
  return qword_140C621F0(1LL, 0LL, 0LL, &v2);
}
