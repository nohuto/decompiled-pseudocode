__int64 __fastcall GreIsReusedDeviceDependentBitmap(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int v3; // ebx
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  LOBYTE(a2) = 5;
  v2 = HmgShareLockCheck(a1, a2);
  v5 = v2;
  if ( v2 )
  {
    v3 = *(_DWORD *)(v2 + 116) & 0x2000;
    DEC_SHARE_REF_CNT(v2);
    return v3;
  }
  else
  {
    EPALOBJ::~EPALOBJ((EPALOBJ *)&v5);
    return 0LL;
  }
}
