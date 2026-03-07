__int64 __fastcall HUBPSM20_ErrorOnWaitingForResumeTimerToFlush(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 960);
  result = 3049LL;
  if ( (*(_BYTE *)(v1 + 194) & 0x10) != 0 && (*(_BYTE *)(v1 + 184) & 2) != 0 )
    return 3021LL;
  return result;
}
