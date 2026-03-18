/*
 * XREFs of HMFreeObject @ 0x1C004E3F0
 * Callers:
 *     HMDestroyObject @ 0x1C004E3A0 (HMDestroyObject.c)
 *     DestroyMonitor @ 0x1C0050630 (DestroyMonitor.c)
 *     ?LoadKeyboardLayoutFile@@YAPEAUtagKBDFILE@@PEAXIIPEBGPEAGKK@Z @ 0x1C0050970 (-LoadKeyboardLayoutFile@@YAPEAUtagKBDFILE@@PEAXIIPEBGPEAGKK@Z.c)
 *     DestroyKF @ 0x1C0051F60 (DestroyKF.c)
 *     DestroyKL @ 0x1C005206C (DestroyKL.c)
 *     UserCreateBaseWindowHandle @ 0x1C0166410 (UserCreateBaseWindowHandle.c)
 * Callees:
 *     UnlockObjectAssignment @ 0x1C00199F0 (UnlockObjectAssignment.c)
 *     Win32FreePool @ 0x1C0026670 (Win32FreePool.c)
 *     ?GetEtwUserHandleType@@YA?AW4EtwUserHandleType@@E@Z @ 0x1C002DB2C (-GetEtwUserHandleType@@YA-AW4EtwUserHandleType@@E@Z.c)
 *     ?LockRefactorStagingAssertOwned@@YAXAEBUtagDomLock@@@Z @ 0x1C002DC3C (-LockRefactorStagingAssertOwned@@YAXAEBUtagDomLock@@@Z.c)
 *     ?HMFreeUserOrIsolatedType@@YAXGEPEAX@Z @ 0x1C0030D58 (-HMFreeUserOrIsolatedType@@YAXGEPEAX@Z.c)
 *     HMUnlockObject @ 0x1C0038FB0 (HMUnlockObject.c)
 *     EtwTraceUserDestroyHandle @ 0x1C0050604 (EtwTraceUserDestroyHandle.c)
 *     SharedFree @ 0x1C00A6980 (SharedFree.c)
 *     ?HMDoubleFree@@YAXPEAX@Z @ 0x1C01413F0 (-HMDoubleFree@@YAXPEAX@Z.c)
 *     HMCleanupGrantedHandle @ 0x1C0141578 (HMCleanupGrantedHandle.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall HMFreeObject(char **a1)
{
  __int64 v2; // r15
  __int64 v3; // r8
  void *v4; // rdx
  _QWORD *v5; // r14
  char *v6; // rbx
  __int64 v7; // rsi
  __int64 v8; // rcx
  __int16 v9; // bp
  unsigned int v10; // eax
  __int64 v11; // rcx
  unsigned int EtwUserHandleType; // eax
  __int64 v13; // r8
  PVOID *v14; // rcx
  bool v15; // zf
  char **v16; // r8
  char *v17; // rcx
  unsigned __int8 v18; // dl
  unsigned __int8 v19; // al
  void *v20; // rcx
  __int16 v21; // ax
  __int64 v22; // rbx
  PVOID *v24; // [rsp+60h] [rbp+8h] BYREF

  v2 = 0LL;
  LockRefactorStagingAssertOwned((const struct tagDomLock *)a1);
  v3 = *(unsigned int *)a1;
  v4 = &unk_1C024AF4C;
  v5 = gpKernelHandleTable;
  v6 = (char *)qword_1C0294B68 + dword_1C0294B70 * (unsigned int)(unsigned __int16)v3;
  v7 = 3LL * (unsigned __int16)v3;
  v8 = (unsigned __int8)v6[24];
  v9 = *((_WORD *)&unk_1C024AF4C + 12 * v8);
  v10 = *((_DWORD *)a1 + 2);
  if ( v10 )
  {
    if ( (_BYTE)v8 )
    {
      if ( (_BYTE)v8 != 13 && (_BYTE)v8 != 19 && (_BYTE)v8 != 22 )
        KeBugCheckEx(0x164u, 0x1CuLL, (ULONG_PTR)a1, v10, (unsigned __int8)v6[24]);
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, &unk_1C024AF4C, v3);
    }
    if ( !v6[24] )
      HMDoubleFree((ULONG_PTR)a1);
  }
  if ( v5[v7 + 2] )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v4, v3);
  if ( (v9 & 2) != 0 )
  {
    v11 = v5[v7 + 1];
  }
  else
  {
    if ( (v9 & 1) == 0 )
    {
      v11 = 0LL;
      goto LABEL_18;
    }
    v11 = *(_QWORD *)(v5[v7 + 1] + 424LL);
  }
  if ( v11 )
    --*(_DWORD *)(v11 + 68);
LABEL_18:
  --giheCount;
  if ( v11 )
    PsGetProcessId(*(PEPROCESS *)v11);
  EtwUserHandleType = GetEtwUserHandleType(v6[24]);
  EtwTraceUserDestroyHandle(*(_QWORD *)v5[v7], EtwUserHandleType, v13);
  if ( (v6[25] & 0x20) != 0 )
  {
    HMCleanupGrantedHandle(*(_QWORD *)v5[v7]);
    v6[25] &= ~0x20u;
  }
  if ( (v9 & 0x10) != 0 )
  {
    v14 = (PVOID *)a1[3];
    a1[3] = 0LL;
    v15 = (v6[25] & 0x40) == 0;
    v24 = v14;
    if ( v15 )
    {
      v16 = (char **)a1[5];
      if ( !v16 || v16 == a1 )
      {
        RtlFreeHeap(v14[16], 0, a1);
        goto LABEL_30;
      }
      RtlFreeHeap(v14[16], 0, v16);
    }
    else
    {
      Win32FreePool(a1[5]);
    }
    HMFreeUserOrIsolatedType(v9, v6[24], a1);
LABEL_30:
    UnlockObjectAssignment((void **)&v24);
    goto LABEL_44;
  }
  if ( (v9 & 0x40) != 0 )
  {
    v17 = a1[5];
    if ( !v17 )
    {
      SharedFree(a1);
      goto LABEL_44;
    }
    SharedFree(v17);
    v18 = v6[24];
    goto LABEL_40;
  }
  v19 = v6[24];
  if ( v19 == 19 )
  {
    v20 = *(void **)(v5[v7] + 32LL);
  }
  else
  {
    if ( v19 != 22 )
    {
      if ( (v9 & 0x100) != 0 )
      {
        v24 = (PVOID *)a1[3];
        UnlockObjectAssignment((void **)&v24);
        v19 = v6[24];
      }
      v18 = v19;
LABEL_40:
      HMFreeUserOrIsolatedType(v9, v18, a1);
      goto LABEL_44;
    }
    v2 = *(_QWORD *)(v5[v7] + 16LL);
    v20 = *(void **)(v2 + 32);
  }
  ObfDereferenceObject(v20);
LABEL_44:
  v21 = (*((_WORD *)v6 + 13) + 1) & 0x7FFF;
  if ( v21 == 0x7FFF )
    v21 = 1;
  *(_OWORD *)v6 = 0LL;
  *((_OWORD *)v6 + 1) = 0LL;
  *(_OWORD *)&v5[v7] = 0LL;
  v5[v7 + 2] = 0LL;
  *((_WORD *)v6 + 13) = v21;
  v22 = (v6 - (char *)qword_1C0294B68) >> 5;
  if ( (v22 & 1) != 0 )
  {
    v5[v7] = qword_1C0294A90;
    qword_1C0294A90 = v22;
  }
  else
  {
    v5[v7] = qword_1C0294A88;
    qword_1C0294A88 = v22;
  }
  if ( !gbInDestroyHandleTableObjects && v2 )
    HMUnlockObject(v2);
  return 1LL;
}
