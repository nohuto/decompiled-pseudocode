/*
 * XREFs of ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEBKPEAGKPEAJ@Z @ 0x1C00246E4
 * Callers:
 *     DrvGetDisplayDriverParameters @ 0x1C00188E0 (DrvGetDisplayDriverParameters.c)
 *     DrvUpdateDisplayDriverParameters @ 0x1C001C3F8 (DrvUpdateDisplayDriverParameters.c)
 *     DrvUpdateGraphicsDeviceList @ 0x1C001CDB0 (DrvUpdateGraphicsDeviceList.c)
 *     ?DrvSetDisconnectedGraphicsDevice@@YAHH@Z @ 0x1C001F34C (-DrvSetDisconnectedGraphicsDevice@@YAHH@Z.c)
 *     ?GetPrimaryAttachFlags@@YAHPEAUtagGRAPHICS_DEVICE@@GPEAK1@Z @ 0x1C00210F0 (-GetPrimaryAttachFlags@@YAHPEAUtagGRAPHICS_DEVICE@@GPEAK1@Z.c)
 *     DrvEnumDisplayDevices @ 0x1C0023B90 (DrvEnumDisplayDevices.c)
 *     ?DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00245E8 (-DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?DrvGetDriverAccelerationsLevel@@YAKPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00BD52C (-DrvGetDriverAccelerationsLevel@@YAKPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?DrvGetDriverCapableOverRide@@YAKPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00BD79C (-DrvGetDriverCapableOverRide@@YAKPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?DrvUpdateAttachFlag@@YAXPEAUtagGRAPHICS_DEVICE@@K@Z @ 0x1C00C083C (-DrvUpdateAttachFlag@@YAXPEAUtagGRAPHICS_DEVICE@@K@Z.c)
 *     DrvAddMirrorDriversToRemoteList @ 0x1C00CAEC4 (DrvAddMirrorDriversToRemoteList.c)
 *     DrvSetPruneFlag @ 0x1C0167C4C (DrvSetPruneFlag.c)
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x1C001B580 (UserIsCurrentProcessDwm.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C001F2E4 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0023A80 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?StringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x1C0024ED4 (-StringCchCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C004F0F4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C460 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00919C0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     wcsstr @ 0x1C00CE008 (wcsstr.c)
 *     wcschr @ 0x1C00CE068 (wcschr.c)
 *     toupper @ 0x1C00CE3A0 (toupper.c)
 *     _wcsnicmp @ 0x1C00CE408 (_wcsnicmp.c)
 *     memset @ 0x1C00D6A00 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C016DC98 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C016DD4C (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C016E29C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C016E668 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C016F5EC (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C016FA8C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 */

