/*
 * XREFs of SeSetAccessStateGenericMapping @ 0x1409C7060
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall SeSetAccessStateGenericMapping(PACCESS_STATE AccessState, PGENERIC_MAPPING GenericMapping)
{
  *(GENERIC_MAPPING *)((char *)AccessState->AuxData + 8) = *GenericMapping;
}
