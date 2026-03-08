/*
 * XREFs of ?GetDriverVersion@MONITOR_MGR@@UEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C01E0500
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MONITOR_MGR::GetDriverVersion(MONITOR_MGR *this)
{
  return *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 3) + 16LL) + 2820LL);
}
