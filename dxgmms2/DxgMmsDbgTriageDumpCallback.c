void __fastcall DxgMmsDbgTriageDumpCallback(
        KBUGCHECK_CALLBACK_REASON Reason,
        struct _KBUGCHECK_REASON_CALLBACK_RECORD *Record,
        struct _KBUGCHECK_TRIAGE_DUMP_DATA *ReasonSpecificData,
        ULONG ReasonSpecificDataLength)
{
  struct _KTRIAGE_DUMP_DATA_ARRAY *v5; // rdi

  if ( (ReasonSpecificData->Flags & 1) != 0 )
  {
    v5 = qword_1C0076238;
    if ( qword_1C0076238 )
    {
      if ( ReasonSpecificData->BugCheckCode == 270
        || ReasonSpecificData->BugCheckCode == 275
        || ReasonSpecificData->BugCheckCode == 278
        || ReasonSpecificData->BugCheckCode == 281 )
      {
        VidMmiAddTriageData(ReasonSpecificData, qword_1C0076238);
        VidSchiAddTriageData(ReasonSpecificData, v5);
        v5 = qword_1C0076238;
      }
      ReasonSpecificData->DataArray = v5;
    }
  }
}
