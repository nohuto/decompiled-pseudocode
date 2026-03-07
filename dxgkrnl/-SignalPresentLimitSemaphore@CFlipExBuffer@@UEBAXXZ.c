void __fastcall CFlipExBuffer::SignalPresentLimitSemaphore(struct _KSEMAPHORE **this)
{
  if ( *((int *)this + 84) > 0 )
  {
    SignalPresentLimitSemaphore(this[41], 1);
    --*((_DWORD *)this + 84);
  }
}
