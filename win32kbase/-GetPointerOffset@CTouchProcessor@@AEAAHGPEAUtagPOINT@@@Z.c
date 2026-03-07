__int64 __fastcall CTouchProcessor::GetPointerOffset(struct _KTHREAD **this, unsigned __int16 a2, struct tagPOINT *a3)
{
  __int64 result; // rax
  struct tagPOINT *v5; // rdi

  result = (__int64)CTouchProcessor::FindNodeById(this, a2, 0, 0);
  v5 = (struct tagPOINT *)result;
  if ( result )
  {
    if ( !a3 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 11919);
    *a3 = v5[25];
    return 1LL;
  }
  return result;
}
