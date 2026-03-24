/*
 * XREFs of RtlFreeOemString @ 0x1407737B0
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

void __stdcall RtlFreeOemString(POEM_STRING OemString)
{
  ULONG v1; // edx
  char *Buffer; // rcx

  Buffer = OemString->Buffer;
  if ( Buffer )
    ExFreePoolWithTag(Buffer, v1);
}
