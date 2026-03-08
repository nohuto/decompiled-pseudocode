/*
 * XREFs of ?PreIndirectPresentReadAllocationInfo@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IAEAUINDIRECT_RESOURCE_INFO@@@Z @ 0x1C033B15C
 * Callers:
 *     DxgkPresent @ 0x1C01C8120 (DxgkPresent.c)
 *     DxgkSubmitPresentToHwQueue @ 0x1C03198F0 (DxgkSubmitPresentToHwQueue.c)
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00036D8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ @ 0x1C0006A6C (--1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006FA0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C00071E8 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00098CC (--1COREACCESS@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C001573C (--0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C0172C2C (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0194420 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C019A030 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C01B2F2C (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 */

__int64 __fastcall PreIndirectPresentReadAllocationInfo(
        struct DXGPROCESS *a1,
        ADAPTER_RENDER **a2,
        unsigned int a3,
        struct INDIRECT_RESOURCE_INFO *a4)
{
  __int64 v5; // rdi
  unsigned int v8; // eax
  __int64 v9; // r9
  int v10; // edx
  struct _EX_RUNDOWN_REF *v11; // rdx
  __int64 v12; // r9
  int v13; // eax
  __int64 v14; // r8
  unsigned int v15; // ebx
  __int64 v16; // rsi
  const wchar_t *v17; // r9
  ULONG_PTR Count; // rdx
  ADAPTER_RENDER *v19; // rcx
  struct _EX_RUNDOWN_REF *v21; // [rsp+50h] [rbp-B0h] BYREF
  struct _EX_RUNDOWN_REF *v22; // [rsp+58h] [rbp-A8h] BYREF
  struct _DXGKARG_DESCRIBEALLOCATION v23; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v24[16]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v25[8]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v26[64]; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v27[88]; // [rsp+E8h] [rbp-18h] BYREF

  v5 = a3;
  DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v24, (struct DXGDEVICE *)a2);
  v21 = 0LL;
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)a1 + 248));
  v8 = ((unsigned int)v5 >> 6) & 0xFFFFFF;
  if ( v8 >= *((_DWORD *)a1 + 74) )
    goto LABEL_7;
  v9 = *((_QWORD *)a1 + 35);
  if ( (((unsigned int)v5 >> 25) & 0x60) != (*(_BYTE *)(v9 + 16LL * v8 + 8) & 0x60) )
    goto LABEL_7;
  if ( (*(_DWORD *)(v9 + 16LL * v8 + 8) & 0x2000) != 0 )
    goto LABEL_7;
  v10 = *(_DWORD *)(v9 + 16LL * v8 + 8) & 0x1F;
  if ( !v10 )
    goto LABEL_7;
  if ( v10 != 5 )
  {
    WdLogSingleEntry1(2LL, 267LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
LABEL_7:
    v11 = 0LL;
    goto LABEL_8;
  }
  v11 = *(struct _EX_RUNDOWN_REF **)(v9 + 16LL * v8);
LABEL_8:
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v22, v11);
  _InterlockedDecrement((volatile signed __int32 *)a1 + 66);
  ExReleasePushLockSharedEx((char *)a1 + 248, 0LL);
  KeLeaveCriticalRegion();
  DXGALLOCATIONREFERENCE::MoveAssign(&v21, &v22);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v22);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v25, (__int64)a2, 0, v12, 0);
  v13 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v25, 0LL);
  v15 = v13;
  if ( v13 < 0 )
  {
    v16 = v13;
    WdLogSingleEntry1(2LL, v13);
    v17 = L"0x%I64x fails Present, failed to take adapter core access shared lock";
    v5 = 0LL;
LABEL_18:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v17, v16, v5, 0LL, 0LL, 0LL);
    goto LABEL_19;
  }
  if ( !v21 )
  {
    v15 = -1073741811;
    WdLogSingleEntry2(2LL, -1073741811LL, v5);
    v17 = L"0x%I64x fails Present invalid hSource 0x%I64x";
LABEL_17:
    v16 = -1073741811LL;
    goto LABEL_18;
  }
  Count = v21[1].Count;
  if ( !Count || (v19 = a2[2], *(ADAPTER_RENDER **)(Count + 16) != v19) )
  {
    v15 = -1073741811;
    WdLogSingleEntry2(2LL, -1073741811LL, v5);
    v17 = L"0x%I64x fails Present hSource is for the wrong adapter";
    goto LABEL_17;
  }
  memset(&v23, 0, sizeof(v23));
  v23.hAllocation = *(HANDLE *)(v21[6].Count + 16);
  v15 = ADAPTER_RENDER::DdiDescribeAllocation(v19, &v23, v14);
  *(_DWORD *)a4 = v23.Width;
  *((_DWORD *)a4 + 1) = v23.Height;
  *((_DWORD *)a4 + 2) = v23.Format;
LABEL_19:
  COREACCESS::~COREACCESS((COREACCESS *)v27);
  COREACCESS::~COREACCESS((COREACCESS *)v26);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v21);
  DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v24);
  return v15;
}
