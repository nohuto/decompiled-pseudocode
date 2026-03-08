/*
 * XREFs of PopDiagTraceIrpFinish @ 0x1402BB864
 * Callers:
 *     PopRequestCompletion @ 0x1402BB410 (PopRequestCompletion.c)
 *     PopDequeueQuerySetIrp @ 0x1402BB70C (PopDequeueQuerySetIrp.c)
 * Callees:
 *     EtwWriteEx @ 0x140231630 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x140231870 (EtwEventEnabled.c)
 *     PopDiagTraceIrpFinishTelemetry @ 0x1402BB8E4 (PopDiagTraceIrpFinishTelemetry.c)
 *     IoFindDeviceThatFailedIrp @ 0x1402FC254 (IoFindDeviceThatFailedIrp.c)
 *     PopFxAddLogEntry @ 0x140306584 (PopFxAddLogEntry.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     PopDiagGetDriverName @ 0x14058F424 (PopDiagGetDriverName.c)
 */

BOOLEAN __fastcall PopDiagTraceIrpFinish(__int64 a1)
{
  BOOLEAN result; // al
  const size_t *v2; // rbx
  __int64 v3; // r8
  __int64 v4; // rdx
  int v5; // eax
  __int64 DeviceThatFailedIrp; // rax
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  int v10; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v11; // [rsp+48h] [rbp-B8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-B0h] BYREF
  int *v13; // [rsp+60h] [rbp-A0h]
  __int64 v14; // [rsp+68h] [rbp-98h]
  const size_t *v15; // [rsp+70h] [rbp-90h]
  int v16; // [rsp+78h] [rbp-88h]
  int v17; // [rsp+7Ch] [rbp-84h]
  _BYTE v18[128]; // [rsp+80h] [rbp-80h] BYREF

  v11 = a1;
  result = PopDiagTraceIrpFinishTelemetry();
  if ( PopDiagHandleRegistered )
  {
    result = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_IRPFINISH);
    if ( result )
    {
      v2 = &cchOriginalDestLength;
      v3 = *(_QWORD *)(v11 + 72LL * *(char *)(v11 + 66) + 200);
      v4 = *(int *)(v11 + 48);
      v10 = v4;
      v5 = *(_DWORD *)(v3 + 188);
      if ( (int)v4 >= 0 || v5 )
      {
        if ( v5 == 1 && *(_BYTE *)(v3 + 184) == 2 )
        {
          v7 = *(_QWORD *)(v3 + 24);
          if ( v7 )
            v8 = *(_QWORD *)(*(_QWORD *)(v7 + 312) + 40LL);
          else
            v8 = 0LL;
          PopFxAddLogEntry(v8, 0LL, 23LL, v4);
        }
      }
      else
      {
        DeviceThatFailedIrp = IoFindDeviceThatFailedIrp(v11);
        if ( (int)PopDiagGetDriverName(DeviceThatFailedIrp, v18) >= 0 )
          v2 = (const size_t *)v18;
      }
      *(_QWORD *)&UserData.Size = 8LL;
      UserData.Ptr = (ULONGLONG)&v11;
      v13 = &v10;
      v9 = -1LL;
      v14 = 4LL;
      v15 = v2;
      do
        ++v9;
      while ( *((_WORD *)v2 + v9) );
      v16 = 2 * v9 + 2;
      v17 = 0;
      return EtwWriteEx(PopDiagHandle, &POP_ETW_EVENT_IRPFINISH, 0LL, 0, 0LL, 0LL, 3u, &UserData);
    }
  }
  return result;
}
