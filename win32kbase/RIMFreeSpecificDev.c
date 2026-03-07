void __fastcall RIMFreeSpecificDev(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9

  if ( !*(_QWORD *)(a2 + 336) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 854LL);
  if ( a1 != *(_QWORD *)(a2 + 336) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 855LL);
  if ( *(_QWORD *)(a1 + 832) && !*(_DWORD *)(a1 + 1056) && (*(_DWORD *)(a2 + 184) & 0x2000) != 0 )
    goto LABEL_8;
  Feature_RIMUserCritOpt__private_ReportDeviceUsage();
  if ( IS_USERCRIT_OWNED_AT_ALL(v5, v4, v6, v7) )
  {
    rimDoRimDevChange(a1, a2, 4LL);
LABEL_8:
    rimFreeSpecificDevFinal(a1, a2);
    return;
  }
  rimQueueRimDevChangeAsyncWorkItem((_QWORD *)a1, a2, 4);
}
