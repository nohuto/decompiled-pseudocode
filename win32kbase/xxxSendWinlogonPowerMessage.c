__int64 __fastcall xxxSendWinlogonPowerMessage(__int64 a1, __int64 a2, __int128 *a3, __int64 a4)
{
  unsigned int v5; // edi
  __int64 v7; // rcx
  int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rcx
  _DWORD v13[4]; // [rsp+20h] [rbp-20h] BYREF
  __int128 v14; // [rsp+30h] [rbp-10h] BYREF
  signed int v15; // [rsp+68h] [rbp+28h] BYREF

  v13[0] = 0;
  v5 = a2;
  if ( !gWinLogonRpcHandle )
    return 0LL;
  if ( (_BYTE)a1 )
  {
    UserSessionSwitchLeaveCrit(a1, a2, (__int64)a3, a4);
    PoWin32CalloutDeadlockTracker::PoWin32CalloutDeadlockTracker(&v15, 1u);
    v14 = *a3;
    v8 = WmsgpSendPSPMessage(v7, v5, &v14, v13);
    PoWin32CalloutDeadlockTracker::~PoWin32CalloutDeadlockTracker((PoWin32CalloutDeadlockTracker *)&v15);
    LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&v15, v9, v10, v11);
  }
  else
  {
    PoWin32CalloutDeadlockTracker::PoWin32CalloutDeadlockTracker(&v15, 1u);
    v14 = *a3;
    v8 = WmsgpSendPSPMessage(v12, v5, &v14, v13);
    PoWin32CalloutDeadlockTracker::~PoWin32CalloutDeadlockTracker((PoWin32CalloutDeadlockTracker *)&v15);
  }
  if ( v8 >= 0 )
    return (unsigned int)v13[0];
  return (unsigned int)v8;
}
