HKL __fastcall xxxLoadKeyboardLayoutEx(
        struct tagWINDOWSTATION *a1,
        void *a2,
        HKL a3,
        __int64 a4,
        unsigned int a5,
        wchar_t *a6,
        const unsigned __int16 *a7,
        unsigned int a8,
        unsigned int a9)
{
  __int64 v10; // r8
  __int64 v13; // rcx
  struct tagTHREADINFO *v14; // rsi
  signed int v15; // r15d
  __int64 v16; // rdi
  __int64 v17; // rdx
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  char *v23; // rax
  HKL v24; // rdx
  __int64 v25; // rax
  struct tagKL *v27; // rax
  const unsigned __int16 *v28; // r9
  struct tagKBDFILE *KeyboardLayoutFile; // rbx
  __int64 v30; // rax
  const WCHAR **v31; // r12
  __int64 v32; // rax
  const WCHAR *v33; // rdx
  const WCHAR *v34; // rax
  int v35; // eax
  __int64 v36; // rcx
  int v37; // eax
  __int64 v38; // rcx
  NSInstrumentation::CLeakTrackingAllocator *v39; // rsi
  unsigned __int64 v40; // rbx
  char v41; // r12
  int v42; // eax
  __int64 Pool2; // rbx
  _QWORD *v44; // rax
  unsigned int v45; // r10d
  __int64 v46; // r11
  unsigned int v47; // ebx
  unsigned int i; // esi
  __int64 *v49; // rax
  __int64 v50; // rcx
  __int64 v51; // rbx
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  unsigned int v56; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v57; // [rsp+48h] [rbp-B8h]
  unsigned int v58[2]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v59[2]; // [rsp+58h] [rbp-A8h] BYREF
  int inited; // [rsp+60h] [rbp-A0h]
  void *v61; // [rsp+68h] [rbp-98h] BYREF
  __int64 v62; // [rsp+70h] [rbp-90h] BYREF
  struct tagTHREADINFO *v63; // [rsp+78h] [rbp-88h]
  PCWSTR SourceString[2]; // [rsp+80h] [rbp-80h] BYREF
  unsigned int *v65; // [rsp+90h] [rbp-70h] BYREF
  unsigned int *v66; // [rsp+98h] [rbp-68h]
  __int64 *v67; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v68; // [rsp+A8h] [rbp-58h]
  __int64 v69; // [rsp+B0h] [rbp-50h]
  HKL v70; // [rsp+C0h] [rbp-40h]
  __int128 v71; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v72; // [rsp+D8h] [rbp-28h]
  __int64 *v73[2]; // [rsp+E0h] [rbp-20h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+F0h] [rbp-10h] BYREF
  PVOID BackTrace[20]; // [rsp+100h] [rbp+0h] BYREF
  __int128 v76; // [rsp+1A0h] [rbp+A0h] BYREF
  __int128 v77; // [rsp+1B0h] [rbp+B0h]

  v59[0] = a5;
  v10 = a8;
  SourceString[0] = a7;
  v58[0] = a4;
  v70 = a3;
  v13 = 0LL;
  v57 = a8;
  v72 = 0LL;
  v61 = 0LL;
  v76 = 0LL;
  v77 = 0LL;
  v71 = 0LL;
  DestinationString = 0LL;
  if ( !a8 || a1 && (*((_DWORD *)a1 + 16) & 4) != 0 )
    return 0LL;
  v14 = gptiCurrent;
  v63 = gptiCurrent;
  if ( a3 )
  {
    v13 = HKLtoPKL((__int64)gptiCurrent, (__int64)a3);
    if ( !v13 )
      return 0LL;
    v10 = v57;
  }
  if ( (_DWORD)v10 == (_DWORD)a3 )
    return *(HKL *)(v13 + 40);
  v15 = a9;
  if ( (a9 & 0x40000000) != 0 )
  {
    if ( PsGetThreadProcessId(*(PETHREAD *)v14) != (HANDLE)gpidLogon )
    {
      UserSetLastError(1004);
      return 0LL;
    }
    if ( !a1 )
    {
      v56 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2052LL);
    }
    ApiSetEditionFreeIMEKeyboardLayouts(a1);
    while ( 1 )
    {
      v27 = (struct tagKL *)HKLtoPKL((__int64)gptiCurrent, 1LL);
      if ( !v27 )
        break;
      xxxInternalUnloadKeyboardLayout(a1, v27, 0x80000000);
    }
    v10 = v57;
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
        goto LABEL_41;
    }
    if ( (v18 & 0x20000000) == 0 )
    {
      if ( (a9 & 0x40000000) == 0 )
        v15 = a9 & 0xFFFFFF7F;
LABEL_18:
      *(_QWORD *)&v71 = *((_QWORD *)v14 + 52);
      *((_QWORD *)v14 + 52) = &v71;
      *((_QWORD *)&v71 + 1) = v16;
      _InterlockedIncrement((volatile signed __int32 *)(v16 + 8));
      v24 = v70;
      if ( v70 )
      {
        v51 = HKLtoPKL((__int64)v14, (__int64)v70);
        if ( v51 )
        {
          v67 = (__int64 *)*((_QWORD *)v14 + 52);
          *((_QWORD *)v14 + 52) = &v67;
          v69 = 0LL;
          v68 = v51;
          _InterlockedIncrement((volatile signed __int32 *)(v51 + 8));
          xxxSetPKLinThreads((struct tagKL *)v16, (struct tagKL *)v51);
          xxxInternalUnloadKeyboardLayout(a1, (struct tagKL *)v51, 0x80000000);
          ThreadUnlock1(v53, v52, v54, v55);
        }
      }
      if ( (v15 & 8) != 0 )
        ReorderKeyboardLayouts(a1, (struct tagKL *)v16);
      if ( qword_1C02D6710 )
        qword_1C02D6710(0x80000000LL, 0LL, 0LL, 0LL, 0);
      if ( (v15 & 0x80u) == 0 )
        ApiSetEditionNotifyShellLanguageHook(v14, 0LL, 0LL);
      if ( (v15 & 1) != 0 )
        xxxInternalActivateKeyboardLayout((__int64)a1, v16, (unsigned int)v15, 0LL);
      if ( (v15 & 0x40000000) != 0 )
      {
        SetGlobalKeyboardTableInfo(v16);
        v66 = (unsigned int *)v16;
        v65 = (unsigned int *)&gspklBaseLayout;
        HMAssignmentLock((__int64 **)&v65, 0);
        xxxSetPKLinThreads((struct tagKL *)v16, 0LL);
      }
      if ( v15 < 0 && !gspklBaseLayout )
        SetGlobalKeyboardTableInfo(v16);
      v25 = ThreadUnlock1(v13, (__int64)v24, v10, a4);
      if ( v25 )
        return *(HKL *)(v25 + 40);
      return 0LL;
    }
    if ( !gbInDestroyHandleTableObjects
      && !IS_USERCRIT_OWNED_EXCLUSIVE((int)v10, v17, v10, a4)
      && (!IS_USERCRIT_OWNED_AT_ALL(v20, v19, v21, v22)
       || !tagDomLock::IsLockedExclusive(&gDomainHandleManagerLock)
       && !tagDomLock::IsLockedShared(&gDomainHandleManagerLock)) )
    {
      __int2c();
    }
    v23 = (char *)qword_1C02D0E08 + dword_1C02D0E10 * (unsigned int)(unsigned __int16)*(_DWORD *)v16;
    v23[25] &= ~1u;
    *(_DWORD *)(v16 + 32) &= ~0x20000000u;
