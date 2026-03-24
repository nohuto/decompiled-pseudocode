/*
 * XREFs of ?DxgkCddCreateAllocation@@YAJIW4_D3DDDIFORMAT@@U_DXGKCDD_CREATE_ALLOCATION_FLAGS@@IIW4_D3DKMDT_GDISURFACETYPE@@P6APEAXPEBXI@ZPEAX5IPEAI6PEAPEAX6@Z @ 0x1C0126010
 * Callers:
 *     <none>
 * Callees:
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C00033FC (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0004EF0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007B84 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007BE0 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C00087C0 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00088C4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008AF8 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00EEC04 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C011B800 (-CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACC.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C020D704 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C026962C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
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
  __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  struct _KTHREAD **Current; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  struct _KTHREAD **v24; // r15
  __int64 v25; // rdx
  __int64 v26; // rcx
  struct DXGDEVICE *v27; // r14
  char *v28; // rdi
  struct _KEVENT *v29; // rsi
  struct _ERESOURCE *v30; // rcx
  __int64 v31; // rax
  volatile signed __int64 *v32; // rcx
  volatile signed __int64 *v33; // rcx
  int v34; // eax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rsi
  __int64 v38; // rdx
  __int64 v39; // r8
  _QWORD *v40; // rcx
  int v41; // eax
  int v42; // ebx
  int v43; // ebx
  int v44; // eax
  unsigned int v45; // ebx
  unsigned int v46; // edi
  struct DXGADAPTER *v47; // rcx
  struct DXGADAPTER *v48; // rcx
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  int v53; // eax
  __int64 v54; // rcx
  unsigned __int8 v55; // si
  __int64 v56; // r8
  __int64 v57; // rbx
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  _QWORD *v62; // rax
  _QWORD *v63; // rax
  int v64; // eax
  __int64 v65; // rax
  int v66; // eax
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // rax
  _QWORD *v71; // rax
  struct DXGDEVICE *v73; // [rsp+38h] [rbp-C8h] BYREF
  _DWORD *v74; // [rsp+40h] [rbp-C0h]
  PERESOURCE *v75; // [rsp+48h] [rbp-B8h]
  struct DXGDEVICE *v76; // [rsp+50h] [rbp-B0h] BYREF
  int v77; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v78; // [rsp+60h] [rbp-A0h]
  char v79; // [rsp+68h] [rbp-98h]
  __int64 v80; // [rsp+70h] [rbp-90h]
  __int64 v81; // [rsp+78h] [rbp-88h]
  __int64 v82; // [rsp+80h] [rbp-80h]
  _QWORD *v83; // [rsp+88h] [rbp-78h]
  _DWORD *v84; // [rsp+90h] [rbp-70h]
  _BYTE v85[8]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v86; // [rsp+A0h] [rbp-60h]
  char v87; // [rsp+A8h] [rbp-58h]
  _QWORD v88[54]; // [rsp+B0h] [rbp-50h] BYREF
  _DWORD v89[3]; // [rsp+260h] [rbp+160h] BYREF
  int v90; // [rsp+26Ch] [rbp+16Ch]
  _DWORD v91[4]; // [rsp+270h] [rbp+170h] BYREF
  __int64 v92; // [rsp+280h] [rbp+180h]
  _DWORD v93[6]; // [rsp+288h] [rbp+188h] BYREF
  _BYTE v94[8]; // [rsp+2A0h] [rbp+1A0h] BYREF
  _BYTE v95[8]; // [rsp+2A8h] [rbp+1A8h] BYREF
  __int64 v96; // [rsp+2B0h] [rbp+1B0h]
  struct DXGADAPTER *v97; // [rsp+2B8h] [rbp+1B8h]
  char v98; // [rsp+2C0h] [rbp+1C0h]
  __int64 v99; // [rsp+2C8h] [rbp+1C8h]
  _BYTE v100[8]; // [rsp+2E8h] [rbp+1E8h] BYREF
  __int64 v101; // [rsp+2F0h] [rbp+1F0h]
  struct DXGADAPTER *v102; // [rsp+2F8h] [rbp+1F8h]
  char v103; // [rsp+300h] [rbp+200h]
  __int64 v104; // [rsp+308h] [rbp+208h]
  struct DXGDEVICE *v105; // [rsp+328h] [rbp+228h]
  char v106; // [rsp+330h] [rbp+230h]

  v14 = a3;
  v77 = -1;
  v78 = 0LL;
  v81 = a7;
  v82 = a8;
  v80 = a9;
  v74 = a11;
  v84 = a12;
  v83 = a13;
  v16 = (unsigned int)a1;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v79 = 1;
    v77 = 3017;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 3017);
  }
  else
  {
    v79 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v77, 3017LL);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v18, v17, v19, v20);
  v24 = Current;
  if ( !Current )
  {
    v46 = -1073741811;
    v57 = WdLogNewEntry5_WdError(v23, v22);
    *(_QWORD *)(v57 + 24) = -1073741811LL;
    *(_QWORD *)(v57 + 32) = PsGetCurrentProcess(v59, v58, v60, v61);
    WdLogEvent5_WdError(v57);
    goto LABEL_43;
  }
  v73 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v76, (unsigned int)v16, Current, &v73);
  v27 = v73;
  if ( v73 )
  {
    v28 = (char *)v73 + 16;
    v29 = (struct _KEVENT *)*((_QWORD *)v73 + 2);
    if ( !KeReadStateEvent(v29 + 5) )
      KeWaitForSingleObject(&v29[5], Executive, 0, 0, 0LL);
    KeEnterCriticalRegion();
    v30 = (struct _ERESOURCE *)*((_QWORD *)v27 + 17);
    v75 = (PERESOURCE *)((char *)v27 + 136);
    if ( !ExAcquireResourceExclusiveLite(v30, 0) )
    {
      DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)v28 + 16LL) + 104LL));
      v55 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)v28 + 16LL));
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q_EtwWriteTransfer(v54, &EventBlockThread, v56, 40);
      ExAcquireResourceExclusiveLite(*v75, 1u);
      if ( v55 )
        DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)v28 + 16LL));
      ExReleasePushLockSharedEx(*(_QWORD *)(*(_QWORD *)v28 + 16LL) + 104LL, 0LL);
      KeLeaveCriticalRegion();
    }
    v31 = *(_QWORD *)v28;
    v87 = 0;
    v86 = *(_QWORD *)(v31 + 16);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v85);
    v32 = *(volatile signed __int64 **)(*(_QWORD *)v28 + 16LL);
    v97 = (struct DXGADAPTER *)v32;
    v98 = 0;
    v99 = 0LL;
    if ( v32 )
    {
      _InterlockedIncrement64(v32 + 3);
      v96 = -1LL;
      v27 = v73;
    }
    v33 = *(volatile signed __int64 **)(*(_QWORD *)v28 + 16LL);
    v102 = (struct DXGADAPTER *)v33;
    v103 = 0;
    v104 = 0LL;
    if ( v33 )
    {
      _InterlockedIncrement64(v33 + 3);
      v101 = -1LL;
      v27 = v73;
    }
    v105 = v27;
    v106 = 0;
    v34 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v94, 0LL);
    v37 = v34;
    if ( v34 < 0 )
    {
      v63 = (_QWORD *)WdLogNewEntry5_WdEvent(v36, v35);
      v63[3] = v37;
      v63[4] = v27;
      v63[5] = v24;
      WdLogEvent5_WdEvent(v63);
LABEL_90:
      v46 = v37;
LABEL_27:
      v47 = v102;
      if ( v102 )
      {
        if ( v103 )
        {
          COREACCESS::Release((COREACCESS *)v100);
          v47 = v102;
        }
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v47 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v47 + 2), v47);
      }
      v48 = v97;
      if ( v97 )
      {
        if ( v98 )
        {
          COREACCESS::Release((COREACCESS *)v95);
          v48 = v97;
        }
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v48 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v48 + 2), v48);
      }
      if ( v87 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v85);
      ExReleaseResourceLite(*v75);
      KeLeaveCriticalRegion();
      goto LABEL_40;
    }
    memset(v88, 0, 0x1A8uLL);
    v88[39] = v80;
    LODWORD(v88[40]) = a10;
    v40 = *(_QWORD **)(*(_QWORD *)v28 + 16LL);
    v41 = *((_DWORD *)v40 + 511);
    if ( (v41 & 4) == 0 && ((v41 & 0x10000000) == 0 || ((a6 - 6) & 0xFFFFFFFD) != 0) )
    {
      if ( a6 == 1 )
      {
LABEL_77:
        v93[3] = 0;
        v45 = a4;
        v88[3] = v93;
        v93[0] = a4;
        v93[1] = a5;
        v93[2] = a2;
        LODWORD(v88[2]) = 2;
        LODWORD(v37) = DXGDEVICE::CreateStandardAllocation(
                         (struct _DXGK_ALLOCATIONINFO *)v27,
                         (struct _D3DKM_CREATESTANDARDALLOCATION *)v88,
                         (struct COREDEVICEACCESS *)v94);
        goto LABEL_23;
      }
      if ( a6 != 2 )
      {
        if ( a6 == 3 || a6 == 6 )
          goto LABEL_77;
LABEL_22:
        v45 = a4;
        goto LABEL_23;
      }
      v45 = a4;
      v90 = 0;
      LODWORD(v88[0]) |= 2u;
      v88[3] = v89;
      v89[0] = a4;
      v89[1] = a5;
      v89[2] = a2;
      LODWORD(v88[2]) = 2;
      LODWORD(v37) = DXGDEVICE::CreateStandardAllocation(
                       (struct _DXGK_ALLOCATIONINFO *)v27,
                       (struct _D3DKM_CREATESTANDARDALLOCATION *)v88,
                       (struct COREDEVICEACCESS *)v94);
      if ( (int)v37 >= 0 )
      {
        v64 = v90;
        if ( !v90 )
        {
          v65 = WdLogNewEntry5_WdAssertion(v40, v38);
          *(_QWORD *)(v65 + 24) = 1097LL;
          WdLogEvent5_WdAssertion(v65);
          v64 = v90;
        }
        *a14 = v64;
LABEL_23:
        if ( (int)v37 >= 0 )
        {
          if ( !LODWORD(v88[1]) )
          {
            v70 = WdLogNewEntry5_WdAssertion(v40, v38);
            *(_QWORD *)(v70 + 24) = 1114LL;
            WdLogEvent5_WdAssertion(v70);
          }
          v46 = 0;
          *v74 = HIDWORD(v88[6]);
          goto LABEL_27;
        }
      }
LABEL_89:
      v71 = (_QWORD *)WdLogNewEntry5_WdWarning(v40, v38, v39);
      v71[3] = (int)v37;
      v71[5] = v45;
      v71[4] = v27;
      v71[6] = a5;
      WdLogEvent5_WdWarning(v71);
      goto LABEL_90;
    }
    v92 = 0LL;
    v91[0] = a4;
    v42 = LODWORD(v88[0]) ^ (LOBYTE(v88[0]) ^ (unsigned __int8)(8 * v14)) & 0x18;
    v91[1] = a5;
    v91[2] = a2;
    v91[3] = a6;
    LODWORD(v88[2]) = 4;
    v88[3] = v91;
    LODWORD(v88[0]) = v42;
    switch ( a6 )
    {
      case 1:
        goto LABEL_15;
      case 2:
        v43 = v42 | 2;
        break;
      case 5:
        v43 = v42 | 4;
        v88[4] = v81;
        v88[5] = v82;
        break;
      case 6:
LABEL_15:
        v43 = v42 | 1;
        break;
      default:
        if ( a6 <= 6 || a6 > 8 )
        {
LABEL_17:
          LODWORD(v37) = DXGDEVICE::CreateStandardAllocation(
                           (struct _DXGK_ALLOCATIONINFO *)v27,
                           (struct _D3DKM_CREATESTANDARDALLOCATION *)v88,
                           (struct COREDEVICEACCESS *)v94);
          if ( (int)v37 < 0 )
          {
            v45 = a4;
            goto LABEL_89;
          }
          if ( a6 == 1 )
          {
LABEL_19:
            v44 = HIDWORD(v88[1]);
            if ( !HIDWORD(v88[1]) )
            {
              v69 = WdLogNewEntry5_WdAssertion(v40, v38);
              *(_QWORD *)(v69 + 24) = 1052LL;
              WdLogEvent5_WdAssertion(v69);
              v44 = HIDWORD(v88[1]);
            }
            v40 = v84;
            *v84 = v44;
            goto LABEL_22;
          }
          if ( a6 == 2 || a6 == 5 )
          {
            v53 = HIDWORD(v92);
            if ( !HIDWORD(v92) )
            {
              v68 = WdLogNewEntry5_WdAssertion(v40, v38);
              *(_QWORD *)(v68 + 24) = 1057LL;
              WdLogEvent5_WdAssertion(v68);
              v53 = HIDWORD(v92);
            }
            *a14 = v53;
            goto LABEL_22;
          }
          if ( a6 != 6 )
          {
            if ( a6 == 7 )
              goto LABEL_19;
            if ( a6 != 8 )
              goto LABEL_22;
          }
          v40 = v83;
          *v83 = v88[41];
          v66 = HIDWORD(v92);
          if ( !HIDWORD(v92) )
          {
            v67 = WdLogNewEntry5_WdAssertion(v40, v38);
            *(_QWORD *)(v67 + 24) = 1045LL;
            WdLogEvent5_WdAssertion(v67);
            v66 = HIDWORD(v92);
          }
          *a14 = v66;
          goto LABEL_19;
        }
        v43 = v42 | 0x21;
        break;
    }
    LODWORD(v88[0]) = v43;
    goto LABEL_17;
  }
  v62 = (_QWORD *)WdLogNewEntry5_WdError(v26, v25);
  v46 = -1073741811;
  v62[3] = -1073741811LL;
  v62[4] = v16;
  v62[5] = v24;
  WdLogEvent5_WdError(v62);
LABEL_40:
  if ( v76 && _InterlockedExchangeAdd64((volatile signed __int64 *)v76 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v76 + 2), v76);
LABEL_43:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v77, v49);
  if ( v79 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v50, &EventProfilerExit, v51, v77);
  return v46;
}
