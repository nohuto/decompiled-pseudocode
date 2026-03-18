/*
 * XREFs of ?AddHandleToTable@?$CMonitorHandleTable@VCPhysicalMonitorHandle@@PEAX@OPM@@QEAAJPEAVCPhysicalMonitorHandle@@PEAPEAX@Z @ 0x1C026E764
 * Callers:
 *     ?CreatePhysicalMonitor@CMonitorAPI@@QEAAJAEAU_LUID@@KPEAPEAX@Z @ 0x1C026E864 (-CreatePhysicalMonitor@CMonitorAPI@@QEAAJAEAU_LUID@@KPEAPEAX@Z.c)
 * Callees:
 *     ?AddElement@?$CList@VCPhysicalMonitorHandle@@@OPM@@QEAAJPEAVCPhysicalMonitorHandle@@PEAK@Z @ 0x1C026E658 (-AddElement@-$CList@VCPhysicalMonitorHandle@@@OPM@@QEAAJPEAVCPhysicalMonitorHandle@@PEAK@Z.c)
 */

__int64 __fastcall OPM::CMonitorHandleTable<CPhysicalMonitorHandle,void *>::AddHandleToTable(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 result; // rax
  unsigned int v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0;
  result = OPM::CList<CPhysicalMonitorHandle>::AddElement(a1, a2, &v6);
  if ( (int)result >= 0 )
  {
    if ( OPM::INVALID_MONITOR_HANDLE == (void *)v6 )
    {
      *(_QWORD *)(*(_QWORD *)a1 + 8LL * v6) = 0LL;
      result = 3221225473LL;
      --*(_DWORD *)(a1 + 8);
    }
    else
    {
      *a3 = v6;
      return 0LL;
    }
  }
  return result;
}
