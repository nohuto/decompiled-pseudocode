void __fastcall PopBlackBoxBugcheckCallback(
        KBUGCHECK_CALLBACK_REASON Reason,
        struct _KBUGCHECK_REASON_CALLBACK_RECORD *Record,
        _OWORD *ReasonSpecificData,
        ULONG ReasonSpecificDataLength)
{
  struct _LIST_ENTRY *Blink; // rax

  ReasonSpecificData[1] = *(_OWORD *)Record[-1].Component;
  *((_DWORD *)ReasonSpecificData + 10) = Record[1].CallbackRoutine;
  Blink = 0LL;
  if ( Record[1].CallbackRoutine )
    Blink = Record[1].Entry.Blink;
  *((_QWORD *)ReasonSpecificData + 4) = Blink;
}