HANDLE __fastcall DrvGetRegistryHandleFromDeviceMap(
        unsigned __int16 *a1,
        int a2,
        unsigned int *a3,
        unsigned __int16 *a4,
        unsigned int a5,
        NTSTATUS *a6)
{
  __int64 v6; // r13
  unsigned __int16 *v9; // r15
  __int64 v10; // rdi
  void *v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // r14
  __int64 v14; // rcx
  int v15; // r12d
  NSInstrumentation::CLeakTrackingAllocator *v16; // rdi
  int v17; // eax
  __int64 UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64; // rbx
  NTSTATUS v19; // ebx
  NSInstrumentation::CLeakTrackingAllocator *v20; // rbx
  int v21; // eax
  bool v22; // zf
  const WCHAR *v23; // rdx
  unsigned int *v24; // r12
  unsigned __int16 *v25; // r14
  __int64 v26; // rcx
  PCWSTR v27; // r14
  ULONG v28; // r15d
  int v30; // eax
  int v31; // ecx
  const WCHAR *v32; // rdx
  wchar_t *v33; // rax
  wchar_t *v34; // rdi
  int v35; // eax
  char v36; // r13
  __int64 v37; // rax
  ULONG Length; // r12d
  NSInstrumentation::CLeakTrackingAllocator *v39; // r14
  __int64 v40; // rbx
  int v41; // eax
  unsigned __int64 v42; // rbx
  __int64 v43; // r11
  _WORD *i; // rcx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // rcx
  unsigned __int16 *v51; // rax
  __int128 v52; // xmm1
  __int128 v53; // xmm0
  __int128 v54; // xmm1
  __int128 v55; // xmm0
  __int128 v56; // xmm1
  __int128 v57; // xmm0
  __int128 v58; // xmm1
  __int128 v59; // xmm1
  __int128 v60; // xmm0
  _QWORD *Pool2; // rax
  unsigned int v62; // r10d
  __int64 v63; // r11
  _QWORD *v64; // rax
  unsigned int v65; // r10d
  __int64 v66; // r11
  _QWORD *v67; // rax
  unsigned int v68; // r10d
  __int64 v69; // r11
  _WORD *j; // r14
  int v71; // r12d
  int v72; // r13d
  wchar_t *v73; // r14
  wchar_t *v74; // r15
  wchar_t *v75; // rsi
  void *v76; // [rsp+40h] [rbp-C0h]
  void *v77; // [rsp+48h] [rbp-B8h]
  struct _UNICODE_STRING DestinationString; // [rsp+58h] [rbp-A8h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v81; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v82; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v83; // [rsp+80h] [rbp-80h] BYREF
  ULONG v84[2]; // [rsp+88h] [rbp-78h] BYREF
  void *KeyHandle; // [rsp+90h] [rbp-70h] BYREF
  struct _UNICODE_STRING Destination; // [rsp+98h] [rbp-68h] BYREF
  ULONG ResultLength; // [rsp+A8h] [rbp-58h] BYREF
  int v88; // [rsp+ACh] [rbp-54h]
  unsigned __int64 v89; // [rsp+B0h] [rbp-50h] BYREF
  unsigned __int64 v90; // [rsp+B8h] [rbp-48h] BYREF
  unsigned __int16 *v91; // [rsp+C0h] [rbp-40h]
  HANDLE v92; // [rsp+C8h] [rbp-38h] BYREF
  wchar_t *Str1; // [rsp+D0h] [rbp-30h]
  PCWSTR Source; // [rsp+D8h] [rbp-28h]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v96; // [rsp+110h] [rbp+10h] BYREF
  unsigned __int16 *v97; // [rsp+118h] [rbp+18h]
  __int64 v98; // [rsp+120h] [rbp+20h] BYREF
  __int64 v99; // [rsp+128h] [rbp+28h] BYREF
  __int64 *v100; // [rsp+130h] [rbp+30h] BYREF
  unsigned int *v101; // [rsp+138h] [rbp+38h]
  __int64 v102; // [rsp+140h] [rbp+40h] BYREF
  unsigned int *v103; // [rsp+148h] [rbp+48h]
  WCHAR *v104; // [rsp+150h] [rbp+50h]
  NTSTATUS *v105; // [rsp+158h] [rbp+58h]
  __int64 v106; // [rsp+160h] [rbp+60h] BYREF
  __int64 v107; // [rsp+168h] [rbp+68h] BYREF
  unsigned int *v108; // [rsp+170h] [rbp+70h]
  __int64 v109; // [rsp+178h] [rbp+78h]
  _QWORD v110[2]; // [rsp+180h] [rbp+80h] BYREF
  PVOID BackTrace[20]; // [rsp+190h] [rbp+90h] BYREF
  PVOID v112[20]; // [rsp+230h] [rbp+130h] BYREF
  PVOID v113[20]; // [rsp+2D0h] [rbp+1D0h] BYREF
  unsigned __int16 v114[152]; // [rsp+370h] [rbp+270h] BYREF

  v6 = a2;
  v105 = a6;
  v103 = a3;
  v9 = a1;
  v97 = a1;
  Handle = 0LL;
  KeyHandle = 0LL;
  ResultLength = 0;
  v76 = 0LL;
  v10 = 0LL;
  v91 = a4;
  v11 = 0LL;
  DestinationString = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  memset(v114, 0, sizeof(v114));
  v13 = *(_QWORD *)(SGDGetSessionState(v12) + 24);
  WdLogSingleEntry3(5LL, v9, v6, a3);
  if ( a4 && !a5 )
  {
    v19 = -1073741811;
    goto LABEL_31;
  }
  if ( *(_DWORD *)(v13 + 3080) )
  {
    v45 = *(_QWORD *)(SGDGetSessionState(v14) + 24);
    if ( (unsigned __int16)(gProtocolType - 1) <= 0xFFFDu
      && *(_QWORD *)(v45 + 3096)
      && (PVOID)PsGetCurrentProcess(v45, 65533LL, v46) != gpepCSRSS
      && !UserIsCurrentProcessDwm(v48, v47, v49)
      && (*((_DWORD *)v9 + 40) & 0x4000000) != 0 )
    {
      v50 = 2LL;
      v51 = v114;
      do
      {
        v52 = *((_OWORD *)v9 + 1);
        *(_OWORD *)v51 = *(_OWORD *)v9;
        v53 = *((_OWORD *)v9 + 2);
        *((_OWORD *)v51 + 1) = v52;
        v54 = *((_OWORD *)v9 + 3);
        *((_OWORD *)v51 + 2) = v53;
        v55 = *((_OWORD *)v9 + 4);
        *((_OWORD *)v51 + 3) = v54;
        v56 = *((_OWORD *)v9 + 5);
        *((_OWORD *)v51 + 4) = v55;
        v57 = *((_OWORD *)v9 + 6);
        *((_OWORD *)v51 + 5) = v56;
        v58 = *((_OWORD *)v9 + 7);
        v9 += 64;
        *((_OWORD *)v51 + 6) = v57;
        v51 += 64;
        *((_OWORD *)v51 - 1) = v58;
        --v50;
      }
      while ( v50 );
      v59 = *((_OWORD *)v9 + 1);
      *(_OWORD *)v51 = *(_OWORD *)v9;
      v60 = *((_OWORD *)v9 + 2);
      v9 = v114;
      *((_OWORD *)v51 + 1) = v59;
      v97 = v114;
      *((_OWORD *)v51 + 2) = v60;
      StringCchCopyW(v114, 0x20uLL, (size_t *)(v13 + 3104));
      *(_DWORD *)&v114[80] &= ~0x4000000u;
    }
  }
  v15 = *((_DWORD *)v9 + 40) & 8;
  v16 = gpLeakTrackingAllocator;
  v81 = 1886221383;
  v98 = 260LL;
  v106 = 512LL;
  v17 = *(_DWORD *)gpLeakTrackingAllocator;
  if ( *(_DWORD *)gpLeakTrackingAllocator )
  {
    if ( v17 != 1 )
    {
      if ( v17 != 2 )
        goto LABEL_163;
      *(_QWORD *)v84 = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(
              gpLeakTrackingAllocator,
              0x706D7447u,
              (unsigned __int64 *)v84) )
      {
        v100 = &v98;
        v101 = &v81;
        UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                                                                                           v16,
                                                                                           &v100,
                                                                                           &v106);
        goto LABEL_6;
      }
      UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(v63, 528LL, v62);
      if ( !UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
        goto LABEL_163;
      _InterlockedIncrement64((volatile signed __int64 *)v16 + 16);
      NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
      if ( (unsigned __int64)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 & 0xFFF)
         + 16 < 0x1000 )
      {
        if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                v16,
                                UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                                *(_QWORD *)v84,
                                BackTrace) )
        {
          UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 += 16LL;
          goto LABEL_6;
        }
      }
      else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                   v16,
                                   UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                                   *(_QWORD *)v84,
                                   BackTrace) )
      {
        v11 = (void *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64;
        v77 = (void *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64;
        goto LABEL_7;
      }
      _InterlockedIncrement64((volatile signed __int64 *)v16 + 17);
      _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
      goto LABEL_163;
    }
    if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x706D7447u) )
      goto LABEL_163;
    Pool2 = (_QWORD *)ExAllocatePool2(v98 & 0xFFFFFFFFFFFFFFFDuLL, 528LL, v81);
    UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)Pool2;
    if ( !Pool2
      || (_InterlockedIncrement64((volatile signed __int64 *)v16 + 14),
          *Pool2 = 1886221383LL,
          UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)(Pool2 + 2),
          Pool2 == (_QWORD *)-16LL) )
    {
      NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
        *((NSInstrumentation::CPointerHashTable **)v16 + 1),
        (const void *)0x706D7447);
    }
  }
  else
  {
    UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                       260LL,
                                                                                       512LL,
                                                                                       1886221383LL);
    if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
      _InterlockedIncrement64((volatile signed __int64 *)v16 + 14);
  }
