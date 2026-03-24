/*
 * XREFs of IsPTPInputEnabled @ 0x1C011BFD8
 * Callers:
 *     RIMProcessAnyPointerDeviceInput @ 0x1C01785C4 (RIMProcessAnyPointerDeviceInput.c)
 *     RIMApplyPTPConfigRemedy @ 0x1C018195C (RIMApplyPTPConfigRemedy.c)
 * Callees:
 *     <none>
 */

__int64 IsPTPInputEnabled()
{
  unsigned int v0; // ecx

  v0 = 0;
  if ( gPTPEnabled )
    return (*(_BYTE *)(&qword_1C024FFD0 + 1) & 8) != 0;
  return v0;
}
