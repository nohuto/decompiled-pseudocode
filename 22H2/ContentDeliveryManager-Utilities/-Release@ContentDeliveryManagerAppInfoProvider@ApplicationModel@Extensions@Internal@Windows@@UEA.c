/*
 * XREFs of ?Release@ContentDeliveryManagerAppInfoProvider@ApplicationModel@Extensions@Internal@Windows@@UEAAKXZ @ 0x1800A0280
 * Callers:
 *     ?Release@ContentDeliveryManagerAppInfoProvider@ApplicationModel@Extensions@Internal@Windows@@WBA@EAAKXZ @ 0x1800A0CF0 (-Release@ContentDeliveryManagerAppInfoProvider@ApplicationModel@Extensions@Internal@Windows@@WBA.c)
 *     ?Release@ContentDeliveryManagerAppInfoProvider@ApplicationModel@Extensions@Internal@Windows@@W7EAAKXZ @ 0x1800A0D70 (-Release@ContentDeliveryManagerAppInfoProvider@ApplicationModel@Extensions@Internal@Windows@@W7E.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppInfoProvider::Release(
        Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppInfoProvider *this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Notifications::IWpnAppInfoProvider,Microsoft::WRL::FtmBase>::Release(this);
}
