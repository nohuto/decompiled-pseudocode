RGNMEMOBJTMP *__fastcall RGNMEMOBJTMP::RGNMEMOBJTMP(RGNMEMOBJTMP *this)
{
  RGNMEMOBJ::vInitialize(this, 0x70u);
  RGNMEMOBJ::vPushThreadGuardedObject(this);
  return this;
}
