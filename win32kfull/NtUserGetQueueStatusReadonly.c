__int64 __fastcall NtUserGetQueueStatusReadonly(unsigned __int16 a1)
{
  __int64 v2; // rbx
  __int64 *ThreadWin32Thread; // rax

  v2 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v2 = *ThreadWin32Thread;
  return (a1 | (a1 << 16)) & (*(unsigned __int16 *)(*(_QWORD *)(v2 + 448) + 4LL) | (*(unsigned __int16 *)(*(_QWORD *)(v2 + 448) + 8LL) << 16));
}
