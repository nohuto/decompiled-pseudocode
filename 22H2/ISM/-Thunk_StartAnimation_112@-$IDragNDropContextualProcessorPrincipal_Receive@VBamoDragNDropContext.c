/*
 * XREFs of ?Thunk_StartAnimation_112@?$IDragNDropContextualProcessorPrincipal_Receive@VBamoDragNDropContextualProcessorPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1800F64D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IDragNDropContextualProcessorPrincipal_Receive<BamoImpl::BamoDragNDropContextualProcessorPrincipalImpl>::Thunk_StartAnimation_112(
        BamoImpl::BamoDragNDropContextualProcessorPrincipalImpl *a1,
        unsigned int **a2)
{
  return BamoImpl::BamoDragNDropContextualProcessorPrincipalImpl::StartAnimation(a1, **a2, *a2[1]);
}
