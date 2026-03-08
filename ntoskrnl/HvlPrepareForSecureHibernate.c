/*
 * XREFs of HvlPrepareForSecureHibernate @ 0x14054486C
 * Callers:
 *     PopSaveHiberContext @ 0x140AA1810 (PopSaveHiberContext.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1402D8270 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     HvlpAcquireHypercallPage @ 0x14053E3C0 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x14053F010 (HvlpReleaseHypercallPage.c)
 */

__int64 __fastcall HvlPrepareForSecureHibernate(_OWORD *a1)
{
  PHYSICAL_ADDRESS *v2; // rax
  __int128 v3; // xmm1
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v8; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v9; // [rsp+30h] [rbp-98h]
  unsigned __int64 v10; // [rsp+38h] [rbp-90h]
  _QWORD v11[14]; // [rsp+40h] [rbp-88h] BYREF

  v9 = 0LL;
  LODWORD(v10) = 0;
  v8 = 0LL;
  v2 = HvlpAcquireHypercallPage((__int64)&v8, 1, 0LL, 88LL);
  v3 = a1[1];
  *(_OWORD *)&v2->LowPart = *a1;
  v4 = a1[2];
  *(_OWORD *)&v2[2].LowPart = v3;
  v5 = a1[3];
  *(_OWORD *)&v2[4].LowPart = v4;
  v6 = a1[4];
  *(_OWORD *)&v2[6].LowPart = v5;
  *(_OWORD *)&v2[8].LowPart = v6;
  memset(v11, 0, 0x68uLL);
  v11[1] = v10 >> 12;
  LODWORD(a1) = VslpEnterIumSecureMode(2u, 259, 0, (__int64)v11);
  HvlpReleaseHypercallPage((__int64)&v8);
  return (unsigned int)a1;
}
