void __fastcall SmFatalPageErrorDumpCallback(
        KBUGCHECK_CALLBACK_REASON Reason,
        struct _KBUGCHECK_REASON_CALLBACK_RECORD *Record,
        _QWORD *ReasonSpecificData,
        ULONG ReasonSpecificDataLength)
{
  unsigned __int64 v4; // rdx
  unsigned int v5; // eax

  v4 = ((unsigned __int64)&Record[1].Entry.Flink + 7) & 0xFFFFFFFFFFFFFFF8uLL;
  v5 = *(_DWORD *)(v4 + 12) + 56;
  if ( v5 <= *((_DWORD *)ReasonSpecificData + 3) )
  {
    ReasonSpecificData[4] = v4;
    *((_OWORD *)ReasonSpecificData + 1) = xmmword_140046AB0;
  }
  else
  {
    v5 = 0;
  }
  *((_DWORD *)ReasonSpecificData + 10) = v5;
}
