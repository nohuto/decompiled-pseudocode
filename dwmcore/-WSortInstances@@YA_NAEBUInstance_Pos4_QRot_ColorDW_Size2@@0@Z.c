/*
 * XREFs of ?WSortInstances@@YA_NAEBUInstance_Pos4_QRot_ColorDW_Size2@@0@Z @ 0x180205B80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall WSortInstances(
        const struct Instance_Pos4_QRot_ColorDW_Size2 *a1,
        const struct Instance_Pos4_QRot_ColorDW_Size2 *a2)
{
  return *((float *)a1 + 3) > *((float *)a2 + 3);
}
