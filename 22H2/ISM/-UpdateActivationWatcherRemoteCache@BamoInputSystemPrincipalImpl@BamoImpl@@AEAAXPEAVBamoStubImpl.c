/*
 * XREFs of ?UpdateActivationWatcherRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x18001C740
 * Callers:
 *     ?UpdateActivationWatcherRemoteCacheStatic@BamoInputSystemPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x1800F0670 (-UpdateActivationWatcherRemoteCacheStatic@BamoInputSystemPrincipalImpl@BamoImpl@@CAJPEAVBamoStub.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DE3C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetSendHost@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEBAPEAUIMessageCallSendHost@@XZ @ 0x18003FD88 (-GetSendHost@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEBAPEAUIMessageCallSendHost@@XZ.c)
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x1800644EC (--$verify_hresult@J@wil@@YAJJ@Z.c)
 *     ?PrepareForRemoteReference@BamoPrincipalImpl@BamoImpl@Microsoft@@SAIPEAVBamoPrincipal@Bamo@3@PEAVBaseBamoPeer@53@@Z @ 0x180073850 (-PrepareForRemoteReference@BamoPrincipalImpl@BamoImpl@Microsoft@@SAIPEAVBamoPrincipal@Bamo@3@PEA.c)
 */

void __fastcall BamoImpl::BamoInputSystemPrincipalImpl::UpdateActivationWatcherRemoteCache(
        BamoImpl::BamoInputSystemPrincipalImpl *this,
        struct Microsoft::BamoImpl::BamoStubImpl *a2)
{
  struct Microsoft::Bamo::BamoPrincipal *v4; // rcx
  unsigned int v5; // esi
  unsigned int *v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rbx
  struct IMessageCallSendHost *SendHost; // rax
  unsigned int v10; // eax
  unsigned int v11; // eax
  int v12; // [rsp+20h] [rbp-38h]
  _QWORD v13[3]; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 32LL) + 56LL) )
  {
    v4 = (struct Microsoft::Bamo::BamoPrincipal *)*((_QWORD *)this + 5);
    if ( v4 )
      v5 = Microsoft::BamoImpl::BamoPrincipalImpl::PrepareForRemoteReference(
             v4,
             *(struct Microsoft::Bamo::BaseBamoPeer **)(*((_QWORD *)a2 + 5) + 16LL));
    else
      v5 = 0;
    v6 = (unsigned int *)*((_QWORD *)a2 + 5);
    v7 = *((unsigned int *)this + 6);
    v8 = v6[9];
    SendHost = Microsoft::BamoImpl::BaseBamoPeerImpl::GetSendHost((Microsoft::BamoImpl::BaseBamoPeerImpl *)v6);
    v13[0] = v8;
    v13[1] = v7;
    v10 = CoreUICallSend(SendHost, v13, 2LL, 43LL, 0, &unk_1801C01BA, v5);
    if ( (int)(v10 + 0x80000000) >= 0 && v10 != -2018375675 )
    {
      v11 = wil::verify_hresult<long>(v10);
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x9E89,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
        (const char *)v11,
        v12);
      JUMPOUT(0x18001C830LL);
    }
  }
}