LABEL_6:
  v77 = (void *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64;
  v11 = (void *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64;
  if ( !UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
  {
LABEL_163:
    v19 = -1073741670;
    goto LABEL_30;
  }
LABEL_7:
  if ( (*((_DWORD *)v9 + 40) & 0x4000000) == 0 || v15 )
  {
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\Hardware\\DeviceMap\\Video");
  }
  else
  {
    if ( (unsigned int)(a2 - 1) <= 1 )
    {
      v19 = -1073741766;
      goto LABEL_30;
    }
    DestinationString.Buffer = (PWSTR)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64;
    *(_DWORD *)&DestinationString.Length = 33423360;
    RtlAppendUnicodeToString(
      &DestinationString,
      L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Terminal Server\\Video\\");
    v32 = L"vgastub";
    if ( *(_QWORD *)(v13 + 3056) )
      v32 = *(const WCHAR **)(v13 + 3056);
    RtlAppendUnicodeToString(&DestinationString, v32);
  }
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v19 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( v19 < 0 )
  {
LABEL_161:
    WdLogSingleEntry1(5LL, v19);
    goto LABEL_30;
  }
  v20 = gpLeakTrackingAllocator;
  v82 = 1886221383;
  v99 = 260LL;
  v107 = 1024LL;
  v21 = *(_DWORD *)gpLeakTrackingAllocator;
  if ( !*(_DWORD *)gpLeakTrackingAllocator )
  {
    v10 = ExAllocatePool2(260LL, 1024LL, 1886221383LL);
    if ( v10 )
      _InterlockedIncrement64((volatile signed __int64 *)v20 + 14);
    goto LABEL_13;
  }
  if ( v21 != 1 )
  {
    if ( v21 == 2 )
    {
      v89 = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x706D7447u, &v89) )
      {
        v110[0] = &v99;
        v110[1] = &v82;
        v10 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                v20,
                v110,
                &v107);
        goto LABEL_13;
      }
      v10 = ExAllocatePool2(v66, 1040LL, v65);
      if ( v10 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)v20 + 16);
        NSInstrumentation::CBackTrace::CBackTrace(v112);
        if ( (unsigned __int64)(v10 & 0xFFF) + 16 < 0x1000 )
        {
          if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                  v20,
                                  v10,
                                  v89,
                                  v112) )
          {
            v10 += 16LL;
            v77 = v11;
            goto LABEL_13;
          }
        }
        else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                     v20,
                                     v10,
                                     v89,
                                     v112) )
        {
          v76 = (void *)v10;
          v77 = v11;
          goto LABEL_14;
        }
        _InterlockedIncrement64((volatile signed __int64 *)v20 + 17);
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)v10);
      }
    }
