struct HOBJ__ *__fastcall RGNOBJ::hrgnAssociate(struct OBJECT **this)
{
  struct OBJECT *v1; // rdx
  struct HOBJ__ *result; // rax
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = *this;
  v3 = 0LL;
  result = HmgInsertObjectHelper::Insert((HmgInsertObjectHelper *)&v3, v1, 4u, 0);
  if ( v3 )
    _InterlockedDecrement((volatile signed __int32 *)(v3 + 12));
  return result;
}
