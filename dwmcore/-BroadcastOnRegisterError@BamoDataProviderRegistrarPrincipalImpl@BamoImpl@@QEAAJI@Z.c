/*
 * XREFs of ?BroadcastOnRegisterError@BamoDataProviderRegistrarPrincipalImpl@BamoImpl@@QEAAJI@Z @ 0x1801DD958
 * Callers:
 *     ?BroadcastOnRegisterError@BamoDataProviderRegistrarPrincipal@@UEAAJI@Z @ 0x1801DD910 (-BroadcastOnRegisterError@BamoDataProviderRegistrarPrincipal@@UEAAJI@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x1801B89E0 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ?CallOnRegisterErrorOnStub@BamoDataProviderRegistrarPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@I@Z @ 0x1801DDB04 (-CallOnRegisterErrorOnStub@BamoDataProviderRegistrarPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@.c)
 */

__int64 __fastcall BamoImpl::BamoDataProviderRegistrarPrincipalImpl::BroadcastOnRegisterError(
        BamoImpl::BamoDataProviderRegistrarPrincipalImpl *this,
        unsigned int a2)
{
  __int64 v2; // rax
  __int64 i; // rbx
  int v6; // eax
  unsigned int v7; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *((_QWORD *)this + 2);
  if ( *(_QWORD *)(*(_QWORD *)(v2 + 32) + 64LL) )
  {
    for ( i = *((_QWORD *)this + 4); ; i = *(_QWORD *)(i + 40) )
    {
      if ( !i )
        return 0;
      if ( *(_BYTE *)(i + 56) )
      {
        v6 = BamoImpl::BamoDataProviderRegistrarPrincipalImpl::CallOnRegisterErrorOnStub(
               (struct Microsoft::BamoImpl::BamoStubImpl *)i,
               a2);
        v7 = v6;
        if ( v6 < 0 )
          break;
      }
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x26C,
      (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoPrincipal.inl",
      (const char *)(unsigned int)v6);
    return v7;
  }
  else
  {
    Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
      *(struct Microsoft::BamoImpl::ConnectionIndirector ***)(v2 + 32),
      0x87B20814,
      0);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2CE8,
      (int)"onecoreuap\\windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      (const char *)0x87B20814LL);
    return 2276591636LL;
  }
}
