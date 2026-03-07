__int64 __fastcall CGlobalMit::CompletionHandler(void *a1, void *a2, void *a3)
{
  NtMITDispatchCompletion(a2, a3);
  return 0LL;
}
