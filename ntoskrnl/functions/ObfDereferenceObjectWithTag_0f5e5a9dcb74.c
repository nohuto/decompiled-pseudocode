// local variable allocation has failed, the output may be wrong!
LONG_PTR __stdcall ObfDereferenceObjectWithTag(PVOID Object, ULONG Tag)
{
  signed __int64 v3; // rbx
  bool v4; // cc
  __int64 BugCheckParameter4; // rbx
  __int64 v7; // rcx

  if ( ObpTraceFlags )
    ObpPushStackInfo((_DWORD)Object - 48);
  v3 = _InterlockedExchangeAdd64((volatile signed __int64 *)Object - 6, 0xFFFFFFFFFFFFFFFFuLL);
  v4 = v3 <= 1;
  BugCheckParameter4 = v3 - 1;
  if ( !v4 )
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
  if ( KeGetCurrentThread()->SpecialApcDisable
    || !(unsigned __int8)KeAreInterruptsEnabled(0LL, *(_QWORD *)&Tag)
    || KeGetCurrentIrql() )
  {
    ObpDeferObjectDeletion((signed __int64)Object - 48);
    return BugCheckParameter4;
  }
  if ( (*((char *)Object - 22) & 0x40) != 0 )
  {
    v7 = *(_QWORD *)((char *)Object - ObpInfoMaskToOffset[*((char *)Object - 22) & 0x7F] - 48);
    if ( *(_BYTE *)(v7 + 24) )
      ObpHandleRevocationBlockRemoveObject(v7);
  }
  if ( ObpTraceFlags )
    ObpDeregisterObject((char *)Object - 48);
  ObpRemoveObjectRoutine((char *)Object - 48, 0LL);
  return BugCheckParameter4;
}
