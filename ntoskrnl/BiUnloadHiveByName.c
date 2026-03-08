/*
 * XREFs of BiUnloadHiveByName @ 0x140A5A134
 * Callers:
 *     BiAddStoreFromFile @ 0x14082BDE4 (BiAddStoreFromFile.c)
 *     BiUnloadHiveByHandle @ 0x140A5A09C (BiUnloadHiveByHandle.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     swprintf_s @ 0x1403D8840 (swprintf_s.c)
 *     ZwUnloadKey @ 0x140415DF0 (ZwUnloadKey.c)
 *     ZwUnloadKey2 @ 0x140415E10 (ZwUnloadKey2.c)
 *     BiAcquirePrivilege @ 0x14082F784 (BiAcquirePrivilege.c)
 *     BiReleasePrivilege @ 0x14082F810 (BiReleasePrivilege.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiUnloadHiveByName(__int64 a1, int a2, char a3)
{
  unsigned __int64 v5; // rbx
  wchar_t *Pool2; // rax
  WCHAR *v7; // rdi
  int v8; // ebx
  __int64 v9; // rdx
  int v10; // eax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  _DWORD v13[2]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v14; // [rsp+48h] [rbp-28h]
  UNICODE_STRING *p_DestinationString; // [rsp+50h] [rbp-20h]
  int v16; // [rsp+58h] [rbp-18h]
  int v17; // [rsp+5Ch] [rbp-14h]
  __int128 v18; // [rsp+60h] [rbp-10h]
  __int64 v19; // [rsp+A8h] [rbp+38h] BYREF

  v17 = 0;
  v19 = 0LL;
  v13[1] = 0;
  DestinationString = 0LL;
  v5 = (unsigned int)(a2 + 38);
  Pool2 = (wchar_t *)ExAllocatePool2(258LL, v5, 1262764866LL);
  v7 = Pool2;
  if ( Pool2 )
  {
    swprintf_s(Pool2, v5 >> 1, L"%s\\%s", L"\\Registry\\Machine", a1);
    RtlInitUnicodeString(&DestinationString, v7);
    v14 = 0LL;
    p_DestinationString = &DestinationString;
    v13[0] = 48;
    v16 = 576;
    v18 = 0LL;
    v8 = BiAcquirePrivilege(0x12u, (__int64)&v19);
    if ( v8 >= 0 )
    {
      if ( a3 )
        v10 = ZwUnloadKey2((__int64)v13, 1LL);
      else
        v10 = ZwUnloadKey((__int64)v13, v9);
      v8 = v10;
      BiReleasePrivilege((unsigned int *)&v19);
    }
    ExFreePoolWithTag(v7, 0x4B444342u);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v8;
}
