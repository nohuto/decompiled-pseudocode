/*
 * XREFs of IsSysFontAndDefaultMode @ 0x1C025EF48
 * Callers:
 *     ?DT_InitDrawTextInfo@@YAHPEAUHDC__@@PEAUtagRECT@@IPEAUDRAWTEXTDATA@@PEAUtagDRAWTEXTPARAMS@@@Z @ 0x1C025E884 (-DT_InitDrawTextInfo@@YAHPEAUHDC__@@PEAUtagRECT@@IPEAUDRAWTEXTDATA@@PEAUtagDRAWTEXTPARAMS@@@Z.c)
 * Callees:
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C00B2BF0 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00B2C98 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     GetDPIServerInfo @ 0x1C00E0E18 (GetDPIServerInfo.c)
 *     GreGetHFONT @ 0x1C029FAC4 (GreGetHFONT.c)
 */

__int64 __fastcall IsSysFontAndDefaultMode(HDC a1)
{
  __int64 v2; // rbx
  int v3; // ebx
  __int64 result; // rax
  _QWORD v5[7]; // [rsp+20h] [rbp-38h] BYREF

  v2 = *(_QWORD *)(GetDPIServerInfo((__int64)a1) + 24);
  if ( GreGetHFONT(a1) != v2 )
    return 0LL;
  v3 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v5, a1);
  if ( v5[0] )
    v3 = *(_DWORD *)(*(_QWORD *)(v5[0] + 976LL) + 104LL);
  DCOBJ::~DCOBJ((DCOBJ *)v5);
  result = 1LL;
  if ( v3 != 1 )
    return 0LL;
  return result;
}
