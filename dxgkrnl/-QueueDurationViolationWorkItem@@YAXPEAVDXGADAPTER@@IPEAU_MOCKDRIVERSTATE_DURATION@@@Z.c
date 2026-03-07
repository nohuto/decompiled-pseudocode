void __fastcall QueueDurationViolationWorkItem(
        struct DXGADAPTER *a1,
        unsigned int a2,
        struct _MOCKDRIVERSTATE_DURATION *a3)
{
  __int64 v5; // rsi
  int v6; // edx
  int v7; // r8d

  v5 = a2;
  WdLogSingleEntry2(2LL, a2, a3);
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
    McTemplateK0zqqzxxxxx_EtwWriteTransfer(
      0,
      v6,
      v7,
      0LL,
      0,
      -1,
      L"Setting different durations on different planes of VidPnSourceId:0x%I64x. See ?? (dxgkrnl!MOCKDRIVERSTATE_DURATION"
       "*)(0x%I64x) for details",
      v5,
      a3,
      0LL,
      0LL,
      0LL);
  *((_BYTE *)a3 + 8) = 1;
  _InterlockedIncrement64((volatile signed __int64 *)a1 + 3);
  *((_QWORD *)a3 + 2) = -1LL;
  ExQueueWorkItem((PWORK_QUEUE_ITEM)((char *)a3 + 24), DelayedWorkQueue);
}
