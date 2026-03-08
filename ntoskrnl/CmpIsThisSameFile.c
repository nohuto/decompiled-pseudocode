/*
 * XREFs of CmpIsThisSameFile @ 0x1406BE488
 * Callers:
 *     CmLoadAppKey @ 0x1406BDA5C (CmLoadAppKey.c)
 *     CmpIsHiveAlreadyLoaded @ 0x140A13C04 (CmpIsHiveAlreadyLoaded.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x1407C2D00 (ObReferenceObjectByHandle.c)
 */

bool __fastcall CmpIsThisSameFile(__int64 a1, void *a2)
{
  bool v2; // bl
  __int64 v4; // r8
  __int64 v5; // rdx
  PVOID Object; // [rsp+50h] [rbp+18h] BYREF

  v2 = 0;
  Object = 0LL;
  if ( ObReferenceObjectByHandle(a2, 0, *(POBJECT_TYPE *)CmIoFileObjectType, 0, &Object, 0LL) < 0 )
    return 0;
  v4 = *(_QWORD *)(a1 + 40);
  if ( v4 )
  {
    v5 = *((_QWORD *)Object + 5);
    if ( v5 )
      v2 = v4 == v5;
  }
  ObfDereferenceObject(Object);
  return v2;
}
