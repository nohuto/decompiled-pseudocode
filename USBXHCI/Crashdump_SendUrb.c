__int64 __fastcall Crashdump_SendUrb(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rcx
  int v7; // r9d
  int v8; // r9d
  int v9; // r9d
  unsigned int v10; // ebx
  unsigned int v11; // eax

  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_SendUrb: Begin\n");
  v7 = *(unsigned __int16 *)(a2 + 2);
  *(_DWORD *)(a2 + 4) = 0;
  v8 = v7 - 8;
  if ( !v8 )
  {
    v11 = Crashdump_Endpoint_SendControlTransfer(
            *(_QWORD *)(*(_QWORD *)(a1 + 576) + 120LL),
            a2 + 128,
            *(unsigned int *)(a2 + 36),
            a3);
    goto LABEL_8;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    v11 = Crashdump_DoBulkTransfer(a1, a2, a3, 0);
    goto LABEL_8;
  }
  if ( v9 == 21 )
  {
    v11 = Crashdump_ResetPipe(v6, a2);
LABEL_8:
    v10 = v11;
    goto LABEL_9;
  }
  DbgPrintEx(0x93u, 1u, "XHCIDUMP: Not supported URB function called.\n");
  v10 = -1073741823;
LABEL_9:
  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_SendUrb: end 0x%X\n", v10);
  return v10;
}
