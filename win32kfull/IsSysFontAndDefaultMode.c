/*
 * XREFs of IsSysFontAndDefaultMode @ 0x1C025021C
 * Callers:
 *     ?DT_InitDrawTextInfo@@YAHPEAUHDC__@@PEAUtagRECT@@IPEAUDRAWTEXTDATA@@PEAUtagDRAWTEXTPARAMS@@@Z @ 0x1C024FB18 (-DT_InitDrawTextInfo@@YAHPEAUHDC__@@PEAUtagRECT@@IPEAUDRAWTEXTDATA@@PEAUtagDRAWTEXTPARAMS@@@Z.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004FFBC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C0050C60 (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     GetDPIServerInfo @ 0x1C010C460 (GetDPIServerInfo.c)
 *     GreGetHFONT @ 0x1C02AC85C (GreGetHFONT.c)
 */

__int64 __fastcall IsSysFontAndDefaultMode(HDC a1)
{
  __int64 v2; // rbx
  int v3; // ebx
  __int64 result; // rax
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = *(_QWORD *)(GetDPIServerInfo((__int64)a1) + 24);
  if ( GreGetHFONT(a1) != v2 )
    return 0LL;
  v3 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v5, a1);
  if ( v5[0] )
  {
    v3 = *(_DWORD *)(*(_QWORD *)(v5[0] + 976LL) + 104LL);
    XDCOBJ::vUnlockFast((XDCOBJ *)v5);
  }
  result = 1LL;
  if ( v3 != 1 )
    return 0LL;
  return result;
}
