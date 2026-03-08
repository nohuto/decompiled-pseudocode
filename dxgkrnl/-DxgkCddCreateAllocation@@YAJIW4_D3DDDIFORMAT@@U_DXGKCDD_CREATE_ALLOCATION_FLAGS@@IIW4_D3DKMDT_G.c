/*
 * XREFs of ?DxgkCddCreateAllocation@@YAJIW4_D3DDDIFORMAT@@U_DXGKCDD_CREATE_ALLOCATION_FLAGS@@IIW4_D3DKMDT_GDISURFACETYPE@@P6APEAXPEBXI@ZPEAX5IPEAI6PEAPEAX6@Z @ 0x1C01B2220
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006AF0 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C00071E8 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1C0009580 (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00095E8 (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C00096AC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00096F0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0009754 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00098CC (--1COREACCESS@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C017B878 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkpExpandStackAndCreateStandardAllocation@@YAJPEAVDXGDEVICE@@PEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01B5264 (-DxgkpExpandStackAndCreateStandardAllocation@@YAJPEAVDXGDEVICE@@PEAU_D3DKM_CREATESTANDARDALLOCAT.c)
 */

__int64 __fastcall DxgkCddCreateAllocation(
        __int64 a1,
        int a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        int a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        int a10,
        _DWORD *a11,
        _DWORD *a12,
        _QWORD *a13,
        _DWORD *a14)
{
  char v14; // bl
  __int64 v15; // r13
  __int64 v16; // rdi
  __int64 v17; // rcx
  struct _KTHREAD **Current; // rax
  __int64 v19; // rcx
  __int64 v20; // r14
  struct DXGDEVICE *v21; // r15
  __int64 v22; // rax
  int v23; // eax
  int StandardAllocation; // esi
  int v25; // eax
  unsigned int v26; // r12d
  int v27; // ebx
  int v28; // ebx
  int v29; // eax
  unsigned int v30; // edi
  __int64 v31; // rcx
  __int64 v32; // r8
  int v34; // eax
  __int64 CurrentProcess; // rax
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // r8
  __int64 v39; // rbx
  int v40; // eax
  struct DXGDEVICE *v42; // [rsp+60h] [rbp-A0h] BYREF
  struct DXGDEVICE *v43; // [rsp+68h] [rbp-98h] BYREF
  _DWORD *v44; // [rsp+70h] [rbp-90h]
  int v45; // [rsp+78h] [rbp-88h] BYREF
  __int64 v46; // [rsp+80h] [rbp-80h]
  char v47; // [rsp+88h] [rbp-78h]
  __int64 v48; // [rsp+90h] [rbp-70h]
  __int64 v49; // [rsp+98h] [rbp-68h]
  _QWORD *v50; // [rsp+A0h] [rbp-60h]
  char v51[8]; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v52; // [rsp+B0h] [rbp-50h]
  char v53; // [rsp+B8h] [rbp-48h]
  _BYTE v54[16]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v55[54]; // [rsp+D0h] [rbp-30h] BYREF
  _DWORD *v56; // [rsp+280h] [rbp+180h] BYREF
  int v57; // [rsp+288h] [rbp+188h]
  int v58; // [rsp+28Ch] [rbp+18Ch]
  _DWORD v59[4]; // [rsp+290h] [rbp+190h] BYREF
  __int64 v60; // [rsp+2A0h] [rbp+1A0h]
  char v61[8]; // [rsp+2B0h] [rbp+1B0h] BYREF
  _BYTE v62[64]; // [rsp+2B8h] [rbp+1B8h] BYREF
  _BYTE v63[64]; // [rsp+2F8h] [rbp+1F8h] BYREF
  struct DXGDEVICE *v64; // [rsp+338h] [rbp+238h]
  char v65; // [rsp+340h] [rbp+240h]

  v45 = -1;
  v14 = a3;
  v48 = a7;
  v49 = a8;
  v44 = a11;
  v56 = a12;
  v50 = a13;
  v15 = a4;
  v16 = (unsigned int)a1;
  v46 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v47 = 1;
    v45 = 3017;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 3017);
  }
  else
  {
    v47 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v45, 3017);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v17);
  v20 = (__int64)Current;
  if ( !Current )
  {
    CurrentProcess = PsGetCurrentProcess(v19);
    v30 = -1073741811;
    WdLogSingleEntry2(2LL, -1073741811LL, CurrentProcess);
    v37 = PsGetCurrentProcess(v36);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"0x%I64x Unexpected process 0x%I64x",
      -1073741811LL,
      v37,
      0LL,
      0LL,
      0LL);
    goto LABEL_25;
  }
  v42 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v43, v16, Current, &v42);
  v21 = v42;
  if ( v42 )
  {
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v54, v42);
    v22 = *((_QWORD *)v21 + 2);
    v53 = 0;
    v52 = *(_QWORD *)(v22 + 16);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v51);
    COREACCESS::COREACCESS((COREACCESS *)v62, *(struct DXGADAPTER *const *)(*((_QWORD *)v21 + 2) + 16LL));
    COREACCESS::COREACCESS((COREACCESS *)v63, *(struct DXGADAPTER *const *)(*((_QWORD *)v21 + 2) + 16LL));
    v64 = v21;
    v65 = 0;
    v23 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v61, 0LL);
    StandardAllocation = v23;
    if ( v23 < 0 )
    {
      WdLogSingleEntry3(4LL, v23, v21, v20);
LABEL_62:
      v30 = StandardAllocation;
LABEL_19:
      COREACCESS::~COREACCESS((COREACCESS *)v63);
      COREACCESS::~COREACCESS((COREACCESS *)v62);
      if ( v53 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v51);
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v54);
      goto LABEL_22;
    }
    memset(v55, 0, 0x1A8uLL);
    LODWORD(v55[40]) = a10;
    v55[39] = a9;
    v25 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v21 + 2) + 16LL) + 2268LL);
    if ( (v25 & 4) == 0 && ((v25 & 0x10000000) == 0 || ((a6 - 6) & 0xFFFFFFFD) != 0) )
    {
      if ( a6 == 1 )
        goto LABEL_15;
      if ( a6 != 2 )
      {
        if ( a6 != 3 && a6 != 6 )
          goto LABEL_16;
LABEL_15:
        v26 = a5;
        v58 = 0;
        v57 = a2;
        v55[3] = &v56;
        v56 = (_DWORD *)__PAIR64__(a5, v15);
        LODWORD(v55[2]) = 2;
        StandardAllocation = DxgkpExpandStackAndCreateStandardAllocation(
                               v21,
                               (struct _D3DKM_CREATESTANDARDALLOCATION *)v55,
                               (struct COREDEVICEACCESS *)v61);
        if ( StandardAllocation >= 0 )
        {
LABEL_16:
          if ( !LODWORD(v55[1]) )
          {
            WdLogSingleEntry1(1LL, 1165LL);
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"NULL != CreateStandardAlloc.hResource",
              1165LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          v30 = 0;
          *v44 = HIDWORD(v55[6]);
          goto LABEL_19;
        }
        goto LABEL_61;
      }
      v26 = a5;
      v58 = 0;
      LODWORD(v55[0]) |= 2u;
      v57 = a2;
      v55[3] = &v56;
      v56 = (_DWORD *)__PAIR64__(a5, v15);
      LODWORD(v55[2]) = 2;
      StandardAllocation = DxgkpExpandStackAndCreateStandardAllocation(
                             v21,
                             (struct _D3DKM_CREATESTANDARDALLOCATION *)v55,
                             (struct COREDEVICEACCESS *)v61);
      if ( StandardAllocation >= 0 )
      {
        v34 = v58;
        if ( !v58 )
        {
          WdLogSingleEntry1(1LL, 1148LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"0 != StagingSurfaceData.Pitch",
            1148LL,
            0LL,
            0LL,
            0LL,
            0LL);
          v34 = v58;
        }
LABEL_32:
        *a14 = v34;
        goto LABEL_16;
      }
LABEL_61:
      WdLogSingleEntry4(3LL, StandardAllocation, v21, v15, v26);
      goto LABEL_62;
    }
    v60 = 0LL;
    v26 = a5;
    v59[2] = a2;
    v27 = LODWORD(v55[0]) ^ (LOBYTE(v55[0]) ^ (unsigned __int8)(8 * v14)) & 0x18;
    v59[0] = v15;
    v59[1] = a5;
    v59[3] = a6;
    LODWORD(v55[2]) = 4;
    v55[3] = v59;
    LODWORD(v55[0]) = v27;
    switch ( a6 )
    {
      case 1:
        goto LABEL_8;
      case 2:
        v28 = v27 | 2;
        break;
      case 5:
        v28 = v27 | 4;
        v55[4] = v48;
        v55[5] = v49;
        break;
      case 6:
LABEL_8:
        v28 = v27 | 1;
        break;
      default:
        if ( (unsigned int)(a6 - 7) > 1 )
        {
LABEL_10:
          StandardAllocation = DxgkpExpandStackAndCreateStandardAllocation(
                                 v21,
                                 (struct _D3DKM_CREATESTANDARDALLOCATION *)v55,
                                 (struct COREDEVICEACCESS *)v61);
          if ( StandardAllocation < 0 )
            goto LABEL_61;
          if ( a6 == 1 )
          {
LABEL_12:
            v29 = HIDWORD(v55[1]);
            if ( !HIDWORD(v55[1]) )
            {
              WdLogSingleEntry1(1LL, 1103LL);
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                -1,
                (__int64)L"NULL != CreateStandardAlloc.hGlobalShare",
                1103LL,
                0LL,
                0LL,
                0LL,
                0LL);
              v29 = HIDWORD(v55[1]);
            }
            *v56 = v29;
            goto LABEL_16;
          }
          if ( a6 == 2 || a6 == 5 )
          {
            v34 = HIDWORD(v60);
            if ( !HIDWORD(v60) )
            {
              WdLogSingleEntry1(1LL, 1108LL);
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                -1,
                (__int64)L"0 != GdiSurfaceData.Pitch",
                1108LL,
                0LL,
                0LL,
                0LL,
                0LL);
              v34 = HIDWORD(v60);
            }
            goto LABEL_32;
          }
          if ( a6 != 6 )
          {
            if ( a6 == 7 )
              goto LABEL_12;
            if ( a6 != 8 )
              goto LABEL_16;
          }
          *v50 = v55[41];
          v40 = HIDWORD(v60);
          if ( !HIDWORD(v60) )
          {
            WdLogSingleEntry1(1LL, 1096LL);
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"0 != GdiSurfaceData.Pitch",
              1096LL,
              0LL,
              0LL,
              0LL,
              0LL);
            v40 = HIDWORD(v60);
          }
          *a14 = v40;
          goto LABEL_12;
        }
        v28 = v27 | 0x21;
        break;
    }
    LODWORD(v55[0]) = v28;
    goto LABEL_10;
  }
  v38 = v16;
  v39 = v16;
  v30 = -1073741811;
  WdLogSingleEntry3(2LL, -1073741811LL, v38, v20);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"0x%I64x Invalid hDevice=0x%I64x specified DXGPROCESS=0x%I64x",
    -1073741811LL,
    v39,
    v20,
    0LL,
    0LL);
LABEL_22:
  if ( v43 && _InterlockedExchangeAdd64((volatile signed __int64 *)v43 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v43 + 2), v43);
LABEL_25:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v45);
  if ( v47 )
  {
    LOBYTE(v31) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v31, &EventProfilerExit, v32, v45);
  }
  return v30;
}
