bool __fastcall HalpTimerWaitForPhase0Interrupt(__int64 a1)
{
  unsigned __int64 v2; // rax
  unsigned int v3; // ebx

  *(_DWORD *)(a1 + 64) = 0;
  v2 = __readcr2();
  __writecr2(v2);
  v3 = 0;
  while ( !*(_DWORD *)(a1 + 64) )
  {
    KeStallExecutionProcessor(0x2710u);
    v3 += 10;
    if ( v3 >= 0xBB8 )
      return *(_DWORD *)(a1 + 64) != 0;
  }
  return 1;
}
