void __fastcall std::deque<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>::~deque<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>(
        void **a1)
{
  void *v2; // rcx

  std::deque<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>::_Tidy();
  v2 = *a1;
  *a1 = 0LL;
  std::_Deallocate<16,0>(v2, 0x10uLL);
}
