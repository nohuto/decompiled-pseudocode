void __fastcall _TdrTimedOperationGetRelativeTimeLeft(struct _DXGK_TIMED_OPERATION *a1, union _LARGE_INTEGER *a2)
{
  LARGE_INTEGER v3; // rax
  LARGE_INTEGER StartTick; // r8
  __int64 v5; // rbx
  __int64 TimeIncrement; // rcx
  __int64 v7; // rax

  v3.QuadPart = MEMORY[0xFFFFF78000000320];
  StartTick = a1->StartTick;
  if ( StartTick.QuadPart > MEMORY[0xFFFFF78000000320] )
  {
    a1->StartTick.QuadPart = MEMORY[0xFFFFF78000000320];
    StartTick = v3;
  }
  v5 = StartTick.QuadPart + a1->Timeout.QuadPart - v3.QuadPart;
  TimeIncrement = KeQueryTimeIncrement();
  v7 = 0LL;
  if ( v5 >= 0 )
    v7 = v5;
  a2->QuadPart = -(v7 * TimeIncrement);
}
