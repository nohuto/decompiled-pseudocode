/*
 * XREFs of ObpDeleteDirectoryName @ 0x14076F180
 * Callers:
 *     ObpDeleteDirectoryEntry @ 0x14076F100 (ObpDeleteDirectoryEntry.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     ObpMarkDirectoryObjectsTemporary @ 0x14076F1F8 (ObpMarkDirectoryObjectsTemporary.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

POBJECT_TYPE __fastcall ObpDeleteDirectoryName(char *Object)
{
  _QWORD *v2; // rbx
  POBJECT_TYPE result; // rax
  void *v4; // rcx

LABEL_1:
  v2 = (_QWORD *)ObpMarkDirectoryObjectsTemporary(Object);
  while ( 1 )
  {
    result = (POBJECT_TYPE)ObfDereferenceObjectWithTag(Object, 0x6944624Fu);
    if ( !v2 )
      return result;
    Object = (char *)v2[1];
    v4 = v2;
    v2 = (_QWORD *)*v2;
    ExFreePoolWithTag(v4, 0);
    result = ObpDirectoryObjectType;
    if ( ((unsigned __int8)ObHeaderCookie ^ (unsigned __int8)(*(Object - 24) ^ ((unsigned __int16)((_WORD)Object - 48) >> 8))) == ObpDirectoryObjectType->Index )
    {
      if ( Object )
        goto LABEL_1;
      return result;
    }
  }
}
