/*
 * XREFs of ?SyncLpcCheckNtStatus@@YAJJPEAU_PORT_MESSAGE@@@Z @ 0x1C002EA88
 * Callers:
 *     DwmSyncHitTestQuery @ 0x1C002AC54 (DwmSyncHitTestQuery.c)
 *     DwmSyncDesktopSwitch @ 0x1C002AD90 (DwmSyncDesktopSwitch.c)
 *     DwmSyncNotifyMinimizing @ 0x1C002C4FC (DwmSyncNotifyMinimizing.c)
 *     DwmSyncCaptureSurfaceBits @ 0x1C002E324 (DwmSyncCaptureSurfaceBits.c)
 *     DwmSyncGetTitleBarInfo @ 0x1C002E5B4 (DwmSyncGetTitleBarInfo.c)
 *     DwmSyncFlushForceRenderAndWaitForBatch @ 0x1C002E840 (DwmSyncFlushForceRenderAndWaitForBatch.c)
 *     DwmSyncGetCompositionAttribute @ 0x1C002E940 (DwmSyncGetCompositionAttribute.c)
 *     DwmSyncMagnUpdateWindowSharedTextures @ 0x1C02753C0 (DwmSyncMagnUpdateWindowSharedTextures.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SyncLpcCheckNtStatus(int a1, struct _PORT_MESSAGE *a2)
{
  __int64 result; // rax

  if ( a1 < 0 )
    return (unsigned int)a1;
  if ( a1 == 192 )
    return 3221225473LL;
  if ( a1 == 258 )
    return 3221225473LL;
  result = (unsigned int)a1;
  if ( ((unsigned __int16)a2->u2.s2.Type & 0xFFFF00FF) != 2 )
    return 3221225473LL;
  return result;
}
