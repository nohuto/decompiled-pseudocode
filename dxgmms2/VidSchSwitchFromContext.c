char __fastcall VidSchSwitchFromContext(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // rbx
  struct _KEVENT Event; // [rsp+30h] [rbp-19h] BYREF
  _QWORD v6[10]; // [rsp+50h] [rbp+7h] BYREF
  struct _KEVENT *p_Event; // [rsp+B0h] [rbp+67h] BYREF

  v1 = *(_QWORD *)(a1 + 104);
  v3 = *(_QWORD *)(v1 + 32);
  if ( v1 != *(_QWORD *)(v3 + 240) && (*(_BYTE *)(v3 + 3036) & 1) == 0 )
  {
    LOBYTE(v1) = VidSchIsTDRPending(*(_QWORD *)(v1 + 32));
    if ( !(_BYTE)v1 )
    {
      v1 = *(_QWORD *)(a1 + 96);
      if ( a1 == *(_QWORD *)(v1 + 224) )
      {
        memset(&Event, 0, sizeof(Event));
        KeInitializeEvent(&Event, SynchronizationEvent, 0);
        memset(v6, 0, sizeof(v6));
        LODWORD(v6[0]) = 0;
        v6[3] = VidSchiSwitchNodeFromContext;
        LODWORD(v6[5]) = 1;
        v6[4] = &Event;
        v6[6] = a1;
        VidSchSubmitGlobalCommand(v3, (__int64)v6);
        p_Event = &Event;
        LOBYTE(v1) = VidSchWaitForEvents(v3, 1u, (PVOID *)&p_Event, 0LL, 0);
      }
    }
  }
  return v1;
}
