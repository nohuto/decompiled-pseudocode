/*
 * XREFs of ?MonitorCleanupAdditionalTiming@@YAXXZ @ 0x1C03C8B20
 * Callers:
 *     MonitorCleanupGlobal @ 0x1C006BB94 (MonitorCleanupGlobal.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C000A450 (--3@YAXPEAX@Z.c)
 */

void MonitorCleanupAdditionalTiming(void)
{
  void *v0; // rcx

  while ( 1 )
  {
    v0 = qword_1C01421E0;
    if ( !qword_1C01421E0 )
      break;
    qword_1C01421E0 = *(void **)qword_1C01421E0;
    operator delete(v0);
  }
}
