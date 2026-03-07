void __fastcall DXGPUSHLOCK::AcquireExclusive(DXGPUSHLOCK *this)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9

  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(this, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v4 = *((unsigned int *)this + 6);
      if ( (_DWORD)v4 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v2, "g", v3, v4);
    }
    ExAcquirePushLockExclusiveEx(this, 0LL);
  }
  *((_QWORD *)this + 1) = KeGetCurrentThread();
}
