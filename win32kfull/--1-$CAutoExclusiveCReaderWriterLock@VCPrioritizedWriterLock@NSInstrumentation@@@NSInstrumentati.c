void __fastcall NSInstrumentation::CAutoExclusiveCReaderWriterLock<NSInstrumentation::CPrioritizedWriterLock>::~CAutoExclusiveCReaderWriterLock<NSInstrumentation::CPrioritizedWriterLock>(
        __int64 *a1)
{
  __int64 v1; // rcx

  v1 = *a1;
  _InterlockedDecrement((volatile signed __int32 *)(v1 + 28));
  ExReleasePushLockExclusiveEx(v1, 0LL);
  KeLeaveCriticalRegion();
}
