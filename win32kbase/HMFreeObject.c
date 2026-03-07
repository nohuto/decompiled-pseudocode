__int64 __fastcall HMFreeObject(unsigned int *a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // r15
  __int64 v6; // r13
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD *v12; // r14
  char *v13; // rbx
  __int64 v14; // rsi
  __int64 v15; // rdx
  unsigned __int16 v16; // bp
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  char EtwUserHandleType; // r12
  void **v22; // rcx
  char v23; // al
  __int16 v24; // ax
  __int64 v25; // rbx
  PVOID *v27; // r15
  unsigned int *v28; // r8
  __int64 v29; // rcx
  PVOID *v30; // rcx
  void *v31; // r8
  void *v32; // rdx
  __int64 v33; // r8
  _DWORD *v34; // rax
  int v35; // r8d
  void *v36; // [rsp+70h] [rbp+8h] BYREF

  v4 = 0;
  v6 = 0LL;
  if ( !gbInDestroyHandleTableObjects )
  {
    v7 = SGDGetUserSessionState(a1, a2, a3, a4);
    if ( ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v7 + 8)) != 1
      && (!IS_USERCRIT_OWNED_AT_ALL(v9, v8, v10, v11) || !tagDomLock::IsLockedExclusive(&gDomainHandleManagerLock)) )
    {
      __int2c();
    }
  }
  v12 = gpKernelHandleTable;
  v13 = (char *)qword_1C02D0E08 + dword_1C02D0E10 * (unsigned int)(unsigned __int16)*a1;
  v14 = 3LL * (unsigned __int16)*a1;
  v15 = (unsigned __int8)v13[24];
  v16 = *((_WORD *)&unk_1C028159C + 12 * v15);
  if ( a1[2] )
  {
    if ( (unsigned int)v15 > 0xC )
    {
      if ( (unsigned int)v15 > 0x12 )
      {
        if ( (_DWORD)v15 == 19 )
        {
          v33 = 1863LL;
        }
        else
        {
          if ( (_DWORD)v15 != 22 )
            goto LABEL_57;
          v33 = 1872LL;
        }
      }
      else
      {
        if ( (_DWORD)v15 != 13 )
          goto LABEL_57;
        v33 = 1854LL;
      }
      LODWORD(v36) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, v33);
    }
    else if ( (unsigned int)v15 > 5 || (_BYTE)v15 )
    {
LABEL_57:
      KeBugCheckEx(0x164u, 0x1CuLL, (ULONG_PTR)a1, a1[2], (unsigned __int8)v13[24]);
    }
    if ( !v13[24] )
      KeBugCheckEx(0x164u, 0x1BuLL, (ULONG_PTR)a1, 0LL, 0LL);
  }
  if ( v12[v14 + 2] )
  {
    LODWORD(v36) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1915LL);
  }
  if ( (v16 & 2) != 0 )
  {
    v17 = v12[v14 + 1];
  }
  else
  {
    if ( (v16 & 1) == 0 )
    {
      v17 = 0LL;
      goto LABEL_10;
    }
    v17 = *(_QWORD *)(v12[v14 + 1] + 424LL);
  }
  if ( v17 )
    --*(_DWORD *)(v17 + 68);
LABEL_10:
  --giheCount;
  if ( v17 )
    v4 = (unsigned __int8)PsGetProcessId(*(PEPROCESS *)v17) & 0xFC;
  LOBYTE(v17) = v13[24];
  EtwUserHandleType = GetEtwUserHandleType(v17);
  v22 = (void **)v12[v14];
  v36 = *v22;
  if ( (Microsoft_Windows_Win32kEnableBits & 0x20000000000LL) != 0 )
  {
    v34 = (_DWORD *)SGDGetUserSessionState(v22, v18, v19, v20);
    McTemplateK0pqqq_EtwWriteTransfer(
      *v34,
      (unsigned int)&UserDestroyHandle,
      v35,
      (_DWORD)v36,
      EtwUserHandleType,
      *v34,
      v4);
  }
  if ( (v13[25] & 0x20) != 0 )
  {
    HMCleanupGrantedHandle(*(_QWORD *)v12[v14]);
    v13[25] &= ~0x20u;
  }
  if ( (v16 & 0x10) == 0 )
  {
    if ( (v16 & 0x40) != 0 )
    {
      v31 = (void *)*((_QWORD *)a1 + 5);
      if ( v31 )
      {
        RtlFreeHeap(gpvSharedAlloc, 0, v31);
        HMFreeUserOrIsolatedType(v16, v13[24], a1);
      }
      else
      {
        RtlFreeHeap(gpvSharedAlloc, 0, a1);
      }
      goto LABEL_24;
    }
    v23 = v13[24];
    if ( v23 == 19 )
    {
      v30 = *(PVOID **)(v12[v14] + 32LL);
    }
    else
    {
      if ( v23 != 22 )
      {
        if ( (v16 & 0x100) != 0 )
        {
          v36 = (void *)*((_QWORD *)a1 + 3);
          UnlockObjectAssignment(&v36);
        }
        if ( (v16 & 0x200) != 0 )
        {
          LOBYTE(v22) = v13[24];
          HMFreeIsolatedType((__int64)v22, a1);
        }
        else
        {
          NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, a1);
        }
        goto LABEL_24;
      }
      v6 = *(_QWORD *)(v12[v14] + 16LL);
      v30 = *(PVOID **)(v6 + 32);
    }
LABEL_41:
    ObfDereferenceObject(v30);
    goto LABEL_24;
  }
  v27 = (PVOID *)*((_QWORD *)a1 + 3);
  *((_QWORD *)a1 + 3) = 0LL;
  if ( (v13[25] & 0x40) != 0 )
  {
    v32 = (void *)*((_QWORD *)a1 + 5);
    if ( v32 )
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v32);
    HMFreeUserOrIsolatedType(v16, v13[24], a1);
  }
  else
  {
    v28 = (unsigned int *)*((_QWORD *)a1 + 5);
    if ( !v28 || v28 == a1 )
    {
      RtlFreeHeap(v27[16], 0, a1);
    }
    else
    {
      RtlFreeHeap(v27[16], 0, v28);
      if ( (v16 & 0x200) != 0 )
      {
        LOBYTE(v29) = v13[24];
        HMFreeIsolatedType(v29, a1);
      }
      else
      {
        NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, a1);
      }
    }
  }
  if ( v27 )
  {
    v30 = v27;
    goto LABEL_41;
  }
LABEL_24:
  v24 = (*((_WORD *)v13 + 13) + 1) & 0x7FFF;
  if ( v24 == 0x7FFF )
    v24 = 1;
  *(_OWORD *)v13 = 0LL;
  *((_OWORD *)v13 + 1) = 0LL;
  *(_OWORD *)&v12[v14] = 0LL;
  v12[v14 + 2] = 0LL;
  *((_WORD *)v13 + 13) = v24;
  v25 = (v13 - (char *)qword_1C02D0E08) >> 5;
  if ( (v25 & 1) != 0 )
  {
    v12[v14] = qword_1C02D0D50;
    qword_1C02D0D50 = v25;
  }
  else
  {
    v12[v14] = qword_1C02D0D48;
    qword_1C02D0D48 = v25;
  }
  if ( !gbInDestroyHandleTableObjects && v6 )
    HMUnlockObject(v6);
  return 1LL;
}
