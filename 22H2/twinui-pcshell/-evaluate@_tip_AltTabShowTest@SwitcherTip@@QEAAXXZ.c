/*
 * XREFs of ?evaluate@_tip_AltTabShowTest@SwitcherTip@@QEAAXXZ @ 0x1800D4764
 * Callers:
 *     ?evaluate@?$merged_data@U_tip_AltTabShowTest@SwitcherTip@@U12@@details@tip@@EEAAXXZ @ 0x1800D4750 (-evaluate@-$merged_data@U_tip_AltTabShowTest@SwitcherTip@@U12@@details@tip@@EEAAXXZ.c)
 * Callees:
 *     ?reason_string@details@tip@@YAPEBDPEBD@Z @ 0x1800ADBF0 (-reason_string@details@tip@@YAPEBDPEBD@Z.c)
 */

void __fastcall SwitcherTip::_tip_AltTabShowTest::evaluate(SwitcherTip::_tip_AltTabShowTest *this, const char *a2)
{
  const char *v2; // rax
  __int16 v3; // r10
  __int64 v4; // r9
  __int64 v5; // rcx
  const char *v6; // rax
  __int64 v7; // r9
  __int64 v8; // rdx
  char v9; // r10
  __int64 v10; // rax
  __int16 v11; // cx

  if ( *((_BYTE *)this + 17) )
  {
    v2 = tip::details::reason_string((tip::details *)"reason::cancelled", a2);
    v5 = *(_QWORD *)(v4 + 8);
    if ( *(_BYTE *)(v5 + 152) == (_BYTE)v3 )
    {
      *(_BYTE *)(v5 + 152) = 4;
      *(_WORD *)(v5 + 154) = v3 + 2;
      *(_QWORD *)(v5 + 160) = v2;
    }
  }
  else if ( *((_BYTE *)this + 16) )
  {
    v6 = tip::details::reason_string((tip::details *)"reason::shown", a2);
    v8 = *(_QWORD *)(v7 + 8);
    if ( *(_BYTE *)(v8 + 152) == v9 )
    {
      *(_QWORD *)(v8 + 160) = v6;
      *(_BYTE *)(v8 + 152) = 1;
      *(_WORD *)(v8 + 154) = 1;
    }
  }
  else
  {
    v10 = *((_QWORD *)this + 1);
    if ( *(_QWORD *)(v10 + 80) )
    {
      if ( *(_BYTE *)(v10 + 152) )
        return;
      *(_BYTE *)(v10 + 152) = 3;
      v11 = 0x4000;
    }
    else if ( (*(_DWORD *)(v10 + 56) & 0x200) != 0 )
    {
      if ( *(_BYTE *)(v10 + 152) )
        return;
      *(_BYTE *)(v10 + 152) = 1;
      v11 = 0x8000;
    }
    else
    {
      if ( *(_BYTE *)(v10 + 152) )
        return;
      *(_BYTE *)(v10 + 152) = 3;
      v11 = 16385;
    }
    *(_QWORD *)(v10 + 160) = 0LL;
    *(_WORD *)(v10 + 154) = v11;
  }
}
