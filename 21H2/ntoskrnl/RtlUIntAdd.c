/*
 * XREFs of RtlUIntAdd @ 0x1402F1E90
 * Callers:
 *     sub_1406EDA0C @ 0x1406EDA0C (sub_1406EDA0C.c)
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
