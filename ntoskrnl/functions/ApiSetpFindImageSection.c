const char *__fastcall ApiSetpFindImageSection(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdi
  const char *v3; // rbx
  __int64 v4; // rsi

  v1 = RtlImageNtHeader(a1);
  v2 = v1;
  if ( !v1 )
    return 0LL;
  v3 = (const char *)(*(unsigned __int16 *)(v1 + 20) + v1 + 24);
  v4 = 0LL;
  if ( !*(_WORD *)(v1 + 6) )
    return 0LL;
  while ( strncmp(v3, ".apiset", 8uLL) )
  {
    v3 += 40;
    if ( ++v4 >= (unsigned __int64)*(unsigned __int16 *)(v2 + 6) )
      return 0LL;
  }
  return v3;
}
