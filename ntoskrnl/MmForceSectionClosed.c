/*
 * XREFs of MmForceSectionClosed @ 0x1402F3A70
 * Callers:
 *     <none>
 * Callees:
 *     MiForceSectionClosed @ 0x1402F3AB0 (MiForceSectionClosed.c)
 */

BOOLEAN __stdcall MmForceSectionClosed(PSECTION_OBJECT_POINTERS SectionObjectPointer, BOOLEAN DelayClose)
{
  unsigned int v3; // ebx
  int v4; // eax

  v3 = DelayClose != 0 ? 5 : 1;
  v4 = MiForceSectionClosed(SectionObjectPointer, v3, 0LL);
  if ( !v4 )
    v4 = MiForceSectionClosed(SectionObjectPointer, v3 & 0xFFFFFFFC | 2, 0LL);
  return v4 != 2;
}
