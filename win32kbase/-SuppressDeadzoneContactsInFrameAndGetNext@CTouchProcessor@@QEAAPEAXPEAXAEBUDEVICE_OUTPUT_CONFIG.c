struct _LIST_ENTRY **__fastcall CTouchProcessor::SuppressDeadzoneContactsInFrameAndGetNext(
        CTouchProcessor *this,
        struct CPointerInputFrame *a2,
        const struct DEVICE_OUTPUT_CONFIG *a3,
        const struct tagPOINTER_INFO *a4)
{
  struct CPointerInputFrame *v8; // rbp
  unsigned int i; // r14d
  __int64 v10; // rbx
  int v11; // r9d
  struct _LIST_ENTRY **NextFrame; // rbx
  struct CPointerInfoNode *ValidNodeInFrame; // rax
  CInpLockGuard *v15[8]; // [rsp+20h] [rbp-68h] BYREF

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v15,
    (CTouchProcessor *)((char *)this + 32),
    0LL);
  if ( (*((_DWORD *)a2 + 57) & 0x200) == 0 )
  {
    v8 = CTouchProcessor::ReferencePreviousFrameByDeviceInt((struct _KTHREAD **)this, a2);
    for ( i = 0; i < *((_DWORD *)a2 + 12); ++i )
    {
      v10 = *((_QWORD *)a2 + 30) + 480LL * i;
      if ( (unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v10) )
      {
        if ( *(_DWORD *)(v10 + 168) != v11 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 13537);
        if ( (*(_DWORD *)(v10 + 180) & 0x10000) != 0
          && (unsigned int)rimAbIsPointInPenDeadzone(*((_QWORD *)a2 + 32) + 156LL, v10 + 168, (__int64)a3, (__int64)a4) )
        {
          *(_DWORD *)v10 |= 0x1000u;
        }
        else if ( v8 )
        {
          ValidNodeInFrame = CTouchProcessor::FindValidNodeInFrame(
                               (struct _KTHREAD **)this,
                               v8,
                               *(_WORD *)(v10 + 172),
                               0LL);
          if ( ValidNodeInFrame )
          {
            if ( (*(_DWORD *)ValidNodeInFrame & 0x1000) != 0 )
              *(_DWORD *)v10 |= 0x1000u;
          }
        }
      }
    }
    if ( v8 )
      CTouchProcessor::UnreferenceFrameInt(this, v8);
  }
  NextFrame = CTouchProcessor::GetNextFrame((struct _KTHREAD **)this, a2, (struct _LIST_ENTRY *)((char *)this + 56));
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v15);
  return NextFrame;
}
