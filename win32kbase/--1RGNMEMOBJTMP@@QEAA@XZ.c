void __fastcall RGNMEMOBJTMP::~RGNMEMOBJTMP(PVOID *this)
{
  _QWORD *v2; // rcx

  v2 = *this;
  if ( v2 )
    PopThreadGuardedObject(v2 + 11);
  REGION::vDeleteREGION(*this);
  *this = 0LL;
}
