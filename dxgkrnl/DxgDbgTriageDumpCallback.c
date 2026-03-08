/*
 * XREFs of DxgDbgTriageDumpCallback @ 0x1C0059820
 * Callers:
 *     <none>
 * Callees:
 *     DxgkpAddTriageAdapterData @ 0x1C0059878 (DxgkpAddTriageAdapterData.c)
 */

void __fastcall DxgDbgTriageDumpCallback(
        KBUGCHECK_CALLBACK_REASON Reason,
        struct _KBUGCHECK_REASON_CALLBACK_RECORD *Record,
        _DWORD *ReasonSpecificData,
        __int64 ReasonSpecificDataLength)
{
  PKTRIAGE_DUMP_DATA_ARRAY v5; // rdx

  if ( (ReasonSpecificData[2] & 1) != 0 )
  {
    v5 = KtriageDumpDataArray;
    if ( KtriageDumpDataArray )
    {
      if ( ReasonSpecificData[4] == 270
        || ReasonSpecificData[4] == 275
        || ReasonSpecificData[4] == 278
        || ReasonSpecificData[4] == 281 )
      {
        DxgkpAddTriageAdapterData(
          ReasonSpecificData,
          KtriageDumpDataArray,
          ReasonSpecificData,
          ReasonSpecificDataLength);
        v5 = KtriageDumpDataArray;
      }
      *(_QWORD *)ReasonSpecificData = v5;
    }
  }
}
