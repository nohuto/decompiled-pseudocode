__int64 __fastcall FCallerOk(__int64 a1)
{
  __int64 v2; // rcx
  HANDLE ThreadProcessId; // rax
  __int64 v4; // rcx
  HANDLE v5; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  unsigned int v10; // ebx
  __int64 CurrentProcess; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx

  v2 = *(_QWORD *)(a1 + 16);
  if ( (*(_DWORD *)(v2 + 488) & 0xC) != 0 && (*(_DWORD *)(gptiCurrent + 488LL) & 0xC) == 0 )
    return 0LL;
  ThreadProcessId = PsGetThreadProcessId(*(PETHREAD *)v2);
  v4 = gpidLogon;
  if ( ThreadProcessId == (HANDLE)gpidLogon )
  {
    v5 = PsGetThreadProcessId((PETHREAD)*gptiCurrent);
    v4 = gpidLogon;
    if ( v5 != (HANDLE)gpidLogon )
      return 0LL;
  }
  v10 = 0;
  if ( (unsigned __int8)Enforced(v4) )
    return 1LL;
  CurrentProcess = PsGetCurrentProcess(v8, v7, v9);
  if ( (unsigned int)IsProcessDwm(CurrentProcess) )
    return 1LL;
  v12 = *(_QWORD *)(gptiCurrent + 424LL);
  v13 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL);
  if ( *(_DWORD *)(v12 + 772) == *(_DWORD *)(v13 + 772) )
    return *(_DWORD *)(v12 + 776) == *(_DWORD *)(v13 + 776);
  return v10;
}
