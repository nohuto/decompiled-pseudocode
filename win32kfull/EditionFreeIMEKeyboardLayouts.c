unsigned int __fastcall EditionFreeIMEKeyboardLayouts(__int64 a1)
{
  unsigned int result; // eax
  __int128 v2; // [rsp+20h] [rbp-28h] BYREF
  __int64 v3; // [rsp+30h] [rbp-18h]
  struct tagTHREADINFO **v4; // [rsp+50h] [rbp+8h] BYREF

  v4 = 0LL;
  v2 = 0LL;
  v3 = 0LL;
  result = *(_DWORD *)(a1 + 64);
  if ( (result & 4) == 0 )
  {
    result = GetThreadsWithPKL(&v4, (struct _TL *)&v2, 0LL);
    if ( result )
    {
      xxxImmUnloadThreadsLayout(v4, result, 0LL, 2u);
      return PopAndFreeAlwaysW32ThreadLock((__int64)&v2);
    }
  }
  return result;
}
