__int64 __fastcall SdbpFindFirstWildcardTagWithoutIndex(
        __int64 a1,
        unsigned __int16 a2,
        unsigned __int16 a3,
        wchar_t *a4,
        __int64 a5)
{
  int v8; // ebp
  __int64 result; // rax

  v8 = a1;
  if ( (unsigned int)SdbFindFirstTag(a1, 0LL, 28673LL) )
  {
    AslLogCallPrintf(1LL);
    return 0LL;
  }
  else
  {
    *(_QWORD *)(a5 + 32) = a4;
    *(_WORD *)(a5 + 12) = a3;
    result = SdbpFindFirstNamedTagHelper(v8, 0, a2, a3, a4, 1);
    *(_DWORD *)(a5 + 4) = result;
  }
  return result;
}
