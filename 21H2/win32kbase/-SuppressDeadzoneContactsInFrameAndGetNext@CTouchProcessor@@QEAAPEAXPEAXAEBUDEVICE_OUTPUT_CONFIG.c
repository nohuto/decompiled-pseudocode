/*
 * XREFs of ?SuppressDeadzoneContactsInFrameAndGetNext@CTouchProcessor@@QEAAPEAXPEAXAEBUDEVICE_OUTPUT_CONFIG@@AEBUtagPOINTER_INFO@@@Z @ 0x1C00DC800
 * Callers:
 *     ?SuppressDeadzoneContacts@DelayZonePalmRejection@@AEAAXAEBUDEVICE_OUTPUT_CONFIG@@AEBUtagPOINTER_INFO@@@Z @ 0x1C01E6EF8 (-SuppressDeadzoneContacts@DelayZonePalmRejection@@AEAAXAEBUDEVICE_OUTPUT_CONFIG@@AEBUtagPOINTER_.c)
 * Callees:
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1C00DC990 (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     rimAbIsPointInPenDeadzone @ 0x1C0186DCC (rimAbIsPointInPenDeadzone.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C01BD200 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x1C01BD260 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 *     ?FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z @ 0x1C01C59E8 (-FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z.c)
 *     ?GetNextFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@PEAU_LIST_ENTRY@@@Z @ 0x1C01C9240 (-GetNextFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@PEAU_LIST_ENTRY@@@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C01CE868 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?ReferencePreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z @ 0x1C01D39D4 (-ReferencePreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

const struct CPointerInputFrame *__fastcall CTouchProcessor::SuppressDeadzoneContactsInFrameAndGetNext(
        struct _LIST_ENTRY *this,
        struct CPointerInputFrame *a2,
        const struct DEVICE_OUTPUT_CONFIG *a3,
        const struct tagPOINTER_INFO *a4)
{
  unsigned int v8; // r14d
  const struct CPointerInputFrame *i; // rbp
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  struct CPointerInfoNode *ValidNodeInFrame; // rax
  const struct CPointerInputFrame *NextFrame; // rbx
  _BYTE v17[64]; // [rsp+20h] [rbp-68h] BYREF

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v17,
    (struct CInpLockGuard *)&this[2],
    0LL);
  if ( (*((_DWORD *)a2 + 57) & 0x200) == 0 )
  {
    v8 = 0;
    for ( i = CTouchProcessor::ReferencePreviousFrameByDeviceInt((CTouchProcessor *)this, a2);
          v8 < *((_DWORD *)a2 + 12);
          ++v8 )
    {
      v10 = *((_QWORD *)a2 + 30) + 480LL * v8;
      if ( (unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v10) )
      {
        if ( *(_DWORD *)(v10 + 168) != 2 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v13);
        if ( (*(_DWORD *)(v10 + 180) & 0x10000) != 0
          && (unsigned int)rimAbIsPointInPenDeadzone(*((_QWORD *)a2 + 32) + 156LL, v10 + 168, a3, a4)
          || i
          && (ValidNodeInFrame = CTouchProcessor::FindValidNodeInFrame(
                                   (CTouchProcessor *)this,
                                   i,
                                   *(_WORD *)(v10 + 172),
                                   0LL)) != 0LL
          && (*(_DWORD *)ValidNodeInFrame & 0x1000) != 0 )
        {
          *(_DWORD *)v10 |= 0x1000u;
        }
      }
    }
    if ( i )
      CTouchProcessor::UnreferenceFrameInt(this, i);
  }
  NextFrame = CTouchProcessor::GetNextFrame((CTouchProcessor *)this, a2, this + 3);
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded((CInpLockGuardExclusiveIfNeeded *)v17);
  return NextFrame;
}
