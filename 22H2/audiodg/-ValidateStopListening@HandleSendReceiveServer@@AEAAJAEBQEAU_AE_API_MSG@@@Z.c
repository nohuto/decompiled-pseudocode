/*
 * XREFs of ?ValidateStopListening@HandleSendReceiveServer@@AEAAJAEBQEAU_AE_API_MSG@@@Z @ 0x140051688
 * Callers:
 *     ?AeServerProcessClientRequest@HandleSendReceiveServer@@AEAAJPEAU_AE_API_MSG@@PEAU_ALPC_MESSAGE_ATTRIBUTES@@PEAX@Z @ 0x140018BE4 (-AeServerProcessClientRequest@HandleSendReceiveServer@@AEAAJPEAU_AE_API_MSG@@PEAU_ALPC_MESSAGE_A.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HandleSendReceiveServer::ValidateStopListening(
        HandleSendReceiveServer *this,
        struct _AE_API_MSG *const *a2)
{
  __int64 v2; // r8
  __int64 v4; // rdx
  signed int v6; // ebx
  DWORD ProcessId; // ebx
  int v8; // ebx
  int v10; // [rsp+40h] [rbp-38h] BYREF
  __int64 v11; // [rsp+48h] [rbp-30h]
  __int64 v12; // [rsp+50h] [rbp-28h]
  int v13; // [rsp+58h] [rbp-20h]
  __int128 v14; // [rsp+60h] [rbp-18h]
  HANDLE Process; // [rsp+80h] [rbp+8h] BYREF

  v2 = (__int64)*a2;
  Process = 0LL;
  v4 = *((_QWORD *)this + 1);
  v10 = 48;
  v11 = 0LL;
  v13 = 0;
  v12 = 0LL;
  v14 = 0LL;
  v6 = NtAlpcOpenSenderProcess(&Process, v4, v2, 0LL, 0x80000000, &v10);
  if ( v6 >= 0 )
  {
    ProcessId = GetProcessId(Process);
    v8 = -(ProcessId != GetCurrentProcessId());
    NtClose(Process);
    v6 = v8 & 0xC0000001;
    if ( v6 >= 0 )
    {
      v6 = NtAlpcSendWaitReceivePort(*((_QWORD *)this + 1), 0x10000LL, *a2, 0LL, 0LL, 0LL, 0LL, 0LL);
      if ( v6 >= 0 )
        _InterlockedExchange((volatile __int32 *)this + 14, 1);
    }
  }
  return (unsigned int)v6;
}
