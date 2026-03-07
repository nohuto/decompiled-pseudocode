__int64 __fastcall GreDereferenceObject(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebp
  __int64 v4; // rax
  unsigned int v5; // edi
  __int64 v6; // rbx
  __int64 v8; // [rsp+50h] [rbp+18h] BYREF

  v2 = a2;
  LOBYTE(a2) = 5;
  v4 = HmgShareLockCheck(a1, a2);
  v5 = 0;
  v8 = v4;
  v6 = v4;
  if ( !v4 )
    return 3221225480LL;
  if ( (a1 & 0x800000) != 0 )
  {
    DEC_SHARE_REF_CNT(v4);
  }
  else if ( HmgShareUnlockRemoveObject(a1, 0LL, 1LL, v2, 5) && (unsigned int)SURFACE::bDeleteSurface(v6, 0LL, 1LL) )
  {
    v8 = 0LL;
  }
  else
  {
    v5 = -1073741823;
  }
  EPALOBJ::~EPALOBJ((EPALOBJ *)&v8);
  return v5;
}
