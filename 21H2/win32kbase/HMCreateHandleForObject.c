/*
 * XREFs of HMCreateHandleForObject @ 0x1C004DE50
 * Callers:
 *     ?RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C004DD80 (-RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?OnRIMDeviceCreated@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z @ 0x1C01E26B0 (-OnRIMDeviceCreated@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z.c)
 * Callees:
 *     ?GetEtwUserHandleType@@YA?AW4EtwUserHandleType@@E@Z @ 0x1C002DB2C (-GetEtwUserHandleType@@YA-AW4EtwUserHandleType@@E@Z.c)
 *     RawInputManagerDeviceObjectReference @ 0x1C004DFA0 (RawInputManagerDeviceObjectReference.c)
 *     EtwTraceUserCreateHandle @ 0x1C004DFE0 (EtwTraceUserCreateHandle.c)
 *     ?HMGrowHandleTable@@YAHXZ @ 0x1C0057420 (-HMGrowHandleTable@@YAHXZ.c)
 */

__int64 __fastcall HMCreateHandleForObject(_QWORD *a1, unsigned __int8 a2)
{
  __int64 *v4; // rdx
  __int64 v5; // rcx
  _QWORD *v6; // r14
  char *v7; // r8
  bool v8; // cc
  __int64 v9; // rsi
  char *v10; // rax
  signed int v11; // edx
  signed int v12; // ecx
  unsigned int EtwUserHandleType; // eax
  __int64 v15; // rbx

  if ( a2 != 19 && a2 != 22 || !a1 )
    return 0LL;
  while ( !qword_1C0294A90 || a2 == 1 )
  {
    if ( qword_1C0294A88 )
    {
      v4 = &qword_1C0294A88;
      goto LABEL_6;
    }
    if ( !(unsigned int)HMGrowHandleTable() )
      return 0LL;
  }
  v4 = &qword_1C0294A90;
LABEL_6:
  v5 = *v4;
  v6 = gpKernelHandleTable;
  v7 = (char *)qword_1C0294B68 + 32 * *v4;
  v8 = (unsigned int)*v4 <= giheLast;
  v9 = 3 * *v4;
  *v4 = *((_QWORD *)gpKernelHandleTable + 3 * *v4);
  if ( !v8 )
    giheLast = v5;
  v7[24] = a2;
  v6[v9] = a1;
  v10 = (char *)qword_1C0294B68 + v5 * (unsigned int)dword_1C0294B70;
  v11 = v5 | (*((unsigned __int16 *)v10 + 13) << 16);
  v12 = v11 | 0x80000000;
  if ( v10[25] >= 0 )
    v12 = v11;
  *a1 = v12;
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
    v15 = a1[2];
    RawInputManagerDeviceObjectReference(*(_QWORD *)(v15 + 32));
    _InterlockedIncrement((volatile signed __int32 *)(v15 + 8));
  }
  v6[v9 + 2] = 0LL;
  return v6[v9];
}
