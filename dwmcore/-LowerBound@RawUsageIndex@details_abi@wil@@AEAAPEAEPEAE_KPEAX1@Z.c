/*
 * XREFs of ?LowerBound@RawUsageIndex@details_abi@wil@@AEAAPEAEPEAE_KPEAX1@Z @ 0x18019589C
 * Callers:
 *     ?FindInsertionPointOrIncrement@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@PEAEPEAX_KI@Z @ 0x18019503C (-FindInsertionPointOrIncrement@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@.c)
 * Callees:
 *     ?Compare@UsageIndexProperty@details_abi@wil@@QEBAHPEAX_K@Z @ 0x180194CF4 (-Compare@UsageIndexProperty@details_abi@wil@@QEBAHPEAX_K@Z.c)
 *     ?Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z @ 0x180195F18 (-Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z.c)
 */

unsigned __int8 *__fastcall wil::details_abi::RawUsageIndex::LowerBound(
        wil::details_abi::RawUsageIndex *this,
        unsigned __int8 *a2,
        unsigned __int64 a3,
        void *a4,
        size_t a5)
{
  unsigned __int64 v6; // rbx
  unsigned __int8 *v9; // r8
  const void *v11; // [rsp+20h] [rbp-38h] BYREF
  __int16 v12; // [rsp+28h] [rbp-30h]
  __int128 v13; // [rsp+30h] [rbp-28h]
  unsigned __int8 *v14; // [rsp+60h] [rbp+8h] BYREF

  LOWORD(v11) = *((_WORD *)this + 3);
  BYTE2(v11) = *((_BYTE *)this + 8);
  v6 = a3;
  HIDWORD(v11) = 0;
  v12 = 0;
  v13 = 0LL;
  while ( v6 )
  {
    v9 = (unsigned __int8 *)*((_QWORD *)this + 4);
    v14 = &a2[*((_QWORD *)this + 2) * (v6 >> 1)];
    wil::details_abi::UsageIndexProperty::Read((wil::details_abi::UsageIndexProperty *)&v11, &v14, v9);
    if ( (int)wil::details_abi::UsageIndexProperty::Compare(&v11, a4, a5) <= 0 )
    {
      v6 >>= 1;
    }
    else
    {
      a2 = v14;
      v6 += -1LL - (v6 >> 1);
    }
  }
  return a2;
}
