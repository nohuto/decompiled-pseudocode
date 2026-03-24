/*
 * XREFs of ??_GBamoCompObjectDiagnosticsRootProxyImpl@BamoImpl@@UEAAPEAXI@Z @ 0x180181EF0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800426C0 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 */

BamoImpl::BamoCompObjectDiagnosticsRootProxyImpl *__fastcall BamoImpl::BamoCompObjectDiagnosticsRootProxyImpl::`scalar deleting destructor'(
        BamoImpl::BamoCompObjectDiagnosticsRootProxyImpl *this,
        char a2)
{
  void (__fastcall ***v4)(_QWORD); // rcx

  v4 = (void (__fastcall ***)(_QWORD))*((_QWORD *)this + 2);
  if ( v4 )
    (**v4)(v4);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
