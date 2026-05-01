/*
 * XREFs of ?evaluate@?$merged_data@U_tip_SnapAssistShowTest@SwitcherTip@@U12@@details@tip@@EEAAXXZ @ 0x1800D4D50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall tip::details::merged_data<SwitcherTip::_tip_SnapAssistShowTest,SwitcherTip::_tip_SnapAssistShowTest>::evaluate(
        __int64 a1)
{
  __int64 result; // rax
  __int16 v2; // cx

  result = *(_QWORD *)(a1 + 256);
  if ( *(_QWORD *)(result + 80) )
  {
    if ( *(_BYTE *)(result + 152) )
      return result;
    *(_BYTE *)(result + 152) = 3;
    v2 = 0x4000;
  }
  else if ( (*(_DWORD *)(result + 56) & 0x200) != 0 )
  {
    if ( *(_BYTE *)(result + 152) )
      return result;
    *(_BYTE *)(result + 152) = 1;
    v2 = 0x8000;
  }
  else
  {
    if ( *(_BYTE *)(result + 152) )
      return result;
    *(_BYTE *)(result + 152) = 3;
    v2 = 16385;
  }
  *(_QWORD *)(result + 160) = 0LL;
  *(_WORD *)(result + 154) = v2;
  return result;
}
