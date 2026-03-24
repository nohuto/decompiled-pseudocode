/*
 * XREFs of IovCallDriver @ 0x1409C4CC4
 * Callers:
 *     IofCallDriver @ 0x1402D2170 (IofCallDriver.c)
 *     IofCallDriverSpecifyReturn @ 0x140370BC0 (IofCallDriverSpecifyReturn.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x140252644 (ExFreeToNPagedLookasideList.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402D89E0 (KeAcquireSpinLockRaiseToDpc.c)
 *     IopfCallDriver @ 0x140370BE4 (IopfCallDriver.c)
 *     IopPerfCallDriver @ 0x140507C40 (IopPerfCallDriver.c)
 *     VfBugCheckNoStackUsage @ 0x1405A18E8 (VfBugCheckNoStackUsage.c)
 *     IovpCallDriverNoIrpTracking @ 0x1409C5494 (IovpCallDriverNoIrpTracking.c)
 *     IovpCallDriverWithStackBuffer @ 0x1409C5504 (IovpCallDriverWithStackBuffer.c)
 *     IovpValidateDeviceObject @ 0x1409C5B34 (IovpValidateDeviceObject.c)
 *     VfAfterCallDriver @ 0x1409D0E94 (VfAfterCallDriver.c)
 *     VfBeforeCallDriver @ 0x1409D1088 (VfBeforeCallDriver.c)
 *     VfIrpAllocateCallDriverData @ 0x1409D14C0 (VfIrpAllocateCallDriverData.c)
 */

__int64 __fastcall IovCallDriver(PADAPTER_OBJECT DmaAdapter, ULONG_PTR a2, __int64 a3)
{
  unsigned __int8 CurrentIrql; // di
  char *v8; // rdi
  __int64 v9; // rbp
  __int64 v10; // rax
  unsigned int *v11; // r14
  unsigned int v12; // ebp
  unsigned int v13; // eax
  unsigned int v14; // ebx
  PVOID Entry; // [rsp+58h] [rbp+20h] BYREF

  Entry = 0LL;
  if ( IovpEnabledInThePast || (MmVerifierData & 0x20) != 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql > 2u && (MmVerifierData & 0x400000) == 0 )
    {
      KeAcquireSpinLockRaiseToDpc(&VfBugcheckTmpDataLock);
      qword_140D4A038 = CurrentIrql;
      *(_OWORD *)&xmmword_140D4A040 = 0LL;
      *(_QWORD *)&VfBugcheckTmpData = 201LL;
      BugCheckParameter1 = 16LL;
      VfBugCheckNoStackUsage();
    }
    if ( (unsigned int)VfIrpAllocateCallDriverData(a2, &Entry) )
    {
      v8 = (char *)Entry;
      if ( Entry )
      {
        *((_QWORD *)Entry + 20) = DmaAdapter;
        *((_QWORD *)v8 + 21) = a2;
        *((_QWORD *)v8 + 22) = a3;
        if ( **((_WORD **)v8 + 21) != 6 && (MmVerifierData & 0x400000) == 0 )
        {
          v8[157] = KeAcquireSpinLockRaiseToDpc(&VfBugcheckTmpDataLock);
          qword_140D4A038 = *((_QWORD *)v8 + 21);
          *(_QWORD *)&VfBugcheckTmpData = 201LL;
          BugCheckParameter1 = 3LL;
          *(_OWORD *)&xmmword_140D4A040 = 0LL;
          VfBugCheckNoStackUsage();
        }
        if ( !(unsigned __int8)IovpValidateDeviceObject(DmaAdapter) && (MmVerifierData & 0x400000) == 0 )
        {
          v8[157] = KeAcquireSpinLockRaiseToDpc(&VfBugcheckTmpDataLock);
          qword_140D4A038 = *((_QWORD *)v8 + 20);
          *(_QWORD *)&VfBugcheckTmpData = 201LL;
          BugCheckParameter1 = 4LL;
          *(_OWORD *)&xmmword_140D4A040 = 0LL;
          VfBugCheckNoStackUsage();
        }
        v9 = *(_QWORD *)(a2 + 184);
        if ( !*(_BYTE *)(v9 - 72) )
        {
          v10 = *(_QWORD *)(v9 - 24);
          if ( v10 )
          {
            if ( (*(_DWORD *)(v10 + 80) & 0x204000) == 0x204000 && (MmVerifierData & 0x400000) == 0 )
            {
              v8[157] = KeAcquireSpinLockRaiseToDpc(&VfBugcheckTmpDataLock);
              qword_140D4A038 = *((_QWORD *)v8 + 20);
              xmmword_140D4A040 = *((_QWORD *)v8 + 21);
              *(&xmmword_140D4A040 + 1) = *(_QWORD *)(v9 - 24);
              *(_QWORD *)&VfBugcheckTmpData = 201LL;
              BugCheckParameter1 = 15LL;
              VfBugCheckNoStackUsage();
            }
          }
        }
        v11 = (unsigned int *)(v8 + 184);
        v12 = VfBeforeCallDriver(DmaAdapter, a2, v8);
        if ( (IopFunctionPointerMask & 2) != 0 )
          v13 = IopPerfCallDriver(DmaAdapter, a2);
        else
          v13 = IopfCallDriver((__int64)DmaAdapter, a2);
        *v11 = v13;
        VfAfterCallDriver(v8, v8 + 184, v12);
        v14 = *v11;
        ExFreeToNPagedLookasideList(&ViIrpCallDriverDataList, v8);
        return v14;
      }
      else
      {
        return IovpCallDriverNoIrpTracking(DmaAdapter);
      }
    }
    else
    {
      return IovpCallDriverWithStackBuffer(DmaAdapter);
    }
  }
  else if ( (IopFunctionPointerMask & 2) != 0 )
  {
    return IopPerfCallDriver(DmaAdapter, a2);
  }
  else
  {
    return IopfCallDriver((__int64)DmaAdapter, a2);
  }
}
