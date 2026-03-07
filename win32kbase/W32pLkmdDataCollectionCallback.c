__int64 __fastcall W32pLkmdDataCollectionCallback(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  _QWORD *ProcessWin32Process; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // ebx
  __int128 v15; // [rsp+20h] [rbp-38h] BYREF
  __int128 v16; // [rsp+30h] [rbp-28h]
  __int128 v17; // [rsp+40h] [rbp-18h]

  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal(a1, a2, a3, a4);
  ProcessWin32Process = (_QWORD *)PsGetProcessWin32Process(a5);
  if ( (!ProcessWin32Process || *ProcessWin32Process) && (*(_QWORD *)&v15 = ProcessWin32Process) != 0LL )
  {
    *((_QWORD *)&v15 + 1) = 0LL;
    LODWORD(v16) = 0;
    *((_QWORD *)&v16 + 1) = a1;
    *(_QWORD *)&v17 = a2;
    *((_QWORD *)&v17 + 1) = a3;
    v13 = _AddWin32TriageDataToDump((struct tagWIN32_TRIAGE_DATA *)&v15);
  }
  else
  {
    v13 = -1073741811;
  }
  if ( v13 >= 0 )
    v13 = 0;
  UserSessionSwitchLeaveCrit(v10, v9, v11, v12);
  return (unsigned int)v13;
}
