/*
 * XREFs of ??$?0$0?0$0A@@?$span@PEAVCBaseExpression@@$0?0@gsl@@QEAA@PEAPEAVCBaseExpression@@_K@Z @ 0x1801BA9F0
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x1800254CC (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x1801AEDB0 (-terminate@details@gsl@@YAXXZ.c)
 */

gsl::details *__fastcall gsl::span<CBaseExpression *,-1>::span<CBaseExpression *,-1>(
        gsl::details *a1,
        __int64 a2,
        __int64 a3)
{
  gsl::details *v5; // rcx
  bool v6; // zf

  gsl::details::extent_type<-1>::extent_type<-1>(a1, a3);
  v6 = *(_QWORD *)a1 == -1LL;
  *((_QWORD *)a1 + 1) = a2;
  if ( v6 || !a2 && *(_QWORD *)a1 )
  {
    gsl::details::terminate(v5);
    JUMPOUT(0x1801BAA30LL);
  }
  return a1;
}