LABEL_17:
    InputTraceLogging::Keyboard::LoadKeyboardLayoutW((struct tagKL *const)v16);
    goto LABEL_18;
  }
LABEL_41:
  if ( !qword_1C02D77D8
    || (int)qword_1C02D77D8(v13, v17, v10) < 0
    || qword_1C02D77E0 && (unsigned int)qword_1C02D77E0(v57, a9, &v61) )
  {
    inited = ApiSetEditionInitSystemCharsetInfoForLayout(SourceString[0], &v76, v10);
    KeyboardLayoutFile = LoadKeyboardLayoutFile(a2, v58[0], v59[0], v28, a6 + 290, 0, 0);
    if ( KeyboardLayoutFile )
    {
      v30 = HMAllocObjectEx(0LL, 0LL, 0xDu, 0xA0u, 0);
      v16 = v30;
      if ( v30 )
      {
        v31 = (const WCHAR **)(v30 + 56);
        v68 = (__int64)KeyboardLayoutFile;
        v67 = (__int64 *)(v30 + 56);
        HMAssignmentLock(&v67, 1);
        v32 = *(unsigned int *)a6;
        if ( !(_DWORD)v32 )
        {
LABEL_48:
          v33 = SourceString[0];
          *(_QWORD *)(v16 + 16) = v16;
          *(_DWORD *)(v16 + 32) = 0;
          *(_WORD *)(v16 + 74) = 0;
          *(_QWORD *)(v16 + 40) = (int)v57;
          *(_QWORD *)(v16 + 24) = v16;
          RtlInitUnicodeString(&DestinationString, v33);
          RtlUnicodeStringToInteger(&DestinationString, 0x10u, (PULONG)(v16 + 112));
          if ( (*((_DWORD *)a6 + 194) & 1) != 0 )
            *(_DWORD *)(v16 + 32) |= 0x80000000;
          v34 = *v31;
          SourceString[0] = (PCWSTR)(v16 + 48);
          SourceString[1] = v34;
          HMAssignmentLock((__int64 **)SourceString, 1);
          v35 = *((_DWORD *)a6 + 195);
          v36 = *(_QWORD *)(v16 + 48);
          if ( !v35 )
            v35 = *(_DWORD *)(*(_QWORD *)(v36 + 32) + 96LL);
          *(_DWORD *)(v16 + 104) = v35;
          v37 = *((_DWORD *)a6 + 196);
          if ( !v37 )
            v37 = *(_DWORD *)(*(_QWORD *)(v36 + 32) + 100LL);
          *(_DWORD *)(v16 + 108) = v37;
          *(_DWORD *)(v16 + 116) = *((_DWORD *)a6 + 195);
          *(_DWORD *)(v16 + 120) = *((_DWORD *)a6 + 196);
          *(_DWORD *)(*(_QWORD *)(v36 + 32) + 80LL) |= (a9 >> 15) & 7;
          *(_QWORD *)(v16 + 80) = v61;
          if ( inited )
          {
            *(_WORD *)(v16 + 72) = WORD2(v76);
            *(_DWORD *)(v16 + 64) = HIDWORD(v77);
            *(_DWORD *)(v16 + 68) = v76;
          }
          else
          {
            *(_WORD *)(v16 + 72) = 0;
            *(_QWORD *)(v16 + 64) = 1LL;
          }
          RtlStringCchCopyNW(
            (unsigned __int16 *)(v16 + 124),
            0x10uLL,
            (const unsigned __int16 *)(*((_QWORD *)v14 + 53) + 976LL),
            0x10uLL);
          if ( a1 )
            v38 = *((_QWORD *)a1 + 9);
          else
            v38 = gspklWinstaLessSessionLayouts;
          if ( v38 )
          {
            *(_QWORD *)(v16 + 16) = v38;
            *(_QWORD *)(v16 + 24) = *(_QWORD *)(v38 + 24);
            *(_QWORD *)(*(_QWORD *)(v38 + 24) + 16LL) = v16;
            *(_QWORD *)(v38 + 24) = v16;
          }
          else
          {
            LockKbdLayoutListHead(a1, (struct tagKL *)v16);
          }
          goto LABEL_17;
        }
        v39 = gpLeakTrackingAllocator;
        v40 = 8 * v32;
        v41 = 0;
        v62 = 8 * v32;
        v56 = 1953198933;
        v42 = *(_DWORD *)gpLeakTrackingAllocator;
        *(_QWORD *)v59 = 260LL;
        switch ( v42 )
        {
          case 0:
            Pool2 = ExAllocatePool2(260LL, v40, 1953198933LL);
            if ( Pool2 )
              _InterlockedIncrement64((volatile signed __int64 *)v39 + 14);
            goto LABEL_101;
          case 1:
            if ( NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x746B7355u)
              && v40 + 16 >= v40 )
            {
              v44 = (_QWORD *)ExAllocatePool2(*(_QWORD *)v59 & 0xFFFFFFFFFFFFFFFDuLL, v40 + 16, v56);
              Pool2 = (__int64)v44;
              if ( !v44
                || (_InterlockedIncrement64((volatile signed __int64 *)v39 + 14),
                    *v44 = 1953198933LL,
                    Pool2 = (__int64)(v44 + 2),
                    v44 == (_QWORD *)-16LL) )
              {
                NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
                  *((NSInstrumentation::CPointerHashTable **)v39 + 1),
                  (const void *)0x746B7355);
              }
              goto LABEL_101;
            }
            break;
          case 2:
            *(_QWORD *)v58 = 0LL;
            if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(
                    gpLeakTrackingAllocator,
                    0x746B7355u,
                    (unsigned __int64 *)v58) )
            {
              v65 = v59;
              v66 = &v56;
              Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                        (__int64)v39,
                        (__int64)&v65,
                        &v62);
LABEL_101:
              *(_QWORD *)(v16 + 96) = Pool2;
              if ( Pool2 )
              {
                v47 = 0;
                for ( i = 0; v47 < *(_DWORD *)a6; ++v47 )
                {
                  if ( *(_QWORD *)&a6[8 * v47 + 324] )
                  {
                    a6[36 * v47 + 33] = 0;
                    v49 = (__int64 *)LoadKeyboardLayoutFile(
                                       *(void **)&a6[8 * v47 + 324],
                                       *(unsigned int *)&a6[8 * v47 + 328],
                                       *(unsigned int *)&a6[8 * v47 + 330],
                                       (const unsigned __int16 *)(2LL * v47),
                                       &a6[36 * v47 + 2],
                                       *(_DWORD *)&a6[36 * v47 + 34],
                                       *(_DWORD *)&a6[36 * v47 + 36]);
                    if ( !v49 )
                      break;
                    v50 = *(_QWORD *)(v16 + 96);
                    v73[1] = v49;
                    v73[0] = (__int64 *)(v50 + 8LL * i);
                    HMAssignmentLock(v73, 0);
                    ++i;
                  }
                }
                *(_DWORD *)(v16 + 88) = i;
              }
              v14 = v63;
              v31 = (const WCHAR **)(v16 + 56);
              goto LABEL_48;
            }
            if ( v40 < 0x1000 || (v40 & 0xFFF) != 0 )
            {
              v40 += 16LL;
              v41 = 1;
              v62 = v40;
            }
            Pool2 = ExAllocatePool2(v46, v40, v45);
            if ( Pool2 )
            {
              _InterlockedIncrement64((volatile signed __int64 *)v39 + 16);
              NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
              if ( v41 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
              {
                if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                        v39,
                                        Pool2,
                                        *(_QWORD *)v58,
                                        BackTrace) )
                {
                  Pool2 += 16LL;
                  goto LABEL_101;
                }
              }
              else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                           v39,
                                           Pool2,
                                           *(_QWORD *)v58,
                                           BackTrace) )
              {
                goto LABEL_101;
              }
              _InterlockedIncrement64((volatile signed __int64 *)v39 + 17);
              _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
            }
            break;
        }
        Pool2 = 0LL;
        goto LABEL_101;
      }
      DestroyKF(KeyboardLayoutFile);
    }
    if ( v61 )
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v61);
  }
  return 0LL;
}
