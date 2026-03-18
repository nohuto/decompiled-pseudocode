/*
 * XREFs of IsPTPInputEnabled @ 0x1C0148A78
 * Callers:
 *     RIMApplyPTPConfigRemedy @ 0x1C00E75AE (RIMApplyPTPConfigRemedy.c)
 *     RIMProcessAnyPointerDeviceInput @ 0x1C01ADB64 (RIMProcessAnyPointerDeviceInput.c)
 * Callees:
 *     <none>
 */

__int64 IsPTPInputEnabled()
{
  unsigned int v0; // ecx

  v0 = 0;
  if ( gPTPEnabled )
    return (*(_BYTE *)(&qword_1C0294F10 + 1) & 8) != 0;
  return v0;
}
