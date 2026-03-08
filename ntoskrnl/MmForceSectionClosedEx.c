/*
 * XREFs of MmForceSectionClosedEx @ 0x140623F50
 * Callers:
 *     <none>
 * Callees:
 *     MiForceSectionClosed @ 0x1402F3AB0 (MiForceSectionClosed.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

bool __fastcall MmForceSectionClosedEx(__int64 a1, unsigned int a2)
{
  char v2; // bl
  int v4; // edi
  int v5; // esi

  v2 = a2;
  if ( (a2 & 0xFFFFFFF8) != 0 || (a2 & 3) == 0 )
    KeBugCheckEx(0x1Au, 0x43000uLL, a2, 0LL, 0LL);
  v4 = 1;
  if ( (a2 & 1) != 0 )
    v5 = MiForceSectionClosed(a1, a2 & 0xFD, 0);
  else
    v5 = 1;
  if ( (v2 & 2) != 0 )
    v4 = MiForceSectionClosed(a1, v2 & 0xFE, 0);
  return v5 != 2 && v4 != 2;
}
