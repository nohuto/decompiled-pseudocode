struct HOBJ__ *__fastcall NtGdiCreateClientObj(unsigned int a1)
{
  struct HOBJ__ *v1; // rbx
  __int64 v2; // rdi
  struct OBJECT *Object; // rax
  struct OBJECT *v4; // rsi
  struct HOBJ__ *v5; // rax
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0LL;
  v2 = a1;
  if ( (a1 & 0xFF00FFFF) != 0 || (a1 & 0x600000) == 0 || (a1 & 0x1F0000) != 0x60000 )
    return 0LL;
  Object = (struct OBJECT *)AllocateObject(24LL, 6LL);
  v4 = Object;
  if ( Object )
  {
    v7 = 0LL;
    v5 = HmgInsertObjectHelper::Insert((HmgInsertObjectHelper *)&v7, Object, 6u, 0);
    v1 = v5;
    if ( v5 )
    {
      v1 = (struct HOBJ__ *)(v2 | (unsigned __int64)v5);
      HmgModifyHandleType(v2 | (unsigned __int64)v5);
    }
    else
    {
      FreeObject(v4, 6LL);
    }
    if ( v7 )
      _InterlockedDecrement((volatile signed __int32 *)(v7 + 12));
  }
  return v1;
}
