char __fastcall KiMatchLoadOption(const char *a1, const char *a2, __int64 a3, __int64 *a4)
{
  char *v6; // rax

  v6 = strstr(a1, a2);
  if ( !v6 || v6[a3] != 61 )
    return 0;
  *a4 = atoi64(&v6[a3 + 1]);
  return 1;
}
