/*
 * XREFs of ??1?$ComPtr@VSubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@WRL@Microsoft@@QEAA@XZ @ 0x180046D44
 * Callers:
 *     __lambda_5aad7e4d6d4c7cf45baebe76dbcaeaca_::operator()_::_1_::dtor$0 @ 0x1800D3073 (__lambda_5aad7e4d6d4c7cf45baebe76dbcaeaca_--operator()_--_1_--dtor$0.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl_ContentManagement::TargetedContent::Internal::ISubscriptionManager__::_1_::dtor$2 @ 0x1800D3579 (_Microsoft--WRL--Details--MakeAndInitialize_ContentManagement--TargetedContent--Int_ea_1800D3579.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISubscriptionManager@Internal@TargetedContent@ContentManagement@@U?$CloakedIid@UIPartialTrustSubscriptionFactory@Internal@TargetedContent@ContentManagement@@@23@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800477D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISubscriptionMana.c)
 */

int __fastcall Microsoft::WRL::ComPtr<ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl>::~ComPtr<ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl>(
        ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl **a1)
{
  ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl *v1; // rax

  v1 = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    LODWORD(v1) = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ContentManagement::TargetedContent::Internal::ISubscriptionManager,Microsoft::WRL::CloakedIid<ContentManagement::TargetedContent::Internal::IPartialTrustSubscriptionFactory>,Microsoft::WRL::FtmBase>::Release(v1);
  }
  return (int)v1;
}
