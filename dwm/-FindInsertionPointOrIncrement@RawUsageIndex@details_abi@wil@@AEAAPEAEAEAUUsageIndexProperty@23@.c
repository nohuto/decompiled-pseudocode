/*
 * XREFs of ?FindInsertionPointOrIncrement@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@PEAEPEAX_KI@Z @ 0x140001620
 * Callers:
 *     ?RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z @ 0x140001A64 (-RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z.c)
 * Callees:
 *     ?LowerBound@RawUsageIndex@details_abi@wil@@AEAAPEAEPEAE_KPEAX1@Z @ 0x140001C78 (-LowerBound@RawUsageIndex@details_abi@wil@@AEAAPEAEPEAE_KPEAX1@Z.c)
 *     ?Compare@UsageIndexProperty@details_abi@wil@@QEBAHPEAX_K@Z @ 0x140001D44 (-Compare@UsageIndexProperty@details_abi@wil@@QEBAHPEAX_K@Z.c)
 *     ?Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z @ 0x140001D78 (-Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z.c)
 *     ?UpdateCount@UsageIndexProperty@details_abi@wil@@QEAAXI@Z @ 0x14000BA28 (-UpdateCount@UsageIndexProperty@details_abi@wil@@QEAAXI@Z.c)
 */

unsigned __int8 *__fastcall wil::details_abi::RawUsageIndex::FindInsertionPointOrIncrement(
        wil::details_abi::RawUsageIndex *this,
        struct wil::details_abi::UsageIndexProperty *a2,
        unsigned __int8 *a3,
        void *a4,
        unsigned __int64 a5,
        unsigned int a6)
{
  char v6; // di
  int v7; // r12d
  unsigned __int8 *v9; // r14
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // r15
  unsigned __int8 *v15; // rbx
  unsigned __int8 *v16; // rax
  unsigned __int8 *v17; // r8
  char *v18; // rax
  unsigned int v20; // r15d
  unsigned __int8 *v21; // r8
  __int16 v22; // [rsp+30h] [rbp-20h] BYREF
  char v23; // [rsp+32h] [rbp-1Eh]
  int v24; // [rsp+34h] [rbp-1Ch]
  __int16 v25; // [rsp+38h] [rbp-18h]
  __int128 v26; // [rsp+40h] [rbp-10h]
  unsigned __int8 *v27; // [rsp+80h] [rbp+30h] BYREF

  v6 = 0;
  v22 = *((_WORD *)this + 3);
  v7 = -1;
  v23 = *((_BYTE *)this + 8);
  v9 = a3;
  v24 = 0;
  v25 = 0;
  v26 = 0LL;
  if ( *((_QWORD *)this + 2) )
  {
    v12 = (*((_QWORD *)this + 4) - (_QWORD)a3) / *((_QWORD *)this + 2);
    if ( *((unsigned int *)a2 + 1) > v12 )
      wil::details_abi::UsageIndexProperty::UpdateCount(a2, v12);
    v13 = *((unsigned int *)a2 + 1);
    v14 = a5;
    v15 = &v9[*((_QWORD *)this + 2) * v13];
    v16 = wil::details_abi::RawUsageIndex::LowerBound(this, v9, v13, a4, a5);
    v9 = v16;
    if ( v16 >= v15 )
      return v9;
    v17 = (unsigned __int8 *)*((_QWORD *)this + 4);
    v27 = v16;
    wil::details_abi::UsageIndexProperty::Read((wil::details_abi::UsageIndexProperty *)&v22, &v27, v17);
    v7 = wil::details_abi::UsageIndexProperty::Compare((wil::details_abi::UsageIndexProperty *)&v22, a4, v14);
  }
  else
  {
    v20 = 0;
    if ( !*((_DWORD *)a2 + 1) )
      return v9;
    while ( 1 )
    {
      v21 = (unsigned __int8 *)*((_QWORD *)this + 4);
      v27 = v9;
      if ( !wil::details_abi::UsageIndexProperty::Read((wil::details_abi::UsageIndexProperty *)&v22, &v27, v21) )
        break;
      v7 = wil::details_abi::UsageIndexProperty::Compare((wil::details_abi::UsageIndexProperty *)&v22, a4, a5);
      if ( v7 <= 0 )
        goto LABEL_6;
      v9 = v27;
      if ( ++v20 >= *((_DWORD *)a2 + 1) )
        return v9;
    }
    wil::details_abi::UsageIndexProperty::UpdateCount(a2, v20);
  }
LABEL_6:
  if ( !v7 )
  {
    if ( v23 )
    {
      wil::details_abi::UsageIndexProperty::UpdateCount((wil::details_abi::UsageIndexProperty *)&v22, a6 + v24);
      v18 = (char *)this + 56;
    }
    else
    {
      v18 = (char *)this + 56;
      if ( !*((_BYTE *)this + 56) )
      {
LABEL_9:
        *v18 = v6;
        return 0LL;
      }
    }
    v6 = 1;
    goto LABEL_9;
  }
  return v9;
}
