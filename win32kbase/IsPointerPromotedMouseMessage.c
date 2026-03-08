/*
 * XREFs of IsPointerPromotedMouseMessage @ 0x1C0231C10
 * Callers:
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C022F50C (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsPointerPromotedMouseMessage(int a1, _DWORD *a2)
{
  unsigned int v2; // r8d

  v2 = 0;
  if ( a2 && (unsigned int)(a1 - 512) <= 0xE )
    return ((*a2 - 4) & 0xFFFFFFFB) == 0;
  return v2;
}
