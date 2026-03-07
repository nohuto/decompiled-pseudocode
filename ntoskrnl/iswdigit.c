int __cdecl iswdigit(wint_t C)
{
  return iswctype(C, 4u);
}
