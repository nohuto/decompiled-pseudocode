__int64 __fastcall HandleIAMHotKey(const struct tagHOTKEY *const a1)
{
  __int64 v2; // rcx
  int v3; // eax
  unsigned int v4; // ebx
  int v5; // eax
  bool v6; // zf

  v2 = *(_QWORD *)a1;
  if ( *(_QWORD *)(v2 + 456) != grpdeskRitInput )
    return 0LL;
  LOBYTE(v3) = IsIAMThread(v2);
  v4 = 0;
  if ( !v3
    || !*(_QWORD *)(*(_QWORD *)(gptiCurrent + 456LL) + 320LL)
    || *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 24LL) + 320LL) != *((_QWORD *)a1 + 2) )
  {
    return 0LL;
  }
  v6 = (unsigned int)Feature_ReportShellHotKey__private_IsEnabledDeviceUsage() == 0;
  v5 = *((_DWORD *)a1 + 10);
  if ( v6 )
    v6 = v5 == 61536;
  else
    v6 = v5 == -17;
  if ( v6 )
    return (unsigned int)RequestModernAppClose();
  return v4;
}
