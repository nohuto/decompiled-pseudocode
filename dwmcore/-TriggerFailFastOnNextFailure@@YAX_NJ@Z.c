void __fastcall TriggerFailFastOnNextFailure(char a1, int a2)
{
  DWORD CurrentThreadId; // eax

  CurrentThreadId = 0;
  if ( a1 )
    CurrentThreadId = GetCurrentThreadId();
  else
    a2 = 0;
  g_dwFailFastForThreadId = CurrentThreadId;
  g_hrFailFastExpectedError = a2;
}
