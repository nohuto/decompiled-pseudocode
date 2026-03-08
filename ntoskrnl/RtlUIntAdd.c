/*
 * XREFs of RtlUIntAdd @ 0x14022A638
 * Callers:
 *     sub_1406AF8A4 @ 0x1406AF8A4 (sub_1406AF8A4.c)
 *     sub_1406DC290 @ 0x1406DC290 (sub_1406DC290.c)
 *     sub_140755020 @ 0x140755020 (sub_140755020.c)
 *     VrpUpdateKeyInformation @ 0x140791490 (VrpUpdateKeyInformation.c)
 *     CmpCheckKey @ 0x1407B4B80 (CmpCheckKey.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlUIntAdd(UINT uAugend, UINT uAddend, UINT *puResult)
{
  UINT v3; // eax
  UINT v4; // edx
  NTSTATUS result; // eax

  v3 = uAugend + uAddend;
  v4 = -1;
  if ( v3 >= uAugend )
    v4 = v3;
  result = v3 < uAugend ? 0xC0000095 : 0;
  *puResult = v4;
  return result;
}
