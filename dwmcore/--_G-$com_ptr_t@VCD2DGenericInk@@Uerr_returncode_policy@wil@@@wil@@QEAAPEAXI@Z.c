/*
 * XREFs of ??_G?$com_ptr_t@VCD2DGenericInk@@Uerr_returncode_policy@wil@@@wil@@QEAAPEAXI@Z @ 0x1801BF808
 * Callers:
 *     ??$destruct_range@V?$com_ptr_t@VCD2DGenericInk@@Uerr_returncode_policy@wil@@@wil@@@detail@@YAXPEAV?$com_ptr_t@VCD2DGenericInk@@Uerr_returncode_policy@wil@@@wil@@0@Z @ 0x1801BCB9C (--$destruct_range@V-$com_ptr_t@VCD2DGenericInk@@Uerr_returncode_policy@wil@@@wil@@@detail@@YAXPE.c)
 * Callees:
 *     ?InternalRelease@?$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ @ 0x18008F164 (-InternalRelease@-$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ.c)
 */

volatile signed __int32 **__fastcall wil::com_ptr_t<CD2DGenericInk,wil::err_returncode_policy>::`scalar deleting destructor'(
        volatile signed __int32 **a1)
{
  volatile signed __int32 *v2; // rcx

  v2 = *a1;
  if ( v2 )
    CMILRefCountBaseT<IUnknown>::InternalRelease(v2);
  return a1;
}
