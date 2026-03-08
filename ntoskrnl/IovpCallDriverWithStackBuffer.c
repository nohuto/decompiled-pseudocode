/*
 * XREFs of IovpCallDriverWithStackBuffer @ 0x140ABE9B4
 * Callers:
 *     IovCallDriver @ 0x140ABE1D0 (IovCallDriver.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     IopfCallDriver @ 0x1402B903C (IopfCallDriver.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     IopPerfCallDriver @ 0x14045728A (IopPerfCallDriver.c)
 *     VfBugCheckNoStackUsage @ 0x1405CD460 (VfBugCheckNoStackUsage.c)
 *     IovpValidateDeviceObject @ 0x140ABEFC4 (IovpValidateDeviceObject.c)
 *     VfAfterCallDriver @ 0x140ACA3D8 (VfAfterCallDriver.c)
 *     VfBeforeCallDriver @ 0x140ACA5AC (VfBeforeCallDriver.c)
 */

__int64 __fastcall IovpCallDriverWithStackBuffer(PVOID Object, ULONG_PTR a2, __int64 a3)
{
  bool v6; // zf
  KIRQL v7; // al
  __int64 v8; // rbx
  __int64 v9; // rax
  unsigned int v10; // eax
  unsigned int v12; // [rsp+20h] [rbp-89h] BYREF
  _QWORD v13[24]; // [rsp+28h] [rbp-81h] BYREF

  memset(v13, 0, sizeof(v13));
  v6 = *(_WORD *)a2 == 6;
  v13[20] = Object;
  v13[21] = a2;
  v13[22] = a3;
  if ( !v6 && !_bittest((const signed __int32 *)&VfRuleClasses, 0x16u) )
  {
    v7 = KeAcquireSpinLockRaiseToDpc(&VfBugcheckTmpDataLock);
    BugCheckParameter1 = 3LL;
    qword_140D70500 = a2;
    goto LABEL_7;
  }
  if ( !(unsigned __int8)IovpValidateDeviceObject(Object) && !_bittest((const signed __int32 *)&VfRuleClasses, 0x16u) )
  {
    v7 = KeAcquireSpinLockRaiseToDpc(&VfBugcheckTmpDataLock);
    BugCheckParameter1 = 4LL;
    qword_140D70500 = (ULONG_PTR)Object;
LABEL_7:
    *(_QWORD *)&VfBugcheckTmpData = 201LL;
    *(_OWORD *)&xmmword_140D70508 = 0LL;
    BYTE5(v13[19]) = v7;
    VfBugCheckNoStackUsage();
  }
  v8 = *(_QWORD *)(a2 + 184);
  if ( !*(_BYTE *)(v8 - 72) )
  {
    v9 = *(_QWORD *)(v8 - 24);
    if ( v9 )
    {
      if ( (*(_DWORD *)(v9 + 80) & 0x204000) == 0x204000 && !_bittest((const signed __int32 *)&VfRuleClasses, 0x16u) )
      {
        BYTE5(v13[19]) = KeAcquireSpinLockRaiseToDpc(&VfBugcheckTmpDataLock);
        *(&xmmword_140D70508 + 1) = *(_QWORD *)(v8 - 24);
        *(_QWORD *)&VfBugcheckTmpData = 201LL;
        BugCheckParameter1 = 15LL;
        qword_140D70500 = (ULONG_PTR)Object;
        xmmword_140D70508 = a2;
        VfBugCheckNoStackUsage();
      }
    }
  }
  VfBeforeCallDriver(Object, a2, v13);
  if ( (IopFunctionPointerMask & 2) != 0 )
    v10 = IopPerfCallDriver(Object, a2);
  else
    v10 = IopfCallDriver((__int64)Object, a2);
  v12 = v10;
  VfAfterCallDriver(v13, &v12);
  return v12;
}
