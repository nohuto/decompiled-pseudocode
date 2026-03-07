char __fastcall QHelper::HasPendingMouseMove(QHelper *this, const struct CInputDest *a2)
{
  __int64 Queue; // rax
  char v3; // cl

  Queue = CInputDest::GetQueue((__int64)this, 2);
  v3 = 0;
  if ( Queue )
    return (*(_DWORD *)(Queue + 396) & 0x20) != 0;
  return v3;
}
