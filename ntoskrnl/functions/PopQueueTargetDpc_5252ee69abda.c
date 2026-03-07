LONG __fastcall PopQueueTargetDpc(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  unsigned __int16 **v4; // rdx
  int v6; // [rsp+48h] [rbp+10h] BYREF

  v4 = *(unsigned __int16 ***)(a2 + 32);
  v6 = 0;
  if ( (int)KeEnumerateNextProcessor(&v6, v4) < 0 )
    return KeSetEvent(*(PRKEVENT *)(a2 + 24), 0, 0);
  *(_DWORD *)BugCheckParameter2 = 787;
  *(_QWORD *)(BugCheckParameter2 + 24) = PopExecuteProcessorCallback;
  *(_QWORD *)(BugCheckParameter2 + 32) = a2;
  *(_QWORD *)(BugCheckParameter2 + 56) = 0LL;
  *(_QWORD *)(BugCheckParameter2 + 16) = 0LL;
  if ( !*(_QWORD *)(BugCheckParameter2 + 56) )
    *(_WORD *)(BugCheckParameter2 + 2) = v6 + 2048;
  return KiInsertQueueDpc(BugCheckParameter2, 0LL, 0LL, 0LL, 0);
}
