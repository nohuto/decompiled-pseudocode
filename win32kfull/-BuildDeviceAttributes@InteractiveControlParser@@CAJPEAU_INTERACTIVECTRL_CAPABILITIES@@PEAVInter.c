/*
 * XREFs of ?BuildDeviceAttributes@InteractiveControlParser@@CAJPEAU_INTERACTIVECTRL_CAPABILITIES@@PEAVInteractiveControlDevice@@@Z @ 0x1C024D1EC
 * Callers:
 *     ?BuildDeviceCapabilities@InteractiveControlParser@@SAJPEAU_HIDP_PREPARSED_DATA@@PEAVInteractiveControlDevice@@@Z @ 0x1C024D274 (-BuildDeviceCapabilities@InteractiveControlParser@@SAJPEAU_HIDP_PREPARSED_DATA@@PEAVInteractiveC.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x1C01AA558 (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ?BuildDeviceShapeDescriptor@InteractiveControlParser@@CAJPEAVInteractiveControlDevice@@@Z @ 0x1C024D3B4 (-BuildDeviceShapeDescriptor@InteractiveControlParser@@CAJPEAVInteractiveControlDevice@@@Z.c)
 *     ?FindDigitizerForDevice@InteractiveControlParser@@CAJPEAVInteractiveControlDevice@@@Z @ 0x1C024D73C (-FindDigitizerForDevice@InteractiveControlParser@@CAJPEAVInteractiveControlDevice@@@Z.c)
 */

__int64 __fastcall InteractiveControlParser::BuildDeviceAttributes(
        struct _INTERACTIVECTRL_CAPABILITIES *a1,
        struct InteractiveControlDevice *a2)
{
  __int64 result; // rax
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF

  result = InteractiveControlParser::BuildDeviceShapeDescriptor(a2);
  if ( (int)result < 0 )
    result = 0LL;
  if ( *((_DWORD *)a1 + 18) )
  {
    result = InteractiveControlParser::FindDigitizerForDevice(a2);
    if ( (int)result < 0 )
    {
      if ( (unsigned int)dword_1C0357150 > 3 )
      {
        v5 = (__int64)"Failed to find digitizer during initialization.";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
          (__int64)&dword_1C0357150,
          byte_1C031FCF6,
          0LL,
          0LL,
          (void **)&v5);
      }
      return 0LL;
    }
  }
  return result;
}
