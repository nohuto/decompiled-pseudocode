__int64 __fastcall DxgkDdiQueryProbedBars(_QWORD *a1, int a2, unsigned __int16 a3, int *a4)
{
  __int64 v5; // rcx
  int v6; // ebp
  __int64 ProbedBars; // rdi
  unsigned __int64 i; // rbx
  int v10; // [rsp+28h] [rbp-50h]
  int v11; // [rsp+30h] [rbp-48h]
  int v12; // [rsp+38h] [rbp-40h]
  int v13; // [rsp+40h] [rbp-38h]
  int v14; // [rsp+48h] [rbp-30h]
  int v15; // [rsp+50h] [rbp-28h]
  int v16; // [rsp+58h] [rbp-20h]
  unsigned int v17[2]; // [rsp+60h] [rbp-18h] BYREF
  int *v18; // [rsp+68h] [rbp-10h]

  v17[1] = 0;
  v5 = a1[366];
  v6 = a3;
  v17[0] = a3;
  v18 = a4;
  ProbedBars = (int)ADAPTER_RENDER::QueryProbedBars(v5, a2, v17);
  if ( bTracingEnabled )
  {
    v16 = v18[5];
    v15 = v18[4];
    v14 = v18[3];
    v13 = v18[2];
    v12 = v18[1];
    v11 = *v18;
    v10 = v6;
    VgpuTrace(
      1,
      ProbedBars,
      a1,
      L"DxgkDdiQueryProbedBars",
      (wchar_t *)L"%d - %d %d %d %d %d %d",
      v10,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
    for ( i = 0LL; i < 6; ++i )
      DxgkLogInternalTriageEvent(
        (__int64)a1,
        196618,
        v6,
        (__int64)L"Querying probed BAR %1 gives base register value %2 with status %3",
        i,
        (unsigned int)v18[i],
        ProbedBars,
        0LL,
        0LL);
  }
  return (unsigned int)ProbedBars;
}
