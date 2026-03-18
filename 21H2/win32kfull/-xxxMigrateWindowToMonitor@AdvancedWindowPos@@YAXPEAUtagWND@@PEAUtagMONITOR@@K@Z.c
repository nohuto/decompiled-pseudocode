/*
 * XREFs of ?xxxMigrateWindowToMonitor@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUtagMONITOR@@K@Z @ 0x1C024BD78
 * Callers:
 *     ?xxxApplyArrangeAction@@YAXPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@@Z @ 0x1C020BB18 (-xxxApplyArrangeAction@@YAXPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@@Z.c)
 *     ?xxxProcessPositionEvent@ShellWindowPos@@YAXPEAUtagQMSG@@@Z @ 0x1C02377B8 (-xxxProcessPositionEvent@ShellWindowPos@@YAXPEAUtagQMSG@@@Z.c)
 * Callees:
 *     _anonymous_namespace_::xxxMigrateWindow @ 0x1C00B28A8 (_anonymous_namespace_--xxxMigrateWindow.c)
 */

void __fastcall AdvancedWindowPos::xxxMigrateWindowToMonitor(
        AdvancedWindowPos *this,
        struct tagWND *a2,
        struct tagMONITOR *a3)
{
  unsigned int v3; // [rsp+60h] [rbp+18h] BYREF

  v3 = (unsigned int)a3;
  anonymous_namespace_::xxxMigrateWindow(
    this,
    (__int64)a2,
    (struct tagRECT *)(*((_QWORD *)this + 5) + 88LL),
    0LL,
    0LL,
    0,
    &v3);
}
