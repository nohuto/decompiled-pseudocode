/*
 * XREFs of GreSetGraphicsMode @ 0x1C02DFAA4
 * Callers:
 *     ?FlipUserTextOutW@@YAHPEAUHDC__@@HHPEBGH@Z @ 0x1C01116B0 (-FlipUserTextOutW@@YAHPEAUHDC__@@HHPEBGH@Z.c)
 *     DrawFrameControl @ 0x1C0116938 (DrawFrameControl.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004FFBC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C0050C60 (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 */

__int64 __fastcall GreSetGraphicsMode(HDC a1, int a2)
{
  unsigned int v3; // ebx
  __int64 v4; // r8
  __int64 v5; // rax
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v7, a1);
  v4 = v7[0];
  if ( v7[0] )
  {
    v5 = *(_QWORD *)(v7[0] + 976LL);
    v3 = *(_DWORD *)(v5 + 208);
    if ( (unsigned int)(a2 - 1) <= 1 )
    {
      *(_DWORD *)(v5 + 208) = a2;
      v4 = v7[0];
    }
    if ( v4 )
      XDCOBJ::vUnlockFast((XDCOBJ *)v7);
  }
  return v3;
}
