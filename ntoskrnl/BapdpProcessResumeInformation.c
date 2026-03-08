/*
 * XREFs of BapdpProcessResumeInformation @ 0x140B44768
 * Callers:
 *     BootApplicationPersistentDataProcess @ 0x140B44538 (BootApplicationPersistentDataProcess.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 *     BapdpQueryData @ 0x140B44D10 (BapdpQueryData.c)
 *     BapdpRegisterResumeInformation @ 0x140B6F8BC (BapdpRegisterResumeInformation.c)
 */

void __fastcall BapdpProcessResumeInformation(__int64 a1)
{
  int v1; // eax
  __int64 v2; // rcx
  void *Pool2; // rbx
  ULONG DataSize; // [rsp+30h] [rbp-20h] BYREF
  _DWORD v5[4]; // [rsp+38h] [rbp-18h] BYREF

  DataSize = 0;
  v5[0] = 1623809380;
  v5[1] = 1116188130;
  v5[2] = 871391376;
  v5[3] = 785389825;
  v1 = BapdpQueryData(a1, v5, 0LL, 0LL, &DataSize);
  if ( v1 == -1073741789 )
  {
    Pool2 = (void *)ExAllocatePool2(64LL, DataSize, 0x64506142u);
    if ( !Pool2 )
      return;
  }
  else
  {
    Pool2 = 0LL;
    if ( v1 < 0 )
      return;
  }
  if ( (int)BapdpQueryData(v2, v5, 0LL, Pool2, &DataSize) >= 0 )
    BapdpRegisterResumeInformation(Pool2, DataSize);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
}
