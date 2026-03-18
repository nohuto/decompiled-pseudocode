/*
 * XREFs of IsSysFontAndDefaultMode @ 0x1C025BB6C
 * Callers:
 *     ?DT_InitDrawTextInfo@@YAHPEAUHDC__@@PEAUtagRECT@@IPEAUDRAWTEXTDATA@@PEAUtagDRAWTEXTPARAMS@@@Z @ 0x1C025B488 (-DT_InitDrawTextInfo@@YAHPEAUHDC__@@PEAUtagRECT@@IPEAUDRAWTEXTDATA@@PEAUtagDRAWTEXTPARAMS@@@Z.c)
 * Callees:
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C003FC30 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0041DDC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     GetDPIServerInfo @ 0x1C00BA3D4 (GetDPIServerInfo.c)
 *     GreGetHFONT @ 0x1C029E3FC (GreGetHFONT.c)
 */

__int64 __fastcall IsSysFontAndDefaultMode(HDC a1, __int64 a2)
{
  __int64 v3; // rbx
  int v4; // ebx
  __int64 result; // rax
  _QWORD v6[7]; // [rsp+20h] [rbp-38h] BYREF

  v3 = *(_QWORD *)(GetDPIServerInfo((__int64)a1, a2) + 24);
  if ( GreGetHFONT(a1) != v3 )
    return 0LL;
  v4 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v6, a1);
  if ( v6[0] )
    v4 = *(_DWORD *)(*(_QWORD *)(v6[0] + 976LL) + 104LL);
  DCOBJ::~DCOBJ((DCOBJ *)v6);
  result = 1LL;
  if ( v4 != 1 )
    return 0LL;
  return result;
}
