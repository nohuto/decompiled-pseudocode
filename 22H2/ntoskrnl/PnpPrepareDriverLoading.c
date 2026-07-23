/*
 * XREFs of PnpPrepareDriverLoading @ 0x140739E9C
 * Callers:
 *     IopLoadDriver @ 0x14073CD08 (IopLoadDriver.c)
 *     IopInitializeBuiltinDriver @ 0x140A5E618 (IopInitializeBuiltinDriver.c)
 * Callees:
 *     RtlImageNtHeader @ 0x14029CFE0 (RtlImageNtHeader.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     PpCheckInDriverDatabase @ 0x140739F60 (PpCheckInDriverDatabase.c)
 *     IopGetRegistryValue @ 0x14073EF38 (IopGetRegistryValue.c)
 *     PnpSetBlockedDriverEvent @ 0x1408ABE84 (PnpSetBlockedDriverEvent.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpPrepareDriverLoading(int a1, void *a2, void *a3, int a4, _DWORD *a5)
{
  int v7; // ebx
  PIMAGE_NT_HEADERS v9; // rax
  unsigned int v10; // ebx
  __int128 v12; // [rsp+38h] [rbp-40h] BYREF

  v7 = (int)a3;
  *a5 = 0;
  v9 = RtlImageNtHeader(a3);
  if ( !v9 )
    return 3221225473LL;
  v12 = 0LL;
  v10 = PpCheckInDriverDatabase(a1, (_DWORD)a2, v7, v9->OptionalHeader.SizeOfImage, a4, (__int64)&v12);
  if ( v10 + 1073740949 <= 1 )
    PnpSetBlockedDriverEvent(&v12);
  if ( (int)IopGetRegistryValue(a2) >= 0 )
  {
    if ( MEMORY[4] == 4 && MEMORY[0xC] == 4 )
      *a5 = *(_DWORD *)MEMORY[8];
    ExFreePoolWithTag(0LL, 0);
  }
  return v10;
}
