__int64 __fastcall GreReferenceObject(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  LOBYTE(a2) = 5;
  v2 = HmgShareLockCheck(a1, a2);
  v4 = v2;
  if ( !v2 )
    return 3221225480LL;
  INC_SHARE_REF_CNT(v2);
  EPALOBJ::~EPALOBJ((EPALOBJ *)&v4);
  return 0LL;
}
