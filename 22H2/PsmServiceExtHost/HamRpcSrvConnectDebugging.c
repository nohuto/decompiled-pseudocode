/*
 * XREFs of HamRpcSrvConnectDebugging @ 0x18003D8D0
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

__int64 __fastcall HamRpcSrvConnectDebugging(void *a1, struct _HAM_CLIENT_CONTEXT **a2, _QWORD *a3)
{
  int v5; // ebx
  struct _HAM_CLIENT_CONTEXT *v6; // rax
  struct _HAM_CLIENT_CONTEXT *v7; // rcx
  __int64 v9; // rcx
  __int64 v10; // [rsp+38h] [rbp-C8h]
  __int64 v11; // [rsp+40h] [rbp-C0h]
  unsigned int v12; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-98h] BYREF
  int TokenInformation; // [rsp+70h] [rbp-90h] BYREF
  struct _HAM_CLIENT_CONTEXT *v15; // [rsp+78h] [rbp-88h] BYREF
  _BYTE DestinationSid[80]; // [rsp+80h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v17; // [rsp+D0h] [rbp-30h] BYREF
  unsigned int *v18; // [rsp+F0h] [rbp-10h]
  int v19; // [rsp+F8h] [rbp-8h]
  int v20; // [rsp+FCh] [rbp-4h]

  v15 = 0LL;
  Handle = 0LL;
  v5 = CempRpcQueryClientInformation(a1, DestinationSid, &TokenInformation, &v12, 0LL, &Handle);
  if ( v5 < 0 )
  {
    if ( (unsigned int)dword_1800B3218 > 4 && tlgKeywordOn((__int64)&dword_1800B3218, 8LL) )
    {
      v20 = 0;
      v18 = &v12;
      v12 = v5;
      v19 = 4;
      tlgWriteTransfer_EventWriteTransfer(v9, (unsigned __int8 *)dword_1800A1B20, 0LL, 0LL, 3u, &v17);
    }
  }
  else
  {
    v5 = HamSrvConnect(
           (__int64)RmSvcGlobals + 1768,
           v12,
           (__int64)DestinationSid,
           (__int64)Handle,
           TokenInformation,
           1,
           0,
           v10,
           v11,
           0LL,
           (__int64)&v15);
    if ( v5 < 0 )
    {
      v7 = v15;
    }
    else
    {
      v6 = v15;
      v7 = 0LL;
      *a2 = v15;
      v5 = 0;
      *a3 = *((_QWORD *)v6 + 13);
    }
    if ( v7 )
      HamSrvDisconnect(v7);
  }
  if ( Handle )
    NtClose(Handle);
  return (unsigned int)v5;
}
