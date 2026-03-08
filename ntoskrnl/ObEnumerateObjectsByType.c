/*
 * XREFs of ObEnumerateObjectsByType @ 0x140978854
 * Callers:
 *     IovUnloadDrivers @ 0x140ABE7F0 (IovUnloadDrivers.c)
 * Callees:
 *     ObpCreateTypeArray @ 0x140978F7C (ObpCreateTypeArray.c)
 *     ObpDestroyTypeArray @ 0x140979084 (ObpDestroyTypeArray.c)
 *     IovpBuildDriverObjectList @ 0x140ABE8F8 (IovpBuildDriverObjectList.c)
 */

__int64 ObEnumerateObjectsByType()
{
  unsigned int v0; // ebx
  _DWORD *TypeArray; // rax
  _DWORD *v2; // rdi
  int v3; // esi
  __int64 v4; // r8
  __int64 v5; // rax
  __int128 v7; // [rsp+30h] [rbp-18h] BYREF

  v7 = 0LL;
  v0 = 0;
  TypeArray = (_DWORD *)ObpCreateTypeArray(IoDriverObjectType);
  v2 = TypeArray;
  if ( TypeArray )
  {
    v3 = 0;
    if ( *TypeArray )
    {
      while ( 1 )
      {
        v4 = *(_QWORD *)&v2[2 * v3 + 2];
        if ( v4 )
        {
          if ( (*(_BYTE *)(v4 + 58) & 2) == 0 || (v5 = ObpInfoMaskToOffset[*(_BYTE *)(v4 + 58) & 3], v4 + 32 == v5) )
            v7 = 0LL;
          else
            v7 = *(_OWORD *)(v4 + 32 - v5 + 8);
          if ( !(unsigned __int8)IovpBuildDriverObjectList(
                                   v4 + 80,
                                   &v7,
                                   *(_QWORD *)(v4 + 40),
                                   *(_QWORD *)(v4 + 32),
                                   0LL) )
            break;
        }
        if ( (unsigned int)++v3 >= *v2 )
          goto LABEL_12;
      }
      v0 = -2147483622;
    }
LABEL_12:
    ObpDestroyTypeArray(v2);
  }
  return v0;
}
