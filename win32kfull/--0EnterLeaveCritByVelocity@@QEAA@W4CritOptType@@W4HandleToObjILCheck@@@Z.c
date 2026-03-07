__int64 __fastcall EnterLeaveCritByVelocity::EnterLeaveCritByVelocity(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8

  if ( (unsigned __int8)ShouldRunShared(a2) )
    EnterSharedCrit(v6, v5, v7);
  else
    EnterCrit(0LL, a3);
  return a1;
}
