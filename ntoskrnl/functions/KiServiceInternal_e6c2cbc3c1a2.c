void __fastcall KiServiceInternal()
{
  struct _KTHREAD *CurrentThread; // rbx

  _enable();
  CurrentThread = KeGetCurrentThread();
  _m_prefetchw(&CurrentThread->TrapFrame);
  CurrentThread->PreviousMode = 0;
  JUMPOUT(0x14042B470LL);
}
