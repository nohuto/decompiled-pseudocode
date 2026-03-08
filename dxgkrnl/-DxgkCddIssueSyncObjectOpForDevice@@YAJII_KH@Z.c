/*
 * XREFs of ?DxgkCddIssueSyncObjectOpForDevice@@YAJII_KH@Z @ 0x1C0165800
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00036D8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0003AA0 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006AF0 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C00071E8 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00098CC (--1COREACCESS@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?TryAcquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAHXZ @ 0x1C0015344 (-TryAcquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAHXZ.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ?IssueSyncObjectOpForAllContexts@DXGDEVICE@@QEAAJPEAVDXGPROCESS@@I_KH@Z @ 0x1C0165934 (-IssueSyncObjectOpForAllContexts@DXGDEVICE@@QEAAJPEAVDXGPROCESS@@I_KH@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C017B878 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkCddIssueSyncObjectOpForDevice(unsigned int a1, unsigned int a2, unsigned __int64 a3, int a4)
{
  __int64 v5; // rsi
  struct _KTHREAD **Current; // rax
  struct DXGPROCESS *v9; // rdi
  DXGDEVICE *v10; // rbx
  __int64 v11; // r9
  int v12; // eax
  unsigned int v13; // esi
  unsigned int v14; // edi
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 CurrentProcess; // rax
  __int64 v19; // rax
  struct DXGDEVICE *v20; // [rsp+50h] [rbp-B0h] BYREF
  struct DXGDEVICE *v21; // [rsp+58h] [rbp-A8h] BYREF
  struct DXGDEVICE *v22; // [rsp+60h] [rbp-A0h] BYREF
  int v23; // [rsp+68h] [rbp-98h]
  _BYTE v24[8]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v25[64]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v26[88]; // [rsp+B8h] [rbp-48h] BYREF

  v5 = a1;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  v9 = (struct DXGPROCESS *)Current;
  if ( Current )
  {
    v20 = 0LL;
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v21, v5, Current, &v20);
    v10 = v20;
    if ( v20 )
    {
      v23 = 0;
      v22 = v20;
      if ( (unsigned int)DXGDEVICEACCESSLOCKEXCLUSIVE::TryAcquire((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v22) )
      {
        COREDEVICEACCESS::COREDEVICEACCESS((__int64)v24, (__int64)v10, 0, v11, 0);
        v12 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v24, 0LL);
        v13 = v12;
        if ( v12 < 0 )
        {
          WdLogSingleEntry2(4LL, v12, v9);
          v14 = v13;
        }
        else
        {
          v14 = DXGDEVICE::IssueSyncObjectOpForAllContexts(v10, v9, a2, a3, a4);
        }
        COREACCESS::~COREACCESS((COREACCESS *)v26);
        COREACCESS::~COREACCESS((COREACCESS *)v25);
      }
      else
      {
        WdLogSingleEntry1(4LL, v10);
        v14 = -2147483631;
      }
      if ( v22 )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v22);
    }
    else
    {
      CurrentProcess = PsGetCurrentProcess();
      v14 = -1073741811;
      WdLogSingleEntry3(2LL, -1073741811LL, CurrentProcess, v5);
      v19 = PsGetCurrentProcess();
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Invalid device handle 0x%I64x 0x%I64x 0x%I64x",
        -1073741811LL,
        v19,
        v5,
        0LL,
        0LL);
    }
    if ( v21 && _InterlockedExchangeAdd64((volatile signed __int64 *)v21 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v21 + 2), v21);
  }
  else
  {
    v16 = PsGetCurrentProcess();
    v14 = -1073741811;
    WdLogSingleEntry2(2LL, -1073741811LL, v16);
    v17 = PsGetCurrentProcess();
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Unexpected process 0x%I64x 0x%I64x",
      -1073741811LL,
      v17,
      0LL,
      0LL,
      0LL);
  }
  return v14;
}
