void __fastcall CFlipManagerToken::UnlockAndRelease(CFlipManagerToken *this)
{
  CPushLock::ReleaseLock((CFlipManagerToken *)((char *)this + 40));
  ObfDereferenceObject((char *)this - 32);
}
