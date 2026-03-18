/*
 * XREFs of HmgIsGarbageCollectibleType @ 0x1C016C298
 * Callers:
 *     ?MultiUserGreCleanupHmgOwnRemoveAllLocks@@YAXE@Z @ 0x1C0017F5C (-MultiUserGreCleanupHmgOwnRemoveAllLocks@@YAXE@Z.c)
 *     HmgSetOwner @ 0x1C0028640 (HmgSetOwner.c)
 * Callees:
 *     ?Feature_1827749177__private_IsEnabled@@YAHXZ @ 0x1C00D8C50 (-Feature_1827749177__private_IsEnabled@@YAHXZ.c)
 */

__int64 __fastcall HmgIsGarbageCollectibleType(unsigned __int8 a1)
{
  unsigned int v1; // ebx
  int v2; // ecx

  v1 = a1;
  if ( (unsigned int)Feature_1827749177__private_IsEnabled() )
  {
    if ( (unsigned __int8)v1 <= 0x10u )
    {
      v2 = 66464;
      if ( _bittest(&v2, v1) )
        return 1LL;
    }
  }
  else if ( (_BYTE)v1 == 5 || (_BYTE)v1 == 8 )
  {
    return 1LL;
  }
  return 0LL;
}
