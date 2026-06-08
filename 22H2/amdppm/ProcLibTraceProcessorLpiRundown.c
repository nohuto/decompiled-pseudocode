/*
 * XREFs of ProcLibTraceProcessorLpiRundown @ 0x1C001D008
 * Callers:
 *     ProcLibTraceControlCallback @ 0x1C001D5F0 (ProcLibTraceControlCallback.c)
 * Callees:
 *     ProcLibGetEventDescriptorAndProcessorId @ 0x1C0003404 (ProcLibGetEventDescriptorAndProcessorId.c)
 *     _guard_dispatch_icall_nop @ 0x1C000EAD0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C000EDC0 (memset.c)
 */

char __fastcall ProcLibTraceProcessorLpiRundown(__int64 a1)
{
  _DWORD *v2; // rdi
  const EVENT_DESCRIPTOR *EventDescriptorAndProcessorId; // rax
  const EVENT_DESCRIPTOR *v4; // r15
  unsigned __int64 v5; // rsi
  __int64 v6; // r12
  struct _EVENT_DATA_DESCRIPTOR *PoolWithTag; // rax
  struct _EVENT_DATA_DESCRIPTOR *UserData; // rbx
  _DWORD *v9; // rax
  unsigned int v10; // r9d
  _DWORD *v11; // r8
  _DWORD *v12; // rsi
  _DWORD *v13; // rdx
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+30h] [rbp-48h] BYREF
  int v19; // [rsp+88h] [rbp+10h] BYREF
  ULONG UserDataCount; // [rsp+90h] [rbp+18h]

  v19 = 0;
  v2 = 0LL;
  v18 = 0LL;
  EventDescriptorAndProcessorId = (const EVENT_DESCRIPTOR *)ProcLibGetEventDescriptorAndProcessorId(
                                                              a1,
                                                              (__int64)&PPM_ETW_PROCESSOR_LPI_STATES,
                                                              (__int64)&PPM_ETW_PROCESSOR_LPI_STATES_HV,
                                                              (__int64)&v19,
                                                              (__int64)&v18);
  v4 = EventDescriptorAndProcessorId;
  if ( EventDescriptorAndProcessorId )
  {
    LOBYTE(EventDescriptorAndProcessorId) = EtwEventEnabled(
                                              (REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Flink,
                                              EventDescriptorAndProcessorId);
    if ( (_BYTE)EventDescriptorAndProcessorId )
    {
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
        WdfDriverGlobals,
        *(_QWORD *)(a1 + 208),
        0LL);
      v5 = *(_QWORD *)(a1 + 528);
      if ( !v5
        || (v6 = *(unsigned int *)(v5 + 16),
            UserDataCount = 2 * v6 + 4,
            PoolWithTag = (struct _EVENT_DATA_DESCRIPTOR *)ExAllocatePoolWithTag(
                                                             PagedPool,
                                                             16LL * UserDataCount,
                                                             0x72637250u),
            (UserData = PoolWithTag) == 0LL) )
      {
LABEL_12:
        LOBYTE(EventDescriptorAndProcessorId) = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
                                                  WdfDriverGlobals,
                                                  *(_QWORD *)(a1 + 208));
        return (char)EventDescriptorAndProcessorId;
      }
      memset(PoolWithTag, 0, 16LL * (unsigned int)(2 * v6 + 4));
      *UserData = v18;
      UserData[1].Reserved = 0;
      UserData[2].Reserved = 0;
      UserData[3].Ptr = v5 + 16;
      UserData[1].Ptr = v5;
      UserData[1].Size = 4;
      UserData[2].Ptr = v5 + 8;
      UserData[2].Size = 8;
      *(_QWORD *)&UserData[3].Size = 4LL;
      if ( (_DWORD)v6 )
      {
        v9 = ExAllocatePoolWithTag(PagedPool, 60 * v6, 0x72637250u);
        v2 = v9;
        if ( !v9 )
          goto LABEL_10;
        memset(v9, 0, 60 * v6);
        v10 = 0;
        v11 = v2 + 2;
        v12 = (_DWORD *)(v5 + 32);
        do
        {
          v13 = v11 - 2;
          *v13 = *(v12 - 2);
          v14 = 2 * v10 + 4;
          *(v11 - 1) = *(v12 - 1);
          v15 = *v12;
          v12 += 20;
          *v11 = v15;
          v11 += 15;
          *(v11 - 14) = *(v12 - 19);
          *(v11 - 13) = *(v12 - 18);
          *(v11 - 12) = *(v12 - 17);
          *(_QWORD *)(v11 - 11) = *((_QWORD *)v12 - 8);
          *(v11 - 9) = *(v12 - 14);
          *((_QWORD *)v11 - 4) = *(_QWORD *)(v12 - 13);
          *(v11 - 6) = *(v12 - 11);
          *(_QWORD *)(v11 - 5) = *((_QWORD *)v12 - 5);
          *(v11 - 3) = *(v12 - 8);
          UserData[v14].Ptr = (unsigned __int64)v13;
          *(_QWORD *)&UserData[v14].Size = 60LL;
          LODWORD(v13) = *((unsigned __int16 *)v12 - 11);
          v16 = 2 * v10++ + 5;
          UserData[v16].Ptr = *((_QWORD *)v12 - 2);
          *(_QWORD *)&UserData[v16].Size = (unsigned int)v13;
        }
        while ( v10 < (unsigned int)v6 );
      }
      EtwWrite((REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Flink, v4, 0LL, UserDataCount, UserData);
LABEL_10:
      ExFreePoolWithTag(UserData, 0x72637250u);
      if ( v2 )
        ExFreePoolWithTag(v2, 0x72637250u);
      goto LABEL_12;
    }
  }
  return (char)EventDescriptorAndProcessorId;
}
