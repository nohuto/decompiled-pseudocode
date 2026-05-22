/*
 * XREFs of ?QueryInterface@ConnectionIndirector@BamoImpl@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004B360
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::BamoImpl::ConnectionIndirector::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        void **a3)
{
  return Microsoft::BamoImpl::ConnectionIndirector::QueryInterface(a1 - 8, a2, a3);
}
