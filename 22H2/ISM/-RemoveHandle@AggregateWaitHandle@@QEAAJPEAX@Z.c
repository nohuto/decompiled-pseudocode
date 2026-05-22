/*
 * XREFs of ?RemoveHandle@AggregateWaitHandle@@QEAAJPEAX@Z @ 0x1800C1A74
 * Callers:
 *     ??_GEndpointListEntry@SipcServer@@QEAAPEAXI@Z @ 0x1800BF4DC (--_GEndpointListEntry@SipcServer@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C400 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

int __fastcall AggregateWaitHandle::RemoveHandle(AggregateWaitHandle *this, void *a2)
{
  __int64 *i; // rbx
  int v4; // eax
  __int64 *v5; // rcx
  __int64 **v6; // rax

  for ( i = (__int64 *)*((_QWORD *)this + 3); ; i = (__int64 *)*i )
  {
    if ( i == (__int64 *)((char *)this + 24) )
      return -805305616;
    if ( (void *)i[2] == a2 )
      break;
  }
  LOBYTE(a2) = 1;
  v4 = NtCancelWaitCompletionPacket(i[3], a2);
  if ( v4 < 0 )
    return v4 | 0x10000000;
  CloseHandle((HANDLE)i[3]);
  v5 = (__int64 *)*i;
  if ( *(__int64 **)(*i + 8) != i || (v6 = (__int64 **)i[1], *v6 != i) )
    __fastfail(3u);
  *v6 = v5;
  v5[1] = (__int64)v6;
  --*((_QWORD *)this + 5);
  operator delete(i, (const struct std::nothrow_t *)0x20);
  return 0;
}
