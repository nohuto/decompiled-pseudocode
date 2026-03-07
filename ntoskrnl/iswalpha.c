int __cdecl iswalpha(wint_t C)
{
  return iswctype(C, 0x103u);
}
