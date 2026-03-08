/*
 * XREFs of PiDevCfgQueryDeviceMigrationNode @ 0x14095BE90
 * Callers:
 *     PiDevCfgMigrateDevice @ 0x1408758B8 (PiDevCfgMigrateDevice.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x14095AB1C (PiDevCfgFindDeviceMigrationNode.c)
 * Callees:
 *     PnpValidateMultiSzData @ 0x1403C2404 (PnpValidateMultiSzData.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     RtlpQueryRegistryValues @ 0x14069B3C0 (RtlpQueryRegistryValues.c)
 *     RtlGUIDFromString @ 0x1406D1AA0 (RtlGUIDFromString.c)
 *     _SysCtxRegOpenKey @ 0x1406D4350 (_SysCtxRegOpenKey.c)
 *     RtlCreateUnicodeString @ 0x140747D00 (RtlCreateUnicodeString.c)
 *     RtlFreeUnicodeString @ 0x1407F0430 (RtlFreeUnicodeString.c)
 *     PiDevCfgFreeDeviceMigrationNode @ 0x14095B4F0 (PiDevCfgFreeDeviceMigrationNode.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall PiDevCfgQueryDeviceMigrationNode(__int64 a1, const WCHAR *a2, __int64 *a3)
{
  unsigned int v3; // r14d
  __int64 v5; // rdx
  __int64 v6; // rcx
  int RegistryValues; // edi
  __int64 Pool2; // rax
  __int64 v9; // rbx
  __m128i v10; // xmm6
  __m128i v11; // xmm0
  __m128i si128; // xmm1
  __m128i v13; // xmm3
  __m128i v14; // xmm2
  const WCHAR *v15; // rdx
  _QWORD *v16; // rsi
  _WORD *v17; // rcx
  UNICODE_STRING *v18; // r9
  HANDLE Handle; // [rsp+38h] [rbp-D0h] BYREF
  UNICODE_STRING GuidString; // [rsp+40h] [rbp-C8h] BYREF
  __int64 *v22; // [rsp+50h] [rbp-B8h]
  _QWORD v23[70]; // [rsp+58h] [rbp-B0h] BYREF

  v3 = 0;
  v22 = a3;
  Handle = 0LL;
  v5 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)&GuidString.Length = 0LL;
  GuidString.Buffer = 0LL;
  if ( *(_QWORD *)&PiPnpRtlCtx )
    v6 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 224LL);
  else
    v6 = 0LL;
  RegistryValues = SysCtxRegOpenKey(v6, v5, (__int64)a2, 0, 0x20019u, (__int64)&Handle);
  if ( RegistryValues >= 0 )
  {
    Pool2 = ExAllocatePool2(256LL, 192LL, 1667526736LL);
    v9 = Pool2;
    v10 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)Pool2, (__m128i)(unsigned __int64)Pool2);
    if ( !Pool2 )
    {
      RegistryValues = -1073741670;
      goto LABEL_32;
    }
    *(_QWORD *)(Pool2 + 184) = -1LL;
    if ( !RtlCreateUnicodeString((PUNICODE_STRING)(Pool2 + 24), a2) )
    {
      RegistryValues = -1073741670;
LABEL_31:
      PiDevCfgFreeDeviceMigrationNode((char *)v9);
      goto LABEL_32;
    }
    *(_QWORD *)(v9 + 40) = Handle;
    Handle = 0LL;
    memset(v23, 0, sizeof(v23));
    v11 = _mm_loadu_si128((const __m128i *)off_140A755A0);
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    v13 = _mm_load_si128((const __m128i *)&_xmm);
    v23[2] = v11.m128i_i64[0];
    v23[9] = _mm_srli_si128(v11, 8).m128i_u64[0];
    LODWORD(v23[4]) = _mm_cvtsi128_si32(si128);
    v23[16] = L"ClassGuid";
    v23[17] = &GuidString;
    v23[23] = L"Capabilities";
    v23[24] = v9 + 96;
    v23[30] = L"BusDeviceDesc";
    v23[37] = L"LocationInfo";
    v23[44] = L"LocationPaths";
    v23[45] = v9 + 136;
    v23[51] = L"DriverInfName";
    v14 = _mm_add_epi64(
            _mm_slli_epi64(
              _mm_add_epi64(_mm_unpacklo_epi32(_mm_load_si128((const __m128i *)&_xmm), (__m128i)0LL), (__m128i)_xmm),
              4u),
            v10);
    v23[58] = L"Present";
    v23[3] = v14.m128i_i64[0];
    LODWORD(v23[1]) = _mm_cvtsi128_si32(v13);
    LODWORD(v23[18]) = 0x1000000;
    LODWORD(v23[15]) = 288;
    LODWORD(v23[25]) = 0x4000000;
    LODWORD(v23[22]) = 288;
    LODWORD(v23[32]) = 0x1000000;
    LODWORD(v23[29]) = 288;
    LODWORD(v23[39]) = 0x1000000;
    LODWORD(v23[36]) = 288;
    LODWORD(v23[53]) = 0x1000000;
    LODWORD(v23[50]) = 288;
    LODWORD(v23[60]) = 0x4000000;
    v15 = *(const WCHAR **)(v9 + 40);
    LODWORD(v23[57]) = 288;
    v23[59] = v9 + 176;
    LODWORD(v23[11]) = _mm_cvtsi128_si32(_mm_srli_si128(si128, 4));
    v23[10] = _mm_srli_si128(v14, 8).m128i_u64[0];
    LODWORD(v23[8]) = _mm_cvtsi128_si32(_mm_srli_si128(v13, 4));
    v23[31] = v9 + 104;
    v23[38] = v9 + 120;
    LODWORD(v23[46]) = 117440512;
    LODWORD(v23[43]) = 304;
    v23[52] = v9 + 160;
    RegistryValues = RtlpQueryRegistryValues(3221225472LL, v15, v23, 0LL);
    if ( RegistryValues < 0 )
      goto LABEL_31;
    if ( !GuidString.Buffer || RtlGUIDFromString(&GuidString, (GUID *)(v9 + 80)) < 0 )
    {
      RegistryValues = -1073741772;
      goto LABEL_31;
    }
    v16 = (_QWORD *)(v9 + 56);
    do
    {
      if ( *((_WORD *)v16 - 4) <= 2u && *v16 )
        RtlFreeUnicodeString((PUNICODE_STRING)(v9 + 16 * (v3 + 3LL)));
      ++v3;
      v16 += 2;
    }
    while ( v3 < 2 );
    if ( !*(_WORD *)(v9 + 104) && *(_QWORD *)(v9 + 112) )
      RtlFreeUnicodeString((PUNICODE_STRING)(v9 + 104));
    if ( !*(_WORD *)(v9 + 120) && *(_QWORD *)(v9 + 128) )
      RtlFreeUnicodeString((PUNICODE_STRING)(v9 + 120));
    v17 = *(_WORD **)(v9 + 144);
    if ( v17 && !PnpValidateMultiSzData(v17, *(unsigned __int16 *)(v9 + 136)) )
      RtlFreeUnicodeString(v18);
    if ( !*(_WORD *)(v9 + 160) && *(_QWORD *)(v9 + 168) )
      RtlFreeUnicodeString((PUNICODE_STRING)(v9 + 160));
    *v22 = v9;
  }
LABEL_32:
  if ( Handle )
    ZwClose(Handle);
  RtlFreeUnicodeString(&GuidString);
  return (unsigned int)RegistryValues;
}
