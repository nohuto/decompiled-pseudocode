__int64 __fastcall Crashdump_Endpoint_StopEndpoint(__int64 a1)
{
  __int64 v2; // r9
  int v3; // ebx
  __int64 v4; // rax
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF

  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_Endpoint_StopEndpoint: begin\n");
  v2 = *(unsigned int *)(a1 + 32);
  if ( (**(_DWORD **)(a1 + 40) & 7) == 1 )
  {
    DbgPrintEx(0x93u, 3u, "XHCIDUMP: Endpoint %u running, stopping now\n", v2);
    v4 = *(_QWORD *)(a1 + 24);
    v6 = 0LL;
    HIDWORD(v6) = ((*(_DWORD *)(a1 + 32) & 0x1F | (*(unsigned __int8 *)(v4 + 56) << 8)) << 16) | 0x3C00;
    v3 = Crashdump_Command_SendCommand(*(_QWORD *)(a1 + 16), (__int64)&v6, 0LL);
    if ( v3 >= 0 )
    {
      if ( (**(_BYTE **)(a1 + 40) & 7) != 3 )
      {
        DbgPrintEx(0x93u, 1u, "XHCIDUMP: Endpoint %u: endpoint still not stopped\n", *(unsigned int *)(a1 + 32));
        goto LABEL_9;
      }
    }
    else
    {
      DbgPrintEx(0x93u, 1u, "XHCIDUMP: Endpoint %u: stop endpoint command completion failure\n", *(_DWORD *)(a1 + 32));
    }
  }
  else
  {
    if ( (**(_DWORD **)(a1 + 40) & 7) != 3 )
    {
      DbgPrintEx(0x93u, 1u, "XHCIDUMP: Endpoint %u is in unknown state\n", v2);
LABEL_9:
      v3 = -1073741630;
      goto LABEL_10;
    }
    DbgPrintEx(0x93u, 3u, "XHCIDUMP: Endpoint %u is currently stopped\n", v2);
    v3 = 0;
  }
LABEL_10:
  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_Endpoint_StopEndpoint: end 0x%X\n", v3);
  return (unsigned int)v3;
}
