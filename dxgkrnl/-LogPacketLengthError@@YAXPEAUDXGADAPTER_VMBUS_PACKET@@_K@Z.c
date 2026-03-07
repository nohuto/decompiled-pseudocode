void __fastcall LogPacketLengthError(struct DXGADAPTER_VMBUS_PACKET *a1, __int64 a2)
{
  WdLogSingleEntry2(2LL, *((unsigned int *)a1 + 36), a2);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Packet overflow: 0x%I64x 0x%I64x",
    *((unsigned int *)a1 + 36),
    a2,
    0LL,
    0LL,
    0LL);
}
