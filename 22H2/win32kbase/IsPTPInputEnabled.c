/*
 * XREFs of IsPTPInputEnabled @ 0x1C011C2A8
 * Callers:
 *     RIMProcessAnyPointerDeviceInput @ 0x1C01784F4 (RIMProcessAnyPointerDeviceInput.c)
 *     RIMApplyPTPConfigRemedy @ 0x1C018188C (RIMApplyPTPConfigRemedy.c)
 * Callees:
 *     <none>
 */

__int64 IsPTPInputEnabled()
{
  unsigned int v0; // ecx

  v0 = 0;
  if ( gPTPEnabled )
    return (*(_BYTE *)(&qword_1C024ED38 + 1) & 8) != 0;
  return v0;
}
