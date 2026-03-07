__int64 __fastcall PspEnumerateCallback(int a1, _DWORD *a2, _QWORD *a3)
{
  int v4; // ecx
  union _RTL_RUN_ONCE *v5; // rcx
  __int64 v6; // rdx

  if ( a1 )
  {
    v4 = a1 - 1;
    if ( v4 )
    {
      if ( v4 != 1 )
        return 0LL;
      v5 = &PspLoadImageNotifyRoutine;
    }
    else
    {
      v5 = &PspCreateProcessNotifyRoutine;
    }
  }
  else
  {
    v5 = &PspCreateThreadNotifyRoutine;
  }
  v6 = (unsigned int)*a2;
  if ( (unsigned int)v6 < 0x40 )
  {
    *a3 = &v5[v6];
    *a2 = v6 + 1;
    return 1LL;
  }
  return 0LL;
}
