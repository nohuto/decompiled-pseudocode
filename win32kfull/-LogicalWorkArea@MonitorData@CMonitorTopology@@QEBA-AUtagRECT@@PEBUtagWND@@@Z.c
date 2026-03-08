/*
 * XREFs of ?LogicalWorkArea@MonitorData@CMonitorTopology@@QEBA?AUtagRECT@@PEBUtagWND@@@Z @ 0x1C01F4350
 * Callers:
 *     _anonymous_namespace_::xxxMigrateWindowPosition @ 0x1C00FBCB8 (_anonymous_namespace_--xxxMigrateWindowPosition.c)
 *     _anonymous_namespace_::GetArrangedOptions @ 0x1C023E328 (_anonymous_namespace_--GetArrangedOptions.c)
 *     _anonymous_namespace_::xxxMigrateWindowCheckpoint @ 0x1C023F6F0 (_anonymous_namespace_--xxxMigrateWindowCheckpoint.c)
 *     ?xxxRestoreToPosAndState@AdvancedWindowPos@@YA_NPEAUtagWND@@AEBUMonitorData@CMonitorTopology@@W4State@1@UtagRECT@@3W4ApplyOption@1@PEAK@Z @ 0x1C023FD9C (-xxxRestoreToPosAndState@AdvancedWindowPos@@YA_NPEAUtagWND@@AEBUMonitorData@CMonitorTopology@@W4.c)
 * Callees:
 *     CalculateLogicalMonitorRect @ 0x1C00A3510 (CalculateLogicalMonitorRect.c)
 */

struct tagRECT *__fastcall CMonitorTopology::MonitorData::LogicalWorkArea(
        CMonitorTopology::MonitorData *this,
        struct tagRECT *__return_ptr retstr,
        const struct tagWND *a3)
{
  struct tagRECT v4; // xmm0
  struct tagRECT *result; // rax
  __int64 v6[3]; // [rsp+30h] [rbp-18h] BYREF

  v4 = *(struct tagRECT *)CalculateLogicalMonitorRect(
                            v6,
                            (CMonitorTopology::MonitorData *)((char *)this + 24),
                            *((_WORD *)this + 20),
                            (*(_DWORD *)(*((_QWORD *)a3 + 5) + 288LL) >> 8) & 0x1FF,
                            *((_WORD *)this + 34));
  result = retstr;
  *retstr = v4;
  return result;
}
