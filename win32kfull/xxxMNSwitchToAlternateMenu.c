__int64 __fastcall xxxMNSwitchToAlternateMenu(__int64 **a1, __int64 a2)
{
  __int64 *v2; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rcx
  __int64 *v8; // rax
  __int64 v9; // rcx
  int v10; // edx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  _QWORD v15[2]; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v16[2]; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v17[2]; // [rsp+50h] [rbp-30h] BYREF
  __int128 v18; // [rsp+60h] [rbp-20h] BYREF
  __int64 v19; // [rsp+70h] [rbp-10h]
  __int64 v20; // [rsp+B0h] [rbp+30h] BYREF

  v19 = 0LL;
  v2 = *a1;
  v20 = 0LL;
  v18 = 0LL;
  if ( (*(_DWORD *)*v2 & 1) == 0 || !*(_QWORD *)(**a1 + 48) || (*(_DWORD *)**a1 & 0x8000) != 0 )
    return 0LL;
  if ( !*(_QWORD *)(**a1 + 16) )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 1041);
  if ( !a2 )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 1043);
    return 0LL;
  }
  ThreadLock(*(_QWORD *)(**a1 + 8), &v18);
  xxxMNSelectItem(a1, a2, -1);
  v7 = **a1;
  if ( !*(_QWORD *)(v7 + 48) || (*(_BYTE *)(_HMPheFromObject(*(_QWORD *)(**a1 + 48)) + 25) & 1) != 0 )
  {
    ThreadUnlock1(v7, v5, v6);
    return 0LL;
  }
  if ( !*(_QWORD *)(**a1 + 40)
    || *(_QWORD *)(*(_QWORD *)(**a1 + 40) + 80LL) != *(_QWORD *)(*(_QWORD *)(**a1 + 48) + 80LL) )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 1065);
  }
  v8 = *a1;
  v15[0] = &v20;
  v15[1] = *(_QWORD *)(*v8 + 48);
  HMAssignmentLock(v15, 0LL);
  v9 = **a1 + 48;
  v16[1] = *(_QWORD *)(**a1 + 40);
  v16[0] = v9;
  HMAssignmentLock(v16, 0LL);
  v17[0] = **a1 + 40;
  v17[1] = v20;
  HMAssignmentLock(v17, 0LL);
  HMAssignmentUnlock(&v20);
  if ( !*(_QWORD *)(**a1 + 8) || (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(**a1 + 8) + 40LL) + 30LL) & 8) != 0 )
  {
    if ( *(_QWORD *)(**a1 + 8) && *(_QWORD *)(*(_QWORD *)(**a1 + 8) + 160LL) )
    {
      v10 = 0;
      if ( *(_QWORD *)(*(_QWORD *)(**a1 + 8) + 160LL) == *(_QWORD *)(**a1 + 40) )
        v10 = 2;
      *(_DWORD *)(a2 + 8) = *(_DWORD *)(a2 + 8) & 0xFFFFFFFD | v10;
    }
    else
    {
      *(_DWORD *)(a2 + 8) ^= (*(_DWORD *)(a2 + 8) ^ (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 40) + 40LL) + 40LL) >> 6)) & 2;
    }
  }
  else
  {
    *(_DWORD *)(a2 + 8) &= ~2u;
  }
  *(_DWORD *)**a1 ^= (*(_DWORD *)**a1 ^ (2 * *(_DWORD *)(a2 + 8))) & 4;
  xxxWindowEvent(5u, *(struct tagWND **)(**a1 + 8), ~(*(_DWORD *)**a1 >> 1) | 0xFFFFFFFD, 0, 0);
  xxxWindowEvent(4u, *(struct tagWND **)(**a1 + 8), (*(_DWORD *)**a1 >> 1) | 0xFFFFFFFD, 0, 0);
  ThreadUnlock1(v12, v11, v13);
  return 1LL;
}
