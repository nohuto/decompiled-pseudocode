/*
 * XREFs of ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x1C004EC08
 * Callers:
 *     xxxSafeLoadKeyboardLayoutEx @ 0x1C004EB20 (xxxSafeLoadKeyboardLayoutEx.c)
 * Callees:
 *     UserIsUserCritSecInExclusive @ 0x1C002A1D0 (UserIsUserCritSecInExclusive.c)
 *     IS_USERCRIT_OWNED_SHARED @ 0x1C002C87C (IS_USERCRIT_OWNED_SHARED.c)
 *     HMAllocObjectEx @ 0x1C002D20C (HMAllocObjectEx.c)
 *     ThreadUnlock1 @ 0x1C0030C00 (ThreadUnlock1.c)
 *     HMAssignmentLock @ 0x1C003A420 (HMAssignmentLock.c)
 *     UserSetLastError @ 0x1C003CCC0 (UserSetLastError.c)
 *     HKLtoPKL @ 0x1C003FF30 (HKLtoPKL.c)
 *     ?xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z @ 0x1C004E28C (-xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z.c)
 *     ApiSetEditionNotifyShellLanguageHook @ 0x1C004F120 (ApiSetEditionNotifyShellLanguageHook.c)
 *     xxxInternalActivateKeyboardLayout @ 0x1C004FB30 (xxxInternalActivateKeyboardLayout.c)
 *     SetGlobalKeyboardTableInfo @ 0x1C0050030 (SetGlobalKeyboardTableInfo.c)
 *     ?xxxSetPKLinThreads@@YAXPEAUtagKL@@0@Z @ 0x1C0050088 (-xxxSetPKLinThreads@@YAXPEAUtagKL@@0@Z.c)
 *     ApiSetEditionFreeIMEKeyboardLayouts @ 0x1C005033C (ApiSetEditionFreeIMEKeyboardLayouts.c)
 *     ?LockKbdLayoutListHead@@YAPEAUtagKL@@PEAUtagWINDOWSTATION@@PEAU1@@Z @ 0x1C0050938 (-LockKbdLayoutListHead@@YAPEAUtagKL@@PEAUtagWINDOWSTATION@@PEAU1@@Z.c)
 *     ?LoadKeyboardLayoutFile@@YAPEAUtagKBDFILE@@PEAXIIPEBGPEAGKK@Z @ 0x1C0050970 (-LoadKeyboardLayoutFile@@YAPEAUtagKBDFILE@@PEAXIIPEBGPEAGKK@Z.c)
 *     ApiSetEditionInitSystemCharsetInfoForLayout @ 0x1C005139C (ApiSetEditionInitSystemCharsetInfoForLayout.c)
 *     DestroyKF @ 0x1C0051F60 (DestroyKF.c)
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x1C006D24C (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     ?IsLockedExclusive@tagDomLock@@QEBA_NXZ @ 0x1C006D270 (-IsLockedExclusive@tagDomLock@@QEBA_NXZ.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 *     ?ReorderKeyboardLayouts@@YAXPEAUtagWINDOWSTATION@@PEAUtagKL@@@Z @ 0x1C01E4154 (-ReorderKeyboardLayouts@@YAXPEAUtagWINDOWSTATION@@PEAUtagKL@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

HKL __fastcall xxxLoadKeyboardLayoutEx(
        struct tagWINDOWSTATION *a1,
        void *a2,
        HKL a3,
        unsigned int a4,
        unsigned int a5,
        wchar_t *a6,
        const unsigned __int16 *a7,
        signed int a8,
        unsigned int a9)
{
  __int64 v10; // r8
  __int64 v13; // rcx
  struct tagTHREADINFO *v14; // r15
  unsigned int v15; // r14d
  __int64 v16; // rbx
  __int64 v17; // rdx
  int v18; // eax
  char *v19; // rax
  __int64 v20; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  struct tagKL *v26; // rax
  __int64 v27; // r9
  const unsigned __int16 *v28; // r9
  struct tagKBDFILE *KeyboardLayoutFile; // rdi
  __int64 v30; // rax
  const WCHAR **v31; // r13
  __int64 v32; // rax
  const WCHAR *v33; // rdx
  const WCHAR *v34; // rax
  __int64 v35; // rdi
  int v36; // eax
  __int64 v37; // rcx
  int v38; // eax
  __int64 v39; // rcx
  PVOID v40; // r15
  unsigned __int64 v41; // rdx
  __int64 v42; // rax
  __int64 Pool2; // rdi
  unsigned int v44; // edi
  unsigned int v45; // r15d
  struct tagKBDFILE *v46; // rax
  __int64 v47; // rcx
  char v48; // r13
  __int64 v49; // rdi
  __int64 v50; // r9
  int inited; // [rsp+4Ch] [rbp-B4h]
  struct tagTHREADINFO *v53; // [rsp+50h] [rbp-B0h]
  void *v54; // [rsp+58h] [rbp-A8h] BYREF
  PCWSTR SourceString[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 *v56; // [rsp+70h] [rbp-90h] BYREF
  __int64 v57; // [rsp+78h] [rbp-88h]
  __int64 *v58; // [rsp+80h] [rbp-80h] BYREF
  __int64 v59; // [rsp+88h] [rbp-78h]
  __int64 v60; // [rsp+90h] [rbp-70h]
  HKL v61; // [rsp+A0h] [rbp-60h]
  __int128 v62; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v63; // [rsp+B8h] [rbp-48h]
  struct _UNICODE_STRING DestinationString; // [rsp+C0h] [rbp-40h] BYREF
  PVOID BackTrace[20]; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v66; // [rsp+170h] [rbp+70h] BYREF
  __int128 v67; // [rsp+180h] [rbp+80h]

  v10 = (unsigned int)a8;
  SourceString[0] = a7;
  v61 = a3;
  v13 = 0LL;
  v63 = 0LL;
  v54 = 0LL;
  v66 = 0LL;
  v67 = 0LL;
  v62 = 0LL;
  DestinationString = 0LL;
  if ( !a8 || a1 && (*((_DWORD *)a1 + 16) & 4) != 0 )
    return 0LL;
  v14 = gptiCurrent;
  v53 = gptiCurrent;
  if ( a3 )
  {
    v13 = HKLtoPKL((__int64)gptiCurrent, (__int64)a3);
    if ( !v13 )
      return 0LL;
    v10 = (unsigned int)a8;
  }
  if ( (_DWORD)v10 == (_DWORD)a3 )
    return *(HKL *)(v13 + 40);
  v15 = a9;
  if ( (a9 & 0x40000000) != 0 )
  {
    if ( PsGetThreadProcessId(*(PETHREAD *)v14) != (HANDLE)gpidLogon )
    {
      UserSetLastError(1004LL, v22, v24, v25);
      return 0LL;
    }
    if ( !a1 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v23, v22, v24);
    ApiSetEditionFreeIMEKeyboardLayouts(a1);
    while ( 1 )
    {
      v26 = (struct tagKL *)HKLtoPKL((__int64)gptiCurrent, 1LL);
      if ( !v26 )
        break;
      xxxInternalUnloadKeyboardLayout((struct tagKL **)a1, v26, 0x80000000LL, v27);
    }
    v14 = v53;
    v10 = (unsigned int)a8;
  }
  if ( a1 )
    v16 = *((_QWORD *)a1 + 9);
  else
    v16 = gspklWinstaLessSessionLayouts;
  v17 = v16;
  if ( v16 )
  {
    v13 = (int)v10;
    while ( 1 )
    {
      if ( *(_QWORD *)(v16 + 40) == (int)v10 )
      {
        v18 = *(_DWORD *)(v16 + 32);
        if ( v18 >= 0 )
          break;
      }
      v16 = *(_QWORD *)(v16 + 16);
      if ( v16 == v17 )
        goto LABEL_40;
    }
    if ( (v18 & 0x20000000) != 0 )
    {
      if ( !gbInDestroyHandleTableObjects
        && !UserIsUserCritSecInExclusive()
        && (!IS_USERCRIT_OWNED_SHARED()
         || !tagDomLock::IsLockedExclusive((tagDomLock *)&gDomainHandleManagerLock)
         && !tagDomLock::IsLockedShared((tagDomLock *)&gDomainHandleManagerLock)) )
      {
        __int2c();
      }
      v19 = (char *)qword_1C0294B68 + dword_1C0294B70 * (unsigned int)(unsigned __int16)*(_DWORD *)v16;
      v19[25] &= ~1u;
      *(_DWORD *)(v16 + 32) &= ~0x20000000u;
    }
    else if ( (a9 & 0x40000000) == 0 )
    {
      v15 = a9 & 0xFFFFFF7F;
    }
LABEL_17:
    *(_QWORD *)&v62 = *((_QWORD *)v14 + 52);
    *((_QWORD *)v14 + 52) = &v62;
    *((_QWORD *)&v62 + 1) = v16;
    _InterlockedIncrement((volatile signed __int32 *)(v16 + 8));
    if ( v61 )
    {
      v49 = HKLtoPKL((__int64)v14, (__int64)v61);
      if ( v49 )
      {
        v58 = (__int64 *)*((_QWORD *)v14 + 52);
        *((_QWORD *)v14 + 52) = &v58;
        v60 = 0LL;
        v59 = v49;
        _InterlockedIncrement((volatile signed __int32 *)(v49 + 8));
        xxxSetPKLinThreads((struct tagKL *)v16, (struct tagKL *)v49);
        xxxInternalUnloadKeyboardLayout((struct tagKL **)a1, (struct tagKL *)v49, 0x80000000LL, v50);
        ThreadUnlock1();
      }
    }
    if ( (v15 & 8) != 0 )
      ReorderKeyboardLayouts(a1, (struct tagKL *)v16);
    if ( qword_1C029BE68 )
      qword_1C029BE68(0x80000000LL, 0LL, 0LL, 0LL, 0);
    if ( (v15 & 0x80u) == 0 )
      ApiSetEditionNotifyShellLanguageHook(v14, 0LL, 0LL);
    if ( (v15 & 1) != 0 )
      xxxInternalActivateKeyboardLayout(a1, v16, v15, 0LL);
    if ( (v15 & 0x40000000) != 0 )
    {
      SetGlobalKeyboardTableInfo(v16);
      v57 = v16;
      v56 = &gspklBaseLayout;
      HMAssignmentLock(&v56, 0LL);
      xxxSetPKLinThreads((struct tagKL *)v16, 0LL);
    }
    if ( (v15 & 0x80000000) != 0 && !gspklBaseLayout )
      SetGlobalKeyboardTableInfo(v16);
    v20 = ThreadUnlock1();
    if ( v20 )
      return *(HKL *)(v20 + 40);
    return 0LL;
  }
LABEL_40:
  if ( !qword_1C029D020
    || (int)qword_1C029D020(v13, v17, v10) < 0
    || qword_1C029D028 && (unsigned int)qword_1C029D028((unsigned int)a8, a9, &v54) )
  {
    inited = ApiSetEditionInitSystemCharsetInfoForLayout(SourceString[0], &v66, v10);
    KeyboardLayoutFile = LoadKeyboardLayoutFile(a2, a4, a5, v28, a6 + 290, 0, 0);
    if ( KeyboardLayoutFile )
    {
      v30 = HMAllocObjectEx(0LL, 0LL, 0xDu, 0x80u, 0);
      v16 = v30;
      if ( v30 )
      {
        v31 = (const WCHAR **)(v30 + 56);
        v59 = (__int64)KeyboardLayoutFile;
        v58 = (__int64 *)(v30 + 56);
        HMAssignmentLock(&v58, 1LL);
        v32 = *(unsigned int *)a6;
        if ( !(_DWORD)v32 )
        {
LABEL_47:
          v33 = SourceString[0];
          *(_QWORD *)(v16 + 40) = a8;
          *(_QWORD *)(v16 + 16) = v16;
          *(_QWORD *)(v16 + 24) = v16;
          *(_DWORD *)(v16 + 32) = 0;
          *(_WORD *)(v16 + 74) = 0;
          RtlInitUnicodeString(&DestinationString, v33);
          RtlUnicodeStringToInteger(&DestinationString, 0x10u, (PULONG)(v16 + 112));
          if ( (*((_DWORD *)a6 + 194) & 1) != 0 )
            *(_DWORD *)(v16 + 32) |= 0x80000000;
          v34 = *v31;
          v35 = v16 + 48;
          SourceString[0] = (PCWSTR)(v16 + 48);
          SourceString[1] = v34;
          HMAssignmentLock((__int64 **)SourceString, 1LL);
          v36 = *((_DWORD *)a6 + 195);
          if ( v36 )
          {
            v37 = *(_QWORD *)(v16 + 48);
          }
          else
          {
            v37 = *(_QWORD *)v35;
            v36 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v35 + 32LL) + 96LL);
          }
          *(_DWORD *)(v16 + 104) = v36;
          v38 = *((_DWORD *)a6 + 196);
          if ( !v38 )
            v38 = *(_DWORD *)(*(_QWORD *)(v37 + 32) + 100LL);
          *(_DWORD *)(v16 + 108) = v38;
          *(_DWORD *)(v16 + 116) = *((_DWORD *)a6 + 195);
          *(_DWORD *)(v16 + 120) = *((_DWORD *)a6 + 196);
          *(_DWORD *)(*(_QWORD *)(v37 + 32) + 80LL) |= (v15 >> 15) & 7;
          *(_QWORD *)(v16 + 80) = v54;
          if ( inited )
          {
            *(_WORD *)(v16 + 72) = WORD2(v66);
            *(_DWORD *)(v16 + 64) = HIDWORD(v67);
            *(_DWORD *)(v16 + 68) = v66;
          }
          else
          {
            *(_WORD *)(v16 + 72) = 0;
            *(_QWORD *)(v16 + 64) = 1LL;
          }
          if ( a1 )
            v39 = *((_QWORD *)a1 + 9);
          else
            v39 = gspklWinstaLessSessionLayouts;
          if ( v39 )
          {
            *(_QWORD *)(v16 + 16) = v39;
            *(_QWORD *)(v16 + 24) = *(_QWORD *)(v39 + 24);
            *(_QWORD *)(*(_QWORD *)(v39 + 24) + 16LL) = v16;
            *(_QWORD *)(v39 + 24) = v16;
          }
          else
          {
            LockKbdLayoutListHead(a1, (struct tagKL *)v16);
          }
          goto LABEL_17;
        }
        v40 = gpLeakTrackingAllocator;
        v41 = 8 * v32;
        if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x746B7355) != 0x746B7355
          || (v42 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
        {
LABEL_81:
          Pool2 = ExAllocatePool2(260LL, v41);
LABEL_82:
          *(_QWORD *)(v16 + 96) = Pool2;
          if ( Pool2 )
          {
            v44 = 0;
            v45 = 0;
            if ( *(_DWORD *)a6 )
            {
              do
              {
                if ( *(_QWORD *)&a6[8 * v44 + 324] )
                {
                  a6[36 * v44 + 33] = 0;
                  v46 = LoadKeyboardLayoutFile(
                          *(void **)&a6[8 * v44 + 324],
                          *(_DWORD *)&a6[8 * v44 + 328],
                          *(_DWORD *)&a6[8 * v44 + 330],
                          (const unsigned __int16 *)(2LL * v44),
                          &a6[36 * v44 + 2],
                          *(_DWORD *)&a6[36 * v44 + 34],
                          *(_DWORD *)&a6[36 * v44 + 36]);
                  if ( !v46 )
                    break;
                  v47 = *(_QWORD *)(v16 + 96);
                  v57 = (__int64)v46;
                  v56 = (__int64 *)(v47 + 8LL * v45);
                  HMAssignmentLock(&v56, 0LL);
                  ++v45;
                }
                ++v44;
              }
              while ( v44 < *(_DWORD *)a6 );
              v15 = a9;
            }
            *(_DWORD *)(v16 + 88) = v45;
          }
          v14 = v53;
          goto LABEL_47;
        }
        while ( *((_DWORD *)gpLeakTrackingAllocator + v42) != 1953198933 )
        {
          if ( ++v42 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
            goto LABEL_81;
        }
        v48 = 0;
        if ( v41 < 0x1000 || (v41 & 0xFFF) != 0 )
        {
          v48 = 1;
          v41 += 16LL;
        }
        Pool2 = ExAllocatePool2(260LL, v41);
        if ( Pool2 )
        {
          memset(BackTrace, 0, sizeof(BackTrace));
          RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
          if ( v48 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
          {
            if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                    v40,
                                    Pool2,
                                    BackTrace) )
            {
              Pool2 += 16LL;
LABEL_101:
              v31 = (const WCHAR **)(v16 + 56);
              goto LABEL_82;
            }
          }
          else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                       v40,
                                       Pool2,
                                       BackTrace) )
          {
            goto LABEL_101;
          }
          ExFreePoolWithTag((PVOID)Pool2, 0);
        }
        Pool2 = 0LL;
        goto LABEL_101;
      }
      DestroyKF(KeyboardLayoutFile);
    }
    if ( v54 )
      NSInstrumentation::CLeakTrackingAllocator::Free(
        (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
        v54);
  }
  return 0LL;
}
