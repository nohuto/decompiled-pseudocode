/*
 * XREFs of ??1?$CComObjectRootEx@VCComMultiThreadModel@ATL@@@ATL@@QEAA@XZ @ 0x14003AB44
 * Callers:
 *     _CCrossProcessServerInputEndpoint::CCrossProcessServerInputEndpoint_::_1_::dtor$0 @ 0x14002D726 (_CCrossProcessServerInputEndpoint--CCrossProcessServerInputEndpoint_--_1_--dtor$0.c)
 *     _CCrossProcessClientInputEndpoint::CCrossProcessClientInputEndpoint_::_1_::dtor$0 @ 0x14005B3FE (_CCrossProcessClientInputEndpoint--CCrossProcessClientInputEndpoint_--_1_--dtor$0.c)
 *     _CCrossProcessClientOutputEndpoint::CCrossProcessClientOutputEndpoint_::_1_::dtor$0 @ 0x14005B49E (_CCrossProcessClientOutputEndpoint--CCrossProcessClientOutputEndpoint_--_1_--dtor$0.c)
 *     _CCrossProcessServerOutputEndpoint::CCrossProcessServerOutputEndpoint_::_1_::dtor$0 @ 0x14005B52B (_CCrossProcessServerOutputEndpoint--CCrossProcessServerOutputEndpoint_--_1_--dtor$0.c)
 *     _CSpatialCrossProcessClientOutputEndpoint::CSpatialCrossProcessClientOutputEndpoint_::_1_::dtor$0 @ 0x140065517 (_CSpatialCrossProcessClientOutputEndpoint--CSpatialCrossProcessClientOutputEndpoint_--_1_--dtor$.c)
 *     _CSpatialCrossProcessServerInputEndpoint::CSpatialCrossProcessServerInputEndpoint_::_1_::dtor$0 @ 0x14006564E (_CSpatialCrossProcessServerInputEndpoint--CSpatialCrossProcessServerInputEndpoint_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CComObjectRootEx<ATL::CComMultiThreadModel>::~CComObjectRootEx<ATL::CComMultiThreadModel>(
        __int64 a1)
{
  __int64 v1; // rcx

  v1 = a1 + 8;
  if ( *(_BYTE *)(v1 + 40) )
  {
    *(_BYTE *)(v1 + 40) = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)v1);
  }
}
