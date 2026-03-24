/*
 * XREFs of ?NotifyInvalidResource@?$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@@@UEAAXPEBVIDeviceResource@@@Z @ 0x180202D80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CDeviceResourceTable<CD3DConstantBuffer,CRenderingTechnique>::NotifyInvalidResource(
        struct IDeviceResourceNotify *a1)
{
  return CDeviceResourceTable<CD3DConstantBuffer,CRenderingTechnique>::ReleaseResources(a1);
}
