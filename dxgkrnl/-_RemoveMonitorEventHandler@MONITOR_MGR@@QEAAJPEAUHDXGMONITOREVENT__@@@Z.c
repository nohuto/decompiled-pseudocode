/*
 * XREFs of ?_RemoveMonitorEventHandler@MONITOR_MGR@@QEAAJPEAUHDXGMONITOREVENT__@@@Z @ 0x1C03C406C
 * Callers:
 *     MonitorUnregisterMonitorEventCallback @ 0x1C03C0CF8 (MonitorUnregisterMonitorEventCallback.c)
 * Callees:
 *     ??1MUTEX_LOCK@@QEAA@XZ @ 0x1C0004750 (--1MUTEX_LOCK@@QEAA@XZ.c)
 *     ??0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z @ 0x1C00048E4 (--0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 */

__int64 __fastcall MONITOR_MGR::_RemoveMonitorEventHandler(MONITOR_MGR *this, struct HDXGMONITOREVENT__ ***a2)
{
  unsigned int v2; // edi
  struct HDXGMONITOREVENT__ **v5; // rcx
  struct HDXGMONITOREVENT__ *v6; // rax
  struct HDXGMONITOREVENT__ **v8; // rcx
  struct HDXGMONITOREVENT__ **v9; // rax
  DXGFASTMUTEX *v10; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  if ( !a2 )
    WdLogSingleEntry0(1LL);
  MUTEX_LOCK::MUTEX_LOCK((MUTEX_LOCK *)&v10, (MONITOR_MGR *)((char *)this + 128));
  v5 = (struct HDXGMONITOREVENT__ **)((char *)this + 56);
  if ( a2 && (v6 = *v5, *v5 != (struct HDXGMONITOREVENT__ *)v5) )
  {
    while ( v6 != (struct HDXGMONITOREVENT__ *)a2 )
    {
      if ( v5 == (struct HDXGMONITOREVENT__ **)v6 )
        goto LABEL_5;
      v6 = *(struct HDXGMONITOREVENT__ **)v6;
    }
    v8 = *a2;
    if ( (*a2)[1] != (struct HDXGMONITOREVENT__ *)a2 || (v9 = a2[1], *v9 != (struct HDXGMONITOREVENT__ *)a2) )
      __fastfail(3u);
    *v9 = (struct HDXGMONITOREVENT__ *)v8;
    v8[1] = (struct HDXGMONITOREVENT__ *)v9;
    operator delete(a2);
  }
  else
  {
LABEL_5:
    WdLogSingleEntry1(2LL, a2);
    v2 = -1073741811;
  }
  MUTEX_LOCK::~MUTEX_LOCK(&v10);
  return v2;
}
