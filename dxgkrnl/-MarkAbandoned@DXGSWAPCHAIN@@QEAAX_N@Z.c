void __fastcall DXGSWAPCHAIN::MarkAbandoned(struct _KTHREAD **this, __int64 a2, __int64 a3)
{
  struct _KEVENT *v4; // rcx
  struct _KEVENT *v5; // rcx

  if ( this[3] != KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 3494LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_SwapChainLock.IsOwner()", 3494LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !*((_DWORD *)this + 12) || !*((_DWORD *)this + 13) )
  {
    v4 = (struct _KEVENT *)this[16];
    *((_DWORD *)this + 12) = 1;
    if ( v4 )
      KeSetEvent(v4, 2, 0);
    v5 = (struct _KEVENT *)this[22];
    if ( v5 )
      KeSetEvent(v5, 2, 0);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000000LL) != 0 )
      McTemplateK0ppp_EtwWriteTransfer(
        (REGHANDLE *)&DxgkControlGuid_Context,
        &EventIndirectSwapChainMarkAbandoned,
        a3,
        this,
        this[22],
        this[16]);
  }
}
