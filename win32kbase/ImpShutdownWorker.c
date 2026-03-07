__int64 ImpShutdownWorker()
{
  int v1; // [rsp+30h] [rbp-68h] BYREF
  int v2; // [rsp+34h] [rbp-64h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v3; // [rsp+40h] [rbp-58h] BYREF
  int *v4; // [rsp+60h] [rbp-38h]
  int v5; // [rsp+68h] [rbp-30h]
  int v6; // [rsp+6Ch] [rbp-2Ch]
  int *v7; // [rsp+70h] [rbp-28h]
  int v8; // [rsp+78h] [rbp-20h]
  int v9; // [rsp+7Ch] [rbp-1Ch]

  ImpAcquireLock();
  if ( !ImpIsWorkerThreadEnabled )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  ImpIsWorkerThreadEnabled = 0;
  ImpReleaseLock();
  if ( !ImpWorkerEvent )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  KeSetEvent((PRKEVENT)ImpWorkerEvent, 0, 0);
  if ( (unsigned int)dword_1C02C9780 > 5 )
  {
    v6 = 0;
    v9 = 0;
    v1 = (unsigned __int8)ImpIsActive;
    v5 = 4;
    v4 = &v1;
    v2 = ImpSessionId;
    v7 = &v2;
    v8 = 4;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C02C9780, (unsigned __int8 *)dword_1C02A0400, 0LL, 0LL, 4u, &v3);
  }
  return 0LL;
}
