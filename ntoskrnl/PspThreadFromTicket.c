__int64 __fastcall PspThreadFromTicket(_QWORD *a1, PETHREAD *a2)
{
  __int64 v3; // rax
  NTSTATUS v4; // ebx
  PETHREAD v5; // rcx
  PETHREAD Thread; // [rsp+30h] [rbp+8h] BYREF
  __int64 v8; // [rsp+40h] [rbp+18h]

  v3 = PspWorkOnBehalfEncodingKey ^ *a1;
  Thread = 0LL;
  v8 = v3;
  v4 = PsLookupThreadByThreadId((HANDLE)(int)v3, &Thread);
  if ( v4 < 0 )
  {
    v5 = Thread;
  }
  else
  {
    v5 = Thread;
    if ( (*(_DWORD *)(&Thread[1].SwapListEntry + 1) & 1) != 0 || Thread[1].Header.LockNV != HIDWORD(v8) )
    {
      v4 = -1073741275;
    }
    else
    {
      *a2 = Thread;
      v5 = 0LL;
      v4 = 0;
    }
  }
  if ( v5 )
    ObfDereferenceObject(v5);
  return (unsigned int)v4;
}
