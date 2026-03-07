NTSTATUS __fastcall HUBMISC_WaitForSignal(PVOID Object, const char *a2, const void *a3)
{
  int v6; // ebx
  __int64 v7; // rax
  __int64 v8; // rbp
  NTSTATUS result; // eax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  int Timeout; // [rsp+20h] [rbp-48h]
  int Timeouta; // [rsp+20h] [rbp-48h]
  union _LARGE_INTEGER v18; // [rsp+88h] [rbp+20h] BYREF

  v6 = 0;
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         WdfDriverGlobals->Driver,
         off_1C006A1E8);
  v18.QuadPart = -600000000LL;
  v8 = v7;
  for ( result = KeWaitForSingleObject(Object, Executive, 0, 0, &v18);
        result == 258;
        result = KeWaitForSingleObject(Object, Executive, 0, 0, &v18) )
  {
    DbgPrint(
      "\nUSBHUB3 Watchdog: Thread 0x%p has waited %d minutes for %s to complete for WDF object 0x%p\n",
      KeGetCurrentThread(),
      ++v6,
      a2,
      a3);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qsqd(*(_QWORD *)(v8 + 64), v13, v14, v15, Timeouta);
  }
  if ( result < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    return WPP_RECORDER_SF_dqqs(
             *(_QWORD *)(v8 + 64),
             v10,
             v11,
             v12,
             Timeout,
             result,
             (char)KeGetCurrentThread(),
             (char)a3,
             a2);
  return result;
}
