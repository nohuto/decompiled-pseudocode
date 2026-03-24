/*
 * XREFs of ?MonitorCleanupAdditionalTiming@@YAXXZ @ 0x1C02F8CF0
 * Callers:
 *     MonitorCleanupGlobal @ 0x1C005DFCC (MonitorCleanupGlobal.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C00039C0 (--_V@YAXPEAX@Z.c)
 */

void MonitorCleanupAdditionalTiming(void)
{
  void *v0; // rcx

  while ( 1 )
  {
    v0 = qword_1C00B3208;
    if ( !qword_1C00B3208 )
      break;
    qword_1C00B3208 = *(void **)qword_1C00B3208;
    operator delete[](v0);
  }
}
