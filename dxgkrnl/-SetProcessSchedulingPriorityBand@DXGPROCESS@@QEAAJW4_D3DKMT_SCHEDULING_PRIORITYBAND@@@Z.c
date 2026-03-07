__int64 __fastcall DXGPROCESS::SetProcessSchedulingPriorityBand(__int64 a1, int a2)
{
  __int64 v3; // rsi
  __int64 v4; // r14
  _QWORD *v5; // rdi
  DXGDEVICE *Current; // rax
  DXGDEVICE *v7; // r15
  struct DXGADAPTER *v8; // r12
  int v9; // eax
  unsigned int v10; // ebx
  _QWORD v12[2]; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v13[2]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v14[144]; // [rsp+70h] [rbp-90h] BYREF

  v3 = a2;
  if ( *(struct _KTHREAD **)(a1 + 128) != KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 4510LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsMutexOwner()", 4510LL, 0LL, 0LL, 0LL, 0LL);
  }
  v4 = a1 + 216;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(a1 + 216, 0LL);
  *(_QWORD *)(a1 + 224) = KeGetCurrentThread();
  if ( (_DWORD)v3 == 1 )
  {
    *((_QWORD *)DXGGLOBAL::GetGlobal() + 213) = a1;
    _InterlockedCompareExchange((volatile signed __int32 *)DXGGLOBAL::GetGlobal() + 423, 1, 0);
    *(_DWORD *)(a1 + 432) = 1;
  }
  else
  {
    if ( (_DWORD)v3 )
    {
      v10 = -1073741811;
      WdLogSingleEntry2(3LL, v3, -1073741811LL);
      goto LABEL_20;
    }
    *(_DWORD *)(a1 + 432) = 2;
  }
  v5 = *(_QWORD **)(a1 + 320);
  v13[0] = a1 + 320;
  while ( 1 )
  {
    v13[1] = v5;
    Current = (DXGDEVICE *)DXGNODELIST<DXGPROCESS,DXGDEVICE>::ITERATOR::GetCurrent(v13);
    v7 = Current;
    if ( !Current )
      break;
    v8 = *(struct DXGADAPTER **)(*((_QWORD *)Current + 2) + 16LL);
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v12, Current);
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v14, v8, 0LL);
    v9 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v14, 0LL);
    if ( v9 >= 0 )
      DXGDEVICE::NotifyProcessStatusChange(v7);
    else
      WdLogSingleEntry2(3LL, v8, v9);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v14);
    if ( v12[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v12);
    v5 = (_QWORD *)*v5;
  }
  if ( !(_DWORD)v3 && a1 == *((_QWORD *)DXGGLOBAL::GetGlobal() + 213) )
    _InterlockedCompareExchange((volatile signed __int32 *)DXGGLOBAL::GetGlobal() + 423, 0, 1);
  v10 = 0;
LABEL_20:
  *(_QWORD *)(v4 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(v4, 0LL);
  KeLeaveCriticalRegion();
  return v10;
}
