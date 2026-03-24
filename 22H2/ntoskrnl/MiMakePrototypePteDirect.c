/*
 * XREFs of MiMakePrototypePteDirect @ 0x14027D390
 * Callers:
 *     MiConvertStandbyToProto @ 0x1403668C8 (MiConvertStandbyToProto.c)
 *     MiAddMappedPtes @ 0x140636970 (MiAddMappedPtes.c)
 *     MiMapPatchTable @ 0x1408CCA68 (MiMapPatchTable.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiMakePrototypePteDirect(__int64 a1)
{
  __int64 v1; // rcx

  v1 = (a1 << 16) | 0x400;
  if ( qword_140C4DF40 )
  {
    if ( (qword_140C4DF40 & v1) == 0 )
      return v1 | qword_140C4DF40;
    return v1 | 0x10;
  }
  return v1;
}
