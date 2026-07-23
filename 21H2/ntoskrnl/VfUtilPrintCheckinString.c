/*
 * XREFs of VfUtilPrintCheckinString @ 0x1409C7900
 * Callers:
 *     VfSuspectDriversLoadCallback @ 0x1409DAB98 (VfSuspectDriversLoadCallback.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x1404B66AC (__report_rangecheckfailure.c)
 *     VfUtilDbgPrint @ 0x1405A0924 (VfUtilDbgPrint.c)
 *     RtlUpcaseUnicodeChar @ 0x1406F14F0 (RtlUpcaseUnicodeChar.c)
 */

__int64 __fastcall VfUtilPrintCheckinString(unsigned __int16 *a1)
{
  unsigned int v1; // edi
  unsigned int v3; // esi
  __int64 v4; // r13
  unsigned int v5; // r14d
  unsigned int v6; // r12d
  unsigned int v7; // r8d
  int v8; // r10d
  _BYTE *v9; // r11
  __int64 v10; // r9
  __int64 v11; // rbx
  unsigned int v12; // r9d
  unsigned int v13; // ecx
  int v14; // eax
  __int64 v15; // rcx
  __int64 result; // rax
  __int64 *v17; // rbx
  __int128 v18; // [rsp+38h] [rbp-49h] BYREF
  _DWORD v19[4]; // [rsp+48h] [rbp-39h] BYREF
  _WORD v20[40]; // [rsp+58h] [rbp-29h] BYREF

  v1 = 0;
  v19[1] = MmVerifierData;
  v3 = 0;
  v19[0] = NtBuildNumber;
  v4 = *((_QWORD *)a1 + 1);
  v5 = *a1 >> 1;
  v6 = v5;
  v19[2] = 0;
  v18 = 0LL;
  v19[3] = 123456789 * NtBuildNumber * (MmVerifierData + 1);
  if ( v5 < 0x10 )
    v6 = 16;
  if ( v6 )
  {
    do
    {
      *((_BYTE *)v19 + (v3 & 0xF)) ^= RtlUpcaseUnicodeChar(*(_WORD *)(v4 + 2LL * (v3 % v5)));
      ++v3;
    }
    while ( v3 < v6 );
  }
  v7 = 0;
  while ( 1 )
  {
    v8 = 1;
    v9 = v19;
    LODWORD(v10) = 0;
    v11 = 16LL;
    do
    {
      v12 = (unsigned __int8)*v9 + ((_DWORD)v10 << 8);
      v13 = v12 / 0x3E;
      *v9 = v12 / 0x3E;
      v10 = v12 % 0x3E;
      v14 = 0;
      if ( !(_BYTE)v13 )
        v14 = v8;
      ++v9;
      v8 = v14;
      --v11;
    }
    while ( v11 );
    v15 = v7;
    result = Printable[v10];
    ++v7;
    v20[v15] = result;
    if ( v7 >= 0x21 )
      break;
    if ( v8 )
    {
      if ( 2 * (unsigned __int64)v7 >= 0x42 )
        _report_rangecheckfailure();
      v20[v7] = 0;
      *((_QWORD *)&v18 + 1) = v20;
      WORD1(v18) = 2 * v7;
      LOWORD(v18) = 2 * v7;
      if ( (VfRuleClasses & 0x100000) == 0 )
        return VfUtilDbgPrint(
                 "Driver Verifier: Enabled for %wZ, flags 0x%x, build %ld, key %wZ\n",
                 a1,
                 (unsigned int)MmVerifierData,
                 NtBuildNumber & 0xFFFFFFF,
                 &v18);
      VfUtilDbgPrint("Driver Verifier: Enabled for %wZ", a1);
      v17 = &VfRuleClasses;
      do
      {
        VfUtilDbgPrint(", %d:0x%x", v1++, *(_DWORD *)v17);
        v17 = (__int64 *)((char *)v17 + 4);
      }
      while ( v1 < 2 );
      return VfUtilDbgPrint(", build %ld, key %wZ\n", NtBuildNumber & 0xFFFFFFF, &v18);
    }
  }
  return result;
}
