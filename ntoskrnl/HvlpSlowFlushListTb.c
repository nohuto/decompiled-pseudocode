/*
 * XREFs of HvlpSlowFlushListTb @ 0x140547974
 * Callers:
 *     HvlpFlushRangeListTb @ 0x1403C68E4 (HvlpFlushRangeListTb.c)
 * Callees:
 *     HvlpCopyFlushVaList @ 0x1403C6E98 (HvlpCopyFlushVaList.c)
 *     HvcallInitiateHypercall @ 0x1403C81E0 (HvcallInitiateHypercall.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     HvlpAcquireHypercallPage @ 0x14053E3C0 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x14053F010 (HvlpReleaseHypercallPage.c)
 *     VslFlushSecureAddressSpace @ 0x140548BFC (VslFlushSecureAddressSpace.c)
 *     VslSlowFlushSecureRangeList @ 0x14054A5BC (VslSlowFlushSecureRangeList.c)
 */

char __fastcall HvlpSlowFlushListTb(__int64 a1, char a2, char a3, unsigned int a4, __int64 *a5, unsigned int a6)
{
  char v9; // bp
  int v10; // ebx
  PHYSICAL_ADDRESS *v11; // rax
  PHYSICAL_ADDRESS *v12; // rdi
  PHYSICAL_ADDRESS v13; // xmm1_8
  PHYSICAL_ADDRESS v14; // xmm1_8
  __int128 v17; // [rsp+30h] [rbp-88h] BYREF
  __int64 v18; // [rsp+40h] [rbp-78h]
  __int64 v19; // [rsp+48h] [rbp-70h]
  __int64 v20; // [rsp+50h] [rbp-68h] BYREF

  v9 = 1;
  v10 = 0;
  v17 = 0LL;
  v18 = 0LL;
  LODWORD(v19) = 0;
  v11 = HvlpAcquireHypercallPage((__int64)&v17, 1, (__int64)&v20, 24LL);
  v12 = v11;
  if ( a6 > 0x1FD || (v17 & 2) != 0 )
  {
    if ( a3 )
    {
      v10 = 2;
      v14 = *(PHYSICAL_ADDRESS *)(a1 + 16);
      *(_OWORD *)&v11->LowPart = *(_OWORD *)a1;
      v11[2] = v14;
    }
  }
  else
  {
    HvlpCopyFlushVaList(a4, a5, (HvlpFlags & 0x2000) != 0, (__int64 *)&v11[3]);
    if ( a3 )
    {
      v13 = *(PHYSICAL_ADDRESS *)(a1 + 16);
      *(_OWORD *)&v12->LowPart = *(_OWORD *)a1;
      v12[2] = v13;
      v10 = 3;
      if ( (HvlpFlags & 0x2000) == 0 )
        v12[1].QuadPart |= 8uLL;
    }
    v9 = 0;
  }
  if ( a2 )
  {
    if ( v9 )
      VslFlushSecureAddressSpace();
    else
      VslSlowFlushSecureRangeList(v19, v12, a6, 24LL);
  }
  if ( a3 )
    HvcallInitiateHypercall(v10);
  return HvlpReleaseHypercallPage((__int64)&v17);
}
