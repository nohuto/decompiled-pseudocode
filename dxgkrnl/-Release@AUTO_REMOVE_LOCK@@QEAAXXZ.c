void __fastcall AUTO_REMOVE_LOCK::Release(PVOID *this)
{
  if ( *((_BYTE *)this + 8) )
  {
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)*this + 2, *this, 0x20u);
    *((_BYTE *)this + 8) = 0;
  }
}