LABEL_159:
    v10 = 0LL;
    goto LABEL_160;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x706D7447u) )
    goto LABEL_159;
  v64 = (_QWORD *)ExAllocatePool2(v99 & 0xFFFFFFFFFFFFFFFDuLL, 1040LL, v82);
  v10 = (__int64)v64;
  if ( !v64
    || (_InterlockedIncrement64((volatile signed __int64 *)v20 + 14),
        *v64 = 1886221383LL,
        v10 = (__int64)(v64 + 2),
        v64 == (_QWORD *)-16LL) )
  {
    NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
      *((NSInstrumentation::CPointerHashTable **)v20 + 1),
      (const void *)0x706D7447);
  }
LABEL_13:
  v76 = (void *)v10;
  if ( v10 )
  {
LABEL_14:
    v22 = (*((_DWORD *)v9 + 40) & 0x4000000) == 0;
    v104 = (WCHAR *)(v10 + 512);
    if ( v22 || (v23 = L"\\Device\\Video0", v15) )
      v23 = v9;
    RtlInitUnicodeString(&DestinationString, v23);
    v19 = ZwQueryValueKey(KeyHandle, &DestinationString, KeyValueFullInformation, (PVOID)v10, 0x200u, &ResultLength);
    if ( v19 < 0 )
      goto LABEL_29;
    v24 = (unsigned int *)(v10 + 8);
    v25 = (unsigned __int16 *)(v10 + *(unsigned int *)(v10 + 8));
    v108 = (unsigned int *)(v10 + 8);
    Destination = 0LL;
    if ( a2 == 3 )
    {
      if ( v91 )
      {
        v30 = StringCchCopyNW(v91, a5, v25, 0x7FuLL);
        if ( (int)(v30 + 0x80000000) >= 0 )
        {
          v31 = v19;
          if ( v30 != -2147024774 )
            v31 = -1073741811;
          v19 = v31;
        }
      }
      ZwClose(KeyHandle);
      goto LABEL_30;
    }
    while ( *v25 )
    {
      *v25 = toupper(*v25);
      ++v25;
    }
    Source = wcsstr((const wchar_t *)(v10 + *v24), L"\\CONTROL\\");
    if ( !Source )
      Source = wcsstr((const wchar_t *)(v10 + *v24), L"\\SERVICES");
    v26 = -1LL;
    if ( !v91 )
    {
LABEL_23:
      v27 = Source;
      if ( v103 )
      {
        do
          ++v26;
        while ( Source[v26] );
        StringCchPrintfW(
          (unsigned __int16 *)&Source[v26],
          512 - ((unsigned int)(((__int64)Source - v10) >> 1) >> 1) - (unsigned int)v26,
          L"\\Mon%08X",
          *v103);
      }
      Destination.Buffer = v104;
      *(_DWORD *)&Destination.Length = 33423360;
      RtlAppendUnicodeToString(&Destination, L"\\Registry\\Machine\\System\\CurrentControlSet");
      if ( (unsigned int)(a2 - 1) <= 1 )
      {
        if ( (*((_DWORD *)v9 + 40) & 0x800000) != 0 )
        {
          RtlAppendUnicodeToString(&Destination, L"\\Control\\UnitedVideo");
          if ( (unsigned __int8)RtlIsStateSeparationEnabled() )
          {
            v28 = 1;
LABEL_26:
            ObjectAttributes.Length = 48;
            ObjectAttributes.ObjectName = &Destination;
            ObjectAttributes.RootDirectory = 0LL;
            ObjectAttributes.Attributes = 576;
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
            if ( a2 == 2 )
            {
              v19 = ZwCreateKey(&Handle, 0, &ObjectAttributes, 0, 0LL, v28, 0LL);
              if ( v19 >= 0 )
              {
                while ( 1 )
                {
                  v33 = wcschr(v27 + 1, 0x5Cu);
                  v34 = v33;
                  if ( v33 )
                    *v33 = 0;
                  RtlAppendUnicodeToString(&Destination, v27);
                  if ( Handle )
                    ZwClose(Handle);
                  v19 = ZwCreateKey(&Handle, 0, &ObjectAttributes, 0, 0LL, v28, 0LL);
                  if ( v19 < 0 )
                    break;
                  if ( !v34 )
                    goto LABEL_29;
                  *v34 = 92;
                  v27 = v34;
                }
              }
              Handle = 0LL;
            }
            else
            {
              RtlAppendUnicodeToString(&Destination, v27);
              v19 = ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes);
              if ( v19 < 0 )
                v19 = -1073741438;
            }
LABEL_29:
            ZwClose(KeyHandle);
            if ( v19 >= 0 )
            {
LABEL_30:
              v10 = (__int64)v76;
              goto LABEL_31;
            }
            goto LABEL_161;
          }
        }
        else
        {
          RtlAppendUnicodeToString(&Destination, L"\\Hardware Profiles\\Current\\System\\CurrentControlSet");
        }
      }
      v28 = 0;
      goto LABEL_26;
    }
    Str1 = v91;
    v35 = a5 - 1;
    if ( a5 - 1 > 0x1F )
      v35 = 31;
    v36 = 0;
    v88 = v35;
    v37 = v10 + *v24;
    v92 = 0LL;
    do
      ++v26;
    while ( *(_WORD *)(v37 + 2 * v26) );
    Length = 102;
    v109 = (int)v26;
    if ( (unsigned __int64)(2LL * (int)v26 + 12) > 0x66 )
    {
      Length = 2 * v26 + 12;
      if ( 2 * (_DWORD)v26 == -12 )
      {
LABEL_81:
        v26 = -1LL;
        *Str1 = 0;
        goto LABEL_23;
      }
    }
    v39 = gpLeakTrackingAllocator;
    v40 = Length;
    v83 = 1936876615;
    v102 = 260LL;
    v41 = *(_DWORD *)gpLeakTrackingAllocator;
    v96 = Length;
    if ( !v41 )
    {
      v42 = ExAllocatePool2(260LL, Length, 1936876615LL);
      if ( v42 )
        _InterlockedIncrement64((volatile signed __int64 *)v39 + 14);
      goto LABEL_74;
    }
    if ( v41 == 1 )
    {
      if ( NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x73726447u)
        && (unsigned __int64)Length + 16 >= Length )
      {
        v67 = (_QWORD *)ExAllocatePool2(v102 & 0xFFFFFFFFFFFFFFFDuLL, Length + 16LL, v83);
        v42 = (unsigned __int64)v67;
        if ( !v67
          || (_InterlockedIncrement64((volatile signed __int64 *)v39 + 14),
              *v67 = 1936876615LL,
              v42 = (unsigned __int64)(v67 + 2),
              v67 == (_QWORD *)-16LL) )
        {
          NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
            *((NSInstrumentation::CPointerHashTable **)v39 + 1),
            (const void *)0x73726447);
        }
