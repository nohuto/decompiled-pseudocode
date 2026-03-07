BOOL __stdcall EngCheckAbort(SURFOBJ *pso)
{
  PVOID *p_pvScan0; // rax
  __int64 v2; // rcx

  p_pvScan0 = &pso[-1].pvScan0;
  v2 = -(__int64)pso;
  if ( ((unsigned __int64)p_pvScan0 & -(__int64)(v2 != 0)) != 0
    && *(_QWORD *)(((unsigned __int64)p_pvScan0 & -(__int64)(v2 != 0)) + 0x20) )
  {
    return *(_DWORD *)(((unsigned __int64)p_pvScan0 & -(__int64)(v2 != 0)) + 0x70) & 0x40000000;
  }
  else
  {
    return 0;
  }
}
