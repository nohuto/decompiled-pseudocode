_BOOL8 __fastcall PopDripsWatchdogScheduleNextTimer(__int64 a1)
{
  __int64 v2; // rdx
  _BOOL8 result; // rax
  _QWORD v4[3]; // [rsp+20h] [rbp-18h] BYREF

  v4[0] = 0LL;
  v4[1] = -1LL;
  *(_QWORD *)(a1 + 184) = MEMORY[0xFFFFF78000000008];
  v2 = -10000000LL * *(unsigned int *)(a1 + 176);
  if ( *(_DWORD *)(a1 + 168) )
    PopOkayToQueueNextWorkItem(a1 + 136);
  result = KeSetTimer2(a1, v2, 0LL, (__int64)v4);
  *(_DWORD *)(a1 + 180) |= 2u;
  return result;
}
