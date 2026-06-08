/*
 * XREFs of EnablePerformanceMonitoringCounters @ 0x1C003A230
 * Callers:
 *     InitializeEnergyEstimationForEfficiencyClass @ 0x1C00257B0 (InitializeEnergyEstimationForEfficiencyClass.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00044F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00047F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0004AC0 (memset.c)
 */

__int64 __fastcall EnablePerformanceMonitoringCounters(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // rax
  unsigned int v4; // edi
  int v5; // ebx
  unsigned int v6; // ecx
  int *v7; // rdx
  int *i; // r8
  int v9; // eax
  _QWORD *PoolWithTag; // rax
  _QWORD *v11; // rsi
  __int64 v12; // rcx
  __int64 v14; // [rsp+30h] [rbp-28h] BYREF
  _BYTE v15[16]; // [rsp+38h] [rbp-20h] BYREF

  v1 = *(unsigned __int8 *)(a1 + 368);
  v14 = 0LL;
  v3 = v1 << 8;
  v4 = *(_DWORD *)((char *)&Globals[199] + v3);
  if ( v4 )
  {
    if ( v4 > 4 )
      return (unsigned int)-1073741670;
    v6 = 0;
    v7 = (int *)v15;
    for ( i = (int *)((char *)&Globals[199] + v3 + 4); ; i += 3 )
    {
      v9 = *i;
      *v7 = *i;
      if ( (unsigned int)(v9 - 2) > 0x15 )
        break;
      ++v6;
      ++v7;
      if ( v6 >= v4 )
      {
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x88uLL, 0x72637250u);
        v11 = PoolWithTag;
        if ( !PoolWithTag )
          return (unsigned int)-1073741670;
        memset(PoolWithTag, 0, 0x88uLL);
        v12 = *(unsigned int *)(a1 + 56);
        *(_QWORD *)(a1 + 360) = v11;
        v5 = ((__int64 (__fastcall *)(__int64, _BYTE *, _QWORD, __int64 *))HalPrivateDispatchTable[72])(
               v12,
               v15,
               v4,
               &v14);
        if ( v5 < 0 )
        {
          ExFreePoolWithTag(v11, 0x72637250u);
          *(_QWORD *)(a1 + 360) = 0LL;
        }
        else
        {
          v11[1] = v14;
          *(_DWORD *)v11 = v4;
        }
        return (unsigned int)v5;
      }
    }
  }
  return (unsigned int)-1073741637;
}
