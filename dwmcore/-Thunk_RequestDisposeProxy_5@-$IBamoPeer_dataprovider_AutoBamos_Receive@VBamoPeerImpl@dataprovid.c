/*
 * XREFs of ?Thunk_RequestDisposeProxy_5@?$IBamoPeer_dataprovider_AutoBamos_Receive@VBamoPeerImpl@dataprovider_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1801B89B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IBamoPeer_dataprovider_AutoBamos_Receive<BamoImpl::dataprovider_AutoBamos::BamoPeerImpl>::Thunk_RequestDisposeProxy_5(
        struct Microsoft::BamoImpl::BaseBamoPeerImpl *a1,
        unsigned int **a2)
{
  return Microsoft::BamoImpl::BaseBamoConnectionImpl::RequestDisposeProxy(
           *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*((_QWORD *)a1 + 3) + 32LL),
           a1,
           **a2);
}
