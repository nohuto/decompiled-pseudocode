/*
 * XREFs of ?evaluate@_tip_SearchInputTest@@QEAAXXZ @ 0x1800C0FE4
 * Callers:
 *     ?evaluate@?$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@EEAAXXZ @ 0x1800C0FD0 (-evaluate@-$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@EEAAXXZ.c)
 * Callees:
 *     ?reason_string@details@tip@@YAPEBDPEBD@Z @ 0x1800ADBF0 (-reason_string@details@tip@@YAPEBDPEBD@Z.c)
 */

void __fastcall _tip_SearchInputTest::evaluate(_tip_SearchInputTest *this, const char *a2)
{
  int v2; // eax
  const char *v4; // rax
  __int16 v5; // r10
  __int64 v6; // r9
  __int64 v7; // rcx
  const char *v8; // rax
  __int64 v9; // r9
  __int64 v10; // rdx
  char v11; // r10
  __int16 v12; // cx
  int v13; // ecx
  __int64 v14; // r9
  char v15; // r10
  __int64 v16; // r9
  char v17; // r10
  __int64 v18; // r9
  char v19; // r10
  __int64 v20; // rax
  __int16 v21; // cx

  v2 = *((_DWORD *)this + 5);
  if ( !*(_QWORD *)((char *)this + 20) )
  {
    v4 = tip::details::reason_string((tip::details *)"Reason::search_no_input", a2);
    v7 = *(_QWORD *)(v6 + 8);
    if ( *(_BYTE *)(v7 + 152) == (_BYTE)v5 )
    {
      *(_QWORD *)(v7 + 160) = v4;
      *(_BYTE *)(v7 + 152) = v5 + 4;
      *(_WORD *)(v7 + 154) = v5 + 5;
    }
    return;
  }
  if ( v2 != *((_DWORD *)this + 7) )
  {
    v8 = tip::details::reason_string((tip::details *)"Reason::search_input_lostkeydown_inapp", a2);
    v10 = *(_QWORD *)(v9 + 8);
    if ( *(_BYTE *)(v10 + 152) != v11 )
      return;
    *(_BYTE *)(v10 + 152) = 3;
    v12 = 1;
LABEL_7:
    *(_WORD *)(v10 + 154) = v12;
    goto LABEL_8;
  }
  v13 = *((_DWORD *)this + 8);
  if ( *((_DWORD *)this + 6) != v13 )
  {
    v8 = tip::details::reason_string((tip::details *)"Reason::search_input_lostkeyup_inapp", a2);
    v10 = *(_QWORD *)(v14 + 8);
    if ( *(_BYTE *)(v10 + 152) != v15 )
      return;
    *(_BYTE *)(v10 + 152) = 3;
    v12 = 2;
    goto LABEL_7;
  }
  if ( v2 != *((_DWORD *)this + 6) )
  {
    v8 = tip::details::reason_string((tip::details *)"Reason::search_input_mismatch_inmonitor", a2);
    v10 = *(_QWORD *)(v16 + 8);
    if ( *(_BYTE *)(v10 + 152) != v17 )
      return;
    v12 = 3;
    *(_BYTE *)(v10 + 152) = 3;
    goto LABEL_7;
  }
  if ( *((_DWORD *)this + 7) != v13 )
  {
    v8 = tip::details::reason_string((tip::details *)"Reason::search_input_mismatch_inapp", a2);
    v10 = *(_QWORD *)(v18 + 8);
    if ( *(_BYTE *)(v10 + 152) != v19 )
      return;
    *(_BYTE *)(v10 + 152) = 3;
    *(_WORD *)(v10 + 154) = 4;
LABEL_8:
    *(_QWORD *)(v10 + 160) = v8;
    return;
  }
  v20 = *((_QWORD *)this + 1);
  if ( (*(_DWORD *)(v20 + 56) & 0x200) != 0 )
  {
    if ( *(_BYTE *)(v20 + 152) )
      return;
    *(_BYTE *)(v20 + 152) = 1;
    v21 = 0x8000;
  }
  else
  {
    if ( *(_BYTE *)(v20 + 152) )
      return;
    *(_BYTE *)(v20 + 152) = 3;
    v21 = 16385;
  }
  *(_QWORD *)(v20 + 160) = 0LL;
  *(_WORD *)(v20 + 154) = v21;
}
