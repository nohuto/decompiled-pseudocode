/*
 * XREFs of HMCreateHandleForObject @ 0x1C006B090
 * Callers:
 *     ?RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C006AFB0 (-RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?OnRIMDeviceCreated@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z @ 0x1C00B81B0 (-OnRIMDeviceCreated@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z.c)
 * Callees:
 *     ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C0033100 (--0-$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 *     ?GetEtwUserHandleType@@YA?AW4EtwUserHandleType@@E@Z @ 0x1C003492C (-GetEtwUserHandleType@@YA-AW4EtwUserHandleType@@E@Z.c)
 *     ?HMGrowHandleTable@@YAHXZ @ 0x1C006A2F4 (-HMGrowHandleTable@@YAHXZ.c)
 *     RawInputManagerDeviceObjectReference @ 0x1C006B1E0 (RawInputManagerDeviceObjectReference.c)
 *     EtwTraceUserCreateHandle @ 0x1C006B21C (EtwTraceUserCreateHandle.c)
 */

__int64 __fastcall HMCreateHandleForObject(unsigned __int64 *a1, unsigned __int8 a2)
{
  __int64 v4; // rdi
  __int64 *v5; // rcx
  __int64 v6; // r8
  _QWORD *v7; // r14
  char *v8; // rdx
  bool v9; // cc
  __int64 v10; // rbp
  unsigned int EtwUserHandleType; // eax
  unsigned __int64 v13; // rbx
  __int64 v14; // [rsp+20h] [rbp-18h] BYREF

  CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>((__int64)&v14);
  v4 = 0LL;
  if ( (a2 == 19 || a2 == 22) && a1 )
  {
    while ( 1 )
    {
      if ( qword_1C024ECF0 )
      {
        v5 = &qword_1C024ECF0;
        goto LABEL_5;
      }
      if ( qword_1C024ECE8 )
        break;
      if ( !(unsigned int)HMGrowHandleTable() )
        return v4;
    }
    v5 = &qword_1C024ECE8;
LABEL_5:
    v6 = *v5;
    v7 = gpKernelHandleTable;
    v8 = (char *)qword_1C024FA38 + 32 * *v5;
    v9 = (unsigned int)*v5 <= giheLast;
    v10 = 3 * *v5;
    *v5 = *((_QWORD *)gpKernelHandleTable + 3 * *v5);
    if ( !v9 )
      giheLast = v6;
    v8[24] = a2;
    v7[v10] = a1;
    *a1 = (int)v6 | (unsigned __int64)(*(unsigned __int16 *)((char *)qword_1C024FA38
                                                           + v6 * (unsigned int)dword_1C024FA40
                                                           + 26) << 16);
    if ( ++giheCount > (unsigned int)giheCountPeak )
      giheCountPeak = giheCount;
    EtwUserHandleType = GetEtwUserHandleType(a2);
    EtwTraceUserCreateHandle(*a1, EtwUserHandleType, 0LL);
    if ( a2 == 19 )
    {
      RawInputManagerDeviceObjectReference(a1[4]);
    }
    else
    {
      v13 = a1[2];
      RawInputManagerDeviceObjectReference(*(_QWORD *)(v13 + 32));
      _InterlockedIncrement((volatile signed __int32 *)(v13 + 8));
    }
    v7[v10 + 2] = 0LL;
    return v7[v10];
  }
  return v4;
}
