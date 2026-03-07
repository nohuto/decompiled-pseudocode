int __cdecl iswspace(wint_t C)
{
  return iswctype(C, 8u);
}
