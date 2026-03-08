/*
 * XREFs of ObpAdjustAccessMask @ 0x140710DC4
 * Callers:
 *     ObReferenceObjectByNameEx @ 0x140710ADC (ObReferenceObjectByNameEx.c)
 * Callees:
 *     RtlValidSecurityDescriptor @ 0x14075F860 (RtlValidSecurityDescriptor.c)
 *     SeObjectCreateSaclAccessBits @ 0x140785CA4 (SeObjectCreateSaclAccessBits.c)
 */

__int64 __fastcall ObpAdjustAccessMask(__int64 a1)
{
  _BYTE *v1; // rbx

  v1 = *(_BYTE **)(a1 + 64);
  if ( !v1 )
    return 0LL;
  if ( RtlValidSecurityDescriptor(*(PSECURITY_DESCRIPTOR *)(a1 + 64)) )
  {
    if ( (v1[2] & 0x10) != 0 && (*(_DWORD *)(a1 + 20) & 0x1000000) == 0 )
      *(_DWORD *)(a1 + 16) |= SeObjectCreateSaclAccessBits(v1);
    return 0LL;
  }
  return 3221225593LL;
}
