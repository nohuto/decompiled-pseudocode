void __fastcall BLTQUEUE::ResetInternal(BLTQUEUE *this)
{
  BLTQUEUE::DiscardPendingPresent(this);
  BLTQUEUE::StopVSync(this, 0LL, 11LL);
  if ( (*((_DWORD *)this + 238) & 1) != 0 )
  {
    KeDetachProcess();
    *((_DWORD *)this + 238) &= ~1u;
  }
}
