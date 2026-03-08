/*
 * XREFs of ?GetAlphaDescriptor@CTableTransferEffect@@MEAA?AW4FilterEffectOpacity@CFilterEffect@@XZ @ 0x1802511A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CTableTransferEffect::GetAlphaDescriptor(__int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 179) )
    return 2LL;
  result = 1LL;
  if ( !*(_DWORD *)(a1 + 328) )
    return 2LL;
  return result;
}
