/*
 * XREFs of DpiQuerySystemFirmwareTables @ 0x1C02153B0
 * Callers:
 *     DpiReadSystemFirmwareTable @ 0x1C0215340 (DpiReadSystemFirmwareTable.c)
 *     DpiEnumSystemFirmwareTables @ 0x1C0396100 (DpiEnumSystemFirmwareTables.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     memmove @ 0x1C0027340 (memmove.c)
 */

__int64 __fastcall DpiQuerySystemFirmwareTables(int a1, int a2, int a3, unsigned int a4, void *a5, unsigned int *a6)
{
  _DWORD *Pool2; // rdi
  ULONG v11; // ebx
  NTSTATUS v12; // eax
  __int64 v13; // rbx
  unsigned int v15; // eax
  __int64 v16; // rcx
  ULONG ReturnLength[4]; // [rsp+20h] [rbp-C8h] BYREF
  _BYTE SystemInformation[128]; // [rsp+30h] [rbp-B8h] BYREF

  Pool2 = SystemInformation;
  ReturnLength[0] = 0;
  if ( KeGetCurrentIrql() )
  {
    LODWORD(v13) = -1073741811;
    WdLogSingleEntry3(0LL, 275LL, 21LL, -1073741811LL);
    return (unsigned int)v13;
  }
  if ( !a5 && a4 || !a6 )
  {
    LODWORD(v13) = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    return (unsigned int)v13;
  }
  v11 = a4 + 16;
  if ( a4 + 16 <= 0x80 || (Pool2 = (_DWORD *)ExAllocatePool2(256LL, v11, 1953656900LL)) != 0LL )
  {
    Pool2[1] = a1;
    *Pool2 = a2;
    Pool2[2] = a3;
    Pool2[3] = a4;
    v12 = ZwQuerySystemInformation(SystemFirmwareTableInformation, Pool2, v11, ReturnLength);
    v13 = v12;
    if ( v12 >= 0 )
    {
      v15 = Pool2[3];
      *a6 = v15;
      if ( v15 <= a4 )
        a4 = v15;
      if ( a5 )
        memmove(a5, Pool2 + 4, a4);
      goto LABEL_11;
    }
    if ( v12 == -1073741789 && ReturnLength[0] >= 0x10 )
    {
      *a6 = Pool2[3];
      goto LABEL_11;
    }
    *a6 = 0;
    v16 = 2LL;
  }
  else
  {
    v13 = -1073741801LL;
    v16 = 6LL;
  }
  WdLogSingleEntry1(v16, v13);
LABEL_11:
  if ( Pool2 != (_DWORD *)SystemInformation )
    ExFreePoolWithTag(Pool2, 0x74727044u);
  return (unsigned int)v13;
}
