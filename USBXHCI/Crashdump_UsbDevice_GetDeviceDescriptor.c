__int64 __fastcall Crashdump_UsbDevice_GetDeviceDescriptor(_QWORD *a1, unsigned __int8 **a2)
{
  __int64 v3; // rbx
  __int64 v4; // rcx
  unsigned __int8 *v5; // r13
  unsigned int v6; // ebx
  __int64 v8; // [rsp+D0h] [rbp+8h] BYREF
  unsigned __int8 **v9; // [rsp+D8h] [rbp+10h]

  v9 = a2;
  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_UsbDevice_GetDeviceDescriptor: begin\n");
  v3 = *a1;
  memset(*(void **)(*a1 + 448LL), 0, *(unsigned int *)(*a1 + 456LL));
  v4 = a1[15];
  v5 = *(unsigned __int8 **)(v3 + 448);
  v8 = 0x40000001000680LL;
  LODWORD(v8) = Crashdump_Endpoint_SendControlTransfer(v4, &v8, 18, (_QWORD *)(v3 + 440));
  v6 = v8;
  if ( (int)v8 >= 0 )
  {
    DbgPrintEx(
      0x93u,
      3u,
      "XHCIDUMP: %u, %u, %u, %u, %u, %u, %u, %u, %u, %u, %u, %u, %u, %u\n",
      *v5,
      v5[1],
      *((unsigned __int16 *)v5 + 1),
      v5[4],
      v5[5],
      v5[6],
      v5[7],
      *((unsigned __int16 *)v5 + 4),
      *((unsigned __int16 *)v5 + 5),
      *((unsigned __int16 *)v5 + 6),
      v5[14],
      v5[15],
      v5[16],
      v5[17]);
    v6 = v8;
    *v9 = v5;
  }
  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_UsbDevice_GetDeviceDescriptor: end 0x%X\n", v6);
  return v6;
}
