void __fastcall std::deque<CMegaRect>::~deque<CMegaRect>(void **a1)
{
  void *v2; // rcx

  std::deque<CMegaRect>::_Tidy(a1);
  v2 = *a1;
  *a1 = 0LL;
  std::_Deallocate<16,0>(v2, 0x10uLL);
}
