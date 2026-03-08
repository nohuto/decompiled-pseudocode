/*
 * XREFs of ?QueryInterface@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800FEEE0
 * Callers:
 *     ?QueryInterface@ConnectionIndirector@BamoImpl@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180117AB0 (-QueryInterface@ConnectionIndirector@BamoImpl@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::BamoImpl::ConnectionIndirector::QueryInterface(
        Microsoft::BamoImpl::ConnectionIndirector *this,
        const struct _GUID *a2,
        void **a3)
{
  return Microsoft::BamoImpl::Util::QueryInterface<Microsoft::BamoImpl::ConnectionIndirector,IMessageConversationHost,IMessageConversationBouncer>(
           (char *)this - 16,
           a2,
           a3);
}
