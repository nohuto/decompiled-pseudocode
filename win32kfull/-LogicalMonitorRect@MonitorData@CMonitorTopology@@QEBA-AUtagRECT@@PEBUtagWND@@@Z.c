/*
 * XREFs of ?LogicalMonitorRect@MonitorData@CMonitorTopology@@QEBA?AUtagRECT@@PEBUtagWND@@@Z @ 0x1C00FEAF0
 * Callers:
 *     _anonymous_namespace_::xxxNormalizeRect @ 0x1C00FB938 (_anonymous_namespace_--xxxNormalizeRect.c)
 *     ?MonitorDataFromRect@CMonitorTopology@@QEBAPEBUMonitorData@1@PEBUtagWND@@UtagRECT@@@Z @ 0x1C00FE8D0 (-MonitorDataFromRect@CMonitorTopology@@QEBAPEBUMonitorData@1@PEBUtagWND@@UtagRECT@@@Z.c)
 * Callees:
 *     CalculateLogicalMonitorRect @ 0x1C00A3510 (CalculateLogicalMonitorRect.c)
 */

struct tagRECT *__fastcall CMonitorTopology::MonitorData::LogicalMonitorRect(
        CMonitorTopology::MonitorData *this,
        struct tagRECT *__return_ptr retstr,
        const struct tagWND *a3)
{
  struct tagRECT v4; // xmm0
  struct tagRECT *result; // rax
  __int64 v6[3]; // [rsp+30h] [rbp-18h] BYREF

  v4 = *(struct tagRECT *)CalculateLogicalMonitorRect(
                            v6,
                            (CMonitorTopology::MonitorData *)((char *)this + 8),
                            *((_WORD *)this + 20),
                            (*(_DWORD *)(*((_QWORD *)a3 + 5) + 288LL) >> 8) & 0x1FF,
                            *((_WORD *)this + 34));
  result = retstr;
  *retstr = v4;
  return result;
}
