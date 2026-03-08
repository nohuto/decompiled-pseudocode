/*
 * XREFs of ?GetMonitorDescriptor@KernelDriver@@UEBAJKKPEAX@Z @ 0x1C0201670
 * Callers:
 *     <none>
 * Callees:
 *     DpiGetMonitorDescriptor @ 0x1C0201694 (DpiGetMonitorDescriptor.c)
 */

__int64 __fastcall KernelDriver::GetMonitorDescriptor(KernelDriver *this, __int64 a2, __int64 a3, void *a4)
{
  __int64 v4; // rcx

  v4 = *((_QWORD *)this + 2);
  if ( v4 )
    return DpiGetMonitorDescriptor(v4, a2, a3, a4);
  WdLogSingleEntry1(2LL, -1073741632LL);
  return 3221225664LL;
}
