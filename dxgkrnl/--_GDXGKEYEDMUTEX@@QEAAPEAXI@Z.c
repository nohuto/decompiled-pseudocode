DXGKEYEDMUTEX *__fastcall DXGKEYEDMUTEX::`scalar deleting destructor'(DXGKEYEDMUTEX *P)
{
  DXGKEYEDMUTEX::~DXGKEYEDMUTEX(P);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return P;
}
