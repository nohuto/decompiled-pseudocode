/*
 * XREFs of ?Release@?$CComContainedObject@VCSystemAudioDeviceExclusive@@@ATL@@UEAAKXZ @ 0x1400433B0
 * Callers:
 *     ?Release@?$CComContainedObject@VCSystemAudioDeviceExclusive@@@ATL@@W7EAAKXZ @ 0x14002A190 (-Release@-$CComContainedObject@VCSystemAudioDeviceExclusive@@@ATL@@W7EAAKXZ.c)
 *     ?Release@?$CComContainedObject@VCSystemAudioDeviceExclusive@@@ATL@@WBA@EAAKXZ @ 0x14002A1A0 (-Release@-$CComContainedObject@VCSystemAudioDeviceExclusive@@@ATL@@WBA@EAAKXZ.c)
 *     ?Release@?$CComContainedObject@VCSystemAudioDeviceExclusive@@@ATL@@WBI@EAAKXZ @ 0x14002A1B0 (-Release@-$CComContainedObject@VCSystemAudioDeviceExclusive@@@ATL@@WBI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComContainedObject<CSystemAudioDeviceExclusive>::Release(__int64 a1)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 296) + 16LL))(*(_QWORD *)(a1 + 296));
}
