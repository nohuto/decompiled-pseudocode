/*
 * XREFs of NtCreateDebugObject @ 0x140935540
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeEvent @ 0x14030F330 (KeInitializeEvent.c)
 *     ObInsertObjectEx @ 0x1407BB7C0 (ObInsertObjectEx.c)
 *     ObCreateObjectEx @ 0x1407D1090 (ObCreateObjectEx.c)
 */

__int64 __fastcall NtCreateDebugObject(__int64 *a1, unsigned int a2, __int64 a3, int a4)
{
  char v4; // r14
  char PreviousMode; // r10
  __int64 v8; // rcx
  __int64 result; // rax
  PRKEVENT v10; // rbx
  bool v11; // di
  _KPROCESS *Process; // rcx
  __int16 v13; // ax
  __int64 v14; // [rsp+20h] [rbp-68h]
  PRKEVENT Event; // [rsp+58h] [rbp-30h] BYREF
  __int64 v16[4]; // [rsp+60h] [rbp-28h] BYREF

  v4 = a4;
  v16[0] = 0LL;
  Event = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v8 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
      v8 = (__int64)a1;
    *(_QWORD *)v8 = *(_QWORD *)v8;
  }
  *a1 = 0LL;
  if ( (a4 & 0xFFFFFFFE) != 0 )
    return 3221225485LL;
  result = ObCreateObjectEx(PreviousMode, DbgkDebugObjectType, a3, PreviousMode, v14, 104, 0, 0, &Event, 0LL);
  if ( (int)result >= 0 )
  {
    v10 = Event;
    v11 = 1;
    Event[1].Header.LockNV = 1;
    v10[1].Header.WaitListHead.Flink = 0LL;
    LODWORD(v10[1].Header.WaitListHead.Blink) = 0;
    KeInitializeEvent(v10 + 2, SynchronizationEvent, 0);
    v10[3].Header.WaitListHead.Blink = &v10[3].Header.WaitListHead;
    v10[3].Header.WaitListHead.Flink = &v10[3].Header.WaitListHead;
    KeInitializeEvent(v10, NotificationEvent, 0);
    v10[4].Header.LockNV = 2 * (v4 & 1);
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( Process[1].Affinity.StaticBitmap[30] )
    {
      v13 = WORD2(Process[2].Affinity.StaticBitmap[20]);
      if ( v13 != 332 )
        v11 = v13 == 452;
      if ( v11 )
        Event[4].Header.LockNV |= 4u;
    }
    result = ObInsertObjectEx((char *)Event, 0LL, a2, 0, 0, 0LL, v16);
    if ( (int)result >= 0 )
    {
      *a1 = v16[0];
      return (unsigned int)result;
    }
  }
  return result;
}
