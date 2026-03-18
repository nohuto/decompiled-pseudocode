/*
 * XREFs of ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEBKPEAGKPEAJ@Z @ 0x1C0072CC4
 * Callers:
 *     ?DrvSetDisconnectedGraphicsDevice@@YAHH@Z @ 0x1C006A740 (-DrvSetDisconnectedGraphicsDevice@@YAHH@Z.c)
 *     DrvUpdateGraphicsDeviceList @ 0x1C006ADB0 (DrvUpdateGraphicsDeviceList.c)
 *     DrvEnumDisplayDevices @ 0x1C00721C0 (DrvEnumDisplayDevices.c)
 *     ?DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C0072BC8 (-DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?GetPrimaryAttachFlags@@YAHPEAUtagGRAPHICS_DEVICE@@GPEAK1@Z @ 0x1C0073504 (-GetPrimaryAttachFlags@@YAHPEAUtagGRAPHICS_DEVICE@@GPEAK1@Z.c)
 *     DrvUpdateDisplayDriverParameters @ 0x1C00756BC (DrvUpdateDisplayDriverParameters.c)
 *     ?DrvGetDriverCapableOverRide@@YAKPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C0075FB4 (-DrvGetDriverCapableOverRide@@YAKPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     DrvGetDisplayDriverParameters @ 0x1C007A2E4 (DrvGetDisplayDriverParameters.c)
 *     ?DrvGetDriverAccelerationsLevel@@YAKPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00BEC88 (-DrvGetDriverAccelerationsLevel@@YAKPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?DrvUpdateAttachFlag@@YAXPEAUtagGRAPHICS_DEVICE@@K@Z @ 0x1C00C2588 (-DrvUpdateAttachFlag@@YAXPEAUtagGRAPHICS_DEVICE@@K@Z.c)
 *     ?DrvAddMirrorDriversToRemoteList@@YAHXZ @ 0x1C00D1F30 (-DrvAddMirrorDriversToRemoteList@@YAHXZ.c)
 *     DrvSetPruneFlag @ 0x1C0174C84 (DrvSetPruneFlag.c)
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x1C0014970 (UserIsCurrentProcessDwm.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C006AC74 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?StringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x1C007349C (-StringCchCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0075F50 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     wcsstr @ 0x1C00D5E08 (wcsstr.c)
 *     wcschr @ 0x1C00D5E68 (wcschr.c)
 *     toupper @ 0x1C00D6190 (toupper.c)
 *     _wcsnicmp @ 0x1C00D61F8 (_wcsnicmp.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

HANDLE __fastcall DrvGetRegistryHandleFromDeviceMap(
        unsigned __int16 *a1,
        int a2,
        unsigned int *a3,
        wchar_t *a4,
        unsigned int a5,
        NTSTATUS *a6)
{
  __int64 v6; // rbx
  unsigned __int16 *v8; // rsi
  __int64 v9; // r14
  void *v10; // rdi
  __int64 v12; // r8
  PVOID v13; // rdi
  int v14; // r15d
  __int64 Pool2; // rbx
  NTSTATUS v16; // ebx
  PVOID v17; // rbx
  const WCHAR *v18; // rdx
  __int64 v19; // rax
  ULONG v20; // r15d
  unsigned __int16 *v21; // rdi
  unsigned __int16 v22; // cx
  wchar_t *v23; // r12
  __int64 v24; // rcx
  int v26; // eax
  int v27; // ecx
  wchar_t *v28; // rax
  wchar_t *v29; // rdi
  const WCHAR *v30; // rdx
  int v31; // r13d
  signed int v32; // r15d
  PVOID v33; // rdi
  unsigned __int64 v34; // rdx
  unsigned __int64 v35; // rbx
  _WORD *i; // r11
  unsigned __int64 v37; // rdi
  char *v38; // r11
  unsigned __int64 v39; // rcx
  signed __int64 v40; // rdx
  __int16 v41; // ax
  char *v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rax
  unsigned __int16 *v48; // rcx
  __int128 v49; // xmm1
  __int128 v50; // xmm0
  __int128 v51; // xmm1
  __int128 v52; // xmm0
  __int128 v53; // xmm1
  __int128 v54; // xmm0
  __int128 v55; // xmm1
  __int64 v56; // rax
  __int128 v57; // xmm1
  __int128 v58; // xmm0
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rax
  char v62; // r15
  __int64 v63; // rax
  unsigned __int16 *v64; // rdi
  unsigned __int16 v65; // cx
  int v66; // r15d
  wchar_t *v67; // rsi
  wchar_t *v68; // rcx
  unsigned __int64 v69; // rdi
  wchar_t v70; // ax
  void *v71; // [rsp+40h] [rbp-C0h]
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  ULONG Length[2]; // [rsp+60h] [rbp-A0h]
  HANDLE Handle; // [rsp+68h] [rbp-98h] BYREF
  wchar_t *v76; // [rsp+70h] [rbp-90h]
  void *KeyHandle; // [rsp+78h] [rbp-88h] BYREF
  void *v78; // [rsp+80h] [rbp-80h]
  struct _UNICODE_STRING Destination; // [rsp+88h] [rbp-78h] BYREF
  ULONG ResultLength; // [rsp+98h] [rbp-68h] BYREF
  ULONG v81[4]; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int16 *v82; // [rsp+B0h] [rbp-50h]
  HANDLE v83; // [rsp+B8h] [rbp-48h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+C0h] [rbp-40h] BYREF
  wchar_t *Str1; // [rsp+F0h] [rbp-10h]
  unsigned int *v86; // [rsp+F8h] [rbp-8h]
  NTSTATUS *v87; // [rsp+100h] [rbp+0h]
  PVOID BackTrace[20]; // [rsp+110h] [rbp+10h] BYREF
  PVOID v89[20]; // [rsp+1B0h] [rbp+B0h] BYREF
  PVOID v90[20]; // [rsp+250h] [rbp+150h] BYREF
  unsigned __int16 v91[160]; // [rsp+2F0h] [rbp+1F0h] BYREF

  v6 = a2;
  v87 = a6;
  v8 = a1;
  v86 = a3;
  v82 = a1;
  Handle = 0LL;
  KeyHandle = 0LL;
  ResultLength = 0;
  v9 = 0LL;
  v71 = 0LL;
  v10 = 0LL;
  Str1 = a4;
  DestinationString = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  memset(v91, 0, 0x138uLL);
  WdLogSingleEntry3(5LL, v8, v6, a3);
  if ( a4 && !a5 )
  {
    v16 = -1073741811;
    goto LABEL_30;
  }
  if ( dword_1C0297080
    && (unsigned __int16)(gProtocolType - 1) <= 0xFFFDu
    && Object
    && (PVOID)PsGetCurrentProcess(65533LL, 0LL, v12, 1LL) != gpepCSRSS
    && !UserIsCurrentProcessDwm(v44, v43, v45, v46)
    && (*((_DWORD *)v8 + 40) & 0x4000000) != 0 )
  {
    v47 = 2LL;
    v48 = v91;
    do
    {
      v49 = *((_OWORD *)v8 + 1);
      *(_OWORD *)v48 = *(_OWORD *)v8;
      v50 = *((_OWORD *)v8 + 2);
      *((_OWORD *)v48 + 1) = v49;
      v51 = *((_OWORD *)v8 + 3);
      *((_OWORD *)v48 + 2) = v50;
      v52 = *((_OWORD *)v8 + 4);
      *((_OWORD *)v48 + 3) = v51;
      v53 = *((_OWORD *)v8 + 5);
      *((_OWORD *)v48 + 4) = v52;
      v54 = *((_OWORD *)v8 + 6);
      *((_OWORD *)v48 + 5) = v53;
      v55 = *((_OWORD *)v8 + 7);
      v8 += 64;
      *((_OWORD *)v48 + 6) = v54;
      v48 += 64;
      *((_OWORD *)v48 - 1) = v55;
      --v47;
    }
    while ( v47 );
    v56 = *((_QWORD *)v8 + 6);
    v57 = *((_OWORD *)v8 + 1);
    *(_OWORD *)v48 = *(_OWORD *)v8;
    v58 = *((_OWORD *)v8 + 2);
    v8 = v91;
    *((_OWORD *)v48 + 1) = v57;
    v82 = v91;
    *((_OWORD *)v48 + 2) = v58;
    *((_QWORD *)v48 + 6) = v56;
    StringCchCopyW(v91, 0x20uLL, &xmmword_1C0297098);
    *(_DWORD *)&v91[80] &= ~0x4000000u;
  }
  v13 = gpLeakTrackingAllocator;
  v14 = *((_DWORD *)v8 + 40) & 8;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x706D7447) == 0x706D7447
    && (v59 = 0LL, *((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
    while ( *((_DWORD *)gpLeakTrackingAllocator + v59) != 1886221383 )
    {
      if ( ++v59 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
        goto LABEL_4;
    }
    Pool2 = ExAllocatePool2(260LL, 528LL);
    if ( !Pool2 )
      goto LABEL_106;
    memset(BackTrace, 0, sizeof(BackTrace));
    RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
    if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 >= 0x1000 )
    {
      if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                              v13,
                              Pool2,
                              BackTrace) )
      {
        v10 = (void *)Pool2;
        v78 = (void *)Pool2;
        goto LABEL_6;
      }
      goto LABEL_105;
    }
    if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                             v13,
                             Pool2,
                             BackTrace) )
    {
LABEL_105:
      ExFreePoolWithTag((PVOID)Pool2, 0);
LABEL_106:
      v10 = 0LL;
      goto LABEL_107;
    }
    Pool2 += 16LL;
  }
  else
  {
LABEL_4:
    Pool2 = ExAllocatePool2(260LL, 512LL);
  }
  v78 = (void *)Pool2;
  v10 = (void *)Pool2;
  if ( !Pool2 )
  {
LABEL_107:
    v16 = -1073741670;
    goto LABEL_29;
  }
LABEL_6:
  if ( (*((_DWORD *)v8 + 40) & 0x4000000) == 0 || v14 )
  {
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\Hardware\\DeviceMap\\Video");
  }
  else
  {
    if ( (unsigned int)(a2 - 1) <= 1 )
    {
      v16 = -1073741766;
      goto LABEL_29;
    }
    DestinationString.Buffer = (PWSTR)Pool2;
    *(_DWORD *)&DestinationString.Length = 33423360;
    RtlAppendUnicodeToString(
      &DestinationString,
      L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Terminal Server\\Video\\");
    v30 = L"vgastub";
    if ( qword_1C0297068 )
      v30 = qword_1C0297068;
    RtlAppendUnicodeToString(&DestinationString, v30);
  }
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v16 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( v16 < 0 )
    goto LABEL_160;
  v17 = gpLeakTrackingAllocator;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x706D7447) == 0x706D7447
    && (v60 = 0LL, *((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
    while ( *((_DWORD *)gpLeakTrackingAllocator + v60) != 1886221383 )
    {
      if ( ++v60 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
        goto LABEL_10;
    }
    v9 = ExAllocatePool2(260LL, 1040LL);
    if ( !v9 )
      goto LABEL_119;
    memset(v89, 0, sizeof(v89));
    RtlCaptureStackBackTrace(0, 0x14u, v89, 0LL);
    if ( (unsigned __int64)(v9 & 0xFFF) + 16 >= 0x1000 )
    {
      if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(v17, v9, v89) )
      {
        v71 = (void *)v9;
        goto LABEL_12;
      }
      goto LABEL_118;
    }
    if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(v17, v9, v89) )
    {
LABEL_118:
      ExFreePoolWithTag((PVOID)v9, 0);
LABEL_119:
      v9 = 0LL;
      goto LABEL_120;
    }
    v9 += 16LL;
  }
  else
  {
LABEL_10:
    v9 = ExAllocatePool2(260LL, 1024LL);
  }
  v71 = (void *)v9;
  if ( v9 )
  {
LABEL_12:
    if ( (*((_DWORD *)v8 + 40) & 0x4000000) == 0 || (v18 = L"\\Device\\Video0", v14) )
      v18 = v8;
    RtlInitUnicodeString(&DestinationString, v18);
    v16 = ZwQueryValueKey(KeyHandle, &DestinationString, KeyValueFullInformation, (PVOID)v9, 0x200u, &ResultLength);
    if ( v16 < 0 )
      goto LABEL_27;
    v19 = *(unsigned int *)(v9 + 8);
    v20 = 0;
    Destination = 0LL;
    v21 = (unsigned __int16 *)(v9 + v19);
    if ( a2 == 3 )
    {
      if ( a4 )
      {
        v26 = StringCchCopyNW(a4, a5, (const unsigned __int16 *)(v9 + v19), 0x7FuLL);
        if ( (int)(v26 + 0x80000000) >= 0 )
        {
          v27 = v16;
          if ( v26 != -2147024774 )
            v27 = -1073741811;
          v16 = v27;
        }
      }
      ZwClose(KeyHandle);
      goto LABEL_28;
    }
    v22 = *v21;
    if ( *v21 )
    {
      do
      {
        *v21++ = toupper(v22);
        v22 = *v21;
      }
      while ( *v21 );
      LODWORD(v19) = *(_DWORD *)(v9 + 8);
    }
    v23 = wcsstr((const wchar_t *)(v9 + (unsigned int)v19), L"\\CONTROL\\");
    if ( !v23 )
      v23 = wcsstr((const wchar_t *)(v9 + *(unsigned int *)(v9 + 8)), L"\\SERVICES");
    v24 = -1LL;
    if ( !Str1 )
    {
LABEL_22:
      if ( v86 )
      {
        do
          ++v24;
        while ( v23[v24] );
        StringCchPrintfW(
          &v23[v24],
          512 - ((unsigned int)(((__int64)v23 - v9) >> 1) >> 1) - (unsigned int)v24,
          L"\\Mon%08X",
          *v86);
      }
      *(_DWORD *)&Destination.Length = 33423360;
      Destination.Buffer = (PWSTR)(v9 + 512);
      RtlAppendUnicodeToString(&Destination, L"\\Registry\\Machine\\System\\CurrentControlSet");
      if ( (unsigned int)(a2 - 1) <= 1 )
      {
        if ( (*((_DWORD *)v8 + 40) & 0x800000) != 0 )
        {
          RtlAppendUnicodeToString(&Destination, L"\\Control\\UnitedVideo");
          if ( (unsigned __int8)RtlIsStateSeparationEnabled() )
            v20 = 1;
        }
        else
        {
          RtlAppendUnicodeToString(&Destination, L"\\Hardware Profiles\\Current\\System\\CurrentControlSet");
        }
      }
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &Destination;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( a2 == 2 )
      {
        v16 = ZwCreateKey(&Handle, 0, &ObjectAttributes, 0, 0LL, v20, 0LL);
        if ( v16 >= 0 )
        {
          while ( 1 )
          {
            v28 = wcschr(v23 + 1, 0x5Cu);
            v29 = v28;
            if ( v28 )
              *v28 = 0;
            RtlAppendUnicodeToString(&Destination, v23);
            if ( Handle )
              ZwClose(Handle);
            v16 = ZwCreateKey(&Handle, 0, &ObjectAttributes, 0, 0LL, v20, 0LL);
            if ( v16 < 0 )
              break;
            if ( !v29 )
              goto LABEL_27;
            v23 = v29;
            *v29 = 92;
          }
        }
        Handle = 0LL;
      }
      else
      {
        RtlAppendUnicodeToString(&Destination, v23);
        v16 = ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes);
        if ( v16 < 0 )
          v16 = -1073741438;
      }
LABEL_27:
      ZwClose(KeyHandle);
      if ( v16 >= 0 )
      {
LABEL_28:
        v10 = v78;
LABEL_29:
        v9 = (__int64)v71;
        goto LABEL_30;
      }
LABEL_160:
      WdLogSingleEntry1(5LL, v16);
      goto LABEL_28;
    }
    v76 = Str1;
    v31 = a5 - 1;
    v83 = 0LL;
    if ( a5 - 1 > 0x1F )
      v31 = 31;
    do
      ++v24;
    while ( *(_WORD *)(v9 + *(unsigned int *)(v9 + 8) + 2 * v24) );
    v32 = 102;
    *(_QWORD *)v81 = (int)v24;
    *(_QWORD *)Length = 102LL;
    if ( (unsigned __int64)(2LL * (int)v24 + 12) > 0x66 )
    {
      v32 = 2 * v24 + 12;
      *(_QWORD *)Length = (unsigned int)v32;
      if ( 2 * (_DWORD)v24 == -12 )
      {
LABEL_86:
        v24 = -1LL;
        v20 = 0;
        *v76 = 0;
        goto LABEL_22;
      }
    }
    v33 = gpLeakTrackingAllocator;
    v34 = (unsigned int)v32;
    if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x73726447) != 0x73726447
      || (v61 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
    {
LABEL_70:
      v35 = ExAllocatePool2(260LL, (unsigned int)v32);
      goto LABEL_71;
    }
    while ( *((_DWORD *)gpLeakTrackingAllocator + v61) != 1936876615 )
    {
      if ( ++v61 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
        goto LABEL_70;
    }
    v62 = 0;
    if ( v34 < 0x1000 || (v34 & 0xFFF) != 0 )
    {
      v62 = 1;
      v34 += 16LL;
    }
    v35 = ExAllocatePool2(260LL, v34);
    if ( v35 )
    {
      memset(v90, 0, sizeof(v90));
      RtlCaptureStackBackTrace(0, 0x14u, v90, 0LL);
      if ( v62 && (v35 & 0xFFF) + 16 < 0x1000 )
      {
        if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                v33,
                                v35,
                                v90) )
        {
          v35 += 16LL;
LABEL_137:
          v32 = Length[0];
LABEL_71:
          if ( v35 )
          {
            memset((void *)v35, 0, v32);
            StringCchCopyW(
              (unsigned __int16 *)v35,
              (unsigned __int64)v32 >> 1,
              (const unsigned __int16 *)(v9 + *(unsigned int *)(v9 + 8)));
            for ( i = (_WORD *)(v35 + 2 * (*(_QWORD *)v81 - 1LL)); (unsigned __int64)i > v35; --i )
            {
              if ( *i == 92 )
                goto LABEL_76;
            }
            if ( *i != 92 )
              goto LABEL_85;
LABEL_76:
            v37 = ((unsigned __int64)v32 >> 1) - *(_QWORD *)v81;
            v38 = (char *)(i + 1);
            if ( v37 - 1 > 0x7FFFFFFE )
            {
              if ( v37 )
                *(_WORD *)v38 = 0;
            }
            else
            {
              v39 = 2147483646 - v37;
              v40 = (char *)L"Video" - v38;
              do
              {
                if ( !(v39 + v37) )
                  break;
                v41 = *(_WORD *)&v38[v40];
                if ( !v41 )
                  break;
                *(_WORD *)v38 = v41;
                v38 += 2;
                --v37;
              }
              while ( v37 );
              v42 = v38 - 2;
              if ( v37 )
                v42 = v38;
              *(_WORD *)v42 = 0;
            }
            RtlInitUnicodeString(&DestinationString, (PCWSTR)v35);
            ObjectAttributes.Length = 48;
            ObjectAttributes.ObjectName = &DestinationString;
            ObjectAttributes.Attributes = 576;
            ObjectAttributes.RootDirectory = 0LL;
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
            if ( ZwOpenKey(&v83, 0x20019u, &ObjectAttributes) >= 0 )
            {
              v81[0] = 0;
              RtlInitUnicodeString(&DestinationString, L"Service");
              memset((void *)v35, 0, v32);
              if ( ZwQueryValueKey(v83, &DestinationString, KeyValueFullInformation, (PVOID)v35, Length[0], v81) >= 0 )
              {
                v63 = *(unsigned int *)(v35 + 8);
                v64 = (unsigned __int16 *)(v35 + v63);
                v65 = *(_WORD *)(v35 + v63);
                if ( v65 )
                {
                  do
                  {
                    *v64++ = toupper(v65);
                    v65 = *v64;
                  }
                  while ( *v64 );
                  LODWORD(v63) = *(_DWORD *)(v35 + 8);
                  v8 = v82;
                }
                v66 = v31;
                if ( v31 )
                {
                  v67 = Str1;
                  v68 = Str1;
                  v69 = v35 + (unsigned int)v63 - (_QWORD)Str1;
                  do
                  {
                    v70 = *(wchar_t *)((char *)v68 + v69);
                    --v31;
                    if ( !v70 )
                      break;
                    *v68++ = v70;
                    v76 = v68;
                    if ( v31 == v66 - 3 )
                    {
                      if ( !wcsnicmp(v67, L"VGA", 3uLL) )
                        break;
                      v68 = v76;
                    }
                  }
                  while ( v31 );
                  v8 = v82;
                }
              }
              ZwClose(v83);
            }
LABEL_85:
            NSInstrumentation::CLeakTrackingAllocator::Free(
              (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
              (void *)v35);
          }
          goto LABEL_86;
        }
      }
      else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                   v33,
                                   v35,
                                   v90) )
      {
        goto LABEL_137;
      }
      ExFreePoolWithTag((PVOID)v35, 0);
    }
    v35 = 0LL;
    goto LABEL_137;
  }
LABEL_120:
  v16 = -1073741670;
LABEL_30:
  if ( v87 )
    *v87 = v16;
  if ( v10 )
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      v10);
  if ( v9 )
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      (void *)v9);
  WdLogSingleEntry1(5LL, v16);
  return Handle;
}
