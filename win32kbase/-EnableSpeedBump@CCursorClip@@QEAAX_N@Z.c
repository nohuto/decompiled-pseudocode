void __fastcall CCursorClip::EnableSpeedBump(CCursorClip *this, char a2)
{
  CPushLock::AcquireLockExclusive((CCursorClip *)((char *)this + 32));
  *((_BYTE *)this + 277) = a2;
  CPushLock::ReleaseLock((CCursorClip *)((char *)this + 32));
}
