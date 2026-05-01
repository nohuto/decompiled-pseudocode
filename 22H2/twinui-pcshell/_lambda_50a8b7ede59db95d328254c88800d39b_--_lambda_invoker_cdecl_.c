/*
 * XREFs of _lambda_50a8b7ede59db95d328254c88800d39b_::_lambda_invoker_cdecl_ @ 0x1802F1630
 * Callers:
 *     <none>
 * Callees:
 *     ?IsWindowEligibleForTabbing@@YA_NPEAUHWND__@@0@Z @ 0x1802F2858 (-IsWindowEligibleForTabbing@@YA_NPEAUHWND__@@0@Z.c)
 */

__int64 __fastcall lambda_50a8b7ede59db95d328254c88800d39b_::_lambda_invoker_cdecl_(HWND a1, __int64 a2)
{
  bool v4; // al
  unsigned int v5; // r8d

  v4 = IsWindowEligibleForTabbing(a1, 0LL);
  v5 = 0;
  if ( v4 )
  {
    if ( **(_BYTE **)a2 )
    {
      **(_BYTE **)(a2 + 8) = a1 != **(HWND **)(a2 + 16);
    }
    else
    {
      v5 = 1;
      if ( a1 == **(HWND **)(a2 + 24) )
        **(_BYTE **)a2 = 1;
    }
  }
  else
  {
    return 1;
  }
  return v5;
}
