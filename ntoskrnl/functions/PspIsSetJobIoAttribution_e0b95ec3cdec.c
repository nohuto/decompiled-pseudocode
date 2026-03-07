char __fastcall PspIsSetJobIoAttribution(_QWORD *a1, __int64 a2, char a3)
{
  __int64 v3; // rax
  char v4; // bl

  v3 = a1[161];
  v4 = 0;
  while ( v3 )
  {
    if ( *(_DWORD *)(v3 + 1564) )
      return 1;
    v3 = *(_QWORD *)(v3 + 1288);
  }
  if ( !a3
    && (int)PspEnumJobsAndProcessesInJobHierarchy(a1, (int)PspIsSetJobIoAttributionJobPreCallback, 0, 0, (__int64)a1, 5) < 0 )
  {
    return 1;
  }
  return v4;
}
