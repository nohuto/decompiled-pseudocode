/*
 * XREFs of ?EnsureHardwareOverlayCleared@CCursorState@@AEAAXPEAUMonitorData@1@@Z @ 0x180276CA8
 * Callers:
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@AEBVCDirtyRegion@@@Z @ 0x180087264 (-EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@AEBVCDirtyRegion@@@Z.c)
 *     ?ClearVisual@CCursorState@@QEAAXXZ @ 0x1802764C8 (-ClearVisual@CCursorState@@QEAAXXZ.c)
 *     ?DisableHardwareCursor@CCursorState@@QEAAXU_LUID@@I@Z @ 0x180276828 (-DisableHardwareCursor@CCursorState@@QEAAXU_LUID@@I@Z.c)
 *     ?TryEnableHardwareCursor@CCursorState@@QEAA_NU_LUID@@IAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@VCMILMatrix@@@Z @ 0x180277F98 (-TryEnableHardwareCursor@CCursorState@@QEAA_NU_LUID@@IAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UN.c)
 *     ?UpdateHardwareCursorOverlay@CCursorState@@AEAAXPEAUMonitorData@1@_N@Z @ 0x18027848C (-UpdateHardwareCursorOverlay@CCursorState@@AEAAXPEAUMonitorData@1@_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     ?_Log_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180278940 (-_Log_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall CCursorState::EnsureHardwareOverlayCleared(CCursorState *this, struct CCursorState::MonitorData *a2)
{
  __int64 v3; // rax
  int updated; // eax
  unsigned int v5; // r8d
  int v6[2]; // [rsp+20h] [rbp-28h] BYREF
  int v7; // [rsp+28h] [rbp-20h]
  int v8; // [rsp+2Ch] [rbp-1Ch]
  int v9; // [rsp+30h] [rbp-18h]
  int v10; // [rsp+34h] [rbp-14h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( *((_BYTE *)a2 + 140) )
  {
    v3 = *(_QWORD *)a2;
    v8 = 0;
    v9 = 0;
    v10 = 0;
    *(_QWORD *)v6 = v3;
    v7 = *((_DWORD *)a2 + 2);
    updated = NtHWCursorUpdatePointer(v6, 0LL);
    if ( updated < 0 )
      wil::details::in1diag3::_Log_NtStatus(retaddr, (void *)0x1B6, v5, (const char *)(unsigned int)updated, v6[0]);
    *((_BYTE *)a2 + 140) = 0;
  }
}
