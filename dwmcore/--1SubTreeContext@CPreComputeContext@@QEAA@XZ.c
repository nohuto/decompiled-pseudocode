void __fastcall CPreComputeContext::SubTreeContext::~SubTreeContext(void **this)
{
  operator delete(this[51]);
  operator delete(this[47]);
  CBspPreComputeHelper::~CBspPreComputeHelper((CBspPreComputeHelper *)this);
}
