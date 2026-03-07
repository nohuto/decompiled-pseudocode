int __cdecl iswalnum(wint_t C)
{
  return iswctype(C, 0x107u);
}
