__int64 IS_UI_LANGID()
{
  unsigned int v0; // ebx
  int v2; // [rsp+30h] [rbp+8h] BYREF

  v0 = 0;
  v2 = 0;
  if ( (int)RtlGetThreadLangIdByIndex(0LL, 0LL, &v2, 0LL) < 0 )
    return 0LL;
  LOBYTE(v0) = v2 == 1037;
  return v0;
}
