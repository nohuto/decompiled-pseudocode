__int64 __fastcall Crashdump_UsbDevice_Cleanup(__int64 a1)
{
  unsigned int v2; // edi
  __int64 *v3; // rsi
  __int64 v4; // rbx
  int v5; // ebx

  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_UsbDevice_Cleanup: begin\n");
  memset(*(void **)(a1 + 40), 0, *(unsigned int *)(a1 + 48));
  v2 = 1;
  v3 = (__int64 *)(a1 + 120);
  while ( 1 )
  {
    v4 = *v3;
    if ( *v3 )
    {
      DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_Endpoint_Cleanup: begin\n");
      *(_DWORD *)(v4 + 160) = 0;
      *(_QWORD *)(v4 + 168) = 1LL;
      v5 = Crashdump_Endpoint_StopEndpoint(v4);
      DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_Endpoint_Cleanup: end 0x%X\n", v5);
      if ( v5 < 0 )
        break;
    }
    ++v2;
    ++v3;
    if ( v2 >= 0x20 )
    {
      v5 = 0;
      goto LABEL_6;
    }
  }
  DbgPrintEx(0x93u, 1u, "XHCIDUMP: Crashdump_Endpoint_Cleanup failed with 0x%X\n", v5);
LABEL_6:
  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_UsbDevice_Cleanup: end 0x%X\n", v5);
  return (unsigned int)v5;
}
