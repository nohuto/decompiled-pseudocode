/*
 * XREFs of ?UpdateCallbacksRemoteCache@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@AEAAXXZ @ 0x18010C260
 * Callers:
 *     ?PushStateToPrincipalOnPlaceholderProxyReset@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAAXXZ @ 0x1800473B0 (-PushStateToPrincipalOnPlaceholderProxyReset@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEA.c)
 *     ?SetCallbacks@BamoMPCConstantManagerClientProxy@@UEAAXPEAVBamoMPCConstantManagerClientCallbacksPrincipal@@@Z @ 0x18010B3C0 (-SetCallbacks@BamoMPCConstantManagerClientProxy@@UEAAXPEAVBamoMPCConstantManagerClientCallbacksP.c)
 * Callees:
 *     ?PrepareForRemoteReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAIPEAVBamoPrincipal@Bamo@3@@Z @ 0x180038E7C (-PrepareForRemoteReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAIPEAVBamoPrincipal@Bamo@3@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DE3C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetSendHost@BamoProxyImpl@BamoImpl@Microsoft@@QEBAPEAUIMessageCallSendHost@@XZ @ 0x180040A60 (-GetSendHost@BamoProxyImpl@BamoImpl@Microsoft@@QEBAPEAUIMessageCallSendHost@@XZ.c)
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x1800644EC (--$verify_hresult@J@wil@@YAJJ@Z.c)
 */

void __fastcall BamoImpl::BamoMPCConstantManagerClientProxyImpl::UpdateCallbacksRemoteCache(
        BamoImpl::BamoMPCConstantManagerClientProxyImpl *this)
{
  struct Microsoft::Bamo::BamoPrincipal *v2; // rdx
  int v3; // ebp
  struct IMessageCallSendHost *SendHost; // rax
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // rbx
  struct IMessageCallSendHost *v8; // rax
  unsigned int v9; // eax
  unsigned int v10; // eax
  _QWORD v11[3]; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL) + 56LL) )
  {
    v2 = (struct Microsoft::Bamo::BamoPrincipal *)*((_QWORD *)this + 4);
    if ( v2 )
      v3 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteReference(
             (struct Microsoft::BamoImpl::BaseBamoPeerImpl **)this,
             v2);
    else
      v3 = 0;
    if ( *((_BYTE *)this + 31) )
    {
      SendHost = Microsoft::BamoImpl::BamoProxyImpl::GetSendHost((Microsoft::BamoImpl::BaseBamoPeerImpl **)this);
      v5 = (__int64)SendHost + 56;
      if ( !SendHost )
        v5 = 72LL;
      *(_BYTE *)v5 = 1;
    }
    v6 = *((unsigned int *)this + 6);
    v7 = *(unsigned int *)(*((_QWORD *)this + 2) + 36LL);
    v8 = Microsoft::BamoImpl::BamoProxyImpl::GetSendHost((Microsoft::BamoImpl::BaseBamoPeerImpl **)this);
    v11[0] = v7;
    v11[1] = v6;
    v9 = CoreUICallSend(v8, v11, 2LL, 1LL, 6, &unk_1801C2969, v3);
    if ( (int)(v9 + 0x80000000) >= 0 && v9 != -2018375675 )
    {
      v10 = wil::verify_hresult<long>(v9);
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        8934LL,
        (__int64)"onecoreuap\\windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCMa"
                 "nagerBamo.MPCManagerBamo.bamo.h",
        (const char *)v10);
      JUMPOUT(0x18010C36CLL);
    }
  }
}
