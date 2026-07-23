/*
 * XREFs of SeSetAccessStateGenericMapping @ 0x14071A4A0
 * Callers:
 *     IopParseDevice @ 0x140718340 (IopParseDevice.c)
 * Callees:
 *     <none>
 */

void __stdcall SeSetAccessStateGenericMapping(PACCESS_STATE AccessState, PGENERIC_MAPPING GenericMapping)
{
  *(GENERIC_MAPPING *)((char *)AccessState->AuxData + 8) = *GenericMapping;
}
