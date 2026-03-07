OUTPUTDUPL_MGR *__fastcall OUTPUTDUPL_MGR::`scalar deleting destructor'(OUTPUTDUPL_MGR *P)
{
  OUTPUTDUPL_MGR::~OUTPUTDUPL_MGR(P);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return P;
}
