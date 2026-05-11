/*
 * XREFs of USBHwAllocateAndBag @ 0x1C002C98C
 * Callers:
 *     USBHwSelectAudioConfiguration @ 0x1C002D0F0 (USBHwSelectAudioConfiguration.c)
 *     USBHwSelectStreamingMIDIInterface @ 0x1C002E090 (USBHwSelectStreamingMIDIInterface.c)
 *     USBParseGetMicArrayDescriptor @ 0x1C002EE74 (USBParseGetMicArrayDescriptor.c)
 *     USBParseGetUnitString @ 0x1C002F724 (USBParseGetUnitString.c)
 *     USBParseMixerUnit @ 0x1C002FA40 (USBParseMixerUnit.c)
 *     USBParseGetMIDIJackStringFromDeviceID @ 0x1C00303F4 (USBParseGetMIDIJackStringFromDeviceID.c)
 *     USBParseGetMIDIStreamingDatarange @ 0x1C0031240 (USBParseGetMIDIStreamingDatarange.c)
 *     USBType1AsyncEndpointInitialize @ 0x1C00324F8 (USBType1AsyncEndpointInitialize.c)
 *     USBType1Create1MsecBuffers @ 0x1C0032AC0 (USBType1Create1MsecBuffers.c)
 *     USBMidiInPipePrimer @ 0x1C00339BC (USBMidiInPipePrimer.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall USBHwAllocateAndBag(PVOID *a1, void *a2)
{
  NTSTATUS v3; // ebx

  v3 = KsAddItemToObjectBag(a2, *a1, ExFreePool);
  if ( v3 < 0 )
    ExFreePool(*a1);
  return (unsigned int)v3;
}
