/*
 * XREFs of ?evaluate@_tip_PinManagerPinTest@PinManagerTipTests@@QEAAXXZ @ 0x180145204
 * Callers:
 *     ?evaluate@?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip@@EEAAXXZ @ 0x1801451F0 (-evaluate@-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip@@EEAAXXZ.c)
 * Callees:
 *     ?reason_string@details@tip@@YAPEBDPEBD@Z @ 0x1800ADBF0 (-reason_string@details@tip@@YAPEBDPEBD@Z.c)
 */

void __fastcall PinManagerTipTests::_tip_PinManagerPinTest::evaluate(
        PinManagerTipTests::_tip_PinManagerPinTest *this,
        const char *a2)
{
  __int64 v2; // r9
  __int16 v3; // ax
  const char *v4; // rax
  __int64 v5; // r9
  __int16 v6; // r11
  char v7; // r10

  v2 = *((_QWORD *)this + 1);
  if ( (*(_DWORD *)(v2 + 56) & 0x200) == 0 )
  {
    if ( *(_BYTE *)(v2 + 152) )
      return;
    *(_BYTE *)(v2 + 152) = 3;
    v3 = 16385;
    goto LABEL_14;
  }
  if ( *((_DWORD *)this + 4) == 2 && *((_DWORD *)this + 22) == 1 )
  {
    v4 = tip::details::reason_string((tip::details *)"reason::trusted_caller_called_shim", a2);
    if ( *(_BYTE *)(v5 + 152) )
      return;
    *(_WORD *)(v5 + 154) = 0;
    goto LABEL_8;
  }
  if ( *((int *)this + 25) < 0 )
  {
    v4 = tip::details::reason_string((tip::details *)"reason::pin_failure", a2);
    if ( *(_BYTE *)(v5 + 152) != v7 )
      return;
    *(_WORD *)(v5 + 154) = v6;
LABEL_8:
    *(_BYTE *)(v5 + 152) = 3;
    *(_QWORD *)(v5 + 160) = v4;
    return;
  }
  if ( *(_BYTE *)(v2 + 152) )
    return;
  *(_BYTE *)(v2 + 152) = 1;
  v3 = 0x8000;
LABEL_14:
  *(_QWORD *)(v2 + 160) = 0LL;
  *(_WORD *)(v2 + 154) = v3;
}
