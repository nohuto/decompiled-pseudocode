/*
 * XREFs of ?FindInsertionPointOrIncrement@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@PEAEPEAX_KI@Z @ 0x1800AEF18
 * Callers:
 *     ?RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z @ 0x1800AF6CC (-RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z.c)
 * Callees:
 *     ?UpdateCount@UsageIndexProperty@details_abi@wil@@QEAAXI@Z @ 0x18001F260 (-UpdateCount@UsageIndexProperty@details_abi@wil@@QEAAXI@Z.c)
 *     ?LowerBound@RawUsageIndex@details_abi@wil@@AEAAPEAEPEAE_KPEAX1@Z @ 0x1800AF910 (-LowerBound@RawUsageIndex@details_abi@wil@@AEAAPEAEPEAE_KPEAX1@Z.c)
 *     ?Compare@UsageIndexProperty@details_abi@wil@@QEBAHPEAX_K@Z @ 0x1800AF9DC (-Compare@UsageIndexProperty@details_abi@wil@@QEBAHPEAX_K@Z.c)
 *     ?Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z @ 0x1800AFA10 (-Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z.c)
 */

unsigned __int8 *__fastcall wil::details_abi::RawUsageIndex::FindInsertionPointOrIncrement(
        wil::details_abi::RawUsageIndex *this,
        struct wil::details_abi::UsageIndexProperty *a2,
        unsigned __int8 *a3,
        void *a4,
        unsigned __int64 a5,
        unsigned int a6)
{
  char v6; // bl
  unsigned __int64 v7; // r15
  int v8; // r12d
  unsigned __int8 *v10; // rsi
  __int64 v13; // rax
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // r14
  unsigned __int8 *v17; // r15
  unsigned __int8 *v18; // rax
  unsigned __int8 *v19; // r8
  int v20; // r15d
  unsigned __int8 *v21; // r8
  __int16 v23; // [rsp+30h] [rbp-20h] BYREF
  char v24; // [rsp+32h] [rbp-1Eh]
  int v25; // [rsp+34h] [rbp-1Ch]
  __int16 v26; // [rsp+38h] [rbp-18h]
  __int128 v27; // [rsp+40h] [rbp-10h]
  unsigned __int8 *v28; // [rsp+80h] [rbp+30h] BYREF

  v6 = 0;
  v7 = *((_QWORD *)this + 2);
  v8 = -1;
  v23 = *((_WORD *)this + 3);
  v24 = *((_BYTE *)this + 8);
  v10 = a3;
  v25 = 0;
  v26 = 0;
  v27 = 0LL;
  if ( v7 )
  {
    v13 = *((_QWORD *)this + 4);
    v14 = *((unsigned int *)a2 + 1);
    v15 = (v13 - (__int64)a3) / v7;
    if ( v14 > v15 )
    {
      wil::details_abi::UsageIndexProperty::UpdateCount(a2, v15);
      LODWORD(v14) = *((_DWORD *)a2 + 1);
      v7 = *((_QWORD *)this + 2);
    }
    v16 = a5;
    v17 = &v10[(unsigned int)v14 * v7];
    v18 = wil::details_abi::RawUsageIndex::LowerBound(this, v10, (unsigned int)v14, a4, a5);
    v10 = v18;
    if ( v18 >= v17 )
      return v10;
    v19 = (unsigned __int8 *)*((_QWORD *)this + 4);
    v28 = v18;
    wil::details_abi::UsageIndexProperty::Read((wil::details_abi::UsageIndexProperty *)&v23, &v28, v19);
    v8 = wil::details_abi::UsageIndexProperty::Compare((wil::details_abi::UsageIndexProperty *)&v23, a4, v16);
  }
  else
  {
    v20 = 0;
    if ( !*((_DWORD *)a2 + 1) )
      return v10;
    while ( 1 )
    {
      v21 = (unsigned __int8 *)*((_QWORD *)this + 4);
      v28 = v10;
      if ( !wil::details_abi::UsageIndexProperty::Read((wil::details_abi::UsageIndexProperty *)&v23, &v28, v21) )
        break;
      v8 = wil::details_abi::UsageIndexProperty::Compare((wil::details_abi::UsageIndexProperty *)&v23, a4, a5);
      if ( v8 > 0 )
      {
        v10 = v28;
        if ( (unsigned int)++v20 < *((_DWORD *)a2 + 1) )
          continue;
      }
      goto LABEL_12;
    }
    wil::details_abi::UsageIndexProperty::UpdateCount(a2, v20);
  }
LABEL_12:
  if ( !v8 )
  {
    if ( v24 )
    {
      wil::details_abi::UsageIndexProperty::UpdateCount((wil::details_abi::UsageIndexProperty *)&v23, a6 + v25);
    }
    else if ( !*((_BYTE *)this + 56) )
    {
LABEL_17:
      *((_BYTE *)this + 56) = v6;
      return 0LL;
    }
    v6 = 1;
    goto LABEL_17;
  }
  return v10;
}
