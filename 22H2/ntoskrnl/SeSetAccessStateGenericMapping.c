/*
 * XREFs of SeSetAccessStateGenericMapping @ 0x140650800
 * Callers:
 *     IopParseDevice @ 0x14064E680 (IopParseDevice.c)
 * Callees:
 *     <none>
 */

void __stdcall SeSetAccessStateGenericMapping(PACCESS_STATE AccessState, PGENERIC_MAPPING GenericMapping)
{
  *(GENERIC_MAPPING *)((char *)AccessState->AuxData + 8) = *GenericMapping;
}
