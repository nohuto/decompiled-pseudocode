/*
 * XREFs of ?Thunk_Materialize_BamoDataSourceProxy_5@?$IBamoPeer_dataprovider_AutoBamos_Receive@VBamoPeerImpl@dataprovider_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1801DD6C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IBamoPeer_dataprovider_AutoBamos_Receive<BamoImpl::dataprovider_AutoBamos::BamoPeerImpl>::Thunk_Materialize_BamoDataSourceProxy_5(
        BamoImpl::dataprovider_AutoBamos::BamoPeerImpl *a1,
        unsigned int **a2,
        __int64 a3,
        struct Microsoft::Bamo::BamoProxy **a4)
{
  return BamoImpl::dataprovider_AutoBamos::BamoPeerImpl::Materialize_BamoDataSourceProxy(
           a1,
           (struct Microsoft::BamoImpl::BaseBamoConnectionImpl *)**a2,
           a3,
           a4);
}
