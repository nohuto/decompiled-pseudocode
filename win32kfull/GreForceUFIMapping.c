__int64 __fastcall GreForceUFIMapping(HDC a1, __int64 *a2)
{
  __int64 v3; // rcx
  __int64 v5; // rax
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v6, a1);
  v3 = v6[0];
  if ( v6[0] )
  {
    v5 = *a2;
    *(_DWORD *)(v6[0] + 252LL) |= 4u;
    *(_QWORD *)(v3 + 256) = v5;
    if ( v6[0] )
      XDCOBJ::vUnlockFast((XDCOBJ *)v6);
    return 1LL;
  }
  else
  {
    DCOBJ::~DCOBJ((DCOBJ *)v6);
    return 0LL;
  }
}
