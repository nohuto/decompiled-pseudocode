/*
 * XREFs of SendShellClipChanged @ 0x1C01E83D0
 * Callers:
 *     ?SetShellClip@CCursorClip@@QEAAJPEAUtagRECT@@K@Z @ 0x1C01DBAB4 (-SetShellClip@CCursorClip@@QEAAJPEAUtagRECT@@K@Z.c)
 * Callees:
 *     ?CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z @ 0x1C003B6C4 (-CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     memmove @ 0x1C00DE8C0 (memmove.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

void __fastcall SendShellClipChanged(void *Src, unsigned int a2)
{
  __int64 v2; // rbp
  char v3; // r14
  __int64 Pool2; // rbx
  unsigned __int64 v6; // rcx
  PVOID v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rcx
  _OWORD v11[2]; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v12; // [rsp+40h] [rbp-C8h]
  PVOID BackTrace[20]; // [rsp+50h] [rbp-B8h] BYREF

  v2 = a2;
  v12 = 0LL;
  v3 = 0;
  Pool2 = (__int64)v11;
  memset(v11, 0, sizeof(v11));
  if ( a2 <= 1 )
  {
LABEL_10:
    *(_DWORD *)Pool2 = 3;
    *(_DWORD *)(Pool2 + 8) = v2;
    memmove((void *)(Pool2 + 12), Src, 16 * v2);
    InputExtensibilityCallout::CoreMsgSendMessage(v10, 1);
    if ( v3 )
      NSInstrumentation::CLeakTrackingAllocator::Free(
        (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
        (char *)Pool2);
    return;
  }
  v6 = 16LL * (a2 - 1);
  v3 = 1;
  if ( v6 <= 0xFFFFFFFF && (unsigned int)(v6 + 40) >= 0x28 )
  {
    v7 = gpLeakTrackingAllocator;
    v8 = (unsigned int)(v6 + 40);
    if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x63736355) != 0x63736355
      || (v9 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
    {
LABEL_8:
      Pool2 = ExAllocatePool2(260LL, v8);
      goto LABEL_9;
    }
    while ( *((_DWORD *)gpLeakTrackingAllocator + v9) != 1668506453 )
    {
      if ( ++v9 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
        goto LABEL_8;
    }
    Pool2 = ExAllocatePool2(260LL, v8 + 16);
    if ( Pool2 )
    {
      memset(BackTrace, 0, sizeof(BackTrace));
      RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
      if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 >= 0x1000 )
      {
        if ( !NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                (__int64)v7,
                Pool2,
                (struct NSInstrumentation::CBackTrace *)BackTrace) )
        {
LABEL_16:
          ExFreePoolWithTag((PVOID)Pool2, 0);
          return;
        }
        goto LABEL_10;
      }
      if ( !NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
              (__int64)v7,
              (const void *)Pool2,
              (struct NSInstrumentation::CBackTrace *)BackTrace) )
        goto LABEL_16;
      Pool2 += 16LL;
LABEL_9:
      if ( !Pool2 )
        return;
      goto LABEL_10;
    }
  }
}
