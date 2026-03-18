/*
 * XREFs of HMRemoveHandleForObject @ 0x1C0050440
 * Callers:
 *     ?RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C004DD80 (-RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?RIMDeviceCallback_Destroyed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C004E1A0 (-RIMDeviceCallback_Destroyed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?OnRIMDeviceDestroyed@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z @ 0x1C01E2770 (-OnRIMDeviceDestroyed@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z.c)
 * Callees:
 *     UserIsUserCritSecInExclusive @ 0x1C002A1D0 (UserIsUserCritSecInExclusive.c)
 *     IS_USERCRIT_OWNED_SHARED @ 0x1C002C87C (IS_USERCRIT_OWNED_SHARED.c)
 *     ?GetEtwUserHandleType@@YA?AW4EtwUserHandleType@@E@Z @ 0x1C002DB2C (-GetEtwUserHandleType@@YA-AW4EtwUserHandleType@@E@Z.c)
 *     HMUnlockObject @ 0x1C0038FB0 (HMUnlockObject.c)
 *     HMRemoveHandleForObjectWorker @ 0x1C0050550 (HMRemoveHandleForObjectWorker.c)
 *     EtwTraceUserDestroyHandle @ 0x1C0050604 (EtwTraceUserDestroyHandle.c)
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x1C006D24C (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     ?IsLockedExclusive@tagDomLock@@QEBA_NXZ @ 0x1C006D270 (-IsLockedExclusive@tagDomLock@@QEBA_NXZ.c)
 *     HMCleanupGrantedHandle @ 0x1C0141578 (HMCleanupGrantedHandle.c)
 */

__int64 __fastcall HMRemoveHandleForObject(int *a1)
{
  __int64 v1; // rdi
  int v3; // edx
  char *v4; // rbx
  unsigned __int8 v5; // cl
  _QWORD **v6; // r14
  __int64 v7; // rsi
  unsigned int EtwUserHandleType; // eax
  char v9; // al
  void *v10; // rcx

  v1 = 0LL;
  if ( !gbInDestroyHandleTableObjects
    && !UserIsUserCritSecInExclusive()
    && (!IS_USERCRIT_OWNED_SHARED()
     || !tagDomLock::IsLockedExclusive((tagDomLock *)&gDomainHandleManagerLock)
     && !tagDomLock::IsLockedShared((tagDomLock *)&gDomainHandleManagerLock)) )
  {
    __int2c();
  }
  v3 = *a1;
  v4 = (char *)qword_1C0294B68 + dword_1C0294B70 * (unsigned int)(unsigned __int16)*a1;
  v5 = v4[24];
  if ( v5 == 19 || v5 == 22 )
  {
    v6 = (_QWORD **)gpKernelHandleTable;
    v7 = 3LL * (unsigned __int16)v3;
    EtwUserHandleType = GetEtwUserHandleType(v5);
    EtwTraceUserDestroyHandle(*v6[v7], EtwUserHandleType, 0LL);
    if ( (v4[25] & 0x20) != 0 )
    {
      HMCleanupGrantedHandle(*v6[v7]);
      v4[25] &= ~0x20u;
    }
    v9 = v4[24];
    if ( v9 == 19 )
    {
      v10 = (void *)v6[v7][4];
    }
    else
    {
      if ( v9 != 22 )
        goto LABEL_9;
      v1 = v6[v7][2];
      v10 = *(void **)(v1 + 32);
    }
    ObfDereferenceObject(v10);
  }
LABEL_9:
  HMRemoveHandleForObjectWorker(v4);
  if ( !gbInDestroyHandleTableObjects && v1 )
    HMUnlockObject(v1);
  return 1LL;
}
