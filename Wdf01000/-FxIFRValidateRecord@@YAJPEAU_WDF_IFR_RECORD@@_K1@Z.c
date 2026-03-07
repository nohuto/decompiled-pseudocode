__int64 __fastcall FxIFRValidateRecord(
        _WDF_IFR_RECORD *IfrRecord,
        unsigned __int64 IfrHeaderMaxValidPtr,
        unsigned __int64 IfrMaxValidPtr)
{
  __int64 Length; // rax
  char *v4; // rdx

  if ( (unsigned __int64)IfrRecord > IfrHeaderMaxValidPtr )
    return 3221225990LL;
  Length = IfrRecord->Length;
  if ( (unsigned int)Length < 0x24 )
    return 3221225990LL;
  v4 = (char *)&IfrRecord[-1].TimeStamp.HighPart + Length + 3;
  if ( v4 < (char *)IfrRecord )
    return 3221225621LL;
  else
    return IfrMaxValidPtr < (unsigned __int64)v4 ? 0xC0000206 : 0;
}
