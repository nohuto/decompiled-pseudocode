/*
 * XREFs of PipUnloadEarlyLaunchDrivers @ 0x140B68368
 * Callers:
 *     IopInitializeBootDrivers @ 0x140B57F78 (IopInitializeBootDrivers.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     ZwUnloadKey2 @ 0x140415E10 (ZwUnloadKey2.c)
 *     IopUnloadDriver @ 0x1408549C8 (IopUnloadDriver.c)
 */

__int64 __fastcall PipUnloadEarlyLaunchDrivers(UNICODE_STRING *a1)
{
  __int64 result; // rax
  UNICODE_STRING *v2; // rdi
  UNICODE_STRING *v3; // rbx
  UNICODE_STRING *v4; // rcx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  _DWORD v6[2]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v7; // [rsp+38h] [rbp-28h]
  UNICODE_STRING *p_DestinationString; // [rsp+40h] [rbp-20h]
  int v9; // [rsp+48h] [rbp-18h]
  int v10; // [rsp+4Ch] [rbp-14h]
  __int128 v11; // [rsp+50h] [rbp-10h]

  result = 0LL;
  v2 = a1 + 4;
  v10 = 0;
  v3 = *(UNICODE_STRING **)&a1[4].Length;
  v6[1] = 0;
  DestinationString = 0LL;
  if ( v3 != &a1[4] )
  {
    do
    {
      v4 = v3;
      v3 = *(UNICODE_STRING **)&v3->Length;
      if ( SLODWORD(v4[3].Buffer) >= 0 )
        IopUnloadDriver(v4 + 2, 1);
    }
    while ( v3 != v2 );
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\ELAM");
    v7 = 0LL;
    p_DestinationString = &DestinationString;
    v6[0] = 48;
    v9 = 576;
    v11 = 0LL;
    return ZwUnloadKey2((__int64)v6, 1LL);
  }
  return result;
}
