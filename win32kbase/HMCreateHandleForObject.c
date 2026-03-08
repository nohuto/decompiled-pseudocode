/*
 * XREFs of HMCreateHandleForObject @ 0x1C0088D60
 * Callers:
 *     ?RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C0088CB0 (-RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?OnRIMDeviceCreated@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z @ 0x1C0211E80 (-OnRIMDeviceCreated@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z.c)
 * Callees:
 *     ?GetEtwUserHandleType@@YA?AW4EtwUserHandleType@@E@Z @ 0x1C00785AC (-GetEtwUserHandleType@@YA-AW4EtwUserHandleType@@E@Z.c)
 *     RawInputManagerDeviceObjectReference @ 0x1C0088EF0 (RawInputManagerDeviceObjectReference.c)
 *     EtwTraceUserCreateHandle @ 0x1C0088F2C (EtwTraceUserCreateHandle.c)
 *     ?HMGrowHandleTable@@YAHXZ @ 0x1C00ADCB4 (-HMGrowHandleTable@@YAHXZ.c)
 */

__int64 __fastcall HMCreateHandleForObject(_QWORD *a1, unsigned __int8 a2)
{
  __int64 v4; // rcx
  __int64 *v5; // r8
  _QWORD *v6; // r14
  __int64 v7; // rsi
  char *v8; // rdx
  bool v9; // cc
  char *v10; // rax
  signed int v11; // edx
  signed int v12; // ecx
  unsigned int EtwUserHandleType; // eax
  __int64 v15; // rbx

  if ( a2 != 19 && a2 != 22 || !a1 )
    return 0LL;
  while ( 1 )
  {
    if ( a2 != 1 )
    {
      v4 = qword_1C02D0D50;
      if ( qword_1C02D0D50 )
        break;
    }
    v4 = qword_1C02D0D48;
    if ( qword_1C02D0D48 )
    {
      v5 = &qword_1C02D0D48;
      goto LABEL_7;
    }
    if ( !(unsigned int)HMGrowHandleTable() )
      return 0LL;
  }
  v5 = &qword_1C02D0D50;
LABEL_7:
  v6 = gpKernelHandleTable;
  v7 = 3 * v4;
  v8 = (char *)qword_1C02D0E08 + 32 * v4;
  v9 = (unsigned int)v4 <= giheLast;
  *v5 = *((_QWORD *)gpKernelHandleTable + 3 * v4);
  if ( !v9 )
    giheLast = v4;
  v8[24] = a2;
  v6[3 * v4] = a1;
  v10 = (char *)qword_1C02D0E08 + v4 * (unsigned int)dword_1C02D0E10;
  v11 = v4 | (*((unsigned __int16 *)v10 + 13) << 16);
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
  v6[v7 + 2] = 0LL;
  return v6[v7];
}
