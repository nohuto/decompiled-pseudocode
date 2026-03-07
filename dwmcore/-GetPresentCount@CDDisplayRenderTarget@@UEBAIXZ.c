__int64 __fastcall CDDisplayRenderTarget::GetPresentCount(CDDisplayRenderTarget *this)
{
  __int64 result; // rax

  result = *((_QWORD *)this + 5);
  if ( result )
    return *(unsigned int *)(result + 444);
  return result;
}
