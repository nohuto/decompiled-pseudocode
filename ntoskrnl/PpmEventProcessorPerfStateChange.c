/*
 * XREFs of PpmEventProcessorPerfStateChange @ 0x1402ED92C
 * Callers:
 *     PpmPerfArbitratorApplyProcessorState @ 0x1402ED6EC (PpmPerfArbitratorApplyProcessorState.c)
 *     PpmPerfApplyHiddenProcessorState @ 0x14058AB3C (PpmPerfApplyHiddenProcessorState.c)
 * Callees:
 *     EtwWriteEx @ 0x140231630 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x140231870 (EtwEventEnabled.c)
 *     PpmEventGetEventDescriptorAndProcessorId @ 0x140233B18 (PpmEventGetEventDescriptorAndProcessorId.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

char __fastcall PpmEventProcessorPerfStateChange(__int64 a1, int a2, int a3)
{
  const EVENT_DESCRIPTOR *EventDescriptorAndProcessorId; // rax
  const EVENT_DESCRIPTOR *v5; // rdi
  REGHANDLE v6; // rbx
  __int64 v7; // rdx
  int v9; // [rsp+40h] [rbp-C0h] BYREF
  int v10; // [rsp+44h] [rbp-BCh] BYREF
  int v11; // [rsp+48h] [rbp-B8h] BYREF
  int v12; // [rsp+4Ch] [rbp-B4h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-B0h] BYREF
  int *v14; // [rsp+60h] [rbp-A0h]
  __int64 v15; // [rsp+68h] [rbp-98h]
  _BYTE v16[16]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v17; // [rsp+80h] [rbp-80h]
  __int64 v18; // [rsp+88h] [rbp-78h]
  __int64 v19; // [rsp+90h] [rbp-70h]
  __int64 v20; // [rsp+98h] [rbp-68h]
  __int64 v21; // [rsp+A0h] [rbp-60h]
  __int64 v22; // [rsp+A8h] [rbp-58h]
  __int64 v23; // [rsp+B0h] [rbp-50h]
  __int64 v24; // [rsp+B8h] [rbp-48h]
  __int64 v25; // [rsp+C0h] [rbp-40h]
  __int64 v26; // [rsp+C8h] [rbp-38h]
  __int64 v27; // [rsp+D0h] [rbp-30h]
  __int64 v28; // [rsp+D8h] [rbp-28h]
  int *v29; // [rsp+E0h] [rbp-20h]
  __int64 v30; // [rsp+E8h] [rbp-18h]
  int *v31; // [rsp+F0h] [rbp-10h]
  __int64 v32; // [rsp+F8h] [rbp-8h]
  int *v33; // [rsp+100h] [rbp+0h]
  __int64 v34; // [rsp+108h] [rbp+8h]
  int v35; // [rsp+158h] [rbp+58h] BYREF
  int v36; // [rsp+160h] [rbp+60h] BYREF

  v36 = a3;
  v35 = a2;
  v9 = 0;
  EventDescriptorAndProcessorId = (const EVENT_DESCRIPTOR *)PpmEventGetEventDescriptorAndProcessorId(
                                                              a1,
                                                              (__int64)&PPM_ETW_PROCESSOR_PERF_STATE_CHANGE,
                                                              (__int64)&PPM_ETW_PROCESSOR_PERF_STATE_CHANGE_HV,
                                                              (__int64)&v9,
                                                              (__int64)v16);
  v5 = EventDescriptorAndProcessorId;
  if ( PpmEtwRegistered )
  {
    v6 = PpmEtwHandle;
    LOBYTE(EventDescriptorAndProcessorId) = EtwEventEnabled(PpmEtwHandle, EventDescriptorAndProcessorId);
    if ( (_BYTE)EventDescriptorAndProcessorId )
    {
      v7 = *(_QWORD *)(a1 + 8);
      v10 = *(_DWORD *)(v7 + 64);
      v11 = *(_DWORD *)(v7 + 76);
      UserData.Ptr = (ULONGLONG)&v10;
      v14 = &v11;
      v17 = v7 + 72;
      v19 = v7 + 88;
      v21 = v7 + 80;
      v23 = v7 + 84;
      v25 = v7 + 92;
      v27 = v7 + 96;
      *(_QWORD *)&UserData.Size = 4LL;
      v15 = 4LL;
      v18 = 4LL;
      v20 = 4LL;
      v22 = 4LL;
      v24 = 4LL;
      v26 = 4LL;
      v28 = 4LL;
      v12 = *(unsigned __int8 *)(v7 + 100);
      v29 = &v12;
      v31 = &v35;
      v33 = &v36;
      v30 = 4LL;
      v32 = 4LL;
      v34 = 4LL;
      LOBYTE(EventDescriptorAndProcessorId) = EtwWriteEx(v6, v5, 0LL, 0, 0LL, 0LL, 0xCu, &UserData);
    }
  }
  return (char)EventDescriptorAndProcessorId;
}
