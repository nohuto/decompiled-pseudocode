/*
 * XREFs of ?InternalFinalConstructRelease@CAudioDeviceGraph@@QEAAXXZ @ 0x14003B6FC
 * Callers:
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCAudioDeviceGraph@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140011F94 (-CreateInstance@-$CComCreator@V-$CComObject@VCAudioDeviceGraph@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PE.c)
 * Callees:
 *     <none>
 */

void __fastcall CAudioDeviceGraph::InternalFinalConstructRelease(CAudioDeviceGraph *this)
{
  ATL::CComObjectRootEx<ATL::CComMultiThreadModel>::InternalRelease((char *)this + 24);
}
