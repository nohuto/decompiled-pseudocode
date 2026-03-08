/*
 * XREFs of ?HandleFlushDelayZonePalmRejectInputTimer@CHidInput@@QEAAX_NK@Z @ 0x1C021118C
 * Callers:
 *     ?OnDeviceRemoval@DelayZonePalmRejection@@QEAAXPEAX@Z @ 0x1C0215D38 (-OnDeviceRemoval@DelayZonePalmRejection@@QEAAXPEAX@Z.c)
 * Callees:
 *     ?GetDispatcherHandleByName@CRIMBase@@IEBAPEAXW4DispatcherHandleName@1@W4HandleAccessMode@1@@Z @ 0x1C0039100 (-GetDispatcherHandleByName@CRIMBase@@IEBAPEAXW4DispatcherHandleName@1@W4HandleAccessMode@1@@Z.c)
 */

void __fastcall CHidInput::HandleFlushDelayZonePalmRejectInputTimer(CHidInput *this)
{
  void *DispatcherHandleByName; // rax
  union _LARGE_INTEGER DueTime; // [rsp+68h] [rbp+20h] BYREF

  DispatcherHandleByName = (void *)CRIMBase::GetDispatcherHandleByName((__int64)this, 7u, 1);
  DueTime.QuadPart = -160000LL;
  ZwSetTimer(DispatcherHandleByName, &DueTime, 0LL, 0LL, 0, 0, 0LL);
}
