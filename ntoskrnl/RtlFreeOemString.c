/*
 * XREFs of RtlFreeOemString @ 0x14085E210
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePool @ 0x140AAB270 (ExFreePool.c)
 */

void __stdcall RtlFreeOemString(POEM_STRING OemString)
{
  char *Buffer; // rcx

  Buffer = OemString->Buffer;
  if ( Buffer )
    ExFreePool(Buffer);
}
