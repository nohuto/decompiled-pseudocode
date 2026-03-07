void __fastcall DXGPROCESS::SuspendResumeEscapeAllDevices(
        struct _KTHREAD **this,
        const struct DXGADAPTER *a2,
        char a3,
        char a4)
{
  struct _KTHREAD *v8; // rdi
  DXGDEVICE *Current; // rax
  DXGDEVICE *v10; // rbx
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rax
  _QWORD v14[2]; // [rsp+50h] [rbp-38h] BYREF
  _QWORD v15[2]; // [rsp+60h] [rbp-28h] BYREF

  if ( KeGetCurrentIrql() )
  {
    WdLogSingleEntry1(1LL, 2734LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"KeGetCurrentIrql() == PASSIVE_LEVEL",
      2734LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !a2 )
  {
    WdLogSingleEntry1(1LL, 2736LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pDxgAdapter", 2736LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( this[28] != KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 2737LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"m_DeviceCreationLock.IsExclusiveOwner()",
      2737LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v8 = this[40];
  v14[0] = this + 40;
  while ( 1 )
  {
    v14[1] = v8;
    Current = (DXGDEVICE *)DXGNODELIST<DXGPROCESS,DXGDEVICE>::ITERATOR::GetCurrent(v14);
    v10 = Current;
    if ( !Current )
      break;
    if ( *(const struct DXGADAPTER **)(*((_QWORD *)Current + 2) + 16LL) == a2 )
    {
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v15, Current);
      if ( a3 )
        DXGDEVICE::FlushPagingQueues(v10);
      LOBYTE(v11) = a4;
      v12 = *(_QWORD *)(*((_QWORD *)v10 + 2) + 760LL);
      v13 = *(_QWORD *)(v12 + 8);
      LOBYTE(v12) = a3;
      (*(void (__fastcall **)(_QWORD, __int64, __int64))(v13 + 1112))(*((_QWORD *)v10 + 99), v12, v11);
      if ( v15[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v15);
    }
    v8 = *(struct _KTHREAD **)v8;
  }
}
