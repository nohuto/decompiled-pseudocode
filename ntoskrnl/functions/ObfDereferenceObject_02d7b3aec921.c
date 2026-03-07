LONG_PTR __stdcall ObfDereferenceObject(PVOID Object)
{
  signed __int64 v2; // rbx
  bool v3; // cc
  __int64 BugCheckParameter4; // rbx
  BOOLEAN v6; // al
  char *v7; // rcx
  __int64 v8; // rax

  if ( ObpTraceFlags )
    ObpPushStackInfo((_DWORD)Object - 48);
  v2 = _InterlockedExchangeAdd64((volatile signed __int64 *)Object - 6, 0xFFFFFFFFFFFFFFFFuLL);
  v3 = v2 <= 1;
  BugCheckParameter4 = v2 - 1;
  if ( !v3 )
    return BugCheckParameter4;
  if ( *((_QWORD *)Object - 5) )
    KeBugCheckEx(
      0x18u,
      ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*((char *)Object - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Object - 48) >> 8)],
      (ULONG_PTR)Object,
      1uLL,
      *((_QWORD *)Object - 5));
  if ( BugCheckParameter4 < 0 )
    KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)Object, 2uLL, BugCheckParameter4);
  v6 = KeAreAllApcsDisabled();
  v7 = (char *)Object - 48;
  if ( v6 )
  {
    ObpDeferObjectDeletion(v7);
    return BugCheckParameter4;
  }
  v8 = OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO(v7);
  if ( v8 )
    ObpHandleRevocationBlockRemoveObject(v8);
  if ( ObpTraceFlags )
    ObpDeregisterObject((char *)Object - 48);
  ObpRemoveObjectRoutine((char *)Object - 48, 0LL);
  return BugCheckParameter4;
}
