/*
 * XREFs of BapdpProcessHSTIResults @ 0x140B44910
 * Callers:
 *     BootApplicationPersistentDataProcess @ 0x140B44538 (BootApplicationPersistentDataProcess.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 *     BapdpQueryData @ 0x140B44D10 (BapdpQueryData.c)
 */

void __fastcall BapdpProcessHSTIResults(__int64 a1)
{
  int v1; // eax
  __int64 v2; // rcx
  void *Pool2; // rbx
  unsigned int v4; // [rsp+30h] [rbp-20h] BYREF
  _DWORD v5[4]; // [rsp+38h] [rbp-18h] BYREF

  v4 = 0;
  v5[0] = -1059463388;
  v5[1] = 1314116061;
  v5[2] = -657724523;
  v5[3] = -2040154073;
  v1 = BapdpQueryData(a1, v5, 0LL, 0LL, &v4);
  if ( v1 == -1073741789 )
  {
    Pool2 = (void *)ExAllocatePool2(256LL, v4, 0x49545348u);
    if ( !Pool2 )
      return;
  }
  else
  {
    Pool2 = 0LL;
    if ( v1 < 0 )
      return;
  }
  if ( (int)BapdpQueryData(v2, v5, 0LL, Pool2, &v4) < 0 )
  {
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0);
  }
  else
  {
    LODWORD(dword_140D66110) = v4;
    qword_140D66118 = Pool2;
  }
}
