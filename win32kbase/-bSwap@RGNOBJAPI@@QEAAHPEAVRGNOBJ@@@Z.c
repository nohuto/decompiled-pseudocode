__int64 __fastcall RGNOBJAPI::bSwap(struct OBJECT **this, struct RGNOBJ *a2)
{
  if ( !(unsigned int)HmgReplaceObject(*this) )
    return 0LL;
  RGNOBJ::vSwap((RGNOBJ *)this, a2);
  return 1LL;
}
