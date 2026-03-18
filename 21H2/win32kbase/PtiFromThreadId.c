/*
 * XREFs of PtiFromThreadId @ 0x1C0091E00
 * Callers:
 *     NtMITPostThreadEventMessage @ 0x1C0155780 (NtMITPostThreadEventMessage.c)
 *     NtMITSetLastInputRecipient @ 0x1C0155BB0 (NtMITSetLastInputRecipient.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PtiFromThreadId(int a1)
{
  HANDLE v1; // rdi
  NTSTATUS v2; // ebx
  __int64 v3; // rbx
  __int64 *ThreadWin32Thread; // rax
  int v5; // eax
  PETHREAD Thread; // [rsp+48h] [rbp+10h] BYREF

  Thread = 0LL;
  v1 = (HANDLE)a1;
  v2 = PsLookupThreadByThreadId((HANDLE)a1, &Thread);
  if ( v2 >= 0 && (unsigned int)PsGetThreadSessionId(Thread) != gSessionId )
  {
    ObfDereferenceObject(Thread);
    return 0LL;
  }
  if ( v2 < 0 )
    return 0LL;
  v3 = 0LL;
  if ( !PsIsThreadTerminating(Thread) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(Thread);
    if ( ThreadWin32Thread )
      v3 = *ThreadWin32Thread;
    if ( v3 )
    {
      if ( PsGetThreadId(*(PETHREAD *)v3) == v1 && (v5 = *(_DWORD *)(v3 + 488), (v5 & 0x1000000) != 0) )
      {
        if ( (v5 & 1) != 0 )
          v3 = 0LL;
      }
      else
      {
        v3 = 0LL;
      }
    }
  }
  ObfDereferenceObject(Thread);
  return v3;
}
