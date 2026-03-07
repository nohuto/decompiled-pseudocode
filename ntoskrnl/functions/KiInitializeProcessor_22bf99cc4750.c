__int64 __fastcall KiInitializeProcessor(__int64 a1)
{
  int v1; // esi
  int v3; // ecx
  _BYTE v5[40]; // [rsp+20h] [rbp-28h] BYREF

  v1 = KeDpcWatchdogProfileBufferSizeBytes;
  memset(v5, 0, 32);
  if ( KeThreadDpcEnable )
  {
    KeInitializeGate(a1 + 32320, 0);
    KiInitializeDpcList((_QWORD *)(a1 + 13168));
    *(_QWORD *)(a1 + 13184) = 0LL;
    *(_DWORD *)(a1 + 13192) = 0;
  }
  KeInitializeThreadedDpc((PRKDPC)(a1 + 34264), (PKDEFERRED_ROUTINE)KiDpcWatchdog, (PVOID)*(unsigned int *)(a1 + 36));
  v3 = *(_DWORD *)(a1 + 36);
  *(_BYTE *)(a1 + 34265) = 2;
  if ( !*(_QWORD *)(a1 + 34320) )
    *(_WORD *)(a1 + 34266) = v3 + 2048;
  KiCreateDpcLimitsProcessorConfiguration((__int64)v5, 0, v1);
  return KiApplyProcessorDpcLimits(a1, v5);
}
