void __fastcall DXGVIRTUALMACHINE::FlushDevicesForTermination(DXGVIRTUALMACHINE *this)
{
  volatile signed __int32 *v1; // rdi
  _QWORD **v2; // rsi
  _QWORD *i; // rbx

  v1 = (volatile signed __int32 *)((char *)this + 128);
  v2 = (_QWORD **)((char *)this + 24);
  DXGPUSHLOCK::AcquireShared((DXGVIRTUALMACHINE *)((char *)this + 128));
  for ( i = *v2; i != v2; i = (_QWORD *)*i )
    DXGPROCESSVM::FlushDevicesForTermination((DXGPROCESSVM *)(i - 78));
  _InterlockedDecrement(v1 + 4);
  ExReleasePushLockSharedEx(v1, 0LL);
  KeLeaveCriticalRegion();
}