LABEL_74:
        if ( v42 )
        {
          memset((void *)v42, 0, (int)Length);
          StringCchCopyW((unsigned __int16 *)v42, (unsigned __int64)(int)Length >> 1, (size_t *)(v10 + *v108));
          for ( i = (_WORD *)(v42 + 2 * (v109 - 1)); (unsigned __int64)i > v42; --i )
          {
            if ( *i == 92 )
              goto LABEL_79;
          }
          if ( *i != 92 )
            goto LABEL_80;
LABEL_79:
          StringCchCopyW(i + 1, v43 - v109, (size_t *)L"Video");
          RtlInitUnicodeString(&DestinationString, (PCWSTR)v42);
          ObjectAttributes.Length = 48;
          ObjectAttributes.ObjectName = &DestinationString;
          ObjectAttributes.RootDirectory = 0LL;
          ObjectAttributes.Attributes = 576;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          if ( ZwOpenKey(&v92, 0x20019u, &ObjectAttributes) >= 0 )
          {
            v84[0] = 0;
            RtlInitUnicodeString(&DestinationString, L"Service");
            memset((void *)v42, 0, (int)Length);
            if ( ZwQueryValueKey(v92, &DestinationString, KeyValueFullInformation, (PVOID)v42, Length, v84) >= 0 )
            {
              for ( j = (_WORD *)(v42 + *(unsigned int *)(v42 + 8)); *j; ++j )
                *j = toupper((unsigned __int16)*j);
              v71 = v88;
              v72 = v88;
              v73 = (wchar_t *)(v42 + *(unsigned int *)(v42 + 8));
              if ( v88 )
              {
                v74 = Str1;
                v75 = Str1;
                do
                {
                  --v71;
                  if ( !*v73 )
                    break;
                  *v74++ = *v73++;
                  if ( v71 == v72 - 3 && !wcsnicmp(v75, L"VGA", 3uLL) )
                    break;
                }
                while ( v71 );
                v11 = v77;
                Str1 = v74;
                v9 = v97;
              }
            }
            ZwClose(v92);
          }
LABEL_80:
          NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (void *)v42);
        }
        goto LABEL_81;
      }
