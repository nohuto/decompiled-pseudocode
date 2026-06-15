/*
 * XREFs of ??1?$com_ptr_t@VCPBMStreamClassVolumeGainStage@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000EFFC
 * Callers:
 *     __lambda_1a6013364819a622eb1c78e19bf6fec0_::operator()_::_1_::dtor$1 @ 0x18003B55A (__lambda_1a6013364819a622eb1c78e19bf6fec0_--operator()_--_1_--dtor$1.c)
 *     _CStreamClassPolicyGains::UpdateStreamClassGainStage_::_1_::dtor$4 @ 0x18003C8DD (_CStreamClassPolicyGains--UpdateStreamClassGainStage_--_1_--dtor$4.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCGainStage@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000EF90 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCGainStage@@@Det.c)
 */

__int64 __fastcall wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>::~com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>(
        volatile signed __int32 **a1)
{
  volatile signed __int32 *v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CGainStage>::Release(v1);
  return result;
}
