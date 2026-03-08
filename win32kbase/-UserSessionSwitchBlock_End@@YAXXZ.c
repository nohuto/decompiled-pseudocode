/*
 * XREFs of ?UserSessionSwitchBlock_End@@YAXXZ @ 0x1C00B817C
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C00B4A78 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     UserPowerStateCallout @ 0x1C00B7A1C (UserPowerStateCallout.c)
 *     PowerOffMonitor @ 0x1C015BA60 (PowerOffMonitor.c)
 *     PowerOnMonitor @ 0x1C015BD90 (PowerOnMonitor.c)
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C004E000 (UserSessionSwitchLeaveCrit.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C0070484 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 */

void __fastcall UserSessionSwitchBlock_End(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  char v8; // [rsp+30h] [rbp+8h] BYREF

  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v8, a2, a3, a4);
  if ( !--gnPoSessionSwitchBlockCount )
    gfSessionSwitchBlock = 0;
  if ( !v8 )
    UserSessionSwitchLeaveCrit(v5, v4, v6, v7);
}
