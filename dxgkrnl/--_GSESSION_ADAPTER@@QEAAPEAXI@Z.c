SESSION_ADAPTER *__fastcall SESSION_ADAPTER::`scalar deleting destructor'(SESSION_ADAPTER *P)
{
  SESSION_ADAPTER::~SESSION_ADAPTER(P);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return P;
}
