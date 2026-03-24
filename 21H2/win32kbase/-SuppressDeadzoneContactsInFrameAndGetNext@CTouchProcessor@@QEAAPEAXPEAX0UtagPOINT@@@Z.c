/*
 * XREFs of ?SuppressDeadzoneContactsInFrameAndGetNext@CTouchProcessor@@QEAAPEAXPEAX0UtagPOINT@@@Z @ 0x1C019F1E0
 * Callers:
 *     ?SuppressDeadzoneContacts@DelayZonePalmRejection@@AEAAXUtagPOINT@@@Z @ 0x1C01ADB78 (-SuppressDeadzoneContacts@DelayZonePalmRejection@@AEAAXUtagPOINT@@@Z.c)
 * Callees:
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00CCB00 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     rimAbIsPointInPenDeadzone @ 0x1C0158BE4 (rimAbIsPointInPenDeadzone.c)
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x1C01874D8 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 *     ?FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z @ 0x1C018E998 (-FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z.c)
 *     ?GetNextFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@PEAU_LIST_ENTRY@@@Z @ 0x1C0191CB8 (-GetNextFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@PEAU_LIST_ENTRY@@@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C01971B4 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 */

struct _LIST_ENTRY **__fastcall CTouchProcessor::SuppressDeadzoneContactsInFrameAndGetNext(
        CTouchProcessor *this,
        struct CPointerInputFrame *a2,
        struct CPointerInputFrame *a3,
        struct tagPOINT a4)
{
  unsigned int i; // ebp
  __int64 v9; // rdi
  int v10; // r8d
  __int64 v11; // rdx
  struct _LIST_ENTRY **NextFrame; // rbx
  struct CPointerInfoNode *ValidNodeInFrame; // rax
  __int128 v15; // [rsp+20h] [rbp-78h] BYREF
  CInpLockGuard *v16[8]; // [rsp+30h] [rbp-68h] BYREF

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v16,
    (CTouchProcessor *)((char *)this + 40),
    0LL);
  for ( i = 0; i < *((_DWORD *)a3 + 12); ++i )
  {
    v9 = *((_QWORD *)a3 + 17) + 480LL * i;
    if ( (unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v9) )
    {
      if ( *(_DWORD *)(v9 + 168) != v10 )
        MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 12846);
      if ( (*(_DWORD *)(v9 + 180) & 0x10000) != 0
        && (v11 = *(_QWORD *)(v9 + 224),
            v15 = *(_OWORD *)(*((_QWORD *)a3 + 19) + 176LL),
            (unsigned int)rimAbIsPointInPenDeadzone(&v15, v11, *(_QWORD *)&a4)) )
      {
        *(_DWORD *)v9 |= 0x1000u;
      }
      else if ( a2 )
      {
        ValidNodeInFrame = CTouchProcessor::FindValidNodeInFrame(
                             (struct _KTHREAD **)this,
                             a2,
                             *(_WORD *)(v9 + 172),
                             0LL);
        if ( ValidNodeInFrame )
        {
          if ( (*(_DWORD *)ValidNodeInFrame & 0x1000) != 0 )
            *(_DWORD *)v9 |= 0x1000u;
        }
      }
    }
  }
  NextFrame = CTouchProcessor::GetNextFrame((struct _KTHREAD **)this, a3, (struct _LIST_ENTRY *)((char *)this + 56));
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v16);
  return NextFrame;
}
