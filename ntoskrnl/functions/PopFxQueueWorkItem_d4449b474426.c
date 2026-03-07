__int64 __fastcall PopFxQueueWorkItem(__int64 a1, struct _LIST_ENTRY *a2)
{
  __int64 result; // rax
  int v5; // r9d
  char v6; // [rsp+50h] [rbp+18h] BYREF

  result = ExTryQueueWorkItem(a2, 48LL);
  if ( !(_BYTE)result )
  {
    ExInterlockedInsertTailList((PLIST_ENTRY)(a1 + 16), a2, (PKSPIN_LOCK)(a1 + 8));
    return KeReleaseSemaphoreEx((int)a1 + 32, 0, 1, v5, 8, (__int64)&v6);
  }
  return result;
}
