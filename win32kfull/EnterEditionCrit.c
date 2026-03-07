__int64 __fastcall EnterEditionCrit(__int64 a1)
{
  if ( IS_USERCRIT_OWNED_EXCLUSIVE(a1) )
    return 1LL;
  EnterCrit(1LL, 0LL);
  return 0LL;
}
