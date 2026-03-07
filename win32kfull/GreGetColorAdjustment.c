__int64 __fastcall GreGetColorAdjustment(HDC a1, __int64 a2)
{
  __int64 v3; // rax
  unsigned int v4; // ebx
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v6, a1);
  v3 = v6[0];
  if ( v6[0] )
  {
    *(_OWORD *)a2 = *(_OWORD *)(v6[0] + 176LL);
    *(_QWORD *)(a2 + 16) = *(_QWORD *)(v3 + 192);
    *(_WORD *)(a2 + 2) &= 3u;
    v4 = 1;
  }
  else
  {
    EngSetLastError(6u);
    v3 = v6[0];
    v4 = 0;
  }
  if ( v3 )
    XDCOBJ::vUnlockFast((XDCOBJ *)v6);
  return v4;
}
