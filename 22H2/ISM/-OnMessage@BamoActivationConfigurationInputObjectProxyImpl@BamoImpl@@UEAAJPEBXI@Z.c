/*
 * XREFs of ?OnMessage@BamoActivationConfigurationInputObjectProxyImpl@BamoImpl@@UEAAJPEBXI@Z @ 0x180006520
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DE3C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall BamoImpl::BamoActivationConfigurationInputObjectProxyImpl::OnMessage(
        BamoImpl::BamoActivationConfigurationInputObjectProxyImpl *this,
        const void *a2)
{
  __int64 result; // rax
  int v3; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v3 = (int)this;
  result = CoreUICallReceive(
             *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL) + 72LL),
             &IActivationConfigurationInputObjectProxy_Receive<BamoImpl::BamoActivationConfigurationInputObjectProxyImpl>::Type,
             &Microsoft::CoreUI::MessageCall::ISMBamos_g_parameters_0dp_Li0nIHu1AXew2xcevx57rSo_BamoGroup$5a0d6d6f,
             289LL);
  if ( (int)(result + 0x80000000) >= 0 && (_DWORD)result != -2018375668 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x554A,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
      (const char *)(unsigned int)result,
      v3);
    __debugbreak();
  }
  return result;
}
