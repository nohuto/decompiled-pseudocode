void __fastcall DbgkpWerCleanupContext(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rcx
  __int64 v4; // rax
  void *v5; // rcx
  _QWORD *v6; // rdi
  int v7; // eax
  void *v8; // rcx
  void *v9; // rcx
  __int64 v10; // rax
  _QWORD *v11; // rdi
  void *v12; // rcx
  _QWORD *v13; // rsi
  void *v14; // rcx
  void *v15; // rcx
  _QWORD *v16; // rsi
  int v17; // eax
  int v18; // eax

  DbgPrintEx(5u, 3u, "DBGK: DbgkpWerCleanupContext: Context 0x%p\n", (const void *)a1);
  if ( a1 )
  {
    v2 = *(void **)(a1 + 128);
    if ( v2 )
    {
      v7 = IoDiscardDeferredLiveDumpData(v2);
      if ( v7 < 0 )
        DbgPrintEx(5u, 0, "DBGK: IoDiscardDeferredLiveDumpData failed, status 0x%X\n", v7);
      *(_QWORD *)(a1 + 128) = 0LL;
    }
    v3 = *(void **)(a1 + 112);
    if ( v3 )
    {
      ExFreePoolWithTag(v3, 0x57676244u);
      *(_QWORD *)(a1 + 112) = 0LL;
    }
    v4 = *(_QWORD *)(a1 + 120);
    if ( v4 )
    {
      v8 = *(void **)(v4 + 16);
      if ( v8 )
      {
        ObfDereferenceObject(v8);
        *(_QWORD *)(*(_QWORD *)(a1 + 120) + 16LL) = 0LL;
      }
      v9 = *(void **)(*(_QWORD *)(a1 + 120) + 8LL);
      if ( v9 )
      {
        ZwClose(v9);
        *(_QWORD *)(*(_QWORD *)(a1 + 120) + 8LL) = 0LL;
      }
      v10 = *(_QWORD *)(a1 + 120);
      v11 = *(_QWORD **)(v10 + 40);
      *(_QWORD *)(v10 + 40) = 0LL;
      if ( v11 )
      {
        do
        {
          v12 = (void *)v11[2];
          v13 = (_QWORD *)v11[4];
          if ( v12 )
            ExFreePoolWithTag(v12, 0x57676244u);
          ExFreePoolWithTag(v11, 0x57676244u);
          v11 = v13;
        }
        while ( v13 );
      }
      v14 = *(void **)(a1 + 120);
      if ( v14 )
        ExFreePoolWithTag(v14, 0x57676244u);
      *(_QWORD *)(a1 + 120) = 0LL;
    }
    v5 = *(void **)(a1 + 136);
    if ( v5 )
    {
      ExFreePoolWithTag(v5, 0x57676244u);
      *(_QWORD *)(a1 + 136) = 0LL;
    }
    v6 = *(_QWORD **)(a1 + 160);
    if ( v6 )
    {
      *(_QWORD *)(a1 + 160) = 0LL;
      do
      {
        v15 = (void *)v6[2];
        v16 = (_QWORD *)v6[4];
        if ( v15 )
          ExFreePoolWithTag(v15, 0x57676244u);
        ExFreePoolWithTag(v6, 0x57676244u);
        v6 = v16;
      }
      while ( v16 );
    }
    if ( *(_QWORD *)(a1 + 96) )
    {
      if ( (*(_DWORD *)(a1 + 104) & 1) == 0 )
      {
        v17 = WerLiveKernelCancelReport();
        if ( v17 < 0 )
          DbgPrintEx(5u, 1u, "DBGK: DbgkpWerCleanupContext: WerLiveKernelCancelReport failed, 0x%X\n", v17);
      }
      v18 = WerLiveKernelCloseHandle(*(_QWORD *)(a1 + 96));
      if ( v18 < 0 )
        DbgPrintEx(5u, 1u, "DBGK: DbgkpWerCleanupContext: WerLiveKernelCloseHandle failed, 0x%X\n", v18);
      *(_QWORD *)(a1 + 96) = 0LL;
    }
  }
}
