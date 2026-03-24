/*
 * XREFs of HvlpAddPhysicalMemory @ 0x1405C948C
 * Callers:
 *     KeConfigureDynamicMemory @ 0x140512C88 (KeConfigureDynamicMemory.c)
 * Callees:
 *     HvcallInitiateHypercall @ 0x14038FDC0 (HvcallInitiateHypercall.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     HvlpAcquireHypercallPage @ 0x1404F24C0 (HvlpAcquireHypercallPage.c)
 *     HvlpDepositPages @ 0x1404F2884 (HvlpDepositPages.c)
 *     HvlpReleaseHypercallPage @ 0x1404F30B0 (HvlpReleaseHypercallPage.c)
 *     HvlpHvToNtStatus @ 0x1404FA974 (HvlpHvToNtStatus.c)
 */

__int64 __fastcall HvlpAddPhysicalMemory(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  int v4; // esi
  _QWORD *v5; // rbx
  _QWORD *v6; // rax
  __int64 v7; // r8
  __int64 v8; // rdx
  _QWORD *v9; // rdi
  __int64 v10; // r9
  unsigned __int16 v11; // bx
  __int64 v12; // rdx
  __int128 v14; // [rsp+28h] [rbp-39h] BYREF
  __int128 v15; // [rsp+38h] [rbp-29h]
  __int128 v16; // [rsp+48h] [rbp-19h] BYREF
  __int128 v17; // [rsp+58h] [rbp-9h]
  _BYTE v18[16]; // [rsp+68h] [rbp+7h] BYREF
  _BYTE v19[32]; // [rsp+78h] [rbp+17h] BYREF

  v2 = a2;
  v4 = 0;
  v16 = 0LL;
  v17 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  while ( v2 )
  {
    v5 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)&v16, 1, (__int64)v19, 16LL);
    v6 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)&v14, 2, (__int64)v18, 8LL);
    v7 = *((_QWORD *)&v15 + 1);
    v8 = *((_QWORD *)&v17 + 1);
    v9 = v6;
    *v5 = a1;
    v5[1] = v2;
    v11 = HvcallInitiateHypercall(188, v8, v7, v10);
    v2 -= *v9;
    a1 += *v9;
    HvlpReleaseHypercallPage((__int64)&v14);
    HvlpReleaseHypercallPage((__int64)&v16);
    if ( v11 == 11 )
    {
      v4 = HvlpDepositPages(0, v12, 0);
      if ( v4 < 0 )
        return (unsigned int)-1073741670;
    }
    else if ( v11 )
    {
      return (unsigned int)HvlpHvToNtStatus(v11);
    }
  }
  return (unsigned int)v4;
}
