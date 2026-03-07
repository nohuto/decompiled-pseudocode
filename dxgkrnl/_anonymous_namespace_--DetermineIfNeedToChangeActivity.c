void __fastcall anonymous_namespace_::DetermineIfNeedToChangeActivity(DXGADAPTER *a1, unsigned int a2, bool *a3)
{
  bool v3; // bl
  struct _LUID *v7; // rdx
  __int64 v8; // rcx
  unsigned int v9; // [rsp+40h] [rbp+18h] BYREF

  if ( a3 )
  {
    v3 = 0;
    LOBYTE(v9) = 0;
    if ( DXGADAPTER::UsingSetTimingsFromVidPn(a1)
      && !*((_BYTE *)a1 + 2833)
      && !DXGADAPTER::IsAdapterSessionized(a1, v7, 0LL, 0LL)
      && (int)DmmIsTargetForceable(v8, a2, &v9) >= 0
      && !(_BYTE)v9 )
    {
      v3 = (int)DmmGetSourceConnectedToTargetInClientVidPn(a1, a2, &v9) >= 0;
    }
    *a3 = v3;
  }
}
