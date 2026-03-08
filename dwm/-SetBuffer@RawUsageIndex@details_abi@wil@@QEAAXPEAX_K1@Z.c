/*
 * XREFs of ?SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z @ 0x1400021E4
 * Callers:
 *     ?RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z @ 0x14000149C (-RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z.c)
 *     ?RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z @ 0x140001808 (-RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z.c)
 * Callees:
 *     ?FreeProcessHeap@details@wil@@YAXPEAX@Z @ 0x140002398 (-FreeProcessHeap@details@wil@@YAXPEAX@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x14000BAD8 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall wil::details_abi::RawUsageIndex::SetBuffer(
        wil::details_abi::RawUsageIndex *this,
        char *a2,
        unsigned __int64 a3,
        const char *a4)
{
  wil::details *v8; // rcx
  _WORD *v9; // rcx
  char v10; // al
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned __int64)a4 < 0xA )
    wil::details::in1diag3::_FailFast_Unexpected(retaddr, a2, a3, a4);
  v8 = (wil::details *)*((_QWORD *)this + 6);
  *((_QWORD *)this + 6) = 0LL;
  if ( v8 )
    wil::details::FreeProcessHeap(v8, a2);
  *((_QWORD *)this + 3) = a2;
  *((_QWORD *)this + 4) = &a2[a3];
  *((_QWORD *)this + 5) = &a4[(_QWORD)a2];
  v9 = a2 + 2;
  *((_BYTE *)this + 57) = 0;
  if ( a3 < 0xA )
    goto LABEL_13;
  if ( *(_WORD *)a2 || (v10 = 0, *v9 > *(_WORD *)this) )
    v10 = 1;
  *((_BYTE *)this + 57) = v10;
  if ( *(_WORD *)a2
    || *v9 != *(_WORD *)this
    || *((_WORD *)a2 + 2) != *((_WORD *)this + 1)
    || a2[8] != *((_BYTE *)this + 4)
    || *((_WORD *)a2 + 3) != *((_WORD *)this + 3)
    || a2[9] != *((_BYTE *)this + 8) )
  {
LABEL_13:
    *(_WORD *)a2 = 0;
    *v9 = *(_WORD *)this;
    *((_WORD *)a2 + 2) = *((_WORD *)this + 1);
    a2[8] = *((_BYTE *)this + 4);
    *((_WORD *)a2 + 3) = *((_WORD *)this + 3);
    a2[9] = *((_BYTE *)this + 8);
    *((_QWORD *)this + 4) = *((_QWORD *)this + 3) + 10LL;
  }
}
