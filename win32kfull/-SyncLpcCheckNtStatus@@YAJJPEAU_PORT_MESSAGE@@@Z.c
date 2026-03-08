/*
 * XREFs of ?SyncLpcCheckNtStatus@@YAJJPEAU_PORT_MESSAGE@@@Z @ 0x1C001D830
 * Callers:
 *     DwmSyncCaptureSurfaceBits @ 0x1C00086A0 (DwmSyncCaptureSurfaceBits.c)
 *     DwmSyncGetTitleBarInfo @ 0x1C000B84C (DwmSyncGetTitleBarInfo.c)
 *     DwmSyncNotifyMinimizing @ 0x1C0012AFC (DwmSyncNotifyMinimizing.c)
 *     DwmSyncGetCompositionAttribute @ 0x1C0012F60 (DwmSyncGetCompositionAttribute.c)
 *     DwmSyncDesktopSwitch @ 0x1C001D718 (DwmSyncDesktopSwitch.c)
 *     DwmSyncFlushForceRenderAndWaitForBatch @ 0x1C0270960 (DwmSyncFlushForceRenderAndWaitForBatch.c)
 *     DwmSyncHitTestQuery @ 0x1C0270AE0 (DwmSyncHitTestQuery.c)
 *     DwmSyncMagnUpdateWindowSharedTextures @ 0x1C0270C10 (DwmSyncMagnUpdateWindowSharedTextures.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SyncLpcCheckNtStatus(int a1, struct _PORT_MESSAGE *a2)
{
  __int64 result; // rax
  int Type; // ecx
  unsigned int v4; // edx

  result = (unsigned int)a1;
  if ( a1 >= 0 )
  {
    if ( a1 == 192 || a1 == 258 )
    {
      return 3221225473LL;
    }
    else
    {
      Type = (unsigned __int16)a2->u2.s2.Type;
      v4 = -1073741823;
      if ( (Type & 0xFFFF00FF) == 2 )
        return (unsigned int)result;
      return v4;
    }
  }
  return result;
}
