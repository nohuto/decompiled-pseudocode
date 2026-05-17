/*
 * XREFs of RtlDeriveCapabilitySidsFromName @ 0x18001FD40
 * Callers:
 *     RtlCapabilityCheck @ 0x18003FC90 (RtlCapabilityCheck.c)
 * Callees:
 *     RtlUpcaseUnicodeString @ 0x180015D20 (RtlUpcaseUnicodeString.c)
 *     RtlFreeAnsiString @ 0x180016760 (RtlFreeAnsiString.c)
 *     RtlEqualUnicodeString @ 0x180020D10 (RtlEqualUnicodeString.c)
 *     RtlInitializeSid @ 0x180040070 (RtlInitializeSid.c)
 *     SHA256Final @ 0x18004034C (SHA256Final.c)
 *     SHA256Update @ 0x180040498 (SHA256Update.c)
 *     __security_check_cookie @ 0x18008C910 (__security_check_cookie.c)
 */

__int64 __fastcall RtlDeriveCapabilitySidsFromName(unsigned __int16 *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v6; // r8
  __int128 v7; // xmm0
  unsigned int v8; // edi
  unsigned int v9; // esi
  __int64 v10; // r8
  __int64 v11; // r8
  __int128 v12; // xmm0
  UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-69h] BYREF
  _DWORD v14[28]; // [rsp+30h] [rbp-59h] BYREF
  __int128 v15; // [rsp+A0h] [rbp+17h] BYREF
  __int128 v16; // [rsp+B0h] [rbp+27h]

  if ( !a1 || !a2 || !a3 )
    __fastfail(5u);
  *(_OWORD *)a3 = 0LL;
  *(_OWORD *)(a3 + 16) = 0LL;
  *(_OWORD *)(a3 + 32) = 0LL;
  *(_OWORD *)a2 = 0LL;
  *(_OWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 32) = 0LL;
  *(_DWORD *)(a2 + 40) = 0;
  result = RtlUpcaseUnicodeString((__int64)&UnicodeString, a1, 1);
  if ( (int)result >= 0 )
  {
    v14[8] = 0;
    v14[9] = 0;
    v14[0] = 1779033703;
    v14[1] = -1150833019;
    v14[2] = 1013904242;
    v14[3] = -1521486534;
    v14[4] = 1359893119;
    v14[5] = -1694144372;
    v14[6] = 528734635;
    v14[7] = 1541459225;
    SHA256Update(v14, UnicodeString.Buffer, UnicodeString.Length);
    SHA256Final(v14, &v15);
    LOBYTE(v6) = 9;
    RtlInitializeSid(a2, &RtlpNtAuthority, v6);
    v7 = v15;
    *(_DWORD *)(a2 + 8) = 32;
    *(_OWORD *)(a2 + 12) = v7;
    *(_OWORD *)(a2 + 28) = v16;
    v8 = 0;
    while ( 1 )
    {
      v9 = v8 + 1;
      if ( (unsigned __int8)RtlEqualUnicodeString(
                              &UnicodeString,
                              (char *)&RtlpLegacyApplicationCapabilityNames + 16 * v8,
                              0LL) )
        break;
      ++v8;
      if ( v9 >= 0xC )
        goto LABEL_8;
    }
    LOBYTE(v10) = 2;
    RtlInitializeSid(a3, &RtlpAppPackageAuthority, v10);
    *(_DWORD *)(a3 + 8) = 3;
    *(_DWORD *)(a3 + 12) = v9;
LABEL_8:
    RtlFreeAnsiString(&UnicodeString);
    if ( v8 == 12 )
    {
      LOBYTE(v11) = 10;
      RtlInitializeSid(a3, &RtlpAppPackageAuthority, v11);
      v12 = v15;
      *(_DWORD *)(a3 + 8) = 3;
      *(_DWORD *)(a3 + 12) = 1024;
      *(_OWORD *)(a3 + 16) = v12;
      *(_OWORD *)(a3 + 32) = v16;
    }
    return 0LL;
  }
  return result;
}
