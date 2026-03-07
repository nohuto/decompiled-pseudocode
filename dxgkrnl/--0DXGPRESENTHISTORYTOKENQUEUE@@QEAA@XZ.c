DXGPRESENTHISTORYTOKENQUEUE *__fastcall DXGPRESENTHISTORYTOKENQUEUE::DXGPRESENTHISTORYTOKENQUEUE(
        DXGPRESENTHISTORYTOKENQUEUE *this)
{
  KeInitializeSpinLock((PKSPIN_LOCK)this);
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  InitializeSListHead((PSLIST_HEADER)this + 2);
  InitializeSListHead((PSLIST_HEADER)this + 3);
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  memset((char *)this + 80, 0, 0x4800uLL);
  return this;
}
