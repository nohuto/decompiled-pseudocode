/*
 * XREFs of HmgIsGarbageCollectibleType @ 0x1C00C9A8C
 * Callers:
 *     HmgSetOwner @ 0x1C0035470 (HmgSetOwner.c)
 *     ?MultiUserGreCleanupHmgOwnRemoveAllLocks@@YAXE@Z @ 0x1C013F4DC (-MultiUserGreCleanupHmgOwnRemoveAllLocks@@YAXE@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall HmgIsGarbageCollectibleType(unsigned __int8 a1)
{
  int v1; // eax
  _BOOL8 result; // rax

  result = 0;
  if ( a1 <= 0x10u )
  {
    v1 = 66464;
    if ( _bittest(&v1, a1) )
      return 1;
  }
  return result;
}
