/*
 * XREFs of Crashdump_Endpoint_SetDequeuePointer @ 0x1C004F848
 * Callers:
 *     Crashdump_Endpoint_PrepareForHibernate @ 0x1C004F150 (Crashdump_Endpoint_PrepareForHibernate.c)
 * Callees:
 *     Crashdump_Command_SendCommand @ 0x1C004EB8C (Crashdump_Command_SendCommand.c)
 */

__int64 __fastcall Crashdump_Endpoint_SetDequeuePointer(__int64 a1)
{
  __int64 v2; // rax
  unsigned int v3; // ebx
  __int64 v5; // [rsp+20h] [rbp-18h] BYREF
  int v6; // [rsp+28h] [rbp-10h]
  int v7; // [rsp+2Ch] [rbp-Ch]

  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_Endpoint_SetDequeuePointer: begin\n");
  v2 = *(_QWORD *)(a1 + 24);
  v6 = 0;
  v7 = ((*(_DWORD *)(a1 + 32) & 0x1F | (*(unsigned __int8 *)(v2 + 56) << 8)) << 16) | 0x4000;
  if ( *(_BYTE *)(a1 + 128) )
  {
    v5 = *(_QWORD *)(*(_QWORD *)(a1 + 144) + 16LL);
    v6 = 0x10000;
  }
  else
  {
    v5 = *(_QWORD *)(a1 + 24LL * *(unsigned int *)(a1 + 160) + 80) | 1LL;
  }
  v3 = Crashdump_Command_SendCommand(*(_QWORD *)(a1 + 16), (__int64)&v5, 0LL);
  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_Endpoint_SetDequeuePointer: end 0x%X\n", v3);
  return v3;
}
