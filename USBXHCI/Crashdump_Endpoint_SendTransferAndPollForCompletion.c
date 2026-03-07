__int64 __fastcall Crashdump_Endpoint_SendTransferAndPollForCompletion(__int64 a1)
{
  int v2; // r10d
  __int64 v3; // r8
  __int64 v4; // r9
  int *v5; // rdx
  int v6; // r8d
  __int64 v7; // rcx
  __int64 v8; // rax
  int v9; // edi
  signed __int32 v11[8]; // [rsp+0h] [rbp-38h] BYREF

  v2 = *(_DWORD *)(a1 + 32);
  v3 = *(_QWORD *)(a1 + 24);
  v4 = *(_QWORD *)(**(_QWORD **)(v3 + 8) + 48LL);
  if ( v4 )
    v5 = (int *)(v4 + 4LL * *(unsigned __int8 *)(v3 + 56));
  else
    v5 = 0LL;
  *v5 = (unsigned __int8)v2 | (*(_BYTE *)(a1 + 128) != 0 ? 0x10000 : 0);
  _InterlockedOr(v11, 0);
  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Ringing doorbell: SlotId: %u, EndpointDCI: %u\n", *(unsigned __int8 *)(v3 + 56), v2);
  *(_OWORD *)(a1 + 184) = 0LL;
  v7 = *(_QWORD *)a1;
  if ( !*(_DWORD *)(*(_QWORD *)a1 + 584LL) || (v8 = 200LL, *(_BYTE *)(v7 + 624)) )
    v8 = 72LL;
  v9 = Crashdump_EventRing_Poll(
         v8 + v7,
         32,
         v6,
         a1,
         (__int64 (__fastcall *)(__int64, __int64, int *))Crashdump_Endpoint_EventRingCallback);
  if ( v9 >= 0 )
  {
    if ( (*(_DWORD *)(a1 + 196) & 4) != 0 )
    {
      if ( *(_QWORD *)(a1 + 184) == *(_QWORD *)(a1 + 168) )
      {
        DbgPrintEx(0x93u, 3u, "XHCIDUMP: Received the correct Event Data Trb.\n");
        goto LABEL_14;
      }
      DbgPrintEx(0x93u, 1u, "XHCIDUMP: Event Data Trb received is not the one we are looking for\n");
    }
    else
    {
      DbgPrintEx(0x93u, 1u, "XHCIDUMP: Did not receive an Event Data Trb\n");
    }
    v9 = -1073741823;
  }
LABEL_14:
  ++*(_QWORD *)(a1 + 168);
  return (unsigned int)v9;
}
