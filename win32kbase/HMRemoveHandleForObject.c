/*
 * XREFs of HMRemoveHandleForObject @ 0x1C00896E0
 * Callers:
 *     ?RIMDeviceCallback_Destroyed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C0086990 (-RIMDeviceCallback_Destroyed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C0088CB0 (-RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?OnRIMDeviceDestroyed@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z @ 0x1C0211F60 (-OnRIMDeviceDestroyed@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z.c)
 * Callees:
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x1C003A33C (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     ?IsLockedExclusive@tagDomLock@@QEBA_NXZ @ 0x1C003A360 (-IsLockedExclusive@tagDomLock@@QEBA_NXZ.c)
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1C004E3E0 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x1C004F968 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     HMUnlockObject @ 0x1C0072980 (HMUnlockObject.c)
 *     ?GetEtwUserHandleType@@YA?AW4EtwUserHandleType@@E@Z @ 0x1C00785AC (-GetEtwUserHandleType@@YA-AW4EtwUserHandleType@@E@Z.c)
 *     HMRemoveHandleForObjectWorker @ 0x1C00897F0 (HMRemoveHandleForObjectWorker.c)
 *     EtwTraceUserDestroyHandle @ 0x1C00898A4 (EtwTraceUserDestroyHandle.c)
 *     HMCleanupGrantedHandle @ 0x1C0153858 (HMCleanupGrantedHandle.c)
 */

__int64 __fastcall HMRemoveHandleForObject(int *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // edx
  char *v11; // rbx
  unsigned __int8 v12; // cl
  _QWORD **v13; // r14
  __int64 v14; // rsi
  unsigned int EtwUserHandleType; // eax
  char v16; // al
  void *v17; // rcx

  v4 = 0LL;
  if ( !gbInDestroyHandleTableObjects
    && !IS_USERCRIT_OWNED_EXCLUSIVE((__int64)a1, a2, a3, a4)
    && (!IS_USERCRIT_OWNED_AT_ALL(v7, v6, v8, v9)
     || !tagDomLock::IsLockedExclusive(&gDomainHandleManagerLock)
     && !tagDomLock::IsLockedShared(&gDomainHandleManagerLock)) )
  {
    __int2c();
  }
  v10 = *a1;
  v11 = (char *)qword_1C02D0E08 + dword_1C02D0E10 * (unsigned int)(unsigned __int16)*a1;
  v12 = v11[24];
  if ( v12 == 19 || v12 == 22 )
  {
    v13 = (_QWORD **)gpKernelHandleTable;
    v14 = 3LL * (unsigned __int16)v10;
    EtwUserHandleType = GetEtwUserHandleType(v12);
    EtwTraceUserDestroyHandle(*v13[v14], EtwUserHandleType, 0LL);
    if ( (v11[25] & 0x20) != 0 )
    {
      HMCleanupGrantedHandle(*v13[v14]);
      v11[25] &= ~0x20u;
    }
    v16 = v11[24];
    if ( v16 == 19 )
    {
      v17 = (void *)v13[v14][4];
    }
    else
    {
      if ( v16 != 22 )
        goto LABEL_9;
      v4 = v13[v14][2];
      v17 = *(void **)(v4 + 32);
    }
    ObfDereferenceObject(v17);
  }
LABEL_9:
  HMRemoveHandleForObjectWorker(v11);
  if ( !gbInDestroyHandleTableObjects && v4 )
    HMUnlockObject(v4);
  return 1LL;
}
