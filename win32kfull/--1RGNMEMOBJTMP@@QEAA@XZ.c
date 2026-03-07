void __fastcall RGNMEMOBJTMP::~RGNMEMOBJTMP(RGNMEMOBJTMP *this)
{
  RGNMEMOBJ::vPopThreadGuardedObject(this);
  RGNOBJ::vDeleteRGNOBJ(this);
}
