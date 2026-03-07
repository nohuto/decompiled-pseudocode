void __fastcall DXGVIRTUALMACHINE::PauseVmBusChannels(DXGVIRTUALMACHINE *this)
{
  char *v1; // rsi
  struct DXGGLOBAL *Global; // rax
  __int64 **v4; // rdi
  __int64 *i; // rbx

  v1 = (char *)this + 64;
  DXGPUSHLOCK::AcquireExclusive((DXGVIRTUALMACHINE *)((char *)this + 64));
  DXG_VMBUS_CHANNEL_BASE::PauseChannel((DXGVIRTUALMACHINE *)((char *)this + 160), 1);
  Global = DXGGLOBAL::GetGlobal();
  HOSTVMMONITORMAPPING::RemoveMapping((struct DXGGLOBAL *)((char *)Global + 304888), (char *)this + 160);
  v4 = (__int64 **)((char *)this + 40);
  for ( i = *v4; i != (__int64 *)v4; i = (__int64 *)*i )
  {
    if ( *((_BYTE *)i + 16) )
      DXG_VMBUS_CHANNEL_BASE::PauseChannel((DXG_VMBUS_CHANNEL_BASE *)(i + 5), 1);
  }
  *((_QWORD *)v1 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v1, 0LL);
  KeLeaveCriticalRegion();
}
