/*
 * XREFs of PbmRegisterAppManagerNotification @ 0x180023980
 * Callers:
 *     <none>
 * Callees:
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x18001B7E4 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 *     ?TsSessionIdAddAppManagerClient@@YAJPEAVCProcess@@@Z @ 0x180028D80 (-TsSessionIdAddAppManagerClient@@YAJPEAVCProcess@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PbmRegisterAppManagerNotification(void *a1)
{
  int Process; // ebx
  struct CProcess *v2; // rdi
  struct CProcess *v4; // [rsp+40h] [rbp+18h] BYREF

  Process = 0;
  v4 = 0LL;
  if ( g_ApplicationManager )
  {
    Process = CApplicationManager::RpcGetProcess(g_ApplicationManager, a1, &v4);
    if ( Process >= 0 )
    {
      Process = TsSessionIdAddAppManagerClient(v4);
      if ( Process >= 0 )
        *((_DWORD *)v4 + 121) = 1;
    }
    v2 = v4;
    if ( v4 && _InterlockedExchangeAdd((volatile signed __int32 *)v4 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(struct CProcess *))(*(_QWORD *)v2 + 32LL))(v2);
      (*(void (__fastcall **)(struct CProcess *, __int64))(*(_QWORD *)v2 + 24LL))(v2, 1LL);
    }
  }
  return (unsigned int)Process;
}
