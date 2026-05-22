/*
 * XREFs of ?UpdateActivatedRemoteCache@BamoActivationControllerProxyImpl@BamoImpl@@AEAAXXZ @ 0x18000A8B0
 * Callers:
 *     ?SetActivated@BamoActivationControllerProxy@@UEAAX_N@Z @ 0x18000A660 (-SetActivated@BamoActivationControllerProxy@@UEAAX_N@Z.c)
 *     ?PushStateToPrincipalOnPlaceholderProxyReset@BamoActivationControllerProxyImpl@BamoImpl@@UEAAXXZ @ 0x180046FF0 (-PushStateToPrincipalOnPlaceholderProxyReset@BamoActivationControllerProxyImpl@BamoImpl@@UEAAXXZ.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DE3C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetSendHost@BamoProxyImpl@BamoImpl@Microsoft@@QEBAPEAUIMessageCallSendHost@@XZ @ 0x180040A60 (-GetSendHost@BamoProxyImpl@BamoImpl@Microsoft@@QEBAPEAUIMessageCallSendHost@@XZ.c)
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x1800644EC (--$verify_hresult@J@wil@@YAJJ@Z.c)
 */

void __fastcall BamoImpl::BamoActivationControllerProxyImpl::UpdateActivatedRemoteCache(
        BamoImpl::BamoActivationControllerProxyImpl *this)
{
  __int64 v2; // rcx
  struct IMessageCallSendHost *SendHost; // rax
  __int64 v4; // rax
  __int64 v5; // rbx
  int v6; // esi
  __int64 v7; // rdi
  struct IMessageCallSendHost *v8; // rax
  unsigned int v9; // eax
  unsigned int v10; // eax
  __int16 v11; // [rsp+20h] [rbp-38h]
  int v12; // [rsp+20h] [rbp-38h]
  _QWORD v13[3]; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v2 = *((_QWORD *)this + 2);
  if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 24) + 32LL) + 56LL) )
  {
    if ( *((_BYTE *)this + 31) )
    {
      SendHost = Microsoft::BamoImpl::BamoProxyImpl::GetSendHost(this);
      if ( SendHost )
        v4 = (__int64)SendHost + 56;
      else
        v4 = 72LL;
      *(_BYTE *)v4 = 1;
      v2 = *((_QWORD *)this + 2);
    }
    v5 = *(unsigned int *)(v2 + 36);
    v6 = *((unsigned __int8 *)this + 32);
    v7 = *((unsigned int *)this + 6);
    v8 = Microsoft::BamoImpl::BamoProxyImpl::GetSendHost(this);
    v13[0] = v5;
    v13[1] = v7;
    v11 = 0;
    v9 = CoreUICallSend(v8, v13, 2LL, 3LL, v11, &unk_1801C01BD, v6);
    if ( (int)(v9 + 0x80000000) >= 0 && v9 != -2018375675 )
    {
      v10 = wil::verify_hresult<long>(v9);
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x5871,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
        (const char *)v10,
        v12);
      JUMPOUT(0x18000A9ACLL);
    }
  }
}
