/*
 * XREFs of ?DxgkCddIssueSyncObjectOpForDevice@@YAJII_KH@Z @ 0x1C022CED0
 * Callers:
 *     <none>
 * Callees:
 *     ?TryAcquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAHXZ @ 0x1C0002CB4 (-TryAcquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAHXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0002FB8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0004E50 (--1COREACCESS@@QEAA@XZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0005100 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C00087C0 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00088C4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00EEC04 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?IssueSyncObjectOpForAllContexts@DXGDEVICE@@QEAAJPEAVDXGPROCESS@@I_KH@Z @ 0x1C0255CCC (-IssueSyncObjectOpForAllContexts@DXGDEVICE@@QEAAJPEAVDXGPROCESS@@I_KH@Z.c)
 */

__int64 __fastcall DxgkCddIssueSyncObjectOpForDevice(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  int v4; // r15d
  __int64 v5; // r14
  unsigned int v7; // r12d
  struct _KTHREAD **Current; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct DXGPROCESS *v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rcx
  DXGDEVICE *v20; // rbx
  _QWORD *v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 CurrentProcess; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r9
  __int64 v30; // rax
  int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rax
  struct DXGDEVICE *v36; // [rsp+30h] [rbp-A9h] BYREF
  struct DXGDEVICE *v37; // [rsp+38h] [rbp-A1h] BYREF
  struct DXGDEVICE *v38; // [rsp+40h] [rbp-99h] BYREF
  int v39; // [rsp+48h] [rbp-91h]
  _BYTE v40[8]; // [rsp+50h] [rbp-89h] BYREF
  _BYTE v41[64]; // [rsp+58h] [rbp-81h] BYREF
  _BYTE v42[88]; // [rsp+98h] [rbp-41h] BYREF

  v4 = a4;
  v5 = (unsigned int)a1;
  v7 = a2;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(a1, a2, a3, a4);
  v11 = (struct DXGPROCESS *)Current;
  if ( Current )
  {
    v36 = 0LL;
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v37, (unsigned int)v5, Current, &v36);
    v20 = v36;
    if ( v36 )
    {
      v38 = v36;
      v39 = 0;
      if ( (unsigned int)DXGDEVICEACCESSLOCKEXCLUSIVE::TryAcquire((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v38) )
      {
        COREDEVICEACCESS::COREDEVICEACCESS((__int64)v40, (__int64)v20, 0, v29, 0);
        v31 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v40, 0LL);
        v12 = v31;
        if ( v31 >= 0 )
        {
          LODWORD(v12) = DXGDEVICE::IssueSyncObjectOpForAllContexts(v20, v11, v7, a3, v4);
        }
        else
        {
          v34 = WdLogNewEntry5_WdEvent(v33, v32);
          *(_QWORD *)(v34 + 24) = v12;
          *(_QWORD *)(v34 + 32) = v11;
          WdLogEvent5_WdEvent(v34);
        }
        COREACCESS::~COREACCESS((COREACCESS *)v42);
        COREACCESS::~COREACCESS((COREACCESS *)v41);
      }
      else
      {
        v30 = WdLogNewEntry5_WdEvent(v28, v27);
        *(_QWORD *)(v30 + 24) = v20;
        WdLogEvent5_WdEvent(v30);
        LODWORD(v12) = -2147483631;
      }
      if ( v38 )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v38);
    }
    else
    {
      LODWORD(v12) = -1073741811;
      v21 = (_QWORD *)WdLogNewEntry5_WdError(v19, v18);
      v21[3] = -1073741811LL;
      CurrentProcess = PsGetCurrentProcess(v23, v22, v24, v25);
      v21[5] = v5;
      v21[4] = CurrentProcess;
      WdLogEvent5_WdError(v21);
    }
    if ( v37 && _InterlockedExchangeAdd64((volatile signed __int64 *)v37 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v37 + 2), v37);
  }
  else
  {
    LODWORD(v12) = -1073741811;
    v13 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v13 + 24) = -1073741811LL;
    *(_QWORD *)(v13 + 32) = PsGetCurrentProcess(v15, v14, v16, v17);
    WdLogEvent5_WdError(v13);
  }
  return (unsigned int)v12;
}
