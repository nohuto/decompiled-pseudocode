char __fastcall xxxKELocaleProcs(struct tagKE *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9

  v5 = *(_QWORD *)(SGDGetUserSessionState(a1, a2, a3, a4) + 13840);
  if ( (*(_DWORD *)(v5 + 80) & 1) != 0 || *(_DWORD *)(SGDGetUserSessionState(v6, v5, v7, v8) + 13920) )
    xxxAltGr(a1);
  v14 = *(unsigned int *)(SGDGetUserSessionState(v10, v9, v11, v12) + 13856);
  if ( (v14 & 2) == 0 && (*(_DWORD *)(*(_QWORD *)(SGDGetUserSessionState(v14, v13, v15, v16) + 13840) + 80LL) & 2) == 0
    || (unsigned int)xxxShiftLock(a1) )
  {
    return 1;
  }
  InputTraceLogging::Keyboard::DropInput(14LL);
  return 0;
}
