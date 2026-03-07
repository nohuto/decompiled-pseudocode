void __fastcall SPRITERANGELOCK::vLockShared(SPRITERANGELOCK *this)
{
  GreAcquireSemaphoreSharedInternal(*(_QWORD *)this);
  EtwTraceGreLockAcquireSemaphoreShared(L"hsem", *(_QWORD *)this);
}
