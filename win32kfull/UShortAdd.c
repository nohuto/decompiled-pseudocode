/*
 * XREFs of UShortAdd @ 0x1C00E9C78
 * Callers:
 *     AllocateUnicodeString @ 0x1C00E9BB0 (AllocateUnicodeString.c)
 * Callees:
 *     <none>
 */

HRESULT __stdcall UShortAdd(USHORT usAugend, USHORT usAddend, USHORT *pusResult)
{
  bool v3; // cf
  USHORT v4; // dx

  v3 = (unsigned __int16)(usAddend + usAugend) < usAugend;
  if ( (unsigned __int16)(usAddend + usAugend) < usAugend )
    v4 = -1;
  else
    v4 = usAddend + usAugend;
  *pusResult = v4;
  return v3 ? 0x80070216 : 0;
}
