// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_GLOBAL::PurgeAllSegments(_DWORD *a1, unsigned int a2, __int64 a3)
{
  char v6; // bp
  int v7; // edi
  int v8; // eax
  int v9; // ebx
  ULONG TimeIncrement; // eax
  _QWORD v11[12]; // [rsp+30h] [rbp-A8h] BYREF
  unsigned __int64 v12[2]; // [rsp+90h] [rbp-48h] BYREF

  if ( a1[10042] )
  {
    v6 = 0;
    v7 = 0;
    if ( (a2 & 0x26) != 0 )
    {
      v7 = MEMORY[0xFFFFF78000000320];
      v6 = 1;
    }
    *(_OWORD *)v12 = 0LL;
    memset(v11, 0, 0x58uLL);
    v11[7] = v12;
    v11[0] = -4294967194LL;
    LODWORD(v11[5]) = a2;
    v11[6] = a3;
    v8 = VIDMM_GLOBAL::QueueSystemCommandAndWait((VIDMM_GLOBAL *)a1, (struct _VIDMM_SYSTEM_COMMAND *)v11, 1);
    if ( v8 < 0 )
    {
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 270LL, 23LL, v8, a1, 0LL);
    }
    if ( v6 )
    {
      if ( v12[0] )
      {
        v9 = MEMORY[0xFFFFF78000000320];
        TimeIncrement = KeQueryTimeIncrement();
        VIDMM_PURGE_TELEMETRY::AddData((VIDMM_PURGE_TELEMETRY *)(a1 + 10312), v12[0], (v9 - v7) * TimeIncrement);
      }
    }
    VIDMM_RECYCLE_HEAP_MGR::ProcessDebounceListsGlobally(0);
  }
  else
  {
    WdLogSingleEntry3(3LL, a1, a2, a3);
  }
}
