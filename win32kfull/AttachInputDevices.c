/*
 * XREFs of AttachInputDevices @ 0x1C0126370
 * Callers:
 *     xxxRemoteReconnect @ 0x1C01267DC (xxxRemoteReconnect.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AttachInputDevices(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax

  if ( (_DWORD)a1 )
  {
    v1 = SGDGetUserSessionState(a1);
    CBaseInput::HandleTSRequest(*(_QWORD *)(v1 + 3272), 2LL);
    v3 = SGDGetUserSessionState(v2);
    CBaseInput::HandleTSRequest(*(_QWORD *)(v3 + 12672), 2LL);
    v5 = SGDGetUserSessionState(v4);
    v6 = 2LL;
    v7 = *(_QWORD *)(v5 + 16840);
  }
  else
  {
    WPP_MAIN_CB.DeviceLock.Header.LockNV = 1;
    v9 = SGDGetUserSessionState(a1);
    CBaseInput::HandleTSRequest(*(_QWORD *)(v9 + 3272), 0LL);
    v11 = SGDGetUserSessionState(v10);
    v6 = 0LL;
    v7 = *(_QWORD *)(v11 + 12672);
  }
  return CBaseInput::HandleTSRequest(v7, v6);
}
