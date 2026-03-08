/*
 * XREFs of ?DxgkCddDestroyAllocation@@YAJII@Z @ 0x1C01B16B0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006AF0 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006F40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z @ 0x1C00072AC (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1C0009580 (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00095E8 (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C00096AC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00096F0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0009754 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00098CC (--1COREACCESS@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0009B78 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C017B878 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C01C6838 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     DxgkDestroyClientAllocation @ 0x1C02D4BF0 (DxgkDestroyClientAllocation.c)
 */

__int64 __fastcall DxgkCddDestroyAllocation(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 v4; // rdi
  __int64 v5; // rcx
  struct _KTHREAD **Current; // rax
  __int64 v7; // rcx
  __int64 v8; // rsi
  struct DXGDEVICE *v9; // rbx
  __int64 v10; // rax
  char *v11; // rdx
  unsigned int v12; // ecx
  unsigned int v13; // r8d
  __int64 v14; // r9
  unsigned int v15; // edx
  int v16; // edx
  __int64 v17; // rbx
  unsigned int v18; // ecx
  __int64 v19; // rcx
  unsigned int v20; // edi
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 CurrentProcess; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // r8
  __int64 v28; // rbx
  struct DXGDEVICE *v29; // rdi
  struct DXGDEVICE *v30; // [rsp+50h] [rbp-B0h] BYREF
  struct DXGDEVICE *v31; // [rsp+58h] [rbp-A8h] BYREF
  int v32; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v33; // [rsp+68h] [rbp-98h]
  char v34; // [rsp+70h] [rbp-90h]
  char v35[8]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v36; // [rsp+80h] [rbp-80h]
  char v37; // [rsp+88h] [rbp-78h]
  _BYTE v38[16]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v39[32]; // [rsp+A0h] [rbp-60h] BYREF
  char v40[8]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v41[64]; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE v42[64]; // [rsp+108h] [rbp+8h] BYREF
  struct DXGDEVICE *v43; // [rsp+148h] [rbp+48h]
  char v44; // [rsp+150h] [rbp+50h]

  v32 = -1;
  v3 = a2;
  v4 = (unsigned int)a1;
  v33 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v34 = 1;
    v32 = 3018;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 3018);
  }
  else
  {
    v34 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v32, 3018);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v5);
  v8 = (__int64)Current;
  if ( !Current )
  {
    CurrentProcess = PsGetCurrentProcess(v7);
    v20 = -1073741811;
    WdLogSingleEntry2(2LL, -1073741811LL, CurrentProcess);
    v26 = PsGetCurrentProcess(v25);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"0x%I64x Unexpected process 0x%I64x",
      -1073741811LL,
      v26,
      0LL,
      0LL,
      0LL);
    goto LABEL_29;
  }
  v30 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v31, v4, Current, &v30);
  v9 = v30;
  if ( v30 )
  {
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v38, v30);
    v10 = *((_QWORD *)v9 + 2);
    v37 = 0;
    v36 = *(_QWORD *)(v10 + 16);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v35);
    COREACCESS::COREACCESS((COREACCESS *)v41, *(struct DXGADAPTER *const *)(*((_QWORD *)v9 + 2) + 16LL));
    COREACCESS::COREACCESS((COREACCESS *)v42, *(struct DXGADAPTER *const *)(*((_QWORD *)v9 + 2) + 16LL));
    v43 = v9;
    v44 = 0;
    COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v40, v11);
    if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v9 + 2) + 16LL) + 200LL) == 4 )
      goto LABEL_22;
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
      (DXGHANDLETABLELOCKEXCLUSIVE *)v39,
      (struct DXGPROCESS *)v8);
    v12 = ((unsigned int)v3 >> 6) & 0xFFFFFF;
    v13 = (unsigned int)v3 >> 30;
    if ( v12 < *(_DWORD *)(v8 + 296) )
    {
      v14 = *(_QWORD *)(v8 + 280);
      v15 = *(_DWORD *)(v14 + 16LL * v12 + 8);
      if ( v13 == ((v15 >> 5) & 3) && (v15 & 0x2000) == 0 )
      {
        v16 = v15 & 0x1F;
        if ( v16 )
        {
          if ( v16 == 5 )
          {
            v17 = *(_QWORD *)(v14 + 16LL * v12);
            if ( v17 )
            {
              if ( v12 < *(_DWORD *)(v8 + 296) )
              {
                v18 = *(_DWORD *)(v14 + 16LL * v12 + 8);
                if ( v13 == ((v18 >> 5) & 3) && (v18 & 0x2000) == 0 && (v18 & 0x1F) != 0 )
                  *(_DWORD *)(v14 + 16 * (((unsigned __int64)(unsigned int)v3 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
              }
            }
            goto LABEL_19;
          }
          WdLogSingleEntry1(2LL, 267LL);
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
    }
    v17 = 0LL;
LABEL_19:
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v39);
    if ( !v17 )
    {
      v29 = v30;
      WdLogSingleEntry3(2LL, *(_QWORD *)(*((_QWORD *)v30 + 2) + 16LL), v30, v3);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Invalid allocation is passed to DxgkCddDestroyAllocation. DXGADAPTER 0x%I64x DXGDEVICE 0x%I64x DXGALLOCATION 0x%I64x",
        *(_QWORD *)(*((_QWORD *)v29 + 2) + 16LL),
        (__int64)v29,
        v3,
        0LL,
        0LL);
      v20 = -1073741811;
      goto LABEL_23;
    }
    v19 = *((unsigned int *)v30 + 152);
    if ( (_DWORD)v19 == 4 )
      DxgkDestroyClientAllocation(v19, v30, 0LL, 0LL, *(_QWORD *)(v17 + 40));
    else
      DXGDEVICE::DestroyAllocationInternal(
        v30,
        0,
        0LL,
        *(struct DXGRESOURCE **)(v17 + 40),
        (struct COREDEVICEACCESS *)v40,
        (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)DXGDEVICE::DestroyFlagsDefault.0);
LABEL_22:
    v20 = 0;
LABEL_23:
    COREACCESS::~COREACCESS((COREACCESS *)v42);
    COREACCESS::~COREACCESS((COREACCESS *)v41);
    if ( v37 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v35);
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v38);
    goto LABEL_26;
  }
  v27 = v4;
  v28 = v4;
  v20 = -1073741811;
  WdLogSingleEntry3(2LL, -1073741811LL, v27, v8);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"0x%I64x Invalid hDevice=0x%I64x specified DXGPROCESS=0x%I64x",
    -1073741811LL,
    v28,
    v8,
    0LL,
    0LL);
LABEL_26:
  if ( v31 && _InterlockedExchangeAdd64((volatile signed __int64 *)v31 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v31 + 2), v31);
LABEL_29:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32);
  if ( v34 )
  {
    LOBYTE(v21) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v21, &EventProfilerExit, v22, v32);
  }
  return v20;
}
