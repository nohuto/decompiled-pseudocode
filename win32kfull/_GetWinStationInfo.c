__int64 __fastcall GetWinStationInfo(ULONG64 a1)
{
  __int64 CurrentProcessWow64Process; // rax
  __int64 v3; // rdx
  _BYTE *v4; // rdx

  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(a1);
  v3 = 0LL;
  if ( !CurrentProcessWow64Process )
    v3 = 3LL;
  if ( (v3 & a1) != 0 )
    ExRaiseDatatypeMisalignment();
  v4 = (_BYTE *)a1;
  if ( a1 >= MmUserProbeAddress )
    v4 = (_BYTE *)MmUserProbeAddress;
  *v4 = *v4;
  v4[39] = v4[39];
  *(_OWORD *)a1 = gWinStationInfo;
  *(_OWORD *)(a1 + 16) = *((_OWORD *)&gWinStationInfo + 1);
  *(_QWORD *)(a1 + 32) = *((_QWORD *)&gWinStationInfo + 4);
  return 1LL;
}
