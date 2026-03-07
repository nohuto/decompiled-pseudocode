DXGDISPLAYMANAGEROBJECT *__fastcall DXGDISPLAYMANAGEROBJECT::`vector deleting destructor'(
        DXGDISPLAYMANAGEROBJECT *P,
        char a2)
{
  DXGDISPLAYMANAGEROBJECT::~DXGDISPLAYMANAGEROBJECT(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePoolWithTag(P, 0);
  return P;
}
