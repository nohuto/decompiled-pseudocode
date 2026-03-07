struct _UNICODE_STRING *__fastcall USB4_HOST_ROUTER::`scalar deleting destructor'(struct _UNICODE_STRING *P)
{
  USB4_HOST_ROUTER::~USB4_HOST_ROUTER(P);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return P;
}
