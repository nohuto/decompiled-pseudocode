__int64 __fastcall gsl::final_action__lambda_d4d69d0dd690f9a056e445a8894bc90a___::_final_action__lambda_d4d69d0dd690f9a056e445a8894bc90a___(
        CD3DDevice **a1)
{
  __int64 result; // rax

  if ( *((_BYTE *)a1 + 8) )
    result = CD2DContext::PopTarget((CD3DDevice *)((char *)*a1 + 16), 0LL, 0LL);
  if ( *a1 )
    return CD3DDevice::Release(*a1);
  return result;
}