LABEL_140:
      v42 = 0LL;
      goto LABEL_74;
    }
    if ( v41 != 2 )
      goto LABEL_140;
    v90 = 0LL;
    if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x73726447u, &v90) )
    {
      v100 = &v102;
      v101 = &v83;
      v42 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
              v39,
              &v100,
              &v96);
      goto LABEL_74;
    }
    if ( Length < 0x1000uLL || (Length & 0xFFF) != 0 )
    {
      v40 = Length + 16LL;
      v36 = 1;
      v96 = v40;
    }
    v42 = ExAllocatePool2(v69, v40, v68);
    if ( v42 )
    {
      _InterlockedIncrement64((volatile signed __int64 *)v39 + 16);
      NSInstrumentation::CBackTrace::CBackTrace(v113);
      if ( v36 && (v42 & 0xFFF) + 16 < 0x1000 )
      {
        if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                v39,
                                v42,
                                v90,
                                v113) )
        {
          v42 += 16LL;
LABEL_136:
          v77 = v11;
          goto LABEL_74;
        }
      }
      else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                   v39,
                                   v42,
                                   v90,
                                   v113) )
      {
        goto LABEL_136;
      }
      _InterlockedIncrement64((volatile signed __int64 *)v39 + 17);
      _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)v42);
    }
    v77 = v11;
    goto LABEL_140;
  }
LABEL_160:
  v19 = -1073741670;
LABEL_31:
  if ( v105 )
    *v105 = v19;
  if ( v11 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v11);
  if ( v10 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (void *)v10);
  WdLogSingleEntry1(5LL, v19);
  return Handle;
}
