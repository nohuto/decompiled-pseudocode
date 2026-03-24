/*
 * XREFs of ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x1C0008658
 * Callers:
 *     xxxSafeLoadKeyboardLayoutEx @ 0x1C0008570 (xxxSafeLoadKeyboardLayoutEx.c)
 * Callees:
 *     DestroyKF @ 0x1C0007338 (DestroyKF.c)
 *     ?xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z @ 0x1C0007C2C (-xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z.c)
 *     ApiSetEditionNotifyShellLanguageHook @ 0x1C0008B08 (ApiSetEditionNotifyShellLanguageHook.c)
 *     SetGlobalKeyboardTableInfo @ 0x1C00090B0 (SetGlobalKeyboardTableInfo.c)
 *     xxxInternalActivateKeyboardLayout @ 0x1C0009480 (xxxInternalActivateKeyboardLayout.c)
 *     HKLtoPKL @ 0x1C000A070 (HKLtoPKL.c)
 *     ?xxxSetPKLinThreads@@YAXPEAUtagKL@@0@Z @ 0x1C000A1D0 (-xxxSetPKLinThreads@@YAXPEAUtagKL@@0@Z.c)
 *     ApiSetEditionFreeIMEKeyboardLayouts @ 0x1C000A43C (ApiSetEditionFreeIMEKeyboardLayouts.c)
 *     ?LockKbdLayoutListHead@@YAPEAUtagKL@@PEAUtagWINDOWSTATION@@PEAU1@@Z @ 0x1C000A864 (-LockKbdLayoutListHead@@YAPEAUtagKL@@PEAUtagWINDOWSTATION@@PEAU1@@Z.c)
 *     ApiSetEditionInitSystemCharsetInfoForLayout @ 0x1C000A89C (ApiSetEditionInitSystemCharsetInfoForLayout.c)
 *     Win32AllocPoolZInit @ 0x1C0028440 (Win32AllocPoolZInit.c)
 *     Win32FreePool @ 0x1C002ADC0 (Win32FreePool.c)
 *     ThreadUnlock1 @ 0x1C002E4A0 (ThreadUnlock1.c)
 *     HMAssignmentLock @ 0x1C0030310 (HMAssignmentLock.c)
 *     ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C0031C90 (--0-$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 *     HMAllocObject @ 0x1C0032C10 (HMAllocObject.c)
 *     UserSetLastError @ 0x1C00388BC (UserSetLastError.c)
 *     ?LoadKeyboardLayoutFile@@YAPEAUtagKBDFILE@@PEAXIIPEBGPEAGKK@Z @ 0x1C0069760 (-LoadKeyboardLayoutFile@@YAPEAUtagKBDFILE@@PEAXIIPEBGPEAGKK@Z.c)
 *     __security_check_cookie @ 0x1C00C5070 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 *     ?ReorderKeyboardLayouts@@YAXPEAUtagWINDOWSTATION@@PEAUtagKL@@@Z @ 0x1C01AACA4 (-ReorderKeyboardLayouts@@YAXPEAUtagWINDOWSTATION@@PEAUtagKL@@@Z.c)
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
  int v9; // ebx
  __int64 v11; // rcx
  struct tagTHREADINFO *v12; // r13
  unsigned int v13; // esi
  __int64 v14; // rbx
  __int64 v15; // rdx
  int v16; // eax
  char *v17; // rax
  __int64 v18; // rax
  struct tagKL *v20; // rax
  int v21; // eax
  int v22; // eax
  const unsigned __int16 *v23; // r9
  __int64 v24; // r8
  struct tagKBDFILE *KeyboardLayoutFile; // r15
  __int64 v26; // rax
  const WCHAR **v27; // r12
  __int64 v28; // rax
  const WCHAR *v29; // rdx
  const WCHAR *v30; // rax
  __int64 v31; // r15
  int v32; // eax
  __int64 v33; // rcx
  int v34; // eax
  __int64 v35; // rcx
  __int64 v36; // rax
  unsigned int v37; // r15d
  unsigned int v38; // r12d
  struct tagKBDFILE *v39; // rax
  __int64 v40; // rcx
  __int64 v41; // r14
  int inited; // [rsp+40h] [rbp-C0h]
  __int64 v44; // [rsp+50h] [rbp-B0h] BYREF
  PCWSTR SourceString[2]; // [rsp+60h] [rbp-A0h] BYREF
  void *v46[2]; // [rsp+70h] [rbp-90h] BYREF
  HKL v47; // [rsp+80h] [rbp-80h]
  __int128 v48; // [rsp+88h] [rbp-78h] BYREF
  __int64 v49; // [rsp+98h] [rbp-68h]
  _QWORD v50[2]; // [rsp+A0h] [rbp-60h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v52[2]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v53[3]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v54[16]; // [rsp+E8h] [rbp-18h] BYREF
  _BYTE v55[16]; // [rsp+F8h] [rbp-8h] BYREF
  _BYTE v56[16]; // [rsp+108h] [rbp+8h] BYREF
  __int128 v57; // [rsp+118h] [rbp+18h] BYREF
  __int128 v58; // [rsp+128h] [rbp+28h]

  v9 = (int)a3;
  SourceString[0] = a7;
  v11 = 0LL;
  v47 = a3;
  v46[0] = a2;
  v49 = 0LL;
  v44 = 0LL;
  v57 = 0LL;
  v58 = 0LL;
  v48 = 0LL;
  DestinationString = 0LL;
  if ( !a8 || a1 && (*((_DWORD *)a1 + 16) & 4) != 0 )
    return 0LL;
  v12 = gptiCurrent;
  if ( a3 )
  {
    v11 = HKLtoPKL(gptiCurrent, a3);
    if ( !v11 )
      return 0LL;
  }
  if ( a8 == v9 )
    return *(HKL *)(v11 + 40);
  v13 = a9;
  if ( (a9 & 0x40000000) != 0 )
  {
    if ( PsGetThreadProcessId(*(PETHREAD *)v12) != (HANDLE)gpidLogon )
    {
      UserSetLastError(1004LL);
      return 0LL;
    }
    if ( !a1 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1948LL);
    ApiSetEditionFreeIMEKeyboardLayouts(a1);
    while ( 1 )
    {
      v20 = (struct tagKL *)HKLtoPKL(gptiCurrent, 1LL);
      if ( !v20 )
        break;
      xxxInternalUnloadKeyboardLayout(a1, v20, 0x80000000);
    }
    v13 = a9;
  }
  if ( a1 )
    v14 = *((_QWORD *)a1 + 9);
  else
    v14 = gspklWinstaLessSessionLayouts;
  v15 = v14;
  if ( v14 )
  {
    while ( 1 )
    {
      if ( *(_QWORD *)(v14 + 40) == a8 )
      {
        v16 = *(_DWORD *)(v14 + 32);
        if ( v16 >= 0 )
          break;
      }
      v14 = *(_QWORD *)(v14 + 16);
      if ( v14 == v15 )
        goto LABEL_37;
    }
    if ( (v16 & 0x20000000) != 0 )
    {
      CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>(v54);
      v17 = (char *)qword_1C024FD58 + dword_1C024FD60 * (unsigned int)(unsigned __int16)*(_DWORD *)v14;
      v17[25] &= ~1u;
      *(_DWORD *)(v14 + 32) &= ~0x20000000u;
    }
    else if ( (a9 & 0x40000000) == 0 )
    {
      v13 &= ~0x80u;
    }
LABEL_14:
    *(_QWORD *)&v48 = *((_QWORD *)v12 + 52);
    *((_QWORD *)v12 + 52) = &v48;
    *((_QWORD *)&v48 + 1) = v14;
    CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>(v55);
    _InterlockedIncrement((volatile signed __int32 *)(v14 + 8));
    if ( v47 )
    {
      v41 = HKLtoPKL(v12, v47);
      if ( v41 )
      {
        v53[0] = *((_QWORD *)v12 + 52);
        v53[2] = 0LL;
        *((_QWORD *)v12 + 52) = v53;
        v53[1] = v41;
        CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>(v56);
        _InterlockedIncrement((volatile signed __int32 *)(v41 + 8));
        xxxSetPKLinThreads((struct tagKL *)v14, (struct tagKL *)v41);
        xxxInternalUnloadKeyboardLayout(a1, (struct tagKL *)v41, 0x80000000);
        ThreadUnlock1();
      }
    }
    if ( (v13 & 8) != 0 )
      ReorderKeyboardLayouts(a1, (struct tagKL *)v14);
    if ( qword_1C0257128 )
      qword_1C0257128(0x80000000LL, 0LL, 0LL, 0LL, 0);
    if ( (v13 & 0x80u) == 0 )
      ApiSetEditionNotifyShellLanguageHook(v12, 0LL, 0LL);
    if ( (v13 & 1) != 0 )
      xxxInternalActivateKeyboardLayout(a1, v14, v13, 0LL);
    if ( (v13 & 0x40000000) != 0 )
    {
      SetGlobalKeyboardTableInfo(v14);
      v52[1] = v14;
      v52[0] = &gspklBaseLayout;
      HMAssignmentLock(v52);
      xxxSetPKLinThreads((struct tagKL *)v14, 0LL);
    }
    if ( (v13 & 0x80000000) != 0 && !gspklBaseLayout )
      SetGlobalKeyboardTableInfo(v14);
    v18 = ThreadUnlock1();
    if ( v18 )
      return *(HKL *)(v18 + 40);
    return 0LL;
  }
LABEL_37:
  if ( qword_1C02583E8 )
    v21 = qword_1C02583E8(v11, v15);
  else
    v21 = -1073741637;
  if ( v21 < 0 || (!qword_1C02583F0 ? (v22 = 0) : (v22 = qword_1C02583F0((unsigned int)a8, v13, &v44)), v22) )
  {
    inited = ApiSetEditionInitSystemCharsetInfoForLayout(SourceString[0], &v57);
    KeyboardLayoutFile = LoadKeyboardLayoutFile(v46[0], a4, a5, v23, a6 + 290, 0, 0);
    if ( KeyboardLayoutFile )
    {
      LOBYTE(v24) = 13;
      v26 = HMAllocObject(0LL, 0LL, v24, 128LL);
      v14 = v26;
      if ( v26 )
      {
        v27 = (const WCHAR **)(v26 + 56);
        v46[1] = KeyboardLayoutFile;
        v46[0] = (void *)(v26 + 56);
        HMAssignmentLock(v46);
        v28 = *(unsigned int *)a6;
        if ( (_DWORD)v28 )
        {
          v36 = Win32AllocPoolZInit(8 * v28);
          *(_QWORD *)(v14 + 96) = v36;
          if ( v36 )
          {
            v37 = 0;
            v38 = 0;
            if ( *(_DWORD *)a6 )
            {
              do
              {
                if ( *(_QWORD *)&a6[8 * v37 + 324] )
                {
                  a6[36 * v37 + 33] = 0;
                  v39 = LoadKeyboardLayoutFile(
                          *(void **)&a6[8 * v37 + 324],
                          *(_DWORD *)&a6[8 * v37 + 328],
                          *(_DWORD *)&a6[8 * v37 + 330],
                          (const unsigned __int16 *)(2LL * v37),
                          &a6[36 * v37 + 2],
                          *(_DWORD *)&a6[36 * v37 + 34],
                          *(_DWORD *)&a6[36 * v37 + 36]);
                  if ( !v39 )
                    break;
                  v40 = *(_QWORD *)(v14 + 96);
                  v50[1] = v39;
                  v50[0] = v40 + 8LL * v38;
                  HMAssignmentLock(v50);
                  ++v38;
                }
                ++v37;
              }
              while ( v37 < *(_DWORD *)a6 );
              v13 = a9;
            }
            *(_DWORD *)(v14 + 88) = v38;
            v27 = (const WCHAR **)(v14 + 56);
          }
        }
        v29 = SourceString[0];
        *(_DWORD *)(v14 + 32) = 0;
        *(_WORD *)(v14 + 74) = 0;
        *(_QWORD *)(v14 + 40) = a8;
        *(_QWORD *)(v14 + 16) = v14;
        *(_QWORD *)(v14 + 24) = v14;
        RtlInitUnicodeString(&DestinationString, v29);
        RtlUnicodeStringToInteger(&DestinationString, 0x10u, (PULONG)(v14 + 112));
        if ( (*((_DWORD *)a6 + 194) & 1) != 0 )
          *(_DWORD *)(v14 + 32) |= 0x80000000;
        v30 = *v27;
        v31 = v14 + 48;
        SourceString[0] = (PCWSTR)(v14 + 48);
        SourceString[1] = v30;
        HMAssignmentLock(SourceString);
        v32 = *((_DWORD *)a6 + 195);
        if ( v32 )
        {
          v33 = *(_QWORD *)(v14 + 48);
        }
        else
        {
          v33 = *(_QWORD *)v31;
          v32 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v31 + 32LL) + 96LL);
        }
        *(_DWORD *)(v14 + 104) = v32;
        v34 = *((_DWORD *)a6 + 196);
        if ( !v34 )
          v34 = *(_DWORD *)(*(_QWORD *)(v33 + 32) + 100LL);
        *(_DWORD *)(v14 + 108) = v34;
        *(_DWORD *)(v14 + 116) = *((_DWORD *)a6 + 195);
        *(_DWORD *)(v14 + 120) = *((_DWORD *)a6 + 196);
        *(_DWORD *)(*(_QWORD *)(v33 + 32) + 80LL) |= (v13 >> 15) & 7;
        *(_QWORD *)(v14 + 80) = v44;
        if ( inited )
        {
          *(_WORD *)(v14 + 72) = WORD2(v57);
          *(_DWORD *)(v14 + 64) = HIDWORD(v58);
          *(_DWORD *)(v14 + 68) = v57;
        }
        else
        {
          *(_WORD *)(v14 + 72) = 0;
          *(_QWORD *)(v14 + 64) = 1LL;
        }
        if ( a1 )
          v35 = *((_QWORD *)a1 + 9);
        else
          v35 = gspklWinstaLessSessionLayouts;
        if ( v35 )
        {
          *(_QWORD *)(v14 + 16) = v35;
          *(_QWORD *)(v14 + 24) = *(_QWORD *)(v35 + 24);
          *(_QWORD *)(*(_QWORD *)(v35 + 24) + 16LL) = v14;
          *(_QWORD *)(v35 + 24) = v14;
        }
        else
        {
          LockKbdLayoutListHead(a1, (struct tagKL *)v14);
        }
        goto LABEL_14;
      }
      DestroyKF(KeyboardLayoutFile);
    }
    if ( v44 )
      Win32FreePool(v44);
  }
  return 0LL;
}
