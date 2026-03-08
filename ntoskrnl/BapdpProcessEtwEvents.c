/*
 * XREFs of BapdpProcessEtwEvents @ 0x140380170
 * Callers:
 *     BootApplicationPersistentDataProcess @ 0x140B44538 (BootApplicationPersistentDataProcess.c)
 * Callees:
 *     BapdWriteEtwEvents @ 0x140380290 (BapdWriteEtwEvents.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 *     BapdpQueryData @ 0x140B44D10 (BapdpQueryData.c)
 */

void __fastcall BapdpProcessEtwEvents(__int64 a1)
{
  unsigned int v1; // r14d
  void *Pool2; // rbx
  unsigned int v3; // esi
  int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // [rsp+30h] [rbp-20h] BYREF
  _DWORD v7[4]; // [rsp+38h] [rbp-18h] BYREF

  v1 = 0;
  v7[0] = -1667627438;
  Pool2 = 0LL;
  v7[1] = 1255566311;
  v3 = 0;
  v7[2] = -363808867;
  v7[3] = -1273101358;
  while ( 1 )
  {
    v6 = 0;
    v4 = BapdpQueryData(a1, v7, v3, 0LL, &v6);
    v5 = v4 + 0x80000000;
    if ( (v5 & 0x80000000) == 0 && v4 != -1073741789 )
      break;
    if ( v6 > v1 )
    {
      if ( Pool2 )
        ExFreePoolWithTag(Pool2, 0);
      Pool2 = (void *)ExAllocatePool2(64LL, v6, 1682989378LL);
      if ( !Pool2 )
        return;
      v1 = v6;
    }
    if ( (int)BapdpQueryData(v5, v7, v3, Pool2, &v6) < 0 || (int)BapdWriteEtwEvents(Pool2, v6) < 0 )
      break;
    ++v3;
  }
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
}
