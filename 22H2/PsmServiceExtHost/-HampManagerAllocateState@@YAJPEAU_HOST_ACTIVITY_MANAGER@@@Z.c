/*
 * XREFs of ?HampManagerAllocateState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18004118C
 * Callers:
 *     ?RmpAllocateAllModuleState@@YAJPEAVModernResourceEnforcer@@PEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180041288 (-RmpAllocateAllModuleState@@YAJPEAVModernResourceEnforcer@@PEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     ?HampWakeManagerAllocateState@@YAJPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z @ 0x180041228 (-HampWakeManagerAllocateState@@YAJPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z.c)
 */

__int64 __fastcall HampManagerAllocateState(struct _HOST_ACTIVITY_MANAGER *a1)
{
  char *v1; // rbx
  __int64 result; // rax
  _QWORD v4[5]; // [rsp+20h] [rbp-28h] BYREF

  v1 = (char *)a1 + 336;
  v4[0] = 1LL;
  v4[1] = &HampActPdcActivationCallback;
  v4[2] = 0LL;
  result = Pdcv2ActivationClientRegister(100LL, v4, (char *)a1 + 352);
  if ( (int)result >= 0 )
  {
    result = TpAllocWork(v1 + 64, HampPdcWorker, v1, 0LL);
    if ( (int)result >= 0 )
      result = 0LL;
    if ( (int)result >= 0 )
    {
      result = HampWakeManagerAllocateState((struct _HOST_ACTIVITY_MANAGER *)((char *)a1 + 432));
      if ( (int)result >= 0 )
        return 0LL;
    }
  }
  return result;
}
