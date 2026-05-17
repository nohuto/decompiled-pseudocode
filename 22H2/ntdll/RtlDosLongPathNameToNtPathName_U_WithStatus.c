/*
 * XREFs of RtlDosLongPathNameToNtPathName_U_WithStatus @ 0x1800CC2F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpDosPathNameToRelativeNtPathName_U @ 0x18001A974 (RtlpDosPathNameToRelativeNtPathName_U.c)
 */

__int64 __fastcall RtlDosLongPathNameToNtPathName_U_WithStatus(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  return RtlpDosPathNameToRelativeNtPathName_U(4, a1, a2, a3, a4);
}
