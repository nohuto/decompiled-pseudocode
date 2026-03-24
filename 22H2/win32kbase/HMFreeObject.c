/*
 * XREFs of HMFreeObject @ 0x1C0009390
 * Callers:
 *     DestroyKL @ 0x1C0008728 (DestroyKL.c)
 *     DestroyKF @ 0x1C00087B8 (DestroyKF.c)
 *     DestroyMonitor @ 0x1C0008F50 (DestroyMonitor.c)
 *     HMDestroyObject @ 0x1C0009350 (HMDestroyObject.c)
 *     ?LoadKeyboardLayoutFile@@YAPEAUtagKBDFILE@@PEAXIIPEBGPEAGKK@Z @ 0x1C006A210 (-LoadKeyboardLayoutFile@@YAPEAUtagKBDFILE@@PEAXIIPEBGPEAGKK@Z.c)
 * Callees:
 *     EtwTraceUserDestroyHandle @ 0x1C000998C (EtwTraceUserDestroyHandle.c)
 *     ?HMFreeUserOrIsolatedType@@YAXGEPEAX@Z @ 0x1C002C1F4 (-HMFreeUserOrIsolatedType@@YAXGEPEAX@Z.c)
 *     Win32FreePool @ 0x1C002C230 (Win32FreePool.c)
 *     ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C0033100 (--0-$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 *     ?GetEtwUserHandleType@@YA?AW4EtwUserHandleType@@E@Z @ 0x1C003492C (-GetEtwUserHandleType@@YA-AW4EtwUserHandleType@@E@Z.c)
 *     HMUnlockObjectWorker @ 0x1C0046BE0 (HMUnlockObjectWorker.c)
 *     UnlockObjectAssignment @ 0x1C0047380 (UnlockObjectAssignment.c)
 *     SharedFree @ 0x1C0093DD0 (SharedFree.c)
 *     Feature_Servicing_win32k_timers_bugcheck__private_IsEnabledDeviceUsage @ 0x1C00C71A8 (Feature_Servicing_win32k_timers_bugcheck__private_IsEnabledDeviceUsage.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?HMDoubleFree@@YAXPEAX@Z @ 0x1C0113CA0 (-HMDoubleFree@@YAXPEAX@Z.c)
 *     HMCleanupGrantedHandle @ 0x1C0113F88 (HMCleanupGrantedHandle.c)
 */

