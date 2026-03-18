/*
 * XREFs of ??_G?$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wil@@@wil@@QEAAPEAXI@Z @ 0x180029384
 * Callers:
 *     ??$destruct_range@V?$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wil@@@wil@@@detail@@YAXPEAV?$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wil@@@wil@@0@Z @ 0x180029348 (--$destruct_range@V-$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wil@@@wil@@@detail@@Y.c)
 * Callees:
 *     ?InternalRelease@?$CMILRefCountBaseT@VIDeviceResource@@@@IEAAKXZ @ 0x1800F1A94 (-InternalRelease@-$CMILRefCountBaseT@VIDeviceResource@@@@IEAAKXZ.c)
 */

_QWORD *__fastcall wil::com_ptr_t<CD3DConstantBuffer,wil::err_returncode_policy>::`scalar deleting destructor'(
        _QWORD *a1)
{
  if ( *a1 )
    CMILRefCountBaseT<IDeviceResource>::InternalRelease();
  return a1;
}
