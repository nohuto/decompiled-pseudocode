__int64 __fastcall VidSchSuspendAdapter(__int64 a1, __int64 a2, char a3)
{
  int v3; // eax
  int v5; // ecx
  __int64 v7; // rcx
  __int128 v8; // [rsp+30h] [rbp-29h] BYREF
  struct _KEVENT Event; // [rsp+40h] [rbp-19h] BYREF
  _QWORD v10[10]; // [rsp+60h] [rbp+7h] BYREF
  struct _KEVENT *p_Event; // [rsp+C0h] [rbp+67h] BYREF

  v3 = *(_DWORD *)(a1 + 724);
  v5 = *(_DWORD *)(a1 + 736);
  if ( v3 || v5 )
  {
    if ( !a3 )
      VidSchiSuspendResumeDevicesForPowerTransition(a1, 1);
    v7 = *(_QWORD *)(a1 + 256);
    v8 = 0LL;
    LODWORD(v8) = 1;
    VidSchFlushDevice(v7, (int *)&v8, 0xFFFFFFFD, 0LL);
    memset(&Event, 0, sizeof(Event));
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    memset(v10, 0, sizeof(v10));
    LODWORD(v10[0]) = 0;
    v10[3] = VidSchiDrainFlipQueue;
    LODWORD(v10[5]) = 8;
    v10[4] = &Event;
    v10[6] = a1;
    VidSchSubmitGlobalCommand(a1, (__int64)v10);
    p_Event = &Event;
    VidSchWaitForEvents(a1, 1u, (PVOID *)&p_Event, 0LL, 0);
  }
  return 0LL;
}
