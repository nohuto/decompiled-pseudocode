char __fastcall Interrupter_AcquireEventRingLock(__int64 a1)
{
  char v1; // di

  v1 = 0;
  if ( *(_BYTE *)(a1 + 216) && KeGetCurrentIrql() == 2 )
  {
    Controller_LowerAndTrackIrql(*(_QWORD **)(a1 + 8));
    v1 = 1;
  }
  DynamicLock_Acquire(*(_QWORD *)(a1 + 208));
  return v1;
}
