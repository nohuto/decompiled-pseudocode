/*
 * XREFs of RtlFreeOemString @ 0x140862080
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePool @ 0x140AAFCC0 (ExFreePool.c)
 */

void __stdcall RtlFreeOemString(POEM_STRING OemString)
{
  char *Buffer; // rcx

  Buffer = OemString->Buffer;
  if ( Buffer )
    ExFreePool(Buffer);
}
