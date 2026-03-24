/*
 * XREFs of PostPlaySoundMessage @ 0x1C00A9898
 * Callers:
 *     DestroyProcessInfo @ 0x1C0046DC0 (DestroyProcessInfo.c)
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C0078210 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

__int64 PostPlaySoundMessage()
{
  if ( qword_1C0256408 )
    return qword_1C0256408();
  else
    return 3221225659LL;
}
