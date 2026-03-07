DXGPRESENTMUTEX *__fastcall DXGPRESENTMUTEX::DXGPRESENTMUTEX(DXGPRESENTMUTEX *this, struct ADAPTER_RENDER *const a2)
{
  int v4; // edx
  int v5; // ecx
  int v6; // r8d
  int v7; // edx
  int v8; // ecx
  int v9; // r8d

  *((_QWORD *)this + 1) = a2;
  *((_BYTE *)this + 16) = 0;
  if ( !a2 )
  {
    WdLogSingleEntry1(1LL, 7763LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(v5, v4, v6, 0, 2, -1, (__int64)L"m_pRenderCore != NULL", 83, 0, 0, 0, 0);
    }
  }
  if ( *(struct _KTHREAD **)(*((_QWORD *)this + 1) + 800LL) == KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 7768LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v8,
          v7,
          v9,
          0,
          2,
          -1,
          (__int64)L"!m_pRenderCore->m_PresentMutex.IsOwner()",
          88,
          0,
          0,
          0,
          0);
    }
  }
  return this;
}
