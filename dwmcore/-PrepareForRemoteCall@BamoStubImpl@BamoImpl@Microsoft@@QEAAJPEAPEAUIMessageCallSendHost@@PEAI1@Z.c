/*
 * XREFs of ?PrepareForRemoteCall@BamoStubImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x1801DDFA8
 * Callers:
 *     ?OnRegisterError@BamoDataProviderRegistrarStubImpl@BamoImpl@@QEAAJI@Z @ 0x1801DDCFC (-OnRegisterError@BamoDataProviderRegistrarStubImpl@BamoImpl@@QEAAJI@Z.c)
 *     ?OnUnregisterError@BamoDataProviderRegistrarStubImpl@BamoImpl@@QEAAJI@Z @ 0x1801DDE3C (-OnUnregisterError@BamoDataProviderRegistrarStubImpl@BamoImpl@@QEAAJI@Z.c)
 * Callees:
 *     ?GetSendHost@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEBAPEAUIMessageCallSendHost@@XZ @ 0x1800ACFF4 (-GetSendHost@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEBAPEAUIMessageCallSendHost@@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetItemId@BamoPrincipalImpl@BamoImpl@Microsoft@@QEBAIXZ @ 0x1800FEC64 (-GetItemId@BamoPrincipalImpl@BamoImpl@Microsoft@@QEBAIXZ.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x1801B89E0 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 */

__int64 __fastcall Microsoft::BamoImpl::BamoStubImpl::PrepareForRemoteCall(
        Microsoft::BamoImpl::BamoStubImpl *this,
        struct IMessageCallSendHost **a2,
        unsigned int *a3,
        unsigned int *a4)
{
  Microsoft::BamoImpl::BaseBamoPeerImpl *v4; // r10
  bool v8; // zf
  __int64 v9; // rcx
  unsigned int ItemId; // eax
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = (Microsoft::BamoImpl::BaseBamoPeerImpl *)*((_QWORD *)this + 4);
  v8 = *((_BYTE *)this + 56) == 0;
  v9 = *(_QWORD *)(*((_QWORD *)v4 + 3) + 32LL);
  if ( v8 || !*(_QWORD *)(v9 + 64) )
  {
    if ( v9 )
      Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
        (struct Microsoft::BamoImpl::ConnectionIndirector **)v9,
        0x87B20805,
        0);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x181,
      (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoStub.inl",
      (const char *)0x87B20805LL);
    return 2276591621LL;
  }
  else
  {
    *a2 = Microsoft::BamoImpl::BaseBamoPeerImpl::GetSendHost(v4);
    *a3 = *(_DWORD *)(*((_QWORD *)this + 4) + 36LL);
    ItemId = Microsoft::BamoImpl::BamoPrincipalImpl::GetItemId(*((Microsoft::BamoImpl::BamoPrincipalImpl **)this + 3));
    ++*((_DWORD *)this + 4);
    *a4 = ItemId;
    result = 0LL;
    *((_BYTE *)this + 60) = 1;
  }
  return result;
}
