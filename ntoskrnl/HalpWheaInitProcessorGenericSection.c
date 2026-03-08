/*
 * XREFs of HalpWheaInitProcessorGenericSection @ 0x14051F5E0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 *     HaliWheaInitProcessorGenericSection @ 0x1405168A8 (HaliWheaInitProcessorGenericSection.c)
 */

__int64 __fastcall HalpWheaInitProcessorGenericSection(__int64 a1, _QWORD *a2)
{
  memset((void *)a1, 0, 0x48uLL);
  *(_DWORD *)(a1 + 4) = 192;
  *(_WORD *)(a1 + 8) = 768;
  *(GUID *)(a1 + 16) = PROCESSOR_GENERIC_ERROR_SECTION_GUID;
  *(_DWORD *)(a1 + 48) = 3;
  return HaliWheaInitProcessorGenericSection(a2);
}
