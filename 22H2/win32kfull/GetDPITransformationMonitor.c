/*
 * XREFs of GetDPITransformationMonitor @ 0x1C01B9BB4
 * Callers:
 *     EditionDoPointerDPITransforms @ 0x1C0153510 (EditionDoPointerDPITransforms.c)
 *     ?MakePointerMessageWorker@@YAHPEBUtagPOINTER_INFO@@UtagPOINT@@HHHIPEAXPEA_KPEA_JPEAGPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C01C5C58 (-MakePointerMessageWorker@@YAHPEBUtagPOINTER_INFO@@UtagPOINT@@HHHIPEAXPEA_KPEA_JPEAGPEAKPEAHPEAP.c)
 *     ?xxxQueryLegacyActivation@@YA_JPEAUtagWND@@0FPEBUtagPOINTEREVENTINT@@@Z @ 0x1C01C6724 (-xxxQueryLegacyActivation@@YA_JPEAUtagWND@@0FPEBUtagPOINTEREVENTINT@@@Z.c)
 *     PointerInfoCopyOutHelperInternal @ 0x1C01C6B70 (PointerInfoCopyOutHelperInternal.c)
 *     ?GetReportInfo@InteractiveControlManager@@QEAAJKKPEAUtagINTERACTIVECTRL_INFO@@@Z @ 0x1C0240D28 (-GetReportInfo@InteractiveControlManager@@QEAAJKKPEAUtagINTERACTIVECTRL_INFO@@@Z.c)
 * Callees:
 *     _GetTopLevelWindow @ 0x1C00CFFB0 (_GetTopLevelWindow.c)
 *     _MonitorFromPoint @ 0x1C00D03B0 (_MonitorFromPoint.c)
 *     PtInRect @ 0x1C00D0A58 (PtInRect.c)
 */

__int64 __fastcall GetDPITransformationMonitor(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 TopLevelWindow; // rax
  __int64 v5; // rax
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int64 v8; // [rsp+40h] [rbp+18h] BYREF
  __int64 v9; // [rsp+48h] [rbp+20h] BYREF

  v7 = a1;
  v2 = a1;
  TopLevelWindow = GetTopLevelWindow(a2);
  if ( TopLevelWindow )
  {
    v9 = ValidateHmonitorNoRip(*(_QWORD *)(*(_QWORD *)(TopLevelWindow + 40) + 256LL));
    if ( v9 )
    {
      v5 = *(_QWORD *)(a2 + 40);
      v8 = 0LL;
      PhysicalToLogicalDPIPoint(&v8, &v7, *(unsigned int *)(v5 + 288), &v9);
      if ( PtInRect((_DWORD *)(*(_QWORD *)(a2 + 40) + 88LL), v8) )
        return v9;
    }
    v2 = v7;
  }
  return MonitorFromPoint(v2, 2u, 0x12u);
}
