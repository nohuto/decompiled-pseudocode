__int64 __fastcall HvlGetPpmStatsForProcessor(struct _KPRCB *a1, _QWORD *a2, _QWORD *a3)
{
  unsigned __int64 v6; // rcx
  unsigned __int64 *StatisticsPage; // r9
  unsigned __int64 v8; // r8
  __int64 v9; // rdi
  unsigned __int64 *v10; // rbx
  __int64 ReferenceTime; // rax
  __int64 v12; // rdx
  __int64 v14; // rcx

  if ( a1 == KeGetCurrentPrcb() )
  {
    v6 = HIDWORD(xmmword_140D17680);
    StatisticsPage = a1->StatisticsPage;
    do
    {
      v8 = StatisticsPage[v6];
      *a3 = a1->StatisticsPage[(unsigned int)xmmword_140D17690];
    }
    while ( v8 != StatisticsPage[v6] );
    v9 = DWORD1(xmmword_140D17690);
    v10 = a1->StatisticsPage;
    do
    {
      *a2 = v10[v9];
      ReferenceTime = HvlGetReferenceTime(v6);
      v6 = v10[v9];
      v12 = ReferenceTime;
    }
    while ( *a2 != v6 );
  }
  else
  {
    v12 = HvlGetReferenceTime(a1);
    v14 = (unsigned int)xmmword_140D17690;
    *a2 = v12 - a1->StatisticsPage[DWORD1(xmmword_140D17680)];
    *a3 = a1->StatisticsPage[v14];
  }
  return v12;
}
