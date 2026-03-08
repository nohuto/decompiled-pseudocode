/*
 * XREFs of ?MonitorCleanupAdditionalTiming@@YAXXZ @ 0x1C03C42C0
 * Callers:
 *     MonitorCleanupGlobal @ 0x1C006AF64 (MonitorCleanupGlobal.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 */

void MonitorCleanupAdditionalTiming(void)
{
  void *v0; // rcx

  while ( 1 )
  {
    v0 = qword_1C013D108;
    if ( !qword_1C013D108 )
      break;
    qword_1C013D108 = *(void **)qword_1C013D108;
    operator delete(v0);
  }
}
