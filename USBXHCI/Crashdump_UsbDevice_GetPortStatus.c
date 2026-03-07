__int64 __fastcall Crashdump_UsbDevice_GetPortStatus(_QWORD *a1, int a2, _QWORD *a3)
{
  __int64 v6; // rbx
  __int64 v7; // rcx
  unsigned __int16 *v8; // rbp
  int v9; // ebx
  __int64 v11; // [rsp+70h] [rbp+8h] BYREF

  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_UsbDevice_GetPortStatus: begin: port %u\n", a2);
  v6 = *a1;
  memset(*(void **)(*a1 + 448LL), 0, *(unsigned int *)(*a1 + 456LL));
  v7 = a1[15];
  v8 = *(unsigned __int16 **)(v6 + 448);
  LODWORD(v11) = 163;
  HIWORD(v11) = 4;
  WORD2(v11) = a2;
  v9 = Crashdump_Endpoint_SendControlTransfer(v7, &v11, 4, (_QWORD *)(v6 + 440));
  if ( v9 >= 0 )
  {
    DbgPrintEx(
      0x93u,
      3u,
      "XHCIDUMP: Port %u: CCS: %u, PE: %u, OC: %u, PR: %u, PP: %u, HS: %u\n",
      a2,
      *v8 & 1,
      (*v8 >> 1) & 1,
      (*v8 >> 3) & 1,
      (*v8 >> 4) & 1,
      HIBYTE(*v8) & 1,
      (*v8 >> 10) & 1);
    DbgPrintEx(
      0x93u,
      3u,
      "XHCIDUMP: PortChange %u: CSC: %u, PEDC: %u, OCC: %u, PRC: %u\n",
      a2,
      v8[1] & 1,
      (v8[1] >> 1) & 1,
      (v8[1] >> 3) & 1,
      (v8[1] >> 4) & 1);
    *a3 = v8;
  }
  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_UsbDevice_GetPortStatus: end 0x%X\n", v9);
  return (unsigned int)v9;
}
