/*
 * XREFs of HamRpcSrvConnectStateChangeNotifications @ 0x18003D7B0
 * Callers:
 *     <none>
 * Callees:
 *     ?HamSrvDisconnect@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18000863C (-HamSrvDisconnect@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     CempRpcQueryClientInformation @ 0x180008890 (CempRpcQueryClientInformation.c)
 *     ?HamSrvConnect@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAT_RM_SID@@PEAXKW4_HAM_CLIENT_TYPE@@KPEAU_HAM_LOCAL_CALLBACKS@@2PEAT_HAM_STATE_CHANGE_FLAGS@@PEAPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x1800093B8 (-HamSrvConnect@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAT_RM_SID@@PEAXKW4_HAM_CLIENT_TYPE@@KPEAU_HAM_.c)
 *     _tlgKeywordOn @ 0x180010380 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002E148 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800448B0 (__security_check_cookie.c)
 */

__int64 __fastcall HamRpcSrvConnectStateChangeNotifications(
        void *a1,
        int *a2,
        struct _HAM_CLIENT_CONTEXT **a3,
        _QWORD *a4)
{
  int v7; // ebx
  struct _HAM_CLIENT_CONTEXT *v8; // rax
  struct _HAM_CLIENT_CONTEXT *v9; // rcx
  __int64 v11; // rcx
  __int64 v12; // [rsp+38h] [rbp-C8h]
  __int64 v13; // [rsp+40h] [rbp-C0h]
  unsigned int v14; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-98h] BYREF
  int TokenInformation; // [rsp+70h] [rbp-90h] BYREF
  struct _HAM_CLIENT_CONTEXT *v17; // [rsp+78h] [rbp-88h] BYREF
  _BYTE DestinationSid[80]; // [rsp+80h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v19; // [rsp+D0h] [rbp-30h] BYREF
  unsigned int *v20; // [rsp+F0h] [rbp-10h]
  int v21; // [rsp+F8h] [rbp-8h]
  int v22; // [rsp+FCh] [rbp-4h]

  v17 = 0LL;
  Handle = 0LL;
  v7 = CempRpcQueryClientInformation(a1, DestinationSid, &TokenInformation, &v14, 0LL, &Handle);
  if ( v7 < 0 )
  {
    if ( (unsigned int)dword_1800B3218 > 4 && tlgKeywordOn((__int64)&dword_1800B3218, 8LL) )
    {
      v22 = 0;
      v20 = &v14;
      v14 = v7;
      v21 = 4;
      tlgWriteTransfer_EventWriteTransfer(v11, (unsigned __int8 *)dword_1800A1B56, 0LL, 0LL, 3u, &v19);
    }
  }
  else
  {
    v7 = HamSrvConnect(
           (__int64)RmSvcGlobals + 1768,
           v14,
           (__int64)DestinationSid,
           (__int64)Handle,
           TokenInformation,
           6,
           0,
           v12,
           v13,
           a2,
           (__int64)&v17);
    if ( v7 < 0 )
    {
      v9 = v17;
    }
    else
    {
      v8 = v17;
      v9 = 0LL;
      *a3 = v17;
      v7 = 0;
      *a4 = *((_QWORD *)v8 + 13);
    }
    if ( v9 )
      HamSrvDisconnect(v9);
  }
  if ( Handle )
    NtClose(Handle);
  return (unsigned int)v7;
}
