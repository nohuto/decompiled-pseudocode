/*
 * XREFs of PoFxSetComponentLatency @ 0x1402EE7E0
 * Callers:
 *     DifPoFxSetComponentLatencyWrapper @ 0x1405E7760 (DifPoFxSetComponentLatencyWrapper.c)
 * Callees:
 *     EtwWriteEx @ 0x140231630 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x140231870 (EtwEventEnabled.c)
 *     PopPepComponentSetLatency @ 0x1402EE890 (PopPepComponentSetLatency.c)
 *     PopFxAddLogEntry @ 0x140306584 (PopFxAddLogEntry.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

__int64 __fastcall PoFxSetComponentLatency(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // edi
  REGHANDLE v6; // rsi
  int v8; // [rsp+40h] [rbp-9h] BYREF
  __int64 v9; // [rsp+48h] [rbp-1h] BYREF
  __int64 v10; // [rsp+50h] [rbp+7h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp+Fh] BYREF
  int *v12; // [rsp+68h] [rbp+1Fh]
  int v13; // [rsp+70h] [rbp+27h]
  int v14; // [rsp+74h] [rbp+2Bh]
  __int64 *v15; // [rsp+78h] [rbp+2Fh]
  int v16; // [rsp+80h] [rbp+37h]
  int v17; // [rsp+84h] [rbp+3Bh]

  v8 = a2;
  v10 = a3;
  v9 = *(_QWORD *)(a1 + 48);
  v5 = a2;
  PopFxAddLogEntry(v9, a2, 9LL, a3);
  if ( PopDiagHandleRegistered )
  {
    v6 = PopDiagHandle;
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_COMPONENT_LATENCY) )
    {
      UserData.Reserved = 0;
      v14 = 0;
      v17 = 0;
      UserData.Ptr = (ULONGLONG)&v9;
      UserData.Size = 8;
      v12 = &v8;
      v15 = &v10;
      v16 = 8;
      v13 = 4;
      EtwWriteEx(v6, &POP_ETW_EVENT_COMPONENT_LATENCY, 0LL, 1u, 0LL, 0LL, 3u, &UserData);
    }
  }
  return PopPepComponentSetLatency(*(_QWORD *)(a1 + 56), v5, a3);
}
