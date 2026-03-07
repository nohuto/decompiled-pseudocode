ReferenceCounted *__fastcall rc_buffer<DispBroker::AlpcRequest<8>>::`vector deleting destructor'(
        ReferenceCounted *P,
        char a2)
{
  ReferenceCounted::~ReferenceCounted(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePoolWithTag(P, 0);
  return P;
}
