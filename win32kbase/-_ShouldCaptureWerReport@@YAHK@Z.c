__int64 __fastcall _ShouldCaptureWerReport(unsigned int a1)
{
  unsigned int v1; // ebx
  unsigned __int64 v2; // rdi
  int IsStackThrottled; // r8d
  int v4; // eax

  v1 = 0;
  v2 = a1;
  if ( gdwServiceFilterAuditCaptureWER )
  {
    if ( gdwServiceFilterAuditThrottleMode )
    {
      if ( gdwServiceFilterAuditThrottleMode == 1 )
        LOBYTE(v1) = !_interlockedbittestandset(
                        (volatile signed __int32 *)gafServiceFilterAuditCache + ((unsigned __int64)a1 >> 5),
                        a1 & 0x1F);
    }
    else
    {
      IsStackThrottled = _IsStackThrottled();
      v4 = (unsigned __int8)_interlockedbittestandset(
                              (volatile signed __int32 *)gafServiceFilterAuditCache + (v2 >> 5),
                              v2 & 0x1F);
      if ( !IsStackThrottled || !v4 )
        return 1;
    }
  }
  return v1;
}
