/*
 * XREFs of ?GreDeleteColorTransform@@YAHPEAUHDC__@@PEAX@Z @ 0x1C02D06C4
 * Callers:
 *     NtGdiDeleteColorTransform @ 0x1C02D1310 (NtGdiDeleteColorTransform.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004FFBC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C0050C60 (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ?bDelete@COLORTRANSFORMOBJ@@QEAAHAEAVXDCOBJ@@@Z @ 0x1C029CEC0 (-bDelete@COLORTRANSFORMOBJ@@QEAAHAEAVXDCOBJ@@@Z.c)
 */

__int64 __fastcall GreDeleteColorTransform(HDC a1, void *a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rdx
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v7; // [rsp+50h] [rbp+18h] BYREF

  v3 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v6, a1);
  if ( v6[0] )
  {
    if ( (*(_DWORD *)(v6[0] + 36LL) & 0x5000) == 0x1000 )
    {
      EngSetLastError(0x57u);
    }
    else
    {
      LOBYTE(v4) = 14;
      v7 = HmgShareLockCheck(a2, v4);
      if ( v7 )
      {
        v3 = COLORTRANSFORMOBJ::bDelete((COLORTRANSFORMOBJ *)&v7, (struct XDCOBJ *)v6);
        if ( v7 )
          DEC_SHARE_REF_CNT(v7);
      }
    }
  }
  if ( v6[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v6);
  return v3;
}
