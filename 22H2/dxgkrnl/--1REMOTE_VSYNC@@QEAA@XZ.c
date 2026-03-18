/*
 * XREFs of ??1REMOTE_VSYNC@@QEAA@XZ @ 0x1C034C458
 * Callers:
 *     ??1DXGGLOBAL@@EEAA@XZ @ 0x1C0311CA0 (--1DXGGLOBAL@@EEAA@XZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 */

void __fastcall REMOTE_VSYNC::~REMOTE_VSYNC(REMOTE_VSYNC *this)
{
  if ( *((_QWORD *)this + 1) )
  {
    WdLogSingleEntry1(1LL, 32LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pEmulation == NULL", 32LL, 0LL, 0LL, 0LL, 0LL);
  }
}
