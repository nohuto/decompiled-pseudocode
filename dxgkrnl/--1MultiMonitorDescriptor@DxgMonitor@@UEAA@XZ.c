/*
 * XREFs of ??1MultiMonitorDescriptor@DxgMonitor@@UEAA@XZ @ 0x1C006C104
 * Callers:
 *     ??_GMultiMonitorDescriptor@DxgMonitor@@UEAAPEAXI@Z @ 0x1C006C160 (--_GMultiMonitorDescriptor@DxgMonitor@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DxgMonitor::MultiMonitorDescriptor::~MultiMonitorDescriptor(DxgMonitor::MultiMonitorDescriptor *this)
{
  void (__fastcall ***v2)(_QWORD, __int64); // rcx
  void (__fastcall ***v3)(_QWORD, __int64); // rcx

  v2 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 4);
  *((_QWORD *)this + 4) = 0LL;
  if ( v2 )
    (**v2)(v2, 1LL);
  v3 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 3);
  *((_QWORD *)this + 3) = 0LL;
  if ( v3 )
    (**v3)(v3, 1LL);
}
