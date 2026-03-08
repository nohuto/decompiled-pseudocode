/*
 * XREFs of HvlSetSystemSleepProperty @ 0x140543A50
 * Callers:
 *     <none>
 * Callees:
 *     HvcallInitiateHypercall @ 0x1403C81E0 (HvcallInitiateHypercall.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     HvlpAcquireHypercallPage @ 0x14053E3C0 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x14053F010 (HvlpReleaseHypercallPage.c)
 */

__int64 __fastcall HvlSetSystemSleepProperty(ULONG a1, char a2, char a3)
{
  PHYSICAL_ADDRESS *v6; // rax
  __int128 v8; // [rsp+20h] [rbp-88h] BYREF
  __int64 v9; // [rsp+30h] [rbp-78h]
  __int64 v10; // [rsp+38h] [rbp-70h]
  __int64 v11; // [rsp+40h] [rbp-68h] BYREF

  v8 = 0LL;
  v9 = 0LL;
  LODWORD(v10) = 0;
  v6 = HvlpAcquireHypercallPage((__int64)&v8, 1, (__int64)&v11, 40LL);
  v6->LowPart = 3;
  v6[1].LowPart = a1;
  BYTE4(v6[1].QuadPart) = a2;
  BYTE5(v6[1].QuadPart) = a3;
  LOWORD(a1) = HvcallInitiateHypercall(111);
  HvlpReleaseHypercallPage((__int64)&v8);
  return (_WORD)a1 != 0 ? 0xC0000001 : 0;
}
