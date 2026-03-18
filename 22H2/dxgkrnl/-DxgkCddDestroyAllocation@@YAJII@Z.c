/*
 * XREFs of ?DxgkCddDestroyAllocation@@YAJII@Z @ 0x1C019F2A0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z @ 0x1C0004690 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0004D78 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1C00073B4 (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00075BC (--1COREACCESS@@QEAA@XZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000763C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00076E8 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000778C (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C0007850 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0007B4C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0007CA4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A61C (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B0F0 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C0023E40 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00240A0 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C018A268 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01B3460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C01DE690 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     DxgkDestroyClientAllocation @ 0x1C02D9980 (DxgkDestroyClientAllocation.c)
 */

__int64 __fastcall DxgkCddDestroyAllocation(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 v4; // rdi
  struct _KTHREAD **Current; // rax
  __int64 v6; // rcx
  __int64 v7; // rsi
  struct DXGDEVICE *v8; // rbx
  __int64 v9; // rax
  char *v10; // rdx
  unsigned int v11; // ecx
  unsigned int v12; // r8d
  __int64 v13; // r9
  unsigned int v14; // edx
  int v15; // edx
  __int64 v16; // rbx
  unsigned int v17; // ecx
  __int64 v18; // rcx
  unsigned int v19; // edi
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 CurrentProcess; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // r8
  __int64 v27; // rbx
  struct DXGDEVICE *v28; // rdi
  struct DXGDEVICE *v29; // [rsp+50h] [rbp-B0h] BYREF
  struct DXGDEVICE *v30; // [rsp+58h] [rbp-A8h] BYREF
  int v31; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v32; // [rsp+68h] [rbp-98h]
  char v33; // [rsp+70h] [rbp-90h]
  char v34[8]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v35; // [rsp+80h] [rbp-80h]
  char v36; // [rsp+88h] [rbp-78h]
  _BYTE v37[16]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v38[32]; // [rsp+A0h] [rbp-60h] BYREF
  char v39[8]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v40[64]; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE v41[64]; // [rsp+108h] [rbp+8h] BYREF
  struct DXGDEVICE *v42; // [rsp+148h] [rbp+48h]
  char v43; // [rsp+150h] [rbp+50h]

  v31 = -1;
  v3 = a2;
  v4 = (unsigned int)a1;
  v32 = 0LL;
  if ( (qword_1C013F870 & 2) != 0 )
  {
    v33 = 1;
    v31 = 3018;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 3018);
  }
  else
  {
    v33 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v31, 3018);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  v7 = (__int64)Current;
  if ( !Current )
  {
    CurrentProcess = PsGetCurrentProcess(v6);
    v19 = -1073741811;
    WdLogSingleEntry2(2LL, -1073741811LL, CurrentProcess);
    v25 = PsGetCurrentProcess(v24);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"0x%I64x Unexpected process 0x%I64x",
      -1073741811LL,
      v25,
      0LL,
      0LL,
      0LL);
    goto LABEL_29;
  }
  v29 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v30, v4, Current, &v29);
  v8 = v29;
  if ( v29 )
  {
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v37, v29);
    v9 = *((_QWORD *)v8 + 2);
    v36 = 0;
    v35 = *(_QWORD *)(v9 + 16);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v34);
    COREACCESS::COREACCESS((COREACCESS *)v40, *(struct DXGADAPTER *const *)(*((_QWORD *)v8 + 2) + 16LL));
    COREACCESS::COREACCESS((COREACCESS *)v41, *(struct DXGADAPTER *const *)(*((_QWORD *)v8 + 2) + 16LL));
    v42 = v8;
    v43 = 0;
    COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v39, v10);
    if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v8 + 2) + 16LL) + 200LL) == 4 )
      goto LABEL_22;
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
      (DXGHANDLETABLELOCKEXCLUSIVE *)v38,
      (struct DXGPROCESS *)v7);
    v11 = ((unsigned int)v3 >> 6) & 0xFFFFFF;
    v12 = (unsigned int)v3 >> 30;
    if ( v11 < *(_DWORD *)(v7 + 296) )
    {
      v13 = *(_QWORD *)(v7 + 280);
      v14 = *(_DWORD *)(v13 + 16LL * v11 + 8);
      if ( v12 == ((v14 >> 5) & 3) && (v14 & 0x2000) == 0 )
      {
        v15 = v14 & 0x1F;
        if ( v15 )
        {
          if ( v15 == 5 )
          {
            v16 = *(_QWORD *)(v13 + 16LL * v11);
            if ( v16 )
            {
              if ( v11 < *(_DWORD *)(v7 + 296) )
              {
                v17 = *(_DWORD *)(v13 + 16LL * v11 + 8);
                if ( v12 == ((v17 >> 5) & 3) && (v17 & 0x2000) == 0 && (v17 & 0x1F) != 0 )
                  *(_DWORD *)(v13 + 16 * (((unsigned __int64)(unsigned int)v3 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
              }
            }
            goto LABEL_19;
          }
          WdLogSingleEntry1(2LL, 316LL);
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 316LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
    }
    v16 = 0LL;
LABEL_19:
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v38);
    if ( !v16 )
    {
      v28 = v29;
      WdLogSingleEntry3(2LL, *(_QWORD *)(*((_QWORD *)v29 + 2) + 16LL), v29, v3);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Invalid allocation is passed to DxgkCddDestroyAllocation. DXGADAPTER 0x%I64x DXGDEVICE 0x%I64x DXGALLOCATION 0x%I64x",
        *(_QWORD *)(*((_QWORD *)v28 + 2) + 16LL),
        (__int64)v28,
        v3,
        0LL,
        0LL);
      v19 = -1073741811;
      goto LABEL_23;
    }
    v18 = *((unsigned int *)v29 + 152);
    if ( (_DWORD)v18 == 4 )
      DxgkDestroyClientAllocation(v18, v29, 0LL, 0LL, *(_QWORD *)(v16 + 40));
    else
      DXGDEVICE::DestroyAllocationInternal(
        v29,
        0,
        0LL,
        *(struct DXGRESOURCE **)(v16 + 40),
        (struct COREDEVICEACCESS *)v39,
        (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)DXGDEVICE::DestroyFlagsDefault.0);
LABEL_22:
    v19 = 0;
LABEL_23:
    COREACCESS::~COREACCESS((COREACCESS *)v41);
    COREACCESS::~COREACCESS((COREACCESS *)v40);
    if ( v36 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v34);
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v37);
    goto LABEL_26;
  }
  v26 = v4;
  v27 = v4;
  v19 = -1073741811;
  WdLogSingleEntry3(2LL, -1073741811LL, v26, v7);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"0x%I64x Invalid hDevice=0x%I64x specified DXGPROCESS=0x%I64x",
    -1073741811LL,
    v27,
    v7,
    0LL,
    0LL);
LABEL_26:
  if ( v30 && _InterlockedExchangeAdd64((volatile signed __int64 *)v30 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v30 + 2), v30);
LABEL_29:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31);
  if ( v33 )
  {
    LOBYTE(v20) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v20, &EventProfilerExit, v21, v31);
  }
  return v19;
}
