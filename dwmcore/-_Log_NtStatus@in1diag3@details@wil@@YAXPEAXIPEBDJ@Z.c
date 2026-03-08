/*
 * XREFs of ?_Log_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180278940
 * Callers:
 *     ?EnsureHardwareOverlayCleared@CCursorState@@AEAAXPEAUMonitorData@1@@Z @ 0x180276CA8 (-EnsureHardwareOverlayCleared@CCursorState@@AEAAXPEAUMonitorData@1@@Z.c)
 *     ?UpdateHardwareCursorOverlay@CCursorState@@AEAAXPEAUMonitorData@1@_N@Z @ 0x18027848C (-UpdateHardwareCursorOverlay@CCursorState@@AEAAXPEAUMonitorData@1@_N@Z.c)
 * Callees:
 *     ??$ReportFailure_NtStatus@$01@details@wil@@YAJPEAXIPEBD110J@Z @ 0x180274978 (--$ReportFailure_NtStatus@$01@details@wil@@YAJPEAXIPEBD110J@Z.c)
 */

void __fastcall wil::details::in1diag3::_Log_NtStatus(
        wil::details::in1diag3 *this,
        void *a2,
        __int64 a3,
        const char *a4)
{
  int v4; // [rsp+20h] [rbp-28h]
  wil::details *v5; // [rsp+30h] [rbp-18h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  LODWORD(v5) = (_DWORD)a4;
  wil::details::ReportFailure_NtStatus<2>((int)this, (int)a2, a3, (__int64)a4, v4, retaddr, v5);
}
