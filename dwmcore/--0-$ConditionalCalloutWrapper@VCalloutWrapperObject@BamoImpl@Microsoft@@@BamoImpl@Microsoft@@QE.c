/*
 * XREFs of ??0?$ConditionalCalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVCalloutWrapperObject@12@@Z @ 0x1801B5778
 * Callers:
 *     ?OnZeroReferenceCount@BaseBamoPeerImpl@BamoImpl@Microsoft@@EEAAXXZ @ 0x1801B75E0 (-OnZeroReferenceCount@BaseBamoPeerImpl@BamoImpl@Microsoft@@EEAAXXZ.c)
 *     ?OnZeroReferenceCount@BamoStubImpl@BamoImpl@Microsoft@@EEAAXXZ @ 0x1801DDF30 (-OnZeroReferenceCount@BamoStubImpl@BamoImpl@Microsoft@@EEAAXXZ.c)
 *     ?OnZeroReferenceCount@BamoProxyImpl@BamoImpl@Microsoft@@EEAAXXZ @ 0x1801E29C0 (-OnZeroReferenceCount@BamoProxyImpl@BamoImpl@Microsoft@@EEAAXXZ.c)
 * Callees:
 *     ?LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x1800ACAB8 (-LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?CurrentThreadHasLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBA_NXZ @ 0x1800ACAFC (-CurrentThreadHasLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBA_NXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180195018 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

Microsoft::BamoImpl::BaseBamoConnectionImpl **__fastcall Microsoft::BamoImpl::ConditionalCalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::ConditionalCalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
        Microsoft::BamoImpl::BaseBamoConnectionImpl **a1,
        Microsoft::BamoImpl::BaseBamoConnectionImpl *a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  a1[1] = 0LL;
  *a1 = 0LL;
  if ( a2 && Microsoft::BamoImpl::BaseBamoConnectionImpl::CurrentThreadHasLock(a2) && !*((_DWORD *)a2 + 47) )
  {
    *a1 = a2;
    Microsoft::BamoImpl::BaseBamoConnectionImpl::LeaveLock(a2);
  }
  if ( a1[1] )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      228LL,
      (__int64)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.h",
      a4);
  return a1;
}
