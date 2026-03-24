/*
 * XREFs of PipUnloadEarlyLaunchDrivers @ 0x140A728A8
 * Callers:
 *     IopInitializeBootDrivers @ 0x140A5DB88 (IopInitializeBootDrivers.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140345530 (RtlInitUnicodeString.c)
 *     ZwUnloadKey2 @ 0x1403FD360 (ZwUnloadKey2.c)
 *     IopUnloadDriver @ 0x140768DB8 (IopUnloadDriver.c)
 */

_UNKNOWN **__fastcall PipUnloadEarlyLaunchDrivers(__int64 a1)
{
  _UNKNOWN **result; // rax
  unsigned __int16 *v2; // rdi
  unsigned __int16 *v3; // rbx
  unsigned __int16 *v4; // rcx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-48h] BYREF
  _DWORD v6[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v7; // [rsp+38h] [rbp-30h]
  UNICODE_STRING *p_DestinationString; // [rsp+40h] [rbp-28h]
  int v9; // [rsp+48h] [rbp-20h]
  int v10; // [rsp+4Ch] [rbp-1Ch]
  __int128 v11; // [rsp+50h] [rbp-18h]
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h] BYREF

  result = &retaddr;
  v6[1] = 0;
  v2 = (unsigned __int16 *)(a1 + 64);
  v3 = *(unsigned __int16 **)(a1 + 64);
  v10 = 0;
  DestinationString = 0LL;
  if ( v3 != (unsigned __int16 *)(a1 + 64) )
  {
    do
    {
      v4 = v3;
      v3 = *(unsigned __int16 **)v3;
      if ( *((int *)v4 + 14) >= 0 )
        IopUnloadDriver(v4 + 16, 1);
    }
    while ( v3 != v2 );
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\ELAM");
    v7 = 0LL;
    p_DestinationString = &DestinationString;
    v6[0] = 48;
    v9 = 576;
    v11 = 0LL;
    return (_UNKNOWN **)ZwUnloadKey2((__int64)v6, 1LL);
  }
  return result;
}
