__int64 __fastcall ACPIBuildProcessDevicePhasePrx(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v4; // r15
  ULONG_PTR v5; // rdi
  __int64 v6; // rbp
  unsigned int v8; // r14d
  __int64 v9; // r13
  ULONG_PTR v10; // rdx

  v4 = a1 + 80;
  v5 = *(_QWORD *)(a1 + 40);
  v6 = (unsigned int)(*(_DWORD *)(a1 + 28) - 19) >> 1;
  v8 = 0;
  v9 = (unsigned int)(v6 + 1);
  *(_DWORD *)(a1 + 32) = 2 * v6 + 20;
  if ( *(_QWORD *)(v5 + 8 * v9 + 456) || *(_QWORD *)(v5 + 8 * v9 + 408) )
  {
    if ( !*(_QWORD *)(a1 + 56) )
      goto LABEL_9;
  }
  else
  {
    *(_QWORD *)(v5 + 8 * v9 + 456) = AMLIGetNamedChild(*(_QWORD *)(v5 + 760), *(unsigned int *)&aPs0Ps1Ps2[4 * v6]);
    v10 = *(_QWORD *)(a1 + 56);
    if ( !v10 )
      goto LABEL_9;
    if ( *(_WORD *)(v4 + 2) != 4 )
    {
      ACPIWriteEventLogEntry(3221553168LL, 0LL, 0LL);
      goto LABEL_9;
    }
    v8 = ACPIBuildDevicePowerNodes(v5, v10, v4, v9);
  }
  dword_1C006F938 = 0;
  pszDest = 0;
  FreeDataBuffs(v4, 1LL);
LABEL_9:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_dLqss(WPP_GLOBAL_Control->DeviceExtension, (unsigned int)&WPP_RECORDER_INITIALIZED, a3, a4);
  ACPIBuildCompleteMustSucceed(0LL, v8, 0LL, a1);
  return v8;
}
