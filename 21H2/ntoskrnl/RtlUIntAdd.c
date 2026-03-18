/*
 * XREFs of RtlUIntAdd @ 0x1402E1260
 * Callers:
 *     MiCaptureRetpolineRelocationTables @ 0x1406ACDDC (MiCaptureRetpolineRelocationTables.c)
 *     VrpUpdateKeyInformation @ 0x1406C22CC (VrpUpdateKeyInformation.c)
 *     WmipProbeWnodeWorker @ 0x1406C3918 (WmipProbeWnodeWorker.c)
 *     CmpCheckKey @ 0x1407C6580 (CmpCheckKey.c)
 *     sub_1407D0090 @ 0x1407D0090 (sub_1407D0090.c)
 *     sub_1407E3E2C @ 0x1407E3E2C (sub_1407E3E2C.c)
 *     sub_1407E4178 @ 0x1407E4178 (sub_1407E4178.c)
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
