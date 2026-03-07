__int64 __fastcall KeFindConfigurationEntry(__int64 a1, int a2, int a3, int *a4)
{
  __int64 v5[3]; // [rsp+30h] [rbp-18h] BYREF

  v5[0] = 0LL;
  return KeFindConfigurationNextEntry(a1, a2, a3, a4, v5);
}
