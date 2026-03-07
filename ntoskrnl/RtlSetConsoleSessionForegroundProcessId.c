struct _LIST_ENTRY *__fastcall RtlSetConsoleSessionForegroundProcessId(__int64 a1, __int64 a2)
{
  struct _LIST_ENTRY *result; // rax

  if ( PsIsCurrentThreadInServerSilo(a1, a2) )
  {
    result = PsGetCurrentServerSiloGlobals();
    result[82].Blink->Blink = (struct _LIST_ENTRY *)a1;
  }
  else
  {
    result = (struct _LIST_ENTRY *)MmWriteableSharedUserData;
    *(_QWORD *)(MmWriteableSharedUserData + 824) = a1;
  }
  return result;
}
