/*
 * XREFs of ?SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z @ 0x14002753C
 * Callers:
 *     ?RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z @ 0x140025DF8 (-RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z.c)
 *     ?RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z @ 0x1400260F8 (-RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x14001EC0C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?FreeProcessHeap@details@wil@@YAXPEAX@Z @ 0x14003B100 (-FreeProcessHeap@details@wil@@YAXPEAX@Z.c)
 */

void __fastcall wil::details_abi::RawUsageIndex::SetBuffer(
        wil::details_abi::RawUsageIndex *this,
        char *a2,
        unsigned __int64 a3,
        const char *a4)
{
  wil::details *v8; // rcx
  char v9; // al
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned __int64)a4 < 0xA )
  {
    wil::details::in1diag3::_FailFast_Unexpected(retaddr, a2, a3, a4);
    JUMPOUT(0x140027641LL);
  }
  v8 = (wil::details *)*((_QWORD *)this + 6);
  *((_QWORD *)this + 6) = 0LL;
  if ( v8 )
    wil::details::FreeProcessHeap(v8, a2);
  *((_QWORD *)this + 3) = a2;
  *((_QWORD *)this + 4) = &a2[a3];
  *((_QWORD *)this + 5) = &a4[(_QWORD)a2];
  *((_BYTE *)this + 57) = 0;
  if ( a3 < 0xA )
    goto LABEL_14;
  if ( *(_WORD *)a2 || (v9 = 0, *((_WORD *)a2 + 1) > *(_WORD *)this) )
    v9 = 1;
  *((_BYTE *)this + 57) = v9;
  if ( *(_WORD *)a2
    || *((_WORD *)a2 + 1) != *(_WORD *)this
    || *((_WORD *)a2 + 2) != *((_WORD *)this + 1)
    || a2[8] != *((_BYTE *)this + 4)
    || *((_WORD *)a2 + 3) != *((_WORD *)this + 3)
    || a2[9] != *((_BYTE *)this + 8) )
  {
LABEL_14:
    *(_WORD *)a2 = 0;
    *((_WORD *)a2 + 1) = *(_WORD *)this;
    *((_WORD *)a2 + 2) = *((_WORD *)this + 1);
    a2[8] = *((_BYTE *)this + 4);
    *((_WORD *)a2 + 3) = *((_WORD *)this + 3);
    a2[9] = *((_BYTE *)this + 8);
    *((_QWORD *)this + 4) = *((_QWORD *)this + 3) + 10LL;
  }
}
