/*
 * XREFs of HvlpSlowFlushListTb @ 0x1404FAE9C
 * Callers:
 *     HvlpFlushRangeListTb @ 0x14038F8AC (HvlpFlushRangeListTb.c)
 * Callees:
 *     HvcallInitiateHypercall @ 0x14038FDC0 (HvcallInitiateHypercall.c)
 *     HvlpCopyFlushVaList @ 0x14038FE5C (HvlpCopyFlushVaList.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     HvlpAcquireHypercallPage @ 0x1404F24C0 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1404F30B0 (HvlpReleaseHypercallPage.c)
 *     VslFlushSecureAddressSpace @ 0x1404FC108 (VslFlushSecureAddressSpace.c)
 *     VslSlowFlushSecureRangeList @ 0x1404FD560 (VslSlowFlushSecureRangeList.c)
 */

char __fastcall HvlpSlowFlushListTb(
        __int64 a1,
        char a2,
        char a3,
        unsigned int a4,
        unsigned __int64 *a5,
        unsigned int a6)
{
  int v6; // ebx
  char v10; // bp
  _QWORD *v11; // rax
  __int64 v12; // r9
  _QWORD *v13; // rdi
  __int64 v14; // xmm1_8
  __int64 v15; // xmm1_8
  __int128 v18; // [rsp+30h] [rbp-88h] BYREF
  __int128 v19; // [rsp+40h] [rbp-78h]
  _BYTE v20[48]; // [rsp+50h] [rbp-68h] BYREF

  v6 = 0;
  v10 = 1;
  v18 = 0LL;
  v19 = 0LL;
  v11 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)&v18, 1, (__int64)v20, 24LL);
  v13 = v11;
  if ( a6 > 0x1FD || (v18 & 2) != 0 )
  {
    if ( a3 )
    {
      v6 = 2;
      v15 = *(_QWORD *)(a1 + 16);
      *(_OWORD *)v11 = *(_OWORD *)a1;
      v11[2] = v15;
    }
  }
  else
  {
    HvlpCopyFlushVaList(a4, a5, (HvlpFlags & 0x2000) != 0, v11 + 3);
    if ( a3 )
    {
      v14 = *(_QWORD *)(a1 + 16);
      *(_OWORD *)v13 = *(_OWORD *)a1;
      v13[2] = v14;
      v6 = 3;
      if ( (HvlpFlags & 0x2000) == 0 )
        v13[1] |= 8uLL;
    }
    v10 = 0;
  }
  if ( a2 )
  {
    if ( v10 )
      VslFlushSecureAddressSpace();
    else
      VslSlowFlushSecureRangeList(*((_QWORD *)&v19 + 1), v13, a6, 24LL);
  }
  if ( a3 )
    HvcallInitiateHypercall(v6, *((__int64 *)&v19 + 1), 0LL, v12);
  return HvlpReleaseHypercallPage((__int64)&v18);
}
