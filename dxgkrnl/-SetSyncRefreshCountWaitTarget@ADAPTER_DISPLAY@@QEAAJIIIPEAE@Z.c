__int64 __fastcall ADAPTER_DISPLAY::SetSyncRefreshCountWaitTarget(
        ADAPTER_DISPLAY *this,
        unsigned int a2,
        unsigned int a3,
        char a4,
        unsigned __int8 *a5)
{
  __int64 v8; // rbp
  __int64 v9; // rdi
  struct DXGPROCESS *Current; // rax
  __int64 v12; // r8

  v8 = a2;
  v9 = *((_QWORD *)this + 16) + 4000LL * a2;
  Current = DXGPROCESS::GetCurrent((__int64)this);
  *a5 = 1;
  if ( !*(_QWORD *)(v9 + 928) || (*((_DWORD *)Current + 106) & 4) == 0 )
    return 3221225485LL;
  if ( *((_QWORD *)this + 56) )
  {
    *(_DWORD *)(v9 + 936) = a3;
    BLTQUEUE::SetDWMTargetVsync((BLTQUEUE *)(*(_QWORD *)(*((_QWORD *)this + 56) + 8LL) + 2920 * v8), a3);
  }
  else
  {
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0qqqqq_EtwWriteTransfer(
          0LL,
          &EventDWMVsyncCountWait,
          v12,
          a3,
          *(_DWORD *)(v9 + 940),
          *(_BYTE *)(v9 + 944),
          a4,
          4);
    }
    ADAPTER_DISPLAY::SetSyncRefreshCountWaitTargetNonPaged(this, a2, a3, a5);
  }
  return 0LL;
}
