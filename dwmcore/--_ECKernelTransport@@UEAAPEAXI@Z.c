CKernelTransport *__fastcall CKernelTransport::`vector deleting destructor'(CKernelTransport *this, char a2)
{
  CKernelTransport::~CKernelTransport(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
