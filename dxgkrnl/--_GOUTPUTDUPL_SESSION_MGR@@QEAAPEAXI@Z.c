OUTPUTDUPL_SESSION_MGR *__fastcall OUTPUTDUPL_SESSION_MGR::`scalar deleting destructor'(OUTPUTDUPL_SESSION_MGR *P)
{
  OUTPUTDUPL_SESSION_MGR::~OUTPUTDUPL_SESSION_MGR(P);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return P;
}
