char __fastcall Interrupter_ReleaseEventRingLock(__int64 a1, char a2)
{
  char result; // al

  result = DynamicLock_Release(*(_QWORD *)(a1 + 208));
  if ( a2 )
    return Controller_RaiseAndTrackIrql(*(_QWORD *)(a1 + 8));
  return result;
}
