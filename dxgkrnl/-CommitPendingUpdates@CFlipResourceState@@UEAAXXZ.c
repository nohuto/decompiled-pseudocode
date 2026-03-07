void __fastcall CFlipResourceState::CommitPendingUpdates(CFlipResourceState *this)
{
  char v1; // al

  v1 = *((_BYTE *)this + 32);
  if ( (v1 & 4) != 0 )
  {
    v1 &= 0xFAu;
    *((_BYTE *)this + 32) = v1;
  }
  if ( (v1 & 8) != 0 )
    (*(void (__fastcall **)(CFlipResourceState *, __int64))(*(_QWORD *)this + 32LL))(this, 1LL);
}
