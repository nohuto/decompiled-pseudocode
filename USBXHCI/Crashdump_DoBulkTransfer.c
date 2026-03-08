/*
 * XREFs of Crashdump_DoBulkTransfer @ 0x1C004C20C
 * Callers:
 *     Crashdump_SendUrb @ 0x1C004CEC0 (Crashdump_SendUrb.c)
 *     Crashdump_SendUrbAsync @ 0x1C004CFB0 (Crashdump_SendUrbAsync.c)
 * Callees:
 *     Crashdump_Endpoint_SendBulkTransfer @ 0x1C004F218 (Crashdump_Endpoint_SendBulkTransfer.c)
 */

__int64 __fastcall Crashdump_DoBulkTransfer(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  unsigned __int8 v8; // bl
  __int64 v9; // rax
  __int64 v10; // r9
  unsigned int v11; // ebx

  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_DoBulkTransfer: Begin\n");
  v8 = 2 * *(_BYTE *)(*(_QWORD *)(a2 + 24) + 2LL) + (*(_BYTE *)(*(_QWORD *)(a2 + 24) + 2LL) >> 7);
  DbgPrintEx(
    0x93u,
    3u,
    "XHCIDUMP: Endpoint: 0x%X,%u, BufferLength %u\n",
    *(unsigned __int8 *)(*(_QWORD *)(a2 + 24) + 2LL),
    v8,
    *(_DWORD *)(a2 + 36));
  v9 = *(_QWORD *)(a1 + 576);
  LOBYTE(v10) = a4;
  *(_BYTE *)(a1 + 626) = 0;
  v11 = Crashdump_Endpoint_SendBulkTransfer(*(_QWORD *)(v9 + 8LL * v8 + 112), a2, a3, v10);
  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_DoBulkTransfer: end 0x%X\n", v11);
  return v11;
}
