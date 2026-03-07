__int64 __fastcall OPM::CMonitorHandleTable<CPhysicalMonitorHandle,void *>::AddHandleToTable(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  int v5; // ecx
  unsigned int v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = 0;
  v5 = OPM::CList<CPhysicalMonitorHandle>::AddElement(a1, a2, &v7);
  if ( v5 < 0 )
    return (unsigned int)v5;
  if ( OPM::INVALID_MONITOR_HANDLE == (void *)v7 )
  {
    v5 = -1073741823;
    *(_QWORD *)(*(_QWORD *)a1 + 8LL * v7) = 0LL;
    --*(_DWORD *)(a1 + 8);
    return (unsigned int)v5;
  }
  *a3 = v7;
  return 0LL;
}
