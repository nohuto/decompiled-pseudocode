RGNMEMOBJTMP *__fastcall RGNMEMOBJTMP::RGNMEMOBJTMP(RGNMEMOBJTMP *this)
{
  RGNMEMOBJ::RGNMEMOBJ(this);
  RGNMEMOBJ::vPushThreadGuardedObject(this);
  return this;
}
