__int64 __fastcall ExpandedMonitorSpace(__int64 *a1)
{
  unsigned __int16 v2; // di
  __int64 v3; // rcx
  unsigned __int16 DpiForSystem; // bx
  __int64 result; // rax
  __int128 v6; // [rsp+20h] [rbp-18h]

  v2 = *(_WORD *)(*(_QWORD *)(*(_QWORD *)(GetDispInfo(a1) + 96) + 40LL) + 62LL);
  DpiForSystem = GetDpiForSystem(v3);
  v6 = *(_OWORD *)(*gpDispInfo + 24LL);
  *a1 = ExpandMonitorSpaceVertex(DpiForSystem, v2, *(_QWORD *)(*gpDispInfo + 24LL));
  result = ExpandMonitorSpaceVertex(DpiForSystem, v2, *((__int64 *)&v6 + 1));
  a1[1] = result;
  return result;
}