__int64 __fastcall HMFreeObject(_DWORD *a1)
{
  __int64 v2; // r14
  __int64 v3; // r8
  void *v4; // rdx
  char *v5; // rdi
  char *BugCheckParameter4; // rsi
  __int64 v7; // rcx
  unsigned __int16 v8; // bp
  unsigned int v9; // eax
  __int64 v10; // r8
  unsigned int EtwUserHandleType; // eax
  __int64 v12; // r8
  __int64 v13; // rcx
  unsigned __int64 v14; // r8
  __int64 v15; // rcx
  bool v16; // zf
  _DWORD *v17; // r8
  void *v18; // rcx
  unsigned __int8 v19; // dl
  unsigned __int8 v20; // al
  void *v21; // rcx
  __int16 v22; // cx
  __int16 v23; // ax
  __int64 v24; // rdi
  __int64 v26; // [rsp+30h] [rbp-38h] BYREF
  __int64 v27; // [rsp+70h] [rbp+8h] BYREF

  v2 = 0LL;
  CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>(&v26);
  v3 = (unsigned int)*a1;
  v4 = &unk_1C020946C;
  v5 = (char *)qword_1C024FA38 + dword_1C024FA40 * (unsigned int)(unsigned __int16)v3;
  BugCheckParameter4 = (char *)gpKernelHandleTable + 24 * (unsigned __int16)v3;
  v7 = (unsigned __int8)v5[24];
  v8 = *((_WORD *)&unk_1C020946C + 12 * v7);
  v9 = a1[2];
  if ( v9 )
  {
    if ( (_BYTE)v7 )
    {
      switch ( (_BYTE)v7 )
      {
        case 0xD:
          v10 = 1859LL;
          break;
        case 0x13:
          v10 = 1868LL;
          break;
        case 0x16:
          v10 = 1877LL;
          break;
        default:
          KeBugCheckEx(0x164u, 0x1CuLL, (ULONG_PTR)a1, v9, (unsigned __int8)v5[24]);
      }
      LODWORD(v27) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, v10);
    }
    LOBYTE(v7) = v5[24];
    if ( !(_BYTE)v7 )
      HMDoubleFree((ULONG_PTR)a1);
  }
  if ( *((_QWORD *)BugCheckParameter4 + 2) )
  {
    LODWORD(v27) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1920LL);
    LOBYTE(v7) = v5[24];
  }
  if ( (_BYTE)v7 == 16 )
  {
    if ( (a1[12] & 0x1000) == 0 )
    {
      LODWORD(v27) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 1924LL);
    }
    if ( *((_QWORD *)a1 + 9) != *((_QWORD *)a1 + 10) )
    {
      LODWORD(v27) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 1925LL);
    }
    if ( *((_QWORD *)a1 + 7) != *((_QWORD *)a1 + 8) )
    {
      LODWORD(v27) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 1926LL);
    }
    if ( *((_QWORD *)a1 + 14) != *((_QWORD *)a1 + 15) )
    {
      LODWORD(v27) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 1927LL);
    }
    if ( (unsigned int)Feature_Servicing_win32k_timers_bugcheck__private_IsEnabledDeviceUsage()
      && ((a1[12] & 0x1000) == 0
       || *((_QWORD *)a1 + 9) != *((_QWORD *)a1 + 10)
       || *((_QWORD *)a1 + 7) != *((_QWORD *)a1 + 8)
       || *((_QWORD *)a1 + 14) != *((_QWORD *)a1 + 15)) )
    {
      KeBugCheckEx(0x164u, 0x1FuLL, (ULONG_PTR)a1, (ULONG_PTR)v5, (ULONG_PTR)BugCheckParameter4);
    }
  }
  if ( gbInDestroyHandleTableObjects )
  {
    --giheCount;
    LOBYTE(v7) = v5[24];
    EtwUserHandleType = GetEtwUserHandleType(v7, v4, v3);
    v12 = 0LL;
  }
  else
  {
    if ( (v8 & 2) != 0 )
    {
      v13 = *((_QWORD *)BugCheckParameter4 + 1);
    }
    else if ( (v8 & 1) != 0 )
    {
      v13 = *(_QWORD *)(*((_QWORD *)BugCheckParameter4 + 1) + 424LL);
    }
    else
    {
      v13 = 0LL;
    }
    if ( v13 )
      --*(_DWORD *)(v13 + 68);
    --giheCount;
    if ( v13 )
      v14 = (unsigned __int64)PsGetProcessId(*(PEPROCESS *)v13) & 0xFFFFFFFC;
    else
      v14 = 0LL;
    LOBYTE(v13) = v5[24];
    EtwUserHandleType = GetEtwUserHandleType(v13, v4, v14);
  }
  EtwTraceUserDestroyHandle(**(_QWORD **)BugCheckParameter4, EtwUserHandleType, v12);
  if ( (v5[25] & 0x20) != 0 )
  {
    HMCleanupGrantedHandle(**(_QWORD **)BugCheckParameter4);
    v5[25] &= ~0x20u;
  }
  if ( (v8 & 0x10) != 0 )
  {
    v15 = *((_QWORD *)a1 + 3);
    *((_QWORD *)a1 + 3) = 0LL;
    v16 = (v5[25] & 0x40) == 0;
    v27 = v15;
    if ( v16 )
    {
      v17 = (_DWORD *)*((_QWORD *)a1 + 5);
      if ( !v17 || v17 == a1 )
      {
        RtlFreeHeap(*(PVOID *)(v15 + 128), 0, a1);
        goto LABEL_52;
      }
      RtlFreeHeap(*(PVOID *)(v15 + 128), 0, v17);
    }
    else
    {
      Win32FreePool(*((_QWORD *)a1 + 5));
    }
    HMFreeUserOrIsolatedType(v8, v5[24], a1);
LABEL_52:
    UnlockObjectAssignment(&v27);
    goto LABEL_66;
  }
  if ( (v8 & 0x40) != 0 )
  {
    v18 = (void *)*((_QWORD *)a1 + 5);
    if ( !v18 )
    {
      SharedFree(a1);
      goto LABEL_66;
    }
    SharedFree(v18);
    v19 = v5[24];
    goto LABEL_62;
  }
  v20 = v5[24];
  if ( v20 == 19 )
  {
    v21 = *(void **)(*(_QWORD *)BugCheckParameter4 + 32LL);
  }
  else
  {
    if ( v20 != 22 )
    {
      if ( (v8 & 0x100) != 0 )
      {
        v27 = *((_QWORD *)a1 + 3);
        UnlockObjectAssignment(&v27);
        v20 = v5[24];
      }
      v19 = v20;
LABEL_62:
      HMFreeUserOrIsolatedType(v8, v19, a1);
      goto LABEL_66;
    }
    v2 = *(_QWORD *)(*(_QWORD *)BugCheckParameter4 + 16LL);
    v21 = *(void **)(v2 + 32);
  }
  ObfDereferenceObject(v21);
LABEL_66:
  v22 = *((_WORD *)v5 + 13) + 1;
  *(_OWORD *)v5 = 0LL;
  *((_OWORD *)v5 + 1) = 0LL;
  *(_OWORD *)BugCheckParameter4 = 0LL;
  *((_QWORD *)BugCheckParameter4 + 2) = 0LL;
  v23 = 1;
  if ( v22 != -1 )
    v23 = v22;
  *((_WORD *)v5 + 13) = v23;
  v24 = (v5 - (char *)qword_1C024FA38) >> 5;
  if ( (v24 & 1) != 0 )
  {
    *(_QWORD *)BugCheckParameter4 = qword_1C024ECF0;
    qword_1C024ECF0 = v24;
  }
  else
  {
    *(_QWORD *)BugCheckParameter4 = qword_1C024ECE8;
    qword_1C024ECE8 = v24;
  }
  if ( !gbInDestroyHandleTableObjects && v2 )
    HMUnlockObjectWorker(v2);
  return 1LL;
}
