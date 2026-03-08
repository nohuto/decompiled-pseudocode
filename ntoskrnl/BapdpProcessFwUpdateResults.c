/*
 * XREFs of BapdpProcessFwUpdateResults @ 0x140B42AC4
 * Callers:
 *     BootApplicationPersistentDataProcess @ 0x140B44538 (BootApplicationPersistentDataProcess.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 *     BapdpQueryData @ 0x140B44D10 (BapdpQueryData.c)
 *     BapdpRegisterFwUpdateResults @ 0x140B94804 (BapdpRegisterFwUpdateResults.c)
 */

void __fastcall BapdpProcessFwUpdateResults(__int64 a1)
{
  int v1; // eax
  __int64 v2; // rcx
  void *Pool2; // rbx
  unsigned int v4; // [rsp+30h] [rbp-20h] BYREF
  _DWORD v5[4]; // [rsp+38h] [rbp-18h] BYREF

  v4 = 0;
  v5[0] = -714793284;
  v5[1] = 1229919535;
  v5[2] = 1011500475;
  v5[3] = -287708285;
  v1 = BapdpQueryData(a1, v5, 0LL, 0LL, &v4);
  if ( v1 == -1073741789 )
  {
    Pool2 = (void *)ExAllocatePool2(64LL, v4, 0x64506142u);
    if ( !Pool2 )
      return;
  }
  else
  {
    Pool2 = 0LL;
    if ( v1 < 0 )
      return;
  }
  if ( (int)BapdpQueryData(v2, v5, 0LL, Pool2, &v4) >= 0 )
    BapdpRegisterFwUpdateResults(Pool2, v4);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
}
