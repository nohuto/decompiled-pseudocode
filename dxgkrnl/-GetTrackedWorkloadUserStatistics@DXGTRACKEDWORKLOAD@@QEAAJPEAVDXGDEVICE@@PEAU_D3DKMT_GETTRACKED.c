__int64 __fastcall DXGTRACKEDWORKLOAD::GetTrackedWorkloadUserStatistics(
        DXGTRACKEDWORKLOAD *this,
        struct DXGDEVICE *a2,
        struct _D3DKMT_GETTRACKEDWORKLOADSTATISTICS *a3)
{
  double v5; // xmm0_8
  double v6; // xmm1_8
  __int64 v7; // rax
  double v8; // xmm0_8
  double v10; // [rsp+30h] [rbp-10h] BYREF
  unsigned __int64 v11; // [rsp+38h] [rbp-8h] BYREF
  double v12; // [rsp+60h] [rbp+20h] BYREF
  double v13; // [rsp+68h] [rbp+28h] BYREF
  double v14; // [rsp+78h] [rbp+38h] BYREF

  v13 = *(double *)&a2;
  memset(a3, 0, 0x250uLL);
  if ( *((_DWORD *)this + 48) )
  {
    v11 = 0LL;
    v13 = 0.0;
    v12 = 0.0;
    v14 = 0.0;
    v10 = 0.0;
    CumulativeStats::GetStats((DXGTRACKEDWORKLOAD *)((char *)this + 192), &v13, &v12, &v14, &v10, &v11);
    v5 = v12 * 10000.0;
    v6 = v14 * 10000.0;
    a3[9].MissedDeadlines = (unsigned int)(int)(v13 * 10000.0);
    v7 = (unsigned int)(int)v5;
    v8 = v10;
    *(_QWORD *)&a3[9].Flags.0 = v7;
    a3[9].DeadlineOffsetHundredsNS.Variance = (unsigned int)(int)v6;
    *(_QWORD *)&a3[10].hDevice = (unsigned int)(int)(v8 * 10000.0);
    a3[10].DeadlineOffsetHundredsNS.Mean = v11;
    a3[10].DeadlineOffsetHundredsNS.Minimum = *((_QWORD *)this + 38);
    LODWORD(a3[10].DeadlineOffsetHundredsNS.Maximum) = a3[10].DeadlineOffsetHundredsNS.Maximum & 0xFFFFFFFE | TrackedWorkloadMonitor::IsSaturated((DXGTRACKEDWORKLOAD *)((char *)this + 328));
  }
  else
  {
    LODWORD(a3[10].DeadlineOffsetHundredsNS.Maximum) = 2;
    WdLogSingleEntry1(3LL, 2036LL);
  }
  return 0LL;
}
