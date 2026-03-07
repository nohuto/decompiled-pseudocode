__int64 __fastcall IovCallDriver(PVOID Object, ULONG_PTR a2, __int64 a3)
{
  unsigned __int8 CurrentIrql; // di
  ULONG_PTR v8; // rax
  _QWORD *v9; // rdi
  __int64 v10; // rbp
  __int64 v11; // rax
  int v12; // eax
  unsigned int v13; // ebx
  PVOID Entry; // [rsp+58h] [rbp+20h] BYREF

  Entry = 0LL;
  if ( !IovpEnabledInThePast && (MmVerifierData & 0x20) == 0
    || ViVerifyAllDrivers != 1 && (*(_DWORD *)(a2 + 16) & 0x40000000) == 0 )
  {
    if ( (IopFunctionPointerMask & 2) != 0 )
      return IopPerfCallDriver(Object, a2);
    else
      return IopfCallDriver((__int64)Object, a2);
  }
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > 2u && !_bittest((const signed __int32 *)&VfRuleClasses, 0x16u) )
  {
    KeAcquireSpinLockRaiseToDpc(&VfBugcheckTmpDataLock);
    v8 = CurrentIrql;
    BugCheckParameter1 = 16LL;
    goto LABEL_21;
  }
  if ( !(unsigned int)VfIrpAllocateCallDriverData(a2, &Entry) )
    return IovpCallDriverWithStackBuffer(Object);
  v9 = Entry;
  if ( !Entry )
    return IovpCallDriverNoIrpTracking(Object);
  *((_QWORD *)Entry + 20) = Object;
  v9[21] = a2;
  v9[22] = a3;
  if ( *(_WORD *)v9[21] != 6 && !_bittest((const signed __int32 *)&VfRuleClasses, 0x16u) )
  {
    *((_BYTE *)v9 + 157) = KeAcquireSpinLockRaiseToDpc(&VfBugcheckTmpDataLock);
    v8 = v9[21];
    BugCheckParameter1 = 3LL;
    goto LABEL_21;
  }
  if ( !(unsigned __int8)IovpValidateDeviceObject(Object) && !_bittest((const signed __int32 *)&VfRuleClasses, 0x16u) )
  {
    *((_BYTE *)v9 + 157) = KeAcquireSpinLockRaiseToDpc(&VfBugcheckTmpDataLock);
    v8 = v9[20];
    BugCheckParameter1 = 4LL;
LABEL_21:
    *(_QWORD *)&VfBugcheckTmpData = 201LL;
    *(_OWORD *)&xmmword_140D70508 = 0LL;
    qword_140D70500 = v8;
    VfBugCheckNoStackUsage();
  }
  v10 = *(_QWORD *)(a2 + 184);
  if ( !*(_BYTE *)(v10 - 72) )
  {
    v11 = *(_QWORD *)(v10 - 24);
    if ( v11 )
    {
      if ( (*(_DWORD *)(v11 + 80) & 0x204000) == 0x204000 && !_bittest((const signed __int32 *)&VfRuleClasses, 0x16u) )
      {
        *((_BYTE *)v9 + 157) = KeAcquireSpinLockRaiseToDpc(&VfBugcheckTmpDataLock);
        qword_140D70500 = v9[20];
        xmmword_140D70508 = v9[21];
        *(&xmmword_140D70508 + 1) = *(_QWORD *)(v10 - 24);
        *(_QWORD *)&VfBugcheckTmpData = 201LL;
        BugCheckParameter1 = 15LL;
        VfBugCheckNoStackUsage();
      }
    }
  }
  VfBeforeCallDriver(Object, a2, v9);
  if ( (IopFunctionPointerMask & 2) != 0 )
    v12 = IopPerfCallDriver(Object, a2);
  else
    v12 = IopfCallDriver((__int64)Object, a2);
  *((_DWORD *)v9 + 46) = v12;
  VfAfterCallDriver(v9, v9 + 23);
  v13 = *((_DWORD *)v9 + 46);
  ExFreeToNPagedLookasideList(&ViIrpCallDriverDataList, v9);
  return v13;
}
