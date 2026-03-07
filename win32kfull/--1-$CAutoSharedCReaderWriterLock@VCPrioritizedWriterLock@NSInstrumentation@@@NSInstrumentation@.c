void __fastcall NSInstrumentation::CAutoSharedCReaderWriterLock<NSInstrumentation::CPrioritizedWriterLock>::~CAutoSharedCReaderWriterLock<NSInstrumentation::CPrioritizedWriterLock>(
        NSInstrumentation::CPrioritizedWriterLock **a1)
{
  NSInstrumentation::CPrioritizedWriterLock::ReleaseShared(*a1);
}
