void __fastcall VidSchSwitchFromDevice(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // rcx
  struct _KEVENT Event; // [rsp+30h] [rbp-19h] BYREF
  _QWORD v5[10]; // [rsp+50h] [rbp+7h] BYREF
  struct _KEVENT *p_Event; // [rsp+B0h] [rbp+67h] BYREF

  v1 = *(_QWORD *)(a1 + 32);
  if ( (*(_BYTE *)(v1 + 3036) & 1) == 0 && !VidSchIsTDRPending(*(_QWORD *)(a1 + 32)) )
  {
    memset(&Event, 0, sizeof(Event));
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    memset(v5, 0, sizeof(v5));
    LODWORD(v5[0]) = 0;
    v5[3] = VidSchiSwitchNodeFromDevice;
    LODWORD(v5[5]) = 4;
    v5[4] = &Event;
    v5[6] = a1;
    VidSchSubmitGlobalCommand(v1, v5);
    v3 = *(_QWORD *)(a1 + 32);
    p_Event = &Event;
    VidSchWaitForEvents(v3, 1u, (PVOID *)&p_Event, 0LL, 0);
  }
}
