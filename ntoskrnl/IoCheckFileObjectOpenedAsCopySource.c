/*
 * XREFs of IoCheckFileObjectOpenedAsCopySource @ 0x140943F50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall IoCheckFileObjectOpenedAsCopySource(__int64 a1)
{
  _DWORD *v1; // rax
  char v2; // cl

  v1 = *(_DWORD **)(a1 + 208);
  v2 = 0;
  if ( v1 )
    return (*v1 & 0x20) != 0;
  return v2;
}
