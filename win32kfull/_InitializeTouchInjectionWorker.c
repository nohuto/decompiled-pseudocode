__int64 __fastcall InitializeTouchInjectionWorker(unsigned int a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // rbp
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rcx
  __int64 PseudoDigitizerDevice; // r14
  int v11; // ecx
  _QWORD *v12; // rax
  __int64 v13; // rsi
  __int128 v14; // xmm0
  __int64 v15; // rax
  _QWORD v17[5]; // [rsp+20h] [rbp-28h] BYREF

  v3 = a1;
  v6 = 0LL;
  gullTouchInjectionMaxTimeOffset = MilliSecsToQpcCount(5000LL);
  if ( *(_QWORD *)(a3 + 880) )
    CleanupInjectedTouchProcess(a3);
  v7 = Win32AllocPoolWithQuotaZInit(104LL, 1953067861LL);
  v8 = v7;
  if ( !v7 )
    goto LABEL_15;
  PseudoDigitizerDevice = CreatePseudoDigitizerDevice((unsigned int)v3, a2, v7);
  if ( !PseudoDigitizerDevice )
    goto LABEL_15;
  if ( !(unsigned __int8)Enforced(v9) || (v11 = 16, *(int *)(a3 + 12) >= 0) )
    v11 = 0;
  *(_DWORD *)(*(_QWORD *)(PseudoDigitizerDevice + 472) + 360LL) = v11 | *(_DWORD *)(*(_QWORD *)(PseudoDigitizerDevice
                                                                                              + 472)
                                                                                  + 360LL) & 0xFFFFFFEF;
  if ( !*(_QWORD *)(a3 + 880) )
  {
    v12 = (_QWORD *)Win32AllocPoolWithQuotaZInit(16LL, 1953067861LL);
    if ( !v12 )
    {
LABEL_15:
      UserSetLastError(14);
      return 0LL;
    }
    *v12 = gpTouchInjectorProcesses;
    v12[1] = a3;
    gpTouchInjectorProcesses = (__int64)v12;
  }
  *(_QWORD *)(a3 + 880) = v8;
  v17[0] = v8 + 16;
  v17[1] = PseudoDigitizerDevice;
  HMAssignmentLock(v17, 0LL);
  v13 = v3;
  v14 = *(_OWORD *)(*(_QWORD *)(PseudoDigitizerDevice + 472) + 160LL);
  *(_DWORD *)(v8 + 24) = a2;
  *(_DWORD *)(v8 + 28) = v3;
  *(_OWORD *)v8 = v14;
  v15 = Win32AllocPoolWithQuotaZInit(12 * v3, 1953067861LL);
  if ( !v15 )
    goto LABEL_15;
  *(_QWORD *)(v8 + 80) = v15;
  if ( (_DWORD)v3 )
  {
    do
    {
      v6 += 12LL;
      *(_DWORD *)(v6 + *(_QWORD *)(v8 + 80) - 4) = 0x40000;
      --v13;
    }
    while ( v13 );
  }
  return 1LL;
}
