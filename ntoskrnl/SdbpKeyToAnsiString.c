__int64 __fastcall SdbpKeyToAnsiString(__int64 a1, __int64 a2)
{
  char *v2; // r8
  __int64 i; // rcx
  char v4; // al
  __int64 v6; // [rsp+8h] [rbp+8h] BYREF

  HIBYTE(v6) = HIBYTE(a1);
  v2 = (char *)&v6 + 7;
  for ( i = 0LL; i < 8; ++i )
  {
    v4 = *v2--;
    *(_BYTE *)(i + a2) = v4;
  }
  *(_BYTE *)(a2 + 8) = 0;
  return a2;
}
