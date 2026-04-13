/*
 * XREFs of ?GetIids@ContentDeliveryManagerAppInfoProvider@ApplicationModel@Extensions@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800A0260
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppInfoProvider::GetIids(
        Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppInfoProvider *this,
        unsigned int *a2,
        struct _GUID **a3)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Notifications::IWpnAppInfoProvider,Microsoft::WRL::FtmBase>::GetIids(
           this,
           a2,
           a3);
}
