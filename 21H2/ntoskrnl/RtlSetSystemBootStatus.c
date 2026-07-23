/*
 * XREFs of RtlSetSystemBootStatus @ 0x140791C40
 * Callers:
 *     PopBsdHandleRequest @ 0x1403F8020 (PopBsdHandleRequest.c)
 *     PopWriteBsdPoInfo @ 0x1403F8074 (PopWriteBsdPoInfo.c)
 *     PopRecordLongPowerButtonPressDetected @ 0x140791B94 (PopRecordLongPowerButtonPressDetected.c)
 *     PopProcessBootstat @ 0x140A3A280 (PopProcessBootstat.c)
 * Callees:
 *     RtlpSystemBootStatusRequest @ 0x140791C7C (RtlpSystemBootStatusRequest.c)
 */

NTSTATUS __cdecl RtlSetSystemBootStatus(
        RTL_BSD_ITEM_TYPE BootStatusInformationClass,
        PVOID DataBuffer,
        ULONG DataLength,
        PULONG ReturnLength)
{
  _DWORD v5[2]; // [rsp+20h] [rbp-28h] BYREF
  PVOID v6; // [rsp+28h] [rbp-20h]
  ULONG v7; // [rsp+30h] [rbp-18h]
  int v8; // [rsp+34h] [rbp-14h]

  v5[1] = 0;
  v8 = 0;
  v7 = DataLength;
  v5[0] = BootStatusInformationClass;
  v6 = DataBuffer;
  return RtlpSystemBootStatusRequest(32LL, v5, 1LL, ReturnLength);
}
