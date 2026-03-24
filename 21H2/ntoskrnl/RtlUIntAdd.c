/*
 * XREFs of RtlUIntAdd @ 0x14024D640
 * Callers:
 *     sub_1405FE2AC @ 0x1405FE2AC (sub_1405FE2AC.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlUIntAdd(UINT uAugend, UINT uAddend, UINT *puResult)
{
  UINT v3; // edx

  v3 = uAugend + uAddend;
  if ( v3 < uAugend )
  {
    *puResult = -1;
    return -1073741675;
  }
  else
  {
    *puResult = v3;
    return 0;
  }
}
