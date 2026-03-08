/*
 * XREFs of ?GetCxPnpPowerCallbackContexts@FxCxDeviceInfo@@QEAAPEAVFxCxPnpPowerCallbackContext@@W4FxCxCallbackType@@@Z @ 0x1C000FDA6
 * Callers:
 *     ?IssuePreCxCallbacksStateless@FxPrePostCallback@@QEAAJPEAVFxDevice@@@Z @ 0x1C000FF9A (-IssuePreCxCallbacksStateless@FxPrePostCallback@@QEAAJPEAVFxDevice@@@Z.c)
 *     ?IssueCleanupCxCallbacks@FxPrePostCallback@@QEAAXPEAVFxDevice@@@Z @ 0x1C0079A4C (-IssueCleanupCxCallbacks@FxPrePostCallback@@QEAAXPEAVFxDevice@@@Z.c)
 *     ?IssuePostCxCallbacks@FxPrePostCallback@@QEAAJPEAVFxDevice@@@Z @ 0x1C0079AC0 (-IssuePostCxCallbacks@FxPrePostCallback@@QEAAJPEAVFxDevice@@@Z.c)
 *     ?IssuePreCxCallbacksStateful@FxPrePostCallback@@QEAAJPEAVFxDevice@@@Z @ 0x1C0079B48 (-IssuePreCxCallbacksStateful@FxPrePostCallback@@QEAAJPEAVFxDevice@@@Z.c)
 * Callees:
 *     <none>
 */

FxCxPnpPowerCallbackContext *__fastcall FxCxDeviceInfo::GetCxPnpPowerCallbackContexts(
        FxCxDeviceInfo *this,
        unsigned __int8 CallbackType)
{
  FxCxPnpPowerCallbackContext *result; // rax
  __int64 v3; // rax

  result = this->CxPnpPowerCallbackContexts[CallbackType];
  if ( !result )
  {
    switch ( CallbackType )
    {
      case 3u:
        v3 = 128LL;
        break;
      case 4u:
        v3 = 120LL;
        break;
      case 6u:
        v3 = 152LL;
        break;
      case 7u:
        v3 = 144LL;
        break;
      case 0xBu:
        v3 = 192LL;
        break;
      case 0xCu:
        v3 = 184LL;
        break;
      default:
        return result;
    }
    return *(FxCxPnpPowerCallbackContext **)((char *)&this->ListEntry.Flink + v3);
  }
  return result;
}
