/*
 * XREFs of xxxUserPowerCalloutWorker @ 0x1C00768C0
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C002ADC0 (Win32FreePool.c)
 *     ?UnqueuePowerRequest@@YAPEAUtagPOWERREQUEST@@XZ @ 0x1C0076A60 (-UnqueuePowerRequest@@YAPEAUtagPOWERREQUEST@@XZ.c)
 *     IsxxxSetInformationThreadSupported @ 0x1C0076AE4 (IsxxxSetInformationThreadSupported.c)
 *     EtwTraceCompletePowerRequest @ 0x1C0076B10 (EtwTraceCompletePowerRequest.c)
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C0076B30 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1C00C0DF8 (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

__int64 xxxUserPowerCalloutWorker()
{
  int v0; // esi
  __int64 v1; // rdi
  int v2; // eax
  struct tagPOWERREQUEST *v3; // rbx
  struct _WIN32_POWEREVENT_PARAMETERS *v4; // rcx
  int v5; // eax
  __int128 v7; // [rsp+30h] [rbp-38h] BYREF
  __int64 v8; // [rsp+40h] [rbp-28h]
  __int128 v9; // [rsp+48h] [rbp-20h] BYREF
  __int64 v10; // [rsp+58h] [rbp-10h]

  v0 = 0;
  v9 = 0LL;
  v10 = 0LL;
  v1 = 1LL;
  if ( grpdeskRitInput )
  {
    if ( (int)IsxxxSetInformationThreadSupported() < 0 )
      goto LABEL_26;
    v2 = (int)qword_1C0257608;
    if ( qword_1C0257608 )
      v2 = qword_1C0257608(-2LL, 7LL, &v9, 24LL);
    if ( v2 < 0 )
LABEL_26:
      v1 = 0LL;
    else
      v0 = 1;
  }
  gpPowerThread = KeGetCurrentThread();
  while ( 1 )
  {
    v3 = UnqueuePowerRequest();
    if ( !v3 )
      break;
    if ( v1 )
    {
      v8 = 0LL;
      v7 = 0LL;
      if ( qword_1C0256FC0 )
        qword_1C0256FC0(v3, &v7, CancelPowerRequest);
      gpPowerRequestCurrent = v3;
      v4 = (struct _WIN32_POWEREVENT_PARAMETERS *)*((_QWORD *)v3 + 8);
      if ( v4 )
        v5 = xxxUserPowerEventCalloutWorker(v4);
      else
        v5 = xxxUserPowerStateCalloutWorker();
      *((_DWORD *)v3 + 14) = v5;
      gpPowerRequestCurrent = 0LL;
      if ( qword_1C0256FD0 )
        qword_1C0256FD0(&v7);
    }
    if ( *((_BYTE *)v3 + 72) )
    {
      KeSetEvent((PRKEVENT)((char *)v3 + 16), 1, 0);
    }
    else
    {
      EtwTraceCompletePowerRequest(v3, *((unsigned int *)v3 + 14));
      Win32FreePool((__int64)v3);
    }
  }
  if ( v0 && (int)IsxxxSetInformationThreadSupported() >= 0 && qword_1C0257608 )
    qword_1C0257608(-2LL, 9LL, &v9, 24LL);
  return 1LL;
}
