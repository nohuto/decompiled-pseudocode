/*
 * XREFs of ?IsParserValid@HidLampMultiUpdateReportParser@@CA_NPEAV1@@Z @ 0x1800AB93C
 * Callers:
 *     ?TryCreateAndInitialize@HidLampMultiUpdateReportParser@@SAJPEBUParsedHidReportDescriptor@@PEAPEAV1@@Z @ 0x1800ABC24 (-TryCreateAndInitialize@HidLampMultiUpdateReportParser@@SAJPEBUParsedHidReportDescriptor@@PEAPEA.c)
 * Callees:
 *     ?IsChannelsValid@HidLampMultiUpdateReportParser@@CA_NAEAV?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@_J1PEAH@Z @ 0x1800AB8C8 (-IsChannelsValid@HidLampMultiUpdateReportParser@@CA_NAEAV-$vector@VHidChannelValueInfo@@V-$alloc.c)
 *     ?IsValid@HidChannelValueInfo@@QEBA_N_J0@Z @ 0x1800ACAF8 (-IsValid@HidChannelValueInfo@@QEBA_N_J0@Z.c)
 */

char __fastcall HidLampMultiUpdateReportParser::IsParserValid(struct HidLampMultiUpdateReportParser *a1)
{
  __int64 *v2; // rbp
  __int64 *v3; // r14
  __int64 *v4; // r13
  unsigned __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // r8
  char v15; // r11
  __int64 v16; // r10
  __int64 v17; // rdx
  __int64 v18; // rdx
  char v19; // r9
  unsigned __int64 v21; // [rsp+20h] [rbp-58h]
  __int64 v22; // [rsp+28h] [rbp-50h]
  char IsChannelsValid; // [rsp+80h] [rbp+8h]
  char v24; // [rsp+88h] [rbp+10h]
  char v25; // [rsp+90h] [rbp+18h]
  char v26; // [rsp+98h] [rbp+20h]

  v2 = (__int64 *)((char *)a1 + 200);
  v3 = (__int64 *)((char *)a1 + 232);
  v4 = (__int64 *)((char *)a1 + 264);
  v5 = (__int64)((unsigned __int128)((__int64)(*((_QWORD *)a1 + 26) - *((_QWORD *)a1 + 25))
                                   * (__int128)0xE38E38E38E38E39LL) >> 64) >> 2;
  v21 = (v5 >> 63) + v5;
  v6 = (v3[1] - *v3) / 72;
  v7 = (*((_QWORD *)a1 + 34) - *((_QWORD *)a1 + 33)) / 72LL;
  v22 = (*((_QWORD *)a1 + 38) - *((_QWORD *)a1 + 37)) / 72LL;
  IsChannelsValid = HidLampMultiUpdateReportParser::IsChannelsValid(
                      (__int64 *)a1 + 21,
                      (unsigned __int128)((__int64)(*((_QWORD *)a1 + 38) - *((_QWORD *)a1 + 37))
                                        * (__int128)0xE38E38E38E38E39LL) >> 64,
                      0x7FFFFFFFLL,
                      (_DWORD *)a1 + 48);
  v24 = HidLampMultiUpdateReportParser::IsChannelsValid(v2, v8, 255LL, (_DWORD *)a1 + 56);
  v25 = HidLampMultiUpdateReportParser::IsChannelsValid(v3, v9, v10, (_DWORD *)a1 + 64);
  v26 = HidLampMultiUpdateReportParser::IsChannelsValid(v4, v11, v12, (_DWORD *)a1 + 72);
  v15 = HidLampMultiUpdateReportParser::IsChannelsValid((__int64 *)a1 + 37, v13, v14, (_DWORD *)a1 + 80);
  if ( !v21 && !v6 && !v7 )
    return 0;
  if ( !IsChannelsValid )
    return 0;
  v16 = *((unsigned int *)a1 + 14);
  v17 = (*((_QWORD *)a1 + 22) - *((_QWORD *)a1 + 21)) / 72LL;
  if ( v17 != v16 )
    return 0;
  if ( v21 )
  {
    if ( !v24 )
      return 0;
    v17 = (v2[1] - *v2) / 72;
    if ( v17 != v16 )
      return 0;
    *((_BYTE *)a1 + 324) = 1;
  }
  if ( v6 )
  {
    if ( !v25 )
      return 0;
    v17 = (v3[1] - *v3) / 72;
    if ( v17 != v16 )
      return 0;
    *((_BYTE *)a1 + 325) = 1;
  }
  if ( v7 )
  {
    if ( !v26 )
      return 0;
    v17 = (v4[1] - *v4) / 72;
    if ( v17 != v16 )
      return 0;
    *((_BYTE *)a1 + 326) = 1;
  }
  if ( !v22 )
    goto LABEL_22;
  if ( !v15 )
    return 0;
  v17 = (*((_QWORD *)a1 + 38) - *((_QWORD *)a1 + 37)) / 72LL;
  if ( v17 != v16 )
    return 0;
  *((_BYTE *)a1 + 327) = 1;
LABEL_22:
  if ( *((_BYTE *)a1 + 17) != 2
    || !HidChannelValueInfo::IsValid((struct HidLampMultiUpdateReportParser *)((char *)a1 + 24), v17, 0x7FFFFFFFLL)
    || !HidChannelValueInfo::IsValid((struct HidLampMultiUpdateReportParser *)((char *)a1 + 96), v18, 0xFFFFFFFFLL) )
  {
    return 0;
  }
  return v19;
}
