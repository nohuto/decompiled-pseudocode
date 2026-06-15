/*
 * XREFs of sub_1800DC4F8 @ 0x1800DC4F8
 * Callers:
 *     sub_18000CBF0 @ 0x18000CBF0 (sub_18000CBF0.c)
 *     ??$_Parse_fp_with_locale@$0A@@?$num_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@CA?AU_Num_get_parse_result@1@QEADHAEAV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@1@1AEBVlocale@1@@Z @ 0x1800121B0 (--$_Parse_fp_with_locale@$0A@@-$num_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@.c)
 * Callees:
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BB4B4 @ 0x1800BB4B4 (sub_1800BB4B4.c)
 *     sub_1800BB4E0 @ 0x1800BB4E0 (sub_1800BB4E0.c)
 *     sub_1800DB2B4 @ 0x1800DB2B4 (sub_1800DB2B4.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800DC4F8(__int64 a1)
{
  unsigned int v2; // ebx
  int v3; // eax
  BOOL v5; // eax
  BOOL v6; // edi
  PROPVARIANT pvar[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h]
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF

  v9 = 0LL;
  v2 = 0;
  *(_OWORD *)pvar = 0LL;
  v8 = 0LL;
  v3 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)a1 + 32LL))(a1, 0LL, &v9);
  if ( v3 < 0 )
    goto LABEL_5;
  v3 = (*(__int64 (__fastcall **)(__int64, __int128 *, PROPVARIANT *))(*(_QWORD *)v9 + 40LL))(
         v9,
         &xmmword_18015C470,
         pvar);
  if ( v3 < 0 )
    goto LABEL_5;
  if ( LOWORD(pvar[0]) != 19 )
  {
    v3 = -2147467259;
LABEL_5:
    sub_18005E8F8((__int64)"IsSPDIFEndpoint", 5196, v3);
    goto LABEL_6;
  }
  if ( LOWORD(pvar[1]) == 8 || LOWORD(pvar[1]) == 7 )
    goto LABEL_20;
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_DWORD *)off_18019C348 + 7) & 0x100) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BB4B4(*((_QWORD *)off_18019C348 + 2), 0x36u, (__int64)&unk_18015E3E8);
  }
  v5 = sub_1800DB2B4(a1);
  v6 = v5;
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_DWORD *)off_18019C348 + 7) & 0x100) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BB4E0(*((_QWORD *)off_18019C348 + 2), 0x37u, (__int64)&unk_18015E3E8, v5);
  }
  if ( v6 )
LABEL_20:
    v2 = 1;
LABEL_6:
  PropVariantClear(pvar);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  return v2;
}
