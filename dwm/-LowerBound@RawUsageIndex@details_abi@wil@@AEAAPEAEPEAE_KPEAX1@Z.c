/*
 * XREFs of ?LowerBound@RawUsageIndex@details_abi@wil@@AEAAPEAEPEAE_KPEAX1@Z @ 0x140001C78
 * Callers:
 *     ?FindInsertionPointOrIncrement@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@PEAEPEAX_KI@Z @ 0x140001620 (-FindInsertionPointOrIncrement@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@.c)
 * Callees:
 *     ?Compare@UsageIndexProperty@details_abi@wil@@QEBAHPEAX_K@Z @ 0x140001D44 (-Compare@UsageIndexProperty@details_abi@wil@@QEBAHPEAX_K@Z.c)
 *     ?Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z @ 0x140001D78 (-Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z.c)
 */

unsigned __int8 *__fastcall wil::details_abi::RawUsageIndex::LowerBound(
        wil::details_abi::RawUsageIndex *this,
        unsigned __int8 *a2,
        unsigned __int64 a3,
        void *a4,
        unsigned __int64 a5)
{
  unsigned __int64 v6; // rbx
  unsigned __int8 *v9; // r8
  __int16 v11; // [rsp+20h] [rbp-38h] BYREF
  char v12; // [rsp+22h] [rbp-36h]
  int v13; // [rsp+24h] [rbp-34h]
  __int16 v14; // [rsp+28h] [rbp-30h]
  __int128 v15; // [rsp+30h] [rbp-28h]
  unsigned __int8 *v16; // [rsp+60h] [rbp+8h] BYREF

  v11 = *((_WORD *)this + 3);
  v12 = *((_BYTE *)this + 8);
  v6 = a3;
  v13 = 0;
  v14 = 0;
  v15 = 0LL;
  while ( v6 )
  {
    v9 = (unsigned __int8 *)*((_QWORD *)this + 4);
    v16 = &a2[*((_QWORD *)this + 2) * (v6 >> 1)];
    wil::details_abi::UsageIndexProperty::Read((wil::details_abi::UsageIndexProperty *)&v11, &v16, v9);
    if ( wil::details_abi::UsageIndexProperty::Compare((wil::details_abi::UsageIndexProperty *)&v11, a4, a5) > 0 )
    {
      a2 = v16;
      v6 += -1LL - (v6 >> 1);
    }
    else
    {
      v6 >>= 1;
    }
  }
  return a2;
}
