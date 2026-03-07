__int64 __fastcall ParseNameObj(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  unsigned int NameSpaceObject; // edi
  __int64 BaseObject; // rax
  __int64 v7; // rbx
  unsigned int Object; // eax
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 80);
  v10 = 0LL;
  NameSpaceObject = ParseAndGetNameSpaceObject(a1, a1 + 120, v2, &v10, 0);
  if ( !NameSpaceObject )
  {
    BaseObject = GetBaseObject(v10);
    v7 = BaseObject;
    if ( *(_WORD *)(BaseObject + 66) == 8 )
      Object = PushCall(a1, BaseObject, a2);
    else
      Object = ReadObject(a1, BaseObject + 64, a2);
    NameSpaceObject = Object;
    DereferenceObjectEx(v7);
    DereferenceObjectEx(v10);
  }
  return NameSpaceObject;
}
