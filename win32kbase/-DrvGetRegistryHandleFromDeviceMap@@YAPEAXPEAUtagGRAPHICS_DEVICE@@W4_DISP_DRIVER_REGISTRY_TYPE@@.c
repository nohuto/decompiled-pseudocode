/*
 * XREFs of ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEBKPEAGKPEAJ@Z @ 0x1C0075884
 * Callers:
 *     DrvUpdateDisplayDriverParameters @ 0x1C001F108 (DrvUpdateDisplayDriverParameters.c)
 *     DrvUpdateGraphicsDeviceList @ 0x1C001FAC0 (DrvUpdateGraphicsDeviceList.c)
 *     ?DrvSetDisconnectedGraphicsDevice@@YAHH@Z @ 0x1C00227EC (-DrvSetDisconnectedGraphicsDevice@@YAHH@Z.c)
 *     ?GetPrimaryAttachFlags@@YAHPEAUtagGRAPHICS_DEVICE@@GPEAK1@Z @ 0x1C0023F7C (-GetPrimaryAttachFlags@@YAHPEAUtagGRAPHICS_DEVICE@@GPEAK1@Z.c)
 *     ?DrvUpdateAttachFlag@@YAXPEAUtagGRAPHICS_DEVICE@@K@Z @ 0x1C0027AEC (-DrvUpdateAttachFlag@@YAXPEAUtagGRAPHICS_DEVICE@@K@Z.c)
 *     DrvGetDisplayDriverParameters @ 0x1C002C178 (DrvGetDisplayDriverParameters.c)
 *     DrvEnumDisplayDevices @ 0x1C0071810 (DrvEnumDisplayDevices.c)
 *     ?DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00723C0 (-DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?DrvGetDriverAccelerationsLevel@@YAKPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00CC86C (-DrvGetDriverAccelerationsLevel@@YAKPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?DrvGetDriverCapableOverRide@@YAKPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00CCC78 (-DrvGetDriverCapableOverRide@@YAKPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     DrvAddMirrorDriversToRemoteList @ 0x1C00D7164 (DrvAddMirrorDriversToRemoteList.c)
 *     DrvSetPruneFlag @ 0x1C01949DC (DrvSetPruneFlag.c)
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x1C00191C0 (UserIsCurrentProcessDwm.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C0022784 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C005D400 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?StringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x1C005D430 (-StringCchCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C0077CF4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00A07E0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     wcsstr @ 0x1C00DA8B8 (wcsstr.c)
 *     wcschr @ 0x1C00DA918 (wcschr.c)
 *     toupper @ 0x1C00DAC50 (toupper.c)
 *     _wcsnicmp @ 0x1C00DACB8 (_wcsnicmp.c)
 *     memset @ 0x1C00E1980 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019AB48 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019ABFC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C019B14C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C019B518 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C019C49C (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C019C93C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
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
  size_t *v25; // r14
  __int64 v26; // rcx
  PCWSTR v27; // r14
  ULONG v28; // r15d
  HRESULT v30; // eax
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
  __int64 v47; // r9
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // rcx
  unsigned __int16 *v53; // rax
  __int128 v54; // xmm1
  __int128 v55; // xmm0
  __int128 v56; // xmm1
  __int128 v57; // xmm0
  __int128 v58; // xmm1
  __int128 v59; // xmm0
  __int128 v60; // xmm1
  __int128 v61; // xmm1
  __int128 v62; // xmm0
  _QWORD *Pool2; // rax
  unsigned int v64; // r10d
  __int64 v65; // r11
  _QWORD *v66; // rax
  unsigned int v67; // r10d
  __int64 v68; // r11
  _QWORD *v69; // rax
  unsigned int v70; // r10d
  __int64 v71; // r11
  _WORD *j; // r14
  int v73; // r12d
  int v74; // r13d
  wchar_t *v75; // r14
  wchar_t *v76; // r15
  wchar_t *v77; // rsi
  void *v78; // [rsp+40h] [rbp-C0h]
  void *v79; // [rsp+48h] [rbp-B8h]
  struct _UNICODE_STRING DestinationString; // [rsp+58h] [rbp-A8h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v83; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v84; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v85; // [rsp+80h] [rbp-80h] BYREF
  ULONG v86[2]; // [rsp+88h] [rbp-78h] BYREF
  void *KeyHandle; // [rsp+90h] [rbp-70h] BYREF
  struct _UNICODE_STRING Destination; // [rsp+98h] [rbp-68h] BYREF
  ULONG ResultLength; // [rsp+A8h] [rbp-58h] BYREF
  int v90; // [rsp+ACh] [rbp-54h]
  unsigned __int64 v91; // [rsp+B0h] [rbp-50h] BYREF
  unsigned __int64 v92; // [rsp+B8h] [rbp-48h] BYREF
  unsigned __int16 *v93; // [rsp+C0h] [rbp-40h]
  HANDLE v94; // [rsp+C8h] [rbp-38h] BYREF
  wchar_t *Str1; // [rsp+D0h] [rbp-30h]
  PCWSTR Source; // [rsp+D8h] [rbp-28h]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v98; // [rsp+110h] [rbp+10h] BYREF
  unsigned __int16 *v99; // [rsp+118h] [rbp+18h]
  __int64 v100; // [rsp+120h] [rbp+20h] BYREF
  __int64 v101; // [rsp+128h] [rbp+28h] BYREF
  __int64 *v102; // [rsp+130h] [rbp+30h] BYREF
  unsigned int *v103; // [rsp+138h] [rbp+38h]
  __int64 v104; // [rsp+140h] [rbp+40h] BYREF
  unsigned int *v105; // [rsp+148h] [rbp+48h]
  WCHAR *v106; // [rsp+150h] [rbp+50h]
  NTSTATUS *v107; // [rsp+158h] [rbp+58h]
  __int64 v108; // [rsp+160h] [rbp+60h] BYREF
  __int64 v109; // [rsp+168h] [rbp+68h] BYREF
  unsigned int *v110; // [rsp+170h] [rbp+70h]
  __int64 v111; // [rsp+178h] [rbp+78h]
  _QWORD v112[2]; // [rsp+180h] [rbp+80h] BYREF
  PVOID BackTrace[20]; // [rsp+190h] [rbp+90h] BYREF
  PVOID v114[20]; // [rsp+230h] [rbp+130h] BYREF
  PVOID v115[20]; // [rsp+2D0h] [rbp+1D0h] BYREF
  unsigned __int16 v116[152]; // [rsp+370h] [rbp+270h] BYREF

  v6 = a2;
  v107 = a6;
  v105 = a3;
  v9 = a1;
  v99 = a1;
  Handle = 0LL;
  KeyHandle = 0LL;
  ResultLength = 0;
  v78 = 0LL;
  v10 = 0LL;
  v93 = a4;
  v11 = 0LL;
  DestinationString = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  memset(v116, 0, sizeof(v116));
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
      && (PVOID)PsGetCurrentProcess(v45, 65533LL, v46, v47) != gpepCSRSS
      && !UserIsCurrentProcessDwm(v49, v48, v50, v51)
      && (*((_DWORD *)v9 + 40) & 0x4000000) != 0 )
    {
      v52 = 2LL;
      v53 = v116;
      do
      {
        v54 = *((_OWORD *)v9 + 1);
        *(_OWORD *)v53 = *(_OWORD *)v9;
        v55 = *((_OWORD *)v9 + 2);
        *((_OWORD *)v53 + 1) = v54;
        v56 = *((_OWORD *)v9 + 3);
        *((_OWORD *)v53 + 2) = v55;
        v57 = *((_OWORD *)v9 + 4);
        *((_OWORD *)v53 + 3) = v56;
        v58 = *((_OWORD *)v9 + 5);
        *((_OWORD *)v53 + 4) = v57;
        v59 = *((_OWORD *)v9 + 6);
        *((_OWORD *)v53 + 5) = v58;
        v60 = *((_OWORD *)v9 + 7);
        v9 += 64;
        *((_OWORD *)v53 + 6) = v59;
        v53 += 64;
        *((_OWORD *)v53 - 1) = v60;
        --v52;
      }
      while ( v52 );
      v61 = *((_OWORD *)v9 + 1);
      *(_OWORD *)v53 = *(_OWORD *)v9;
      v62 = *((_OWORD *)v9 + 2);
      v9 = v116;
      *((_OWORD *)v53 + 1) = v61;
      v99 = v116;
      *((_OWORD *)v53 + 2) = v62;
      StringCchCopyW(v116, 0x20uLL, (size_t *)(v13 + 3104));
      *(_DWORD *)&v116[80] &= ~0x4000000u;
    }
  }
  v15 = *((_DWORD *)v9 + 40) & 8;
  v16 = gpLeakTrackingAllocator;
  v83 = 1886221383;
  v100 = 260LL;
  v108 = 512LL;
  v17 = *(_DWORD *)gpLeakTrackingAllocator;
  if ( *(_DWORD *)gpLeakTrackingAllocator )
  {
    if ( v17 != 1 )
    {
      if ( v17 != 2 )
        goto LABEL_163;
      *(_QWORD *)v86 = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(
              gpLeakTrackingAllocator,
              0x706D7447u,
              (unsigned __int64 *)v86) )
      {
        v102 = &v100;
        v103 = &v83;
        UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                                                                                           v16,
                                                                                           &v102,
                                                                                           &v108);
        goto LABEL_6;
      }
      UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(v65, 528LL, v64);
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
                                *(_QWORD *)v86,
                                BackTrace) )
        {
          UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 += 16LL;
          goto LABEL_6;
        }
      }
      else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                   v16,
                                   UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                                   *(_QWORD *)v86,
                                   BackTrace) )
      {
        v11 = (void *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64;
        v79 = (void *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64;
        goto LABEL_7;
      }
      _InterlockedIncrement64((volatile signed __int64 *)v16 + 17);
      _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
      goto LABEL_163;
    }
    if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x706D7447u) )
      goto LABEL_163;
    Pool2 = (_QWORD *)ExAllocatePool2(v100 & 0xFFFFFFFFFFFFFFFDuLL, 528LL, v83);
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
  v79 = (void *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64;
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
  v84 = 1886221383;
  v101 = 260LL;
  v109 = 1024LL;
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
      v91 = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x706D7447u, &v91) )
      {
        v112[0] = &v101;
        v112[1] = &v84;
        v10 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                v20,
                v112,
                &v109);
        goto LABEL_13;
      }
      v10 = ExAllocatePool2(v68, 1040LL, v67);
      if ( v10 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)v20 + 16);
        NSInstrumentation::CBackTrace::CBackTrace(v114);
        if ( (unsigned __int64)(v10 & 0xFFF) + 16 < 0x1000 )
        {
          if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                  v20,
                                  v10,
                                  v91,
                                  v114) )
          {
            v10 += 16LL;
            v79 = v11;
            goto LABEL_13;
          }
        }
        else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                     v20,
                                     v10,
                                     v91,
                                     v114) )
        {
          v78 = (void *)v10;
          v79 = v11;
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
  v66 = (_QWORD *)ExAllocatePool2(v101 & 0xFFFFFFFFFFFFFFFDuLL, 1040LL, v84);
  v10 = (__int64)v66;
  if ( !v66
    || (_InterlockedIncrement64((volatile signed __int64 *)v20 + 14),
        *v66 = 1886221383LL,
        v10 = (__int64)(v66 + 2),
        v66 == (_QWORD *)-16LL) )
  {
    NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
      *((NSInstrumentation::CPointerHashTable **)v20 + 1),
      (const void *)0x706D7447);
  }
LABEL_13:
  v78 = (void *)v10;
  if ( v10 )
  {
LABEL_14:
    v22 = (*((_DWORD *)v9 + 40) & 0x4000000) == 0;
    v106 = (WCHAR *)(v10 + 512);
    if ( v22 || (v23 = L"\\Device\\Video0", v15) )
      v23 = v9;
    RtlInitUnicodeString(&DestinationString, v23);
    v19 = ZwQueryValueKey(KeyHandle, &DestinationString, KeyValueFullInformation, (PVOID)v10, 0x200u, &ResultLength);
    if ( v19 < 0 )
      goto LABEL_29;
    v24 = (unsigned int *)(v10 + 8);
    v25 = (size_t *)(v10 + *(unsigned int *)(v10 + 8));
    v110 = (unsigned int *)(v10 + 8);
    Destination = 0LL;
    if ( a2 == 3 )
    {
      if ( v93 )
      {
        v30 = StringCchCopyNW(v93, a5, v25, 0x7FuLL);
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
    while ( *(_WORD *)v25 )
    {
      *(_WORD *)v25 = toupper(*(unsigned __int16 *)v25);
      v25 = (size_t *)((char *)v25 + 2);
    }
    Source = wcsstr((const wchar_t *)(v10 + *v24), L"\\CONTROL\\");
    if ( !Source )
      Source = wcsstr((const wchar_t *)(v10 + *v24), L"\\SERVICES");
    v26 = -1LL;
    if ( !v93 )
    {
LABEL_23:
      v27 = Source;
      if ( v105 )
      {
        do
          ++v26;
        while ( Source[v26] );
        StringCchPrintfW(
          (unsigned __int16 *)&Source[v26],
          512 - ((unsigned int)(((__int64)Source - v10) >> 1) >> 1) - (unsigned int)v26,
          L"\\Mon%08X",
          *v105);
      }
      Destination.Buffer = v106;
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
              v10 = (__int64)v78;
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
    Str1 = v93;
    v35 = a5 - 1;
    if ( a5 - 1 > 0x1F )
      v35 = 31;
    v36 = 0;
    v90 = v35;
    v37 = v10 + *v24;
    v94 = 0LL;
    do
      ++v26;
    while ( *(_WORD *)(v37 + 2 * v26) );
    Length = 102;
    v111 = (int)v26;
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
    v85 = 1936876615;
    v104 = 260LL;
    v41 = *(_DWORD *)gpLeakTrackingAllocator;
    v98 = Length;
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
        v69 = (_QWORD *)ExAllocatePool2(v104 & 0xFFFFFFFFFFFFFFFDuLL, Length + 16LL, v85);
        v42 = (unsigned __int64)v69;
        if ( !v69
          || (_InterlockedIncrement64((volatile signed __int64 *)v39 + 14),
              *v69 = 1936876615LL,
              v42 = (unsigned __int64)(v69 + 2),
              v69 == (_QWORD *)-16LL) )
        {
          NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
            *((NSInstrumentation::CPointerHashTable **)v39 + 1),
            (const void *)0x73726447);
        }
LABEL_74:
        if ( v42 )
        {
          memset((void *)v42, 0, (int)Length);
          StringCchCopyW((unsigned __int16 *)v42, (unsigned __int64)(int)Length >> 1, (size_t *)(v10 + *v110));
          for ( i = (_WORD *)(v42 + 2 * (v111 - 1)); (unsigned __int64)i > v42; --i )
          {
            if ( *i == 92 )
              goto LABEL_79;
          }
          if ( *i != 92 )
            goto LABEL_80;
LABEL_79:
          StringCchCopyW(i + 1, v43 - v111, (size_t *)L"Video");
          RtlInitUnicodeString(&DestinationString, (PCWSTR)v42);
          ObjectAttributes.Length = 48;
          ObjectAttributes.ObjectName = &DestinationString;
          ObjectAttributes.RootDirectory = 0LL;
          ObjectAttributes.Attributes = 576;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          if ( ZwOpenKey(&v94, 0x20019u, &ObjectAttributes) >= 0 )
          {
            v86[0] = 0;
            RtlInitUnicodeString(&DestinationString, L"Service");
            memset((void *)v42, 0, (int)Length);
            if ( ZwQueryValueKey(v94, &DestinationString, KeyValueFullInformation, (PVOID)v42, Length, v86) >= 0 )
            {
              for ( j = (_WORD *)(v42 + *(unsigned int *)(v42 + 8)); *j; ++j )
                *j = toupper((unsigned __int16)*j);
              v73 = v90;
              v74 = v90;
              v75 = (wchar_t *)(v42 + *(unsigned int *)(v42 + 8));
              if ( v90 )
              {
                v76 = Str1;
                v77 = Str1;
                do
                {
                  --v73;
                  if ( !*v75 )
                    break;
                  *v76++ = *v75++;
                  if ( v73 == v74 - 3 && !wcsnicmp(v77, L"VGA", 3uLL) )
                    break;
                }
                while ( v73 );
                v11 = v79;
                Str1 = v76;
                v9 = v99;
              }
            }
            ZwClose(v94);
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
    v92 = 0LL;
    if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x73726447u, &v92) )
    {
      v102 = &v104;
      v103 = &v85;
      v42 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
              v39,
              &v102,
              &v98);
      goto LABEL_74;
    }
    if ( Length < 0x1000uLL || (Length & 0xFFF) != 0 )
    {
      v40 = Length + 16LL;
      v36 = 1;
      v98 = v40;
    }
    v42 = ExAllocatePool2(v71, v40, v70);
    if ( v42 )
    {
      _InterlockedIncrement64((volatile signed __int64 *)v39 + 16);
      NSInstrumentation::CBackTrace::CBackTrace(v115);
      if ( v36 && (v42 & 0xFFF) + 16 < 0x1000 )
      {
        if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                v39,
                                v42,
                                v92,
                                v115) )
        {
          v42 += 16LL;
LABEL_136:
          v79 = v11;
          goto LABEL_74;
        }
      }
      else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                   v39,
                                   v42,
                                   v92,
                                   v115) )
      {
        goto LABEL_136;
      }
      _InterlockedIncrement64((volatile signed __int64 *)v39 + 17);
      _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)v42);
    }
    v79 = v11;
    goto LABEL_140;
  }
LABEL_160:
  v19 = -1073741670;
LABEL_31:
  if ( v107 )
    *v107 = v19;
  if ( v11 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v11);
  if ( v10 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (void *)v10);
  WdLogSingleEntry1(5LL, v19);
  return Handle;
}
