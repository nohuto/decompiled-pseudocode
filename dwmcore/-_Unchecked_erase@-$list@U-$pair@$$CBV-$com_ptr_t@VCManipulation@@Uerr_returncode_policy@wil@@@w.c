_QWORD *__fastcall std::list<std::pair<wil::com_ptr_t<CManipulation,wil::err_returncode_policy> const,std::unique_ptr<CChainingHelper>>>::_Unchecked_erase(
        __int64 a1,
        void *a2)
{
  _QWORD *v2; // rsi
  __int64 *v4; // rdi

  v2 = *(_QWORD **)a2;
  --*(_QWORD *)(a1 + 8);
  **((_QWORD **)a2 + 1) = v2;
  v2[1] = *((_QWORD *)a2 + 1);
  v4 = (__int64 *)*((_QWORD *)a2 + 3);
  if ( v4 )
  {
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(v4 + 5);
    operator delete(v4);
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)a2 + 2);
  std::_Deallocate<16,0>(a2, 0x20uLL);
  return v2;
}
