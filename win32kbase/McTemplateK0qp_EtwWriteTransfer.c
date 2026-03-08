/*
 * XREFs of McTemplateK0qp_EtwWriteTransfer @ 0x1C016624C
 * Callers:
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1C0066180 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 *     EtwTraceFlipManagerAddRemoveContent @ 0x1C0162550 (EtwTraceFlipManagerAddRemoveContent.c)
 *     EtwTraceFlipManagerCancelPosted @ 0x1C0162660 (EtwTraceFlipManagerCancelPosted.c)
 *     EtwTraceFlipManagerNoOpPresent @ 0x1C0162810 (EtwTraceFlipManagerNoOpPresent.c)
 *     EtwTraceFlipManagerPresentConfirmed @ 0x1C0162B20 (EtwTraceFlipManagerPresentConfirmed.c)
 *     EtwTraceFlipManagerPresentIFlipPurgePreviousPresents @ 0x1C0162E60 (EtwTraceFlipManagerPresentIFlipPurgePreviousPresents.c)
 *     EtwTraceFlipManagerPresentQueueDepth @ 0x1C01633C0 (EtwTraceFlipManagerPresentQueueDepth.c)
 *     EtwTraceFlipManagerRemoveBuffer @ 0x1C0163790 (EtwTraceFlipManagerRemoveBuffer.c)
 *     EtwTraceFlipManagerStartTokenReleaseToFrame @ 0x1C0163820 (EtwTraceFlipManagerStartTokenReleaseToFrame.c)
 *     EtwTraceFlipManagerStopTokenReleaseToFrame @ 0x1C0163880 (EtwTraceFlipManagerStopTokenReleaseToFrame.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0038218 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qp_EtwWriteTransfer(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        int a4,
        __int64 a5)
{
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+30h] [rbp-48h] BYREF
  int *v7; // [rsp+40h] [rbp-38h]
  int v8; // [rsp+48h] [rbp-30h]
  int v9; // [rsp+4Ch] [rbp-2Ch]
  __int64 *v10; // [rsp+50h] [rbp-28h]
  int v11; // [rsp+58h] [rbp-20h]
  int v12; // [rsp+5Ch] [rbp-1Ch]
  int v13; // [rsp+98h] [rbp+20h] BYREF

  v13 = a4;
  v7 = &v13;
  v9 = 0;
  v8 = 4;
  v10 = &a5;
  v12 = 0;
  v11 = 8;
  return McGenEventWrite_EtwWriteTransfer(a1, a2, &W32kControlGuid, 3u, &v6);
}
