/*
 * XREFs of _InitializeTouchInjectionWorker @ 0x1C01DC5D0
 * Callers:
 *     ?RealizePendingRecreateTouchInjectionDevices@@YAHPEAUtagPROCESSINFO@@H@Z @ 0x1C01DB58C (-RealizePendingRecreateTouchInjectionDevices@@YAHPEAUtagPROCESSINFO@@H@Z.c)
 *     NtUserInitializeTouchInjection @ 0x1C01FD410 (NtUserInitializeTouchInjection.c)
 * Callees:
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 *     CleanupInjectedTouchProcess @ 0x1C01DBFB0 (CleanupInjectedTouchProcess.c)
 *     CreatePseudoDigitizerDevice @ 0x1C01DD964 (CreatePseudoDigitizerDevice.c)
 */

__int64 __fastcall InitializeTouchInjectionWorker(unsigned int a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // rbp
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rdi
  __int64 v11; // rcx
  __int64 PseudoDigitizerDevice; // r14
  int v13; // ecx
  _QWORD *v14; // rax
  __int64 v15; // rsi
  __int128 v16; // xmm0
  __int64 v17; // rax
  _QWORD v19[5]; // [rsp+20h] [rbp-28h] BYREF

  v3 = a1;
  v6 = 0LL;
  gullTouchInjectionMaxTimeOffset = MilliSecsToQpcCount(5000LL);
  if ( *(_QWORD *)(a3 + 896) )
    CleanupInjectedTouchProcess(a3);
  v7 = Win32AllocPoolWithQuotaZInit(104LL, 1953067861LL);
  v10 = v7;
  if ( !v7 )
    goto LABEL_15;
  PseudoDigitizerDevice = CreatePseudoDigitizerDevice((unsigned int)v3, a2, v7);
  if ( !PseudoDigitizerDevice )
    goto LABEL_15;
  if ( !(unsigned __int8)Enforced(v11) || (v13 = 16, *(int *)(a3 + 12) >= 0) )
    v13 = 0;
  *(_DWORD *)(*(_QWORD *)(PseudoDigitizerDevice + 480) + 312LL) = v13 | *(_DWORD *)(*(_QWORD *)(PseudoDigitizerDevice
                                                                                              + 480)
                                                                                  + 312LL) & 0xFFFFFFEF;
  if ( !*(_QWORD *)(a3 + 896) )
  {
    v14 = (_QWORD *)Win32AllocPoolWithQuotaZInit(16LL, 1953067861LL);
    if ( !v14 )
    {
LABEL_15:
      UserSetLastError(14LL, v8, v9);
      return 0LL;
    }
    *v14 = gpTouchInjectorProcesses;
    v14[1] = a3;
    gpTouchInjectorProcesses = (__int64)v14;
  }
  *(_QWORD *)(a3 + 896) = v10;
  v19[0] = v10 + 16;
  v19[1] = PseudoDigitizerDevice;
  HMAssignmentLock(v19);
  v15 = v3;
  v16 = *(_OWORD *)(*(_QWORD *)(PseudoDigitizerDevice + 480) + 160LL);
  *(_DWORD *)(v10 + 24) = a2;
  *(_DWORD *)(v10 + 28) = v3;
  *(_OWORD *)v10 = v16;
  v17 = Win32AllocPoolWithQuotaZInit(12 * v3, 1953067861LL);
  if ( !v17 )
    goto LABEL_15;
  *(_QWORD *)(v10 + 80) = v17;
  if ( (_DWORD)v3 )
  {
    do
    {
      v6 += 12LL;
      *(_DWORD *)(*(_QWORD *)(v10 + 80) + v6 - 4) = 0x40000;
      --v15;
    }
    while ( v15 );
  }
  return 1LL;
}
