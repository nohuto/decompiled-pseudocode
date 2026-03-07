__int64 __fastcall RtlpMuiRegAddNeutralLanguage(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( !a1 || !a2 )
    return 3221225485LL;
  *(_WORD *)(a2 + 10) = 0;
  *(_WORD *)(a2 + 8) &= 0x3FFFu;
  return result;
}
