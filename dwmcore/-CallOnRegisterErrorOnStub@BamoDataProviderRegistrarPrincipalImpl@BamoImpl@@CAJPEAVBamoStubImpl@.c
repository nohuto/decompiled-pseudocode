/*
 * XREFs of ?CallOnRegisterErrorOnStub@BamoDataProviderRegistrarPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@I@Z @ 0x1801DDB04
 * Callers:
 *     ?BroadcastOnRegisterError@BamoDataProviderRegistrarPrincipalImpl@BamoImpl@@QEAAJI@Z @ 0x1801DD958 (-BroadcastOnRegisterError@BamoDataProviderRegistrarPrincipalImpl@BamoImpl@@QEAAJI@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801B44D0 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnRegisterError@BamoDataProviderRegistrarStubImpl@BamoImpl@@QEAAJI@Z @ 0x1801DDCFC (-OnRegisterError@BamoDataProviderRegistrarStubImpl@BamoImpl@@QEAAJI@Z.c)
 */

__int64 __fastcall BamoImpl::BamoDataProviderRegistrarPrincipalImpl::CallOnRegisterErrorOnStub(
        struct Microsoft::BamoImpl::BamoStubImpl *a1,
        unsigned int a2)
{
  unsigned int v2; // eax
  int v4; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !*(_DWORD *)(*((_QWORD *)a1 + 4) + 44LL) )
  {
    v2 = BamoImpl::BamoDataProviderRegistrarStubImpl::OnRegisterError(a1, a2);
    if ( (int)(v2 + 0x80000000) >= 0 && v2 != -2018375675 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        11843LL,
        (__int64)"onecoreuap\\windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
        (const char *)v2,
        v4);
  }
  return 0LL;
}
