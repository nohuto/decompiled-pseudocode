DMMVIDEOPRESENTTARGET *__fastcall DMMVIDEOPRESENTTARGET::`vector deleting destructor'(
        DMMVIDEOPRESENTTARGET *P,
        char a2)
{
  DMMVIDEOPRESENTTARGET::~DMMVIDEOPRESENTTARGET(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePoolWithTag(P, 0);
  return P;
}
