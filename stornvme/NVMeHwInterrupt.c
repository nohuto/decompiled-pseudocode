char __fastcall NVMeHwInterrupt(__int64 a1)
{
  char v2; // di

  v2 = 0;
  if ( !RequestPendingCompletion(a1, 0xFFFFu) || (*(_DWORD *)(a1 + 32) & 8) != 0 )
  {
    ++*(_QWORD *)(a1 + 4064);
  }
  else
  {
    v2 = 1;
    ProcessCompletionQueues(a1, 0xFFFFu, 0LL);
  }
  return v2;
}
