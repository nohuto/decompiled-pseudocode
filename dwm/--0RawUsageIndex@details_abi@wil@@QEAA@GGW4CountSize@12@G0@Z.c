/*
 * XREFs of ??0RawUsageIndex@details_abi@wil@@QEAA@GGW4CountSize@12@G0@Z @ 0x140001E2C
 * Callers:
 *     ?RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z @ 0x14000149C (-RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z.c)
 *     ??0UsageIndexes@details_abi@wil@@QEAA@XZ @ 0x1400017A4 (--0UsageIndexes@details_abi@wil@@QEAA@XZ.c)
 * Callees:
 *     ?GetSize@UsageIndexProperty@details_abi@wil@@QEBA_KXZ @ 0x140001EB0 (-GetSize@UsageIndexProperty@details_abi@wil@@QEBA_KXZ.c)
 */

__int64 __fastcall wil::details_abi::RawUsageIndex::RawUsageIndex(
        __int64 a1,
        __int16 a2,
        __int16 a3,
        char a4,
        __int16 a5,
        char a6)
{
  __int64 v6; // r10
  __int64 v7; // rdx
  unsigned __int64 Size; // rax
  __int64 result; // rax
  __int16 v10; // [rsp+20h] [rbp-28h] BYREF
  char v11; // [rsp+22h] [rbp-26h]
  int v12; // [rsp+24h] [rbp-24h]
  __int16 v13; // [rsp+28h] [rbp-20h]
  __int128 v14; // [rsp+30h] [rbp-18h]

  v6 = a1;
  *(_WORD *)a1 = a2;
  v7 = 0LL;
  *(_WORD *)(a1 + 6) = a5;
  *(_WORD *)(a1 + 2) = a3;
  *(_BYTE *)(a1 + 4) = a4;
  *(_BYTE *)(a1 + 8) = a6;
  if ( a5 )
  {
    v11 = a6;
    v10 = a5;
    v14 = 0LL;
    v12 = 0;
    v13 = 0;
    Size = wil::details_abi::UsageIndexProperty::GetSize((wil::details_abi::UsageIndexProperty *)&v10);
  }
  else
  {
    Size = 0LL;
  }
  *(_QWORD *)(v6 + 16) = Size;
  result = v6;
  *(_QWORD *)(v6 + 24) = v7;
  *(_QWORD *)(v6 + 32) = v7;
  *(_QWORD *)(v6 + 40) = v7;
  *(_QWORD *)(v6 + 48) = v7;
  *(_WORD *)(v6 + 56) = v7;
  *(_BYTE *)(v6 + 58) = v7;
  return result;
}
