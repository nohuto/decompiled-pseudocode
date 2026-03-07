__int64 __fastcall gsl::span<D3D11_INPUT_ELEMENT_DESC const,-1>::size_bytes(_QWORD *a1)
{
  if ( *a1 >= 0x7FFFFFFFFFFFFFFuLL )
  {
    gsl::details::terminate((gsl::details *)0x7FFFFFFFFFFFFFFLL);
    JUMPOUT(0x180026011LL);
  }
  return 32LL * *a1;
}
