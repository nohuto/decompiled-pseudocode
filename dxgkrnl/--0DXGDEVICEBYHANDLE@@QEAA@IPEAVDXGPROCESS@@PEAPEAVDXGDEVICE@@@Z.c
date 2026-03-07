DXGDEVICEBYHANDLE *__fastcall DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE(
        DXGDEVICEBYHANDLE *this,
        unsigned int a2,
        struct _KTHREAD **a3,
        struct DXGDEVICE **a4)
{
  volatile signed __int32 *v4; // rbx
  __int64 v9; // rcx
  __int64 v10; // r8
  unsigned int v11; // eax
  __int64 v12; // rax
  struct _KTHREAD *v14; // r8
  int v15; // ecx
  int v16; // edx
  int v17; // ecx
  int v18; // r8d
  int v19; // edx
  int v20; // ecx
  int v21; // r8d
  __int64 v22; // r9

  v4 = (volatile signed __int32 *)(a3 + 31);
  if ( a3 != (struct _KTHREAD **)-248LL && a3[32] == KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 1453LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v20,
          v19,
          v21,
          0,
          2,
          -1,
          (__int64)L"bAllowAcquireRecursive || pPushLock == NULL || !m_pPushLock->IsExclusiveOwner()",
          1453LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v4, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v22 = *((unsigned int *)v4 + 6);
      if ( (_DWORD)v22 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v9, "g", v10, v22);
    }
    ExAcquirePushLockSharedEx(v4, 0LL);
  }
  _InterlockedIncrement(v4 + 4);
  v11 = (a2 >> 6) & 0xFFFFFF;
  if ( v11 >= *((_DWORD *)a3 + 74) )
    goto LABEL_5;
  v14 = a3[35];
  if ( ((a2 >> 25) & 0x60) != (*((_BYTE *)v14 + 16 * v11 + 8) & 0x60) )
    goto LABEL_5;
  if ( (*((_DWORD *)v14 + 4 * v11 + 2) & 0x2000) != 0 )
    goto LABEL_5;
  v15 = *((_DWORD *)v14 + 4 * v11 + 2) & 0x1F;
  if ( !v15 )
    goto LABEL_5;
  if ( v15 != 3 )
  {
    WdLogSingleEntry1(2LL, 267LL);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
      McTemplateK0zqqzxxxxx_EtwWriteTransfer(
        v17,
        v16,
        v18,
        0,
        0,
        -1,
        (__int64)L"Handle type mismatch",
        267LL,
        0LL,
        0LL,
        0LL,
        0LL);
LABEL_5:
    *(_QWORD *)this = 0LL;
    goto LABEL_8;
  }
  v12 = *((_QWORD *)v14 + 2 * v11);
  *(_QWORD *)this = v12;
  if ( v12 )
    _InterlockedIncrement64((volatile signed __int64 *)(v12 + 64));
LABEL_8:
  *a4 = *(struct DXGDEVICE **)this;
  _InterlockedDecrement(v4 + 4);
  ExReleasePushLockSharedEx(v4, 0LL);
  KeLeaveCriticalRegion();
  return this;
}
