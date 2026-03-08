/*
 * XREFs of ?SkipValues@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@PEAE@Z @ 0x180196F90
 * Callers:
 *     ?RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z @ 0x1801965A0 (-RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z.c)
 * Callees:
 *     ?Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z @ 0x180195F18 (-Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z.c)
 *     ?UpdateCount@UsageIndexProperty@details_abi@wil@@QEAAXI@Z @ 0x1801971F0 (-UpdateCount@UsageIndexProperty@details_abi@wil@@QEAAXI@Z.c)
 */

unsigned __int8 *__fastcall wil::details_abi::RawUsageIndex::SkipValues(
        wil::details_abi::RawUsageIndex *this,
        struct wil::details_abi::UsageIndexProperty *a2,
        unsigned __int8 *a3)
{
  unsigned __int8 *v3; // rbx
  unsigned __int64 v6; // rax
  unsigned int v7; // esi
  __int16 v9; // [rsp+20h] [rbp-38h] BYREF
  char v10; // [rsp+22h] [rbp-36h]
  int v11; // [rsp+24h] [rbp-34h]
  __int16 v12; // [rsp+28h] [rbp-30h]
  __int128 v13; // [rsp+30h] [rbp-28h]
  unsigned __int8 *v14; // [rsp+70h] [rbp+18h] BYREF

  v14 = a3;
  v3 = a3;
  if ( *((_QWORD *)this + 2) )
  {
    v6 = (*((_QWORD *)this + 4) - *((_QWORD *)this + 3)) / *((_QWORD *)this + 2);
    if ( *((unsigned int *)a2 + 1) > v6 )
      wil::details_abi::UsageIndexProperty::UpdateCount(a2, v6);
    v3 += *((_QWORD *)this + 2) * *((unsigned int *)a2 + 1);
  }
  else
  {
    v7 = 0;
    v9 = *((_WORD *)this + 3);
    v10 = *((_BYTE *)this + 8);
    v11 = 0;
    v12 = 0;
    v13 = 0LL;
    if ( *((_DWORD *)a2 + 1) )
    {
      do
      {
        if ( !wil::details_abi::UsageIndexProperty::Read(
                (wil::details_abi::UsageIndexProperty *)&v9,
                &v14,
                *((unsigned __int8 **)this + 4)) )
          break;
        ++v7;
      }
      while ( v7 < *((_DWORD *)a2 + 1) );
      v3 = v14;
    }
    wil::details_abi::UsageIndexProperty::UpdateCount(a2, v7);
  }
  return v3;
}
