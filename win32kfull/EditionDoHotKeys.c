__int64 __fastcall EditionDoHotKeys(
        unsigned __int8 a1,
        unsigned __int8 a2,
        int a3,
        unsigned int a4,
        struct tagINPUT_MESSAGE_SOURCE *a5,
        _DWORD *a6)
{
  unsigned int v8; // [rsp+40h] [rbp+18h] BYREF

  if ( !xxxDoHotKeyStuff(a1, a3 != 0, a4, a5) )
    return 0LL;
  if ( IsSAS(a2, &v8) )
  {
    *a6 = 1;
    return 0LL;
  }
  return 1LL;
}
