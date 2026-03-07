__int64 __fastcall Crashdump_Cleanup(__int64 a1)
{
  unsigned int v2; // edi
  _QWORD *v3; // rsi
  unsigned int i; // ebp
  __int64 v5; // rdi
  int v6; // eax
  unsigned int v7; // edi
  unsigned int j; // ebp
  int v9; // eax
  int *v10; // rcx
  __int64 v11; // rdx
  int v12; // eax
  int v13; // edi
  __int64 v14; // rcx
  int v15; // eax
  signed __int32 v17[14]; // [rsp+0h] [rbp-38h] BYREF

  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_Cleanup: begin\n");
  v2 = *(_DWORD *)(a1 + 536);
  v3 = (_QWORD *)(a1 + 568);
  for ( i = 0; i < v2; ++i )
  {
    v5 = 376LL * i;
    v6 = Crashdump_UsbDevice_Cleanup(v5 + *v3);
    if ( v6 < 0 )
      DbgPrintEx(0x93u, 1u, "XHCIDUMP: Crashdump_UsbDevice_Cleanup failed with error 0x%X\n", v6);
    if ( *(_BYTE *)(a1 + 625) && (int)Crashdump_UsbDevice_ConfigureEndpointsForSaveState(v5 + *v3) < 0 )
      *(_BYTE *)(a1 + 625) = 0;
    v2 = *(_DWORD *)(a1 + 536);
  }
  v7 = v2 - 1;
  for ( j = *(_DWORD *)(a1 + 4LL * v7 + 544); v7; j = *(_DWORD *)(a1 + 4LL * v7 + 544) )
  {
    v9 = Crashdump_UsbDevice_SuspendPort(*v3 + 376LL * --v7, j);
    if ( v9 < 0 )
      DbgPrintEx(0x93u, 1u, "XHCIDUMP: Crashdump_UsbDevice_SuspendPort failed with error 0x%X\n", v9);
  }
  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_Register_SuspendPort: begin: port %u\n", j);
  v10 = (int *)(*(_QWORD *)(*(_QWORD *)a1 + 32LL) + 16 * (j - 1 + 64LL));
  *v10 = *v10 & 0xE00C200 | 0x60;
  _InterlockedOr(v17, 0);
  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_Register_SuspendPort: end 0x%X\n", 0);
  LOBYTE(v11) = 1;
  v12 = Crashdump_Command_Stop(a1 + 328, v11);
  if ( v12 < 0 )
    DbgPrintEx(0x93u, 1u, "XHCIDUMP: Crashdump_Command_Stop failed with error 0x%X\n", v12);
  v13 = Crashdump_Register_StopController(a1);
  if ( v13 >= 0 && *(_BYTE *)(a1 + 625) )
  {
    v14 = **(_QWORD **)(*(_QWORD *)(*(_QWORD *)(a1 + 616) + 128LL) + 32LL);
    *(_QWORD *)(v14 + 136) = *(_QWORD *)(a1 + 272);
    *(_DWORD *)(v14 + 112) = *(_DWORD *)(a1 + 280);
    *(_DWORD *)(v14 + 116) = *(_DWORD *)(a1 + 284);
    *(_DWORD *)(v14 + 120) = *(_DWORD *)(a1 + 288);
    *(_DWORD *)(v14 + 124) = *(_DWORD *)(a1 + 292);
    *(_DWORD *)(v14 + 128) = *(_DWORD *)(a1 + 296);
    *(_QWORD *)(v14 + 144) = *(_QWORD *)(a1 + 304);
    *(_OWORD *)(v14 + 160) = *(_OWORD *)(a1 + 312);
    v15 = Crashdump_Register_SaveStateForHybridSleep(a1);
    v13 = v15;
    if ( v15 >= 0 )
      DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_Register_SaveStateForHybridSleep succeeded.\n");
    else
      DbgPrintEx(0x93u, 1u, "XHCIDUMP: Crashdump_Register_SaveStateForHybridSleep failed with error 0x%X\n", v15);
  }
  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_Cleanup: end\n");
  return (unsigned int)v13;
}
