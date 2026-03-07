void __fastcall std::deque<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>::pop_back(_QWORD *a1)
{
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)(*(_QWORD *)(a1[1] + 8 * (((unsigned __int64)(a1[3] - 1LL + a1[4]) >> 1) & (a1[2] - 1LL))) + 8LL * ((*((_DWORD *)a1 + 6) - 1 + *((_DWORD *)a1 + 8)) & 1)));
  if ( a1[4]-- == 1LL )
    a1[3] = 0LL;
}
