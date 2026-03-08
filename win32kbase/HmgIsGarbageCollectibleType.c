/*
 * XREFs of HmgIsGarbageCollectibleType @ 0x1C0185FA4
 * Callers:
 *     HmgSetOwner @ 0x1C00522C0 (HmgSetOwner.c)
 *     ?MultiUserGreCleanupHmgRemoveAllLocks@@YAXE@Z @ 0x1C006D528 (-MultiUserGreCleanupHmgRemoveAllLocks@@YAXE@Z.c)
 * Callees:
 *     Feature_1626422585__private_IsEnabledDeviceUsage @ 0x1C00DDF7C (Feature_1626422585__private_IsEnabledDeviceUsage.c)
 */

__int64 __fastcall HmgIsGarbageCollectibleType(unsigned __int8 a1)
{
  int v1; // ebx
  int IsEnabledDeviceUsage; // eax
  unsigned int v3; // ecx

  v1 = a1;
  IsEnabledDeviceUsage = Feature_1626422585__private_IsEnabledDeviceUsage();
  v3 = 0;
  if ( IsEnabledDeviceUsage )
  {
    if ( v1 != 5 && v1 != 7 && v1 != 8 && v1 != 9 && v1 != 16 )
      return 0LL;
  }
  else if ( (_BYTE)v1 != 5 )
  {
    LOBYTE(v3) = (_BYTE)v1 == 8;
    return v3;
  }
  return 1LL;
}
