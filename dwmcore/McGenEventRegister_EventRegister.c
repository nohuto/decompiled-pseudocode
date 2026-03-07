ULONG __fastcall McGenEventRegister_EventRegister(const GUID *a1, __int64 a2, void *a3, ULONGLONG *a4)
{
  ULONG result; // eax

  result = 0;
  if ( !*a4 )
    return EventRegister(a1, (PENABLECALLBACK)McGenControlCallbackV2, a3, a4);
  return result;
}
