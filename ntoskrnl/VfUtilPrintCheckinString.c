/*
 * XREFs of VfUtilPrintCheckinString @ 0x140ABF804
 * Callers:
 *     VfSuspectDriversLoadCallback @ 0x140AD7704 (VfSuspectDriversLoadCallback.c)
 *     VfSuspectDriversUnloadCallback @ 0x140AD7AB4 (VfSuspectDriversUnloadCallback.c)
 *     ViThunkApplyPristineCurrentSession @ 0x140AD858C (ViThunkApplyPristineCurrentSession.c)
 *     ViThunkApplyWdmThunksCurrentSession @ 0x140AD86BC (ViThunkApplyWdmThunksCurrentSession.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x1404FBCCC (__report_rangecheckfailure.c)
 *     VfUtilDbgPrint @ 0x1405CBEB4 (VfUtilDbgPrint.c)
 *     RtlUpcaseUnicodeChar @ 0x1406EA4F0 (RtlUpcaseUnicodeChar.c)
 */

__int64 __fastcall VfUtilPrintCheckinString(unsigned __int16 *a1, char a2)
{
  unsigned int v2; // edi
  unsigned int v4; // r14d
  __int64 v5; // r13
  unsigned int v6; // r15d
  unsigned int v7; // r12d
  unsigned int v8; // r8d
  int v9; // r10d
  _BYTE *v10; // r11
  __int64 v11; // r9
  __int64 v12; // rbx
  unsigned int v13; // r9d
  unsigned int v14; // ecx
  int v15; // eax
  __int64 v16; // rcx
  __int64 result; // rax
  const char *v18; // rcx
  const char *v19; // rcx
  __int64 *v20; // rbx
  __int128 v22; // [rsp+40h] [rbp-51h] BYREF
  _DWORD v23[6]; // [rsp+50h] [rbp-41h] BYREF
  _WORD v24[40]; // [rsp+68h] [rbp-29h] BYREF

  v2 = 0;
  v23[1] = MmVerifierData;
  v4 = 0;
  v5 = *((_QWORD *)a1 + 1);
  v6 = *a1 >> 1;
  v7 = v6;
  v22 = 0LL;
  v23[0] = NtBuildNumber;
  v23[2] = 0;
  v23[3] = 123456789 * NtBuildNumber * (MmVerifierData + 1);
  if ( v6 < 0x10 )
    v7 = 16;
  do
  {
    *((_BYTE *)v23 + (v4 & 0xF)) ^= RtlUpcaseUnicodeChar(*(_WORD *)(v5 + 2LL * (v4 % v6)));
    ++v4;
  }
  while ( v4 < v7 );
  v8 = 0;
  while ( 1 )
  {
    v9 = 1;
    v10 = v23;
    LODWORD(v11) = 0;
    v12 = 16LL;
    do
    {
      v13 = (unsigned __int8)*v10 + ((_DWORD)v11 << 8);
      v14 = v13 / 0x3E;
      *v10 = v13 / 0x3E;
      v11 = v13 % 0x3E;
      v15 = 0;
      if ( !(_BYTE)v14 )
        v15 = v9;
      ++v10;
      v9 = v15;
      --v12;
    }
    while ( v12 );
    v16 = v8;
    result = Printable[v11];
    ++v8;
    v24[v16] = result;
    if ( v8 >= 0x21 )
      break;
    if ( v9 )
    {
      if ( 2 * (unsigned __int64)v8 >= 0x42 )
        _report_rangecheckfailure();
      v24[v8] = 0;
      *((_QWORD *)&v22 + 1) = v24;
      WORD1(v22) = 2 * v8;
      LOWORD(v22) = 2 * v8;
      if ( (VfRuleClasses & 0x100000) != 0 )
      {
        v19 = "Driver Verifier: Applied for %wZ";
        if ( a2 )
          v19 = "Driver Verifier: Removed for %wZ";
        VfUtilDbgPrint(v19, a1);
        v20 = &VfRuleClasses;
        do
        {
          VfUtilDbgPrint(", %d:0x%x", v2++, *(_DWORD *)v20);
          v20 = (__int64 *)((char *)v20 + 4);
        }
        while ( v2 < 2 );
        return VfUtilDbgPrint(", build %ld, key %wZ\n", NtBuildNumber & 0xFFFFFFF, &v22);
      }
      else
      {
        v18 = "Driver Verifier: Applied for %wZ, flags 0x%x, build %ld, key %wZ\n";
        if ( a2 )
          v18 = "Driver Verifier: Removed for %wZ, flags 0x%x, build %ld, key %wZ\n";
        return VfUtilDbgPrint(v18, a1, (unsigned int)MmVerifierData, NtBuildNumber & 0xFFFFFFF, &v22);
      }
    }
  }
  return result;
}
