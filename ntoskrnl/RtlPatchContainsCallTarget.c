/*
 * XREFs of RtlPatchContainsCallTarget @ 0x140A73A04
 * Callers:
 *     MiApplyDriverHotPatch @ 0x140A31BB8 (MiApplyDriverHotPatch.c)
 * Callees:
 *     RtlGetHotPatchSize @ 0x1406786D8 (RtlGetHotPatchSize.c)
 */

__int64 __fastcall RtlPatchContainsCallTarget(_DWORD *a1)
{
  _DWORD *v1; // rdx
  int i; // r9d

  for ( i = RtlGetHotPatchSize(a1); ; v1 += i * (*v1 & 0xFFFu) + 1 )
  {
    if ( !*v1 )
      return 0LL;
    if ( (*v1 & 0xFC000) == 0x44000 )
      break;
  }
  return 1LL;
}
