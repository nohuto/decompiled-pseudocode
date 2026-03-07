DXGHANDLETABLELOCKSHARED *__fastcall DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED(
        DXGHANDLETABLELOCKSHARED *this,
        struct DXGPROCESS *a2)
{
  bool v2; // zf
  struct _KTHREAD **v3; // rdx
  DXGHANDLETABLELOCKSHARED *result; // rax
  int v6; // edx
  int v7; // ecx
  int v8; // r8d

  v2 = (struct DXGPROCESS *)((char *)a2 + 248) == 0LL;
  v3 = (struct _KTHREAD **)((char *)a2 + 248);
  *((_DWORD *)this + 4) = 0;
  *((_QWORD *)this + 1) = v3;
  if ( !v2 && v3[1] == KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 1453LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v7,
          v6,
          v8,
          0,
          2,
          -1,
          (__int64)L"bAllowAcquireRecursive || pPushLock == NULL || !m_pPushLock->IsExclusiveOwner()",
          173,
          0,
          0,
          0,
          0);
    }
  }
  DXGPUSHLOCK::AcquireShared(*((DXGPUSHLOCK **)this + 1));
  result = this;
  *((_DWORD *)this + 4) = 1;
  return result;
}
