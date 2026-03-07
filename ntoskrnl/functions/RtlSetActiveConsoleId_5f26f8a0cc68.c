struct _LIST_ENTRY *__fastcall RtlSetActiveConsoleId(__int64 a1, __int64 a2)
{
  int v2; // ebx
  struct _LIST_ENTRY *result; // rax

  v2 = a1;
  if ( PsIsCurrentThreadInServerSilo(a1, a2) )
  {
    result = PsGetCurrentServerSiloGlobals();
    HIDWORD(result[82].Blink->Flink) = v2;
  }
  else
  {
    result = (struct _LIST_ENTRY *)MmWriteableSharedUserData;
    *(_DWORD *)(MmWriteableSharedUserData + 728) = v2;
  }
  return result;
}
