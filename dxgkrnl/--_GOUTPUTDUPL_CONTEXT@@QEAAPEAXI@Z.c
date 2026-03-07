OUTPUTDUPL_CONTEXT *__fastcall OUTPUTDUPL_CONTEXT::`scalar deleting destructor'(OUTPUTDUPL_CONTEXT *P)
{
  OUTPUTDUPL_CONTEXT::~OUTPUTDUPL_CONTEXT(P);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return P;
}
