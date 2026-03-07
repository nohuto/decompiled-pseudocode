__int64 __fastcall xxxSynchronizeDWMWindowChanges(__int64 a1)
{
  __int64 result; // rax
  void *v2; // rbx

  result = ReferenceDwmApiPort(a1);
  v2 = (void *)result;
  if ( result )
  {
    LeaveCrit();
    DwmSyncFlushWindowChanges(v2);
    return EnterCrit(1LL, 0LL);
  }
  return result;
}
