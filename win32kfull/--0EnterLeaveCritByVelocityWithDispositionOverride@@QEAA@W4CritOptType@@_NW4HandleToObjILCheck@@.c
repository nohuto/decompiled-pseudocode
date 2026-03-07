__int64 __fastcall EnterLeaveCritByVelocityWithDispositionOverride::EnterLeaveCritByVelocityWithDispositionOverride(
        __int64 a1,
        __int64 a2,
        char a3,
        unsigned int a4)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8

  if ( a3 || !(unsigned __int8)ShouldRunShared(5LL) )
    EnterCrit(0LL, a4);
  else
    EnterSharedCrit(v7, v6, v8);
  return a1;
}
