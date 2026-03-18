/*
 * XREFs of CiTaskIndexDereference @ 0x1C00021B0
 * Callers:
 *     CiDispatchCreateTaskIndexClient @ 0x1C000A240 (CiDispatchCreateTaskIndexClient.c)
 *     CiDispatchClose @ 0x1C000A380 (CiDispatchClose.c)
 *     CiThreadCleanup @ 0x1C000A4B0 (CiThreadCleanup.c)
 *     CiThreadCreate @ 0x1C000AD80 (CiThreadCreate.c)
 *     CiCreateTaskIndexClientFromThread @ 0x1C000B8B0 (CiCreateTaskIndexClientFromThread.c)
 * Callees:
 *     CiSchedulerRemoveTaskIndex @ 0x1C0002B60 (CiSchedulerRemoveTaskIndex.c)
 *     CiTaskIndexRemove @ 0x1C000B5F0 (CiTaskIndexRemove.c)
 *     CiReleaseTaskIndexListLock @ 0x1C000B630 (CiReleaseTaskIndexListLock.c)
 *     CiAcquireTaskIndexListLock @ 0x1C000B660 (CiAcquireTaskIndexListLock.c)
 */

void __fastcall CiTaskIndexDereference(_QWORD *P)
{
  signed __int64 v2; // rax
  signed __int64 v3; // rcx
  bool v4; // zf
  signed __int64 v5; // rtt
  signed __int64 v6; // rax
  bool v7; // cc
  signed __int64 v8; // rax

  _m_prefetchw(P + 6);
  v2 = P[6];
  v3 = v2 - 1;
  v4 = v2 == 1;
  if ( v2 - 1 <= 0 )
  {
LABEL_4:
    if ( !v4 )
      __fastfail(0xEu);
    CiAcquireTaskIndexListLock();
    v6 = _InterlockedExchangeAdd64(P + 6, 0xFFFFFFFFFFFFFFFFuLL);
    v7 = v6 <= 1;
    v8 = v6 - 1;
    if ( v7 )
    {
      if ( v8 )
        __fastfail(0xEu);
      CiTaskIndexRemove(P);
      CiReleaseTaskIndexListLock();
      if ( P )
      {
        CiSchedulerRemoveTaskIndex(P);
        ExFreePoolWithTag(P, 0);
      }
    }
    else
    {
      CiReleaseTaskIndexListLock();
    }
  }
  else
  {
    while ( 1 )
    {
      v5 = v2;
      v2 = _InterlockedCompareExchange64(P + 6, v3, v2);
      if ( v5 == v2 )
        break;
      v3 = v2 - 1;
      v4 = v2 == 1;
      if ( v2 - 1 <= 0 )
        goto LABEL_4;
    }
  }
}
